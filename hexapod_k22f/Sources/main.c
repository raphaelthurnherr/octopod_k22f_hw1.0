/* ###################################################################
**     Filename    : main.c
**     Project     : testAccel
**     Processor   : MK22FN512VDC12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-02-26, 17:42, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */




/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"

#include "FX1.h"
#include "GI2C1.h"
#include "WAIT1.h"
#include "I2C1.h"
#include "SDA1.h"
#include "BitIoLdd2.h"
#include "SCL1.h"
#include "BitIoLdd3.h"

#include "UART0.h"
#include "ASerialLdd1.h"
#include "TI1.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "Int1accel.h"
#include "ExtIntLdd1.h"
#include "SM_LEG_A1.h"
#include "BitIoLdd4.h"
#include "SM_LEG_C1.h"
#include "BitIoLdd5.h"
#include "SM_LEG_E1.h"
#include "BitIoLdd6.h"
#include "TI2.h"
#include "TimerIntLdd2.h"
#include "TU2.h"
#include "TI3.h"
#include "TimerIntLdd3.h"
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
#include "IR0_detect.h"
#include "ExtIntLdd2.h"
#include "IR1_detect.h"
#include "ExtIntLdd3.h"
#include "IR2_detect.h"
#include "ExtIntLdd4.h"
#include "UsonicTrig.h"
#include "BitIoLdd1.h"
#include "UsonicPWM.h"
#include "ExtIntLdd5.h"
#include "TU3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "math.h"
#include "sensors.h"
#include "DCFcom.h"
#include "sw_pwm.h"
#include "main.h"

unsigned int myHeading;
unsigned char compassEnable=0;
unsigned char compassDataValid;
unsigned int compassInterruptMin;
unsigned int compassInterruptMax;

unsigned char compassInterruptFlag;
unsigned  char compassInterruptSended;
unsigned  char IRInterruptSended;

unsigned char IRdetectionStatus;

unsigned char SMInterruptSended;


const unsigned char HeartBitMsg[] = "Hexapod controller K22F v1.0.0 - 25.03.2015";
unsigned char SM_Data_offset;						// Offset 1er servomoteur
unsigned char SM_Data_count;						// Nombre de servomoteur


unsigned int UltrasonicDistance_mm;
unsigned char uSonicDataValid;





// UART
void processCommand(void);							// Traitement de commande UART recue
void replyToRemote(void);							// Retourne une trame de ACK


/*lint -save  -e970 Disable MISRA rule (6.3) checking. */

// **************************** MAIN LOOP *******************************************************************
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
	unsigned char i;
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
	CompassInit();
	compassCalibrationReady=0;

