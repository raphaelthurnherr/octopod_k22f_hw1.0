/*
 * sm_pwm.c
 *
 *  Created on: 9 mars 2015
 *      Author: thurnhrl
 */

#define PWM_CTRL_MODE1_REGADR 00
#define PWM_CTRL_MODE2_REGADR 01

#define PWM_CTRL_ALLLED_ON_REGADR 250
#define PWM_CTRL_ALLLED_OFF_REGADR 252
#define PWM_CTRL_PRESCAL_REGADR 254


#include "UsonicTrig.h"
#include "BitIoLdd1.h"

#include "hw_pwm.h"
#include "SW_I2C_PWM.h"

#include "main.h"

#include "GI2C1.h"
#include "PWM_CTRL_OE.h"

void ConvertAngleToPCA9685value(void);
unsigned char PCA9685Config(void);
unsigned char PCA9685EnableOutput(unsigned char ENABLE);
unsigned char PCA9685SetAllPWMvalue(void);
unsigned char PCA968SetOnePWMvalue(unsigned char outputNb);


void smoothUpdateMotors(void);

unsigned char SM_Enable[26];
unsigned char SM_TargetValue[26];					// Objectif de temps a atteindre
unsigned char SM_ActualValue[26];					// Temps de pulse actuel (incrémenté pour le smooth)

// Valeurs de consigne 16bit pour les 26 sorties des contrôleur PWM 12 bit
unsigned char PWM_ctrl_value[52];

unsigned char SMInterruptEnable;
unsigned char SMInterruptFlag;
unsigned char SMnewCommand;

unsigned char flag_uSonicEnable;
unsigned char StartUltrasonicTrig;
unsigned char UltrasonicWaitEcho;

unsigned char sm_smoothIncrement;




// CONFIGURATION DE BASE POUR LES CONTROLLEURS PWM pour un fonctionnement à 50Hz
//

unsigned char PCA9685Config(void){
	unsigned char i;
	unsigned char PWMCtrlStatus=0;
	unsigned char reg=0;


	//-------------------------
	// CONTROLLER 1+2 OUTPUT DISABLE (PWM OFF)
	//-------------------------
	PWM_CTRL_OE_PutVal(1);


	//-------------------------
	// CONTROLLER 1 (LEGS A-D)
	//-------------------------
	WAIT1_Waitms(1);

	// Reset, sleep mode for pre-scaler config
	PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_MODE1_REGADR, 0x10);
	WAIT1_Waitms(1);

	// PRESCALER REGISTER
	// Pour raffraichissement 50Hz, résoloution 4.84uS
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_PRESCAL_REGADR, 133);
	WAIT1_Waitms(1);
	// MODE2 REGISTER
	// No invert output, change on STOP, totem pole, OFF on OE=1
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_MODE2_REGADR, 0x04);
	WAIT1_Waitms(1);
	// MODE1 REGISTER
	// Restart enable, internal clock, AutoInc enable, Normal mode,no sub adress
	PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_MODE1_REGADR, 0x81);
	WAIT1_Waitms(1);

	// START PWM ON @ 0 clock
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_ALLLED_ON_REGADR, 0);
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_ALLLED_ON_REGADR+1, 0);

	// STOP PULSE @ 0 clock (Sortie OFF)
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_ALLLED_OFF_REGADR, 0);
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, PWM_CTRL_ALLLED_OFF_REGADR+1, 0);


	//-------------------------
	// CONTROLLER 2 (LEGS E-H)
	//-------------------------

	// Reset, sleep mode for pre-scaler config
	PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_MODE1_REGADR, 0x10);
	WAIT1_Waitms(1);

	// PRESCALER REGISTER
	// Pour raffraichissement 50Hz, résoloution 4.84uS
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_PRESCAL_REGADR, 133);

	// MODE2 REGISTER
	// No invert output, change on STOP, totem pole, OFF on OE=1
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_MODE2_REGADR, 0x04);

	// MODE1 REGISTER
	// Restart enable, internal clock, AutoInc enable, Normal mode,no sub adress
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_MODE1_REGADR, 0x81);


	// START PWM ON @ 0 clock
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_ALLLED_ON_REGADR, 0);
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_ALLLED_ON_REGADR+1, 0);

	// STOP PULSE @ 0 clock (Sortie OFF)
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_ALLLED_OFF_REGADR, 0);
	PWMCtrlStatus+SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, PWM_CTRL_ALLLED_OFF_REGADR+1, 0);

	return(PWMCtrlStatus);
}





void ConvertAngleToPCA9685value(void){
	  unsigned int temp=0;
	  unsigned char i=0;

	  // Convertion des valeur angle en valeur pour les controleurs PWM
	  for (i=0;i<26;i++){
		temp=165+(SM_ActualValue[i]*2.41);

		PWM_ctrl_value[i*2]=temp&0x00FF;				// LSB
		PWM_ctrl_value[(i*2)+1]=(temp&0xFF00)>>8;		// MSB
		temp++;
	}
}

//	Active ou désactive les sortie PWM des contrôleurs
//

