/*
 * sm_pwm.c
 *
 *  Created on: 9 mars 2015
 *      Author: thurnhrl
 */


#include "SM_LEG_A1.h"
#include "BitIoLdd4.h"
#include "SM_LEG_C1.h"
#include "BitIoLdd5.h"
#include "SM_LEG_E1.h"
#include "BitIoLdd6.h"
#include "SM_LEG_A2.h"
#include "BitIoLdd7.h"
#include "SM_LEG_A3.h"
#include "BitIoLdd8.h"
#include "SM_LEG_B1.h"
#include "BitIoLdd9.h"
#include "SM_LEG_B2.h"
#include "BitIoLdd10.h"
#include "SM_LEG_B3.h"
#include "BitIoLdd11.h"
#include "SM_LEG_D2.h"
#include "BitIoLdd12.h"
#include "SM_LEG_C2.h"
#include "BitIoLdd13.h"
#include "SM_LEG_C3.h"
#include "BitIoLdd14.h"
#include "SM_LEG_D1.h"
#include "BitIoLdd15.h"
#include "SM_LEG_D3.h"
#include "BitIoLdd16.h"
#include "SM_LEG_E2.h"
#include "BitIoLdd17.h"
#include "SM_LEG_E3.h"
#include "BitIoLdd18.h"
#include "SM_LEG_F1.h"
#include "BitIoLdd19.h"
#include "SM_LEG_F2.h"
#include "BitIoLdd20.h"
#include "SM_LEG_F3.h"
#include "BitIoLdd21.h"
#include "SM_HEAD.h"
#include "BitIoLdd22.h"

#include "UsonicTrig.h"
#include "BitIoLdd1.h"

#include "sw_pwm.h"
#include "main.h"

unsigned int TimPWM_gr1;
unsigned int TimPWM_gr2;
unsigned int TimPWM_gr3;
unsigned int TimPWM_gr4;
unsigned int TimPWM_gr5;
unsigned int TimPWM_gr6;
unsigned int TimPWM_gr7;


unsigned char SM_Enable[20];
unsigned char NbActivMotors;

unsigned char SM_GroupeSelect;						// Variable pour la séléction du groupe de patte a traiter

unsigned char SM_CountValue[20];					// Temps de comptage actuel des pulses servomoteur
unsigned char SM_TargetValue[20];					// Objectif de temps a atteindre
unsigned char SM_ActualValue[20];					// Temps de pulse actuel (incrémenté pour le smooth)

unsigned char SMInterruptEnable;
unsigned char SMInterruptFlag;
unsigned char SMnewCommand;

unsigned char flag_uSonicEnable;
unsigned char StartUltrasonicTrig;
unsigned char UltrasonicWaitEcho;
unsigned char UsonicRefreshTimeCnt;

void smoothUpdateMotors(void);
unsigned char sm_smoothIncrement;
unsigned char sm_smoothTime=2;