//

  while(1){

 // BOUSSOLE, LECTURE DE L'ANGLE D'AZIMUTH, CALIBRAGE SI BESOIN
	  if(compassCalibrationReady){								// Contrôle si calibration nécéssaire
		  if(compassEnable && trigCompassRead){					// Boussole active et 300mS ecoulée ?
				if(CompassCheck()){
					myHeading=CompassGetHeading();				// Lecture de l'angle azimuth

					// CONTROLE SI INTERRUPTION HEADING
					if(compassInterruptEnable){
						if((myHeading>=compassInterruptMin) && (myHeading<=compassInterruptMax)) compassInterruptFlag=1;
						else compassInterruptFlag=0;
					}
					compassDataValid=TRUE;
					trigCompassRead=0;
				}
			}
	  }
	  else{
		  if(compassEnable){
			  CompassCalibrate();									// Calibration
			  myHeading=0xFFFF;
			  compassDataValid=FALSE;
		  }
	  }

// COMMUNICATION AVEC MASTER, TRAITEMENT DE LA COMMANDE UART RECUE
		if(UARTDataReady){
			processCommand();
			UARTDataReady=0;
		}

// MESURE DISTANCE ULTRASON, LECTURE DE LA DISTANCE
		if(UltrasonicDataReady){
			UltrasonicDistance_mm=(UltrasonicEchoTime*110)/58;
			uSonicDataValid=1;
			UltrasonicDataReady=0;
		}

// BOUSSOLE, INTERRUPTION PROVOQUEE PAR UN ANGLE DEFINI, AVERTISSEMENT AU MASTER
		if(compassInterruptFlag){
			if(!compassInterruptSended){
		  	buffRcvDcfData[0]=INTERRUPT_COMPASS;
	  		buffRcvDcfData[1]=compassDataValid;
	  		buffRcvDcfData[2]=(myHeading & 0xFF00)>>8;
	  		buffRcvDcfData[3]=myHeading & 0x00FF;

	  		DataLength=4;
	  		replyToRemote();

	  		compassInterruptSended=1;
			}
		} else compassInterruptSended=0;

// INFRAROUGES, INTERRUPTION PROVOQUEE PAR UN CHANGEMENT D'ETAT SUR LES ENTREES, AVERTISSEMENT AU MASTER
		if(IrInterruptFlag){
			if(!IRInterruptSended){
		  	buffRcvDcfData[0]=INTERRUPT_IRDET;
	  		buffRcvDcfData[1]=IRdetectionStatus&IR0_MASK;
	  		buffRcvDcfData[2]=(IRdetectionStatus&IR1_MASK)>>1;
	  		buffRcvDcfData[3]=(IRdetectionStatus&IR2_MASK)>>2;

	  		DataLength=4;
	  		replyToRemote();

	  		IRInterruptSended=1;
			}
		}

// SERVOMOTEUR EN POSITION, ENVOIE d'INTERRUPTION, !!!! SERVO NO 18(EYES) non comptabilisé dans cette interruption
		if(SMInterruptFlag){
			if(!SMInterruptSended){
					  	buffRcvDcfData[0]=INTERRUPT_MOTORS;
					  	buffRcvDcfData[OUT_OFFSET_SLOT]=0;
					  	buffRcvDcfData[OUT_COUNT_SLOT]=17;
					  	for(i=0;i<17;i++)
					  		if(SM_Enable[i])buffRcvDcfData[OUT_DATA_SLOT+i]=SM_ActualValue[i];
					  		else buffRcvDcfData[OUT_DATA_SLOT+i]=255;
				  		DataLength=20;
				  		replyToRemote();
				  		SMInterruptSended=1;
				  		SMInterruptFlag=0;
			}
		}else SMInterruptSended=0;

}


  // **************************** END MAIN*******************************************************************

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */

/*---------------------------------------------------------------------------------------------
  -------- REPLYTOREMOTE
  -------- Retourne l'echo de la commande recue
  ---------------------------------------------------------------------------------------------*/
  void replyToRemote(void){
  	unsigned char i;

  	for(i=0;i<DataLength;i++)					// Charge le buffer d'émission avec les donnée utils
  		buffSndDcfData[i+2]=buffRcvDcfData[i];
  	ProcessUartTxData();
  }