unsigned char PCA9685EnableOutput(unsigned char ENABLE){
	//-------------------------
	// CONTROLLER 1+2 OUTPUT DISABLE (PWM OFF)
	//-------------------------
	PWM_CTRL_OE_PutVal(!ENABLE);
}


//	Assigne les valeurs des 26 sorties PWM
//

unsigned char PCA9685SetAllPWMvalue(void){
	unsigned char i;
	unsigned char smValueLSB=0;
	unsigned char smEnablePTR=0;
	unsigned char PWMCtrlStatus=0;

	// Assigne alernativement sur chaque contrôleur la valeur de consigne.
	// Debut: Servomoteur 1 sur adresse 0x08

	// Mise à jour PWM Contrôleur 1, sortie de 0..11 (moteurs 1..12)
	smValueLSB=0;
	for(i=8;i<56;i+=4){
		// Attribue la valeur PWM si moteur actif sur premier contrôleur (sorties 1..14)
		if(SM_Enable[smEnablePTR]){
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, PWM_ctrl_value[smValueLSB]);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, PWM_ctrl_value[smValueLSB+1]);
		}else{
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, 0);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, 0);
		}

		// Attribue la valeur PWM si moteur actif sur second contrôleur (sorties 15..26)
		if(SM_Enable[smEnablePTR+12]){
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i, PWM_ctrl_value[smValueLSB+24]);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i+1, PWM_ctrl_value[smValueLSB+25]);
		}else{
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i, 0);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i+1, 0);
		}

		smValueLSB+=2;
		smEnablePTR++;
	}

	return(PWMCtrlStatus);
}

unsigned char PCA968SetOnePWMvalue(unsigned char outputNb){
	unsigned char i=0;
	unsigned char smValueLSB=0;
	unsigned char smEnablePTR=0;
	unsigned char PWMCtrlStatus=0;

	// Assigne alernativement sur chaque contrôleur la valeur de consigne.
	// Debut: Servomoteur 1 sur adresse 0x08

	// Mise à jour PWM Contrôleur 1, sortie de 0..11 (moteurs 1..12)
	smValueLSB=0;

	smEnablePTR=outputNb;

	// Attribue la valeur PWM si moteur actif sur premier contrôleur (sorties moteurs 1..12)

	if(outputNb >= 0 && outputNb < 12){

		i=8+(4*outputNb);
		smValueLSB=2*outputNb;

		if(SM_Enable[smEnablePTR]){
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, PWM_ctrl_value[smValueLSB]);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, PWM_ctrl_value[smValueLSB+1]);
		}else{
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, 0);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, 0);
		}
	}

	// Attribue la valeur PWM si moteur actif sur deuxieme contrôleur (sorties moteur 13..24)

	if(outputNb >= 12 && outputNb < 24){

		i=8+(4*(outputNb-12));
		smValueLSB=2*(outputNb-12);

		if(SM_Enable[smEnablePTR]){
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i, PWM_ctrl_value[smValueLSB+24]);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i+1, PWM_ctrl_value[smValueLSB+25]);
		}else{
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i, 0);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_EH, i+1, 0);
		}
	}

	// Attribue la valeur PWM si moteur actif sur 1er contrôleur 12 et13 (sorties moteurs 25..26)
	if(outputNb >= 24 && outputNb < 26){

		i=8+(4*(outputNb-12));
		smValueLSB=2*(outputNb-12);

		if(SM_Enable[smEnablePTR]){
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, PWM_ctrl_value[smValueLSB+24]);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, PWM_ctrl_value[smValueLSB+25]);
		}else{
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i, 0);
			PWMCtrlStatus+=SW_I2C_PWM_WriteByteAddress8(PWM_CTRL_LEG_AD, i+1, 0);
		}
	}

	return(PWMCtrlStatus);
}

/*---------------------------------------------------------------------------------------------
-------- SMOOOTHUPDATEMOTORS
-------- modifie progressivement la valeur des moteurs
---------------------------------------------------------------------------------------------*/
void smoothUpdateMotors(){
	unsigned char i;
		for(i=0;i<26;i++){
			// Incrementation de l'angle si plus petit que l'objectif
			if(SM_ActualValue[i]<SM_TargetValue[i]){
				// Contrôle pas de dépassement de la limite max 90degres
				if(SM_ActualValue[i]+sm_smoothIncrement<=120)
					// Contrôle anti dépassement de la consigne
					if(SM_ActualValue[i]+sm_smoothIncrement>SM_TargetValue[i])SM_ActualValue[i]=SM_TargetValue[i];
					else SM_ActualValue[i]+=sm_smoothIncrement;
				else SM_ActualValue[i]=120;


			}

			// Décrementation de l'angle si plus grand que l'objectif
			if(SM_ActualValue[i]>SM_TargetValue[i]){
				// Contrôle pas de dépassement de la limite min 0degres
				if(SM_ActualValue[i]-sm_smoothIncrement>=0)
					// Contrôle anti dépassement de la consigne
					if(SM_ActualValue[i]-sm_smoothIncrement<SM_TargetValue[i])SM_ActualValue[i]=SM_TargetValue[i];
					else SM_ActualValue[i]-=sm_smoothIncrement;
				else SM_ActualValue[i]=0;
			}
		}

}