void updateMotorsValues(void){

	const unsigned int MinTimePulse = 91;			// Valeur pour une pulse de synchro de 1mS   (==90 *5.5uS)
	const unsigned int MaxTimePulse = 182;			// Valeur pour une pulse de synchro de 2.1mS

	switch(SM_GroupeSelect){

	// PATTE A
	// Sélectionne les servo 1..3 pour traitement
	case	0	:
		if (TimPWM_gr1 >= MinTimePulse){

		if (SM_CountValue[SM_A1] < SM_ActualValue[SM_A1])   SM_CountValue[SM_A1] +=SM_COUNT_INCREMENT;
		else SM_LEG_A1_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_C1] < SM_ActualValue[SM_C1])	SM_CountValue[SM_C1] +=SM_COUNT_INCREMENT;
		else SM_LEG_C1_ClrVal();

		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_E1] < SM_ActualValue[SM_E1])	SM_CountValue[SM_E1] +=SM_COUNT_INCREMENT;
		else SM_LEG_E1_ClrVal();
		}
		if (TimPWM_gr1 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_A1_ClrVal();
		SM_LEG_C1_ClrVal();
		SM_LEG_E1_ClrVal();

		TimPWM_gr1 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	1	:
		if (TimPWM_gr2 >= MinTimePulse){

		if (SM_CountValue[SM_B1] < SM_ActualValue[SM_B1])	SM_CountValue[SM_B1] +=SM_COUNT_INCREMENT;
		else SM_LEG_B1_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_D1] < SM_ActualValue[SM_D1])	SM_CountValue[SM_D1] +=SM_COUNT_INCREMENT;
		else SM_LEG_D1_ClrVal();
		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_F1] < SM_ActualValue[SM_F1])	SM_CountValue[SM_F1] +=SM_COUNT_INCREMENT;
		else SM_LEG_F1_ClrVal();
		}
		if (TimPWM_gr2 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_B1_ClrVal();
		SM_LEG_D1_ClrVal();
		SM_LEG_F1_ClrVal();

		TimPWM_gr2 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	2	:
		if (TimPWM_gr3 >= MinTimePulse){

		if (SM_CountValue[SM_A2] < SM_ActualValue[SM_A2])	SM_CountValue[SM_A2] +=SM_COUNT_INCREMENT;
		else SM_LEG_A2_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_C2] < SM_ActualValue[SM_C2])	SM_CountValue[SM_C2] +=SM_COUNT_INCREMENT;
		else SM_LEG_C2_ClrVal();

		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_E2] < SM_ActualValue[SM_E2])	SM_CountValue[SM_E2] +=SM_COUNT_INCREMENT;
		else SM_LEG_E2_ClrVal();
		}
		if (TimPWM_gr3 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_A2_ClrVal();
		SM_LEG_C2_ClrVal();
		SM_LEG_E2_ClrVal();

		TimPWM_gr3 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	3	:
		if (TimPWM_gr4 >= MinTimePulse){

		if (SM_CountValue[SM_B2] < SM_ActualValue[SM_B2])	SM_CountValue[SM_B2] +=SM_COUNT_INCREMENT;
		else SM_LEG_B2_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_D2] < SM_ActualValue[SM_D2])	SM_CountValue[SM_D2] +=SM_COUNT_INCREMENT;
		else SM_LEG_D2_ClrVal();

		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_F2] < SM_ActualValue[SM_F2])	SM_CountValue[SM_F2] +=SM_COUNT_INCREMENT;
		else SM_LEG_F2_ClrVal();
		}
		if (TimPWM_gr4 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_B2_ClrVal();
		SM_LEG_D2_ClrVal();
		SM_LEG_F2_ClrVal();

		TimPWM_gr4 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	4	:
		if (TimPWM_gr5 >= MinTimePulse){

		if (SM_CountValue[SM_A3] < SM_ActualValue[SM_A3])	SM_CountValue[SM_A3] +=SM_COUNT_INCREMENT;
		else SM_LEG_A3_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_C3] < SM_ActualValue[SM_C3])	SM_CountValue[SM_C3] +=SM_COUNT_INCREMENT;
		else SM_LEG_C3_ClrVal();

		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_E3] < SM_ActualValue[SM_E3])	SM_CountValue[SM_E3] +=SM_COUNT_INCREMENT;
		else SM_LEG_E3_ClrVal();
		}
		if (TimPWM_gr5 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_A3_ClrVal();
		SM_LEG_C3_ClrVal();
		SM_LEG_E3_ClrVal();

		TimPWM_gr5 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	5	:
		if (TimPWM_gr6 >= MinTimePulse){

		if (SM_CountValue[SM_B3] < SM_ActualValue[SM_B3])	SM_CountValue[SM_B3] +=SM_COUNT_INCREMENT;
		else SM_LEG_B3_ClrVal();

		// Evaluation du servomoteur 6
		if (SM_CountValue[SM_D3] < SM_ActualValue[SM_D3])	SM_CountValue[SM_D3] +=SM_COUNT_INCREMENT;
		else SM_LEG_D3_ClrVal();

		// Evaluation du servomoteur 12
		if (SM_CountValue[SM_F3] < SM_ActualValue[SM_F3])	SM_CountValue[SM_F3] +=SM_COUNT_INCREMENT;
		else SM_LEG_F3_ClrVal();
		}
		if (TimPWM_gr6 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_LEG_B3_ClrVal();
		SM_LEG_D3_ClrVal();
		SM_LEG_F3_ClrVal();

		TimPWM_gr6 = 0;	    // Reset le Compteur des servomoteur
		}
		break;

	case	6	:
		if (TimPWM_gr7 >= MinTimePulse){

		if (SM_CountValue[SM_EYES] < SM_ActualValue[SM_EYES])	SM_CountValue[SM_EYES] +=SM_COUNT_INCREMENT;
		else SM_HEAD_ClrVal();
		}

		if (TimPWM_gr7 >= MaxTimePulse){
	// RESET DES SERVOMOTEUR
		SM_HEAD_ClrVal();

		TimPWM_gr7 = 0;	    // Reset le Compteur des servomoteur
		}

		break;

	}
}