/*---------------------------------------------------------------------------------------------
  -------- PROCESS COMMAND
  -------- Traitement de la commande UART recue
  ---------------------------------------------------------------------------------------------*/
  void processCommand(void){
  	unsigned int i;
  	unsigned char command;
  	unsigned char smoothValue;

  	processBuffRcv=1;						// Verouille le buffer de récéption contre aquisition
  	command=buffRcvDcfData[RCV_COMMAND];

  	if(command>1 & command<=8){
  		smoothValue=command;
  		command=2;
  	}

  	switch(command){

  	case SM_ENABLE:{
  		SM_Data_offset=buffRcvDcfData[OUT_OFFSET_SLOT];
  		SM_Data_count=buffRcvDcfData[OUT_COUNT_SLOT];
  		for(i=0;i<SM_Data_count;i++){
  			SM_Enable[SM_Data_offset+i]=buffRcvDcfData[OUT_DATA_SLOT+i];
  		}
  		break;
  	}

  	case SM_POSITION:
  		SM_Data_offset=buffRcvDcfData[OUT_OFFSET_SLOT];
  		SM_Data_count=buffRcvDcfData[OUT_COUNT_SLOT];

  		for(i=0;i<SM_Data_count;i++)
  			SM_TargetValue[SM_Data_offset+i]=SM_ActualValue[SM_Data_offset+i]=buffRcvDcfData[OUT_DATA_SLOT+i];
  			SMnewCommand=1;
  		break;

  	// Mode Angle direct
  	case SM_SMOOTH:
  		SM_Data_offset=buffRcvDcfData[OUT_OFFSET_SLOT];
  		SM_Data_count=buffRcvDcfData[OUT_COUNT_SLOT];

  		// Correction pour une grande vitesse plus fluide

  		sm_smoothIncrement=(10-smoothValue-1);

  		for(i=0;i<SM_Data_count;i++)
  			SM_TargetValue[SM_Data_offset+i]=buffRcvDcfData[OUT_DATA_SLOT+i];

  		SMnewCommand=1;
  		break;

  	case SET_MOTORS_INT_ENABLE:{
  		SMnewCommand=0;
  		SMInterruptEnable=buffRcvDcfData[MOTORS_ENABLE_SLOT];
  		break;
  	}


  	// Start Ultrasonic Measure
  	case USONIC_READ:{
  		flag_uSonicEnable=1;

  		//if((i=(uSonicResult*11)/58)>400)uSonicDataValid=3;


  		buffRcvDcfData[USONIC_DATAH_SLOT]=(UltrasonicDistance_mm & 0xFF00)>>8;
  		buffRcvDcfData[USONIC_DATAL_SLOT]=UltrasonicDistance_mm & 0x00FF;
  		buffRcvDcfData[USONIC_STATUS_SLOT]=uSonicDataValid;

  		DataLength=4;
  		buffSndDcfData[2]=USONIC_READ;

  		break;
  	}

  	// Stop Ultrasonic Measure
  	case USONIC_STOP:{
  		flag_uSonicEnable=0;					// Activation de la mesure ultrason
  		uSonicDataValid=0;
  		//ultraSonicReset();
  		break;
  	}


  	case COMPASS_READ:{
  		compassEnable=TRUE;

  		buffRcvDcfData[1]=compassDataValid;
  		buffRcvDcfData[2]=(myHeading & 0xFF00)>>8;
  		buffRcvDcfData[3]=myHeading & 0x00FF;

  		DataLength=4;
  		break;
  	}

  	case COMPASS_STOP:{
  			compassEnable=FALSE;
  			compassDataValid=FALSE;
  		break;
  	}

  	case SET_COMPASS_INT_HEADING:{

 		compassInterruptMin=buffRcvDcfData[COMPASS_HEADINGMIN_SLOT];
 		compassInterruptMin=(compassInterruptMin<<8)+buffRcvDcfData[COMPASS_HEADINGMIN_SLOT+1];
 		compassInterruptMax=buffRcvDcfData[COMPASS_HEADINGMAX_SLOT];
 		compassInterruptMax=(compassInterruptMax<<8)+buffRcvDcfData[COMPASS_HEADINGMAX_SLOT+1];

  		break;
  	}

  	case SET_COMPASS_INT_ENABLE:{
  		compassInterruptEnable=buffRcvDcfData[COMPASS_ENABLE_SLOT];
  		break;
  	}

  	case COMPASS_CALIB: compassCalibrationReady=0;				// Demarre une sequence de calibration
  				  	    CompassInit();
  		break;


  	case IRDETECT_READ:{
  		buffRcvDcfData[1]=IRdetectionStatus&IR0_MASK;
  		buffRcvDcfData[2]=(IRdetectionStatus&IR1_MASK)>>1;
  		buffRcvDcfData[3]=(IRdetectionStatus&IR2_MASK)>>2;

  		DataLength=4;
  		break;
  	}

  	case SET_IRDETECT_INT_ENABLE:{
  		IrInterruptEnable=0;

  		if(buffRcvDcfData[IR0_ENABLE_SLOT])
  			IrInterruptEnable+=IR0_MASK;

  		if(buffRcvDcfData[IR1_ENABLE_SLOT])
  		  	IrInterruptEnable+=IR1_MASK;

  		if(buffRcvDcfData[IR2_ENABLE_SLOT])
  		  	IrInterruptEnable+=IR2_MASK;
  		break;
  	}

  	//Envoie de la trame heartbit (Date, version, etc...)

  	case HEART_BIT:{

  		buffRcvDcfData[0]=HEART_BIT;
  		i=0;
  		while(HeartBitMsg[i++] != '\0')	{
  			buffRcvDcfData[i]=HeartBitMsg[i-1];
  		}

  		DataLength=i+1;
  		break;

  	}


  	//Envoie de la trame heartbit (Date, version, etc...)

  	case TXDELAYFORHOST:{

  		TXbyteDelay=1;

  		break;

  	}

  	default: ResetReception();
  	}
  	processBuffRcv=0;					// Libere le buffer de récéption pour nouvelle aquisition

  	replyToRemote();
  }



/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