void changeGroupSeq(void){
	unsigned char i;
	unsigned char SM_PositionOK;

	if(SM_GroupeSelect++>=6) SM_GroupeSelect=0;

	switch(SM_GroupeSelect){
	case	0	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_A1]) SM_LEG_A1_SetVal();
		if(SM_Enable[SM_C1]) SM_LEG_C1_SetVal();
		if(SM_Enable[SM_E1])SM_LEG_E1_SetVal();

		SM_CountValue[SM_A1]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_C1]=0;			   //
		SM_CountValue[SM_E1]=0;			   //
		TimPWM_gr1 = 0;
		break;

	case	1	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_B1]) SM_LEG_B1_SetVal();
		if(SM_Enable[SM_D1]) SM_LEG_D1_SetVal();
		if(SM_Enable[SM_F1])SM_LEG_F1_SetVal();

		SM_CountValue[SM_B1]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_D1]=0;			   //
		SM_CountValue[SM_F1]=0;			   //
		TimPWM_gr2 = 0;
		break;

	case	2	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_A2]) SM_LEG_A2_SetVal();
		if(SM_Enable[SM_C2]) SM_LEG_C2_SetVal();
		if(SM_Enable[SM_E2])SM_LEG_E2_SetVal();

		SM_CountValue[SM_A2]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_C2]=0;			   //
		SM_CountValue[SM_E2]=0;			   //
		TimPWM_gr3 = 0;
		break;

	case	3	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_B2]) SM_LEG_B2_SetVal();
		if(SM_Enable[SM_D2]) SM_LEG_D2_SetVal();
		if(SM_Enable[SM_F2])SM_LEG_F2_SetVal();

		SM_CountValue[SM_B2]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_D2]=0;			   //
		SM_CountValue[SM_F2]=0;			   //
		TimPWM_gr4 = 0;
		break;

	case	4	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_A3]) SM_LEG_A3_SetVal();
		if(SM_Enable[SM_C3]) SM_LEG_C3_SetVal();
		if(SM_Enable[SM_E3])SM_LEG_E3_SetVal();

		SM_CountValue[SM_A3]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_C3]=0;			   //
		SM_CountValue[SM_E3]=0;			   //
		TimPWM_gr5 = 0;
		break;

	case	5	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_B3]) SM_LEG_B3_SetVal();
		if(SM_Enable[SM_D3]) SM_LEG_D3_SetVal();
		if(SM_Enable[SM_F3]) SM_LEG_F3_SetVal();

		SM_CountValue[SM_B3]=0;			   // Reset valeur de compatage servo
		SM_CountValue[SM_D3]=0;			   //
		SM_CountValue[SM_F3]=0;			   //
		TimPWM_gr6 = 0;
		break;

	case	6	:
		// INITIALISATION DES SERVOMOTEURS 0..6
		if(SM_Enable[SM_EYES]) SM_HEAD_SetVal();
		SM_CountValue[SM_EYES]=0;			   // Reset valeur de compatage servo

		// Incrementation en mode smooth si target pas atteind
		smoothUpdateMotors();

		//MESURE ULTRASONS
		// Démarre une mesure ultrason si mesure activée
		if(flag_uSonicEnable){
			if(UsonicRefreshTimeCnt>=2){	// Refresh max 3x20ms
				UsonicTrig_SetVal();		// Démarre le trigger
				StartUltrasonicTrig=1;
				UltrasonicWaitEcho=1;
				UsonicRefreshTimeCnt=0;
			}else UsonicRefreshTimeCnt++;
		}else{
			UsonicRefreshTimeCnt=0;
			UltrasonicWaitEcho=0;
			StartUltrasonicTrig=0;
		}

		if(SMInterruptEnable && SMnewCommand){
			SM_PositionOK=0;
			NbActivMotors=0;

			// Compte le nombre de moteurs actif ayant atteind leur consigne
			for(i=0;i<=17;i++){
				if(SM_Enable[i]){
					NbActivMotors++;		// Comptabilise le nombre de moteur activé

					// Controle si consigne des moteur atteind
					if(SM_ActualValue[i]==SM_TargetValue[i])SM_PositionOK+=1;
				}
			}

			// Tout les moteurs ayant atteind leurs objectif, génére un interruption
			if(SM_PositionOK==NbActivMotors){
				SMInterruptFlag=1;
				SMnewCommand=0;
			}
		}

		TimPWM_gr7 = 0;
		break;
	}
}

/*---------------------------------------------------------------------------------------------
-------- SMOOOTHUPDATEMOTORS
-------- modifie progressivement la valeur des moteurs
---------------------------------------------------------------------------------------------*/
void smoothUpdateMotors(){
	unsigned char i;
	static unsigned char timeSMRefresh40ms;

	if(timeSMRefresh40ms>=sm_smoothTime){
		for(i=0;i<19;i++){
			// Incrementation de l'angle si plus petit que l'objectif
			if(SM_ActualValue[i]<SM_TargetValue[i]){
				// Contrôle pas de dépassement de la limite max 90degres
				if(SM_ActualValue[i]+sm_smoothIncrement<=90)
					// Contrôle anti dépassement de la consigne
					if(SM_ActualValue[i]+sm_smoothIncrement>SM_TargetValue[i])SM_ActualValue[i]=SM_TargetValue[i];
					else SM_ActualValue[i]+=sm_smoothIncrement;
				else SM_ActualValue[i]=90;


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
		timeSMRefresh40ms=0;
	}else timeSMRefresh40ms++;
}
