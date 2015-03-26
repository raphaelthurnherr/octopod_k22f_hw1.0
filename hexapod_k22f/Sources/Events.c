/* ###################################################################
**     Filename    : Events.c
**     Project     : testAccel
**     Processor   : MK22FN512VDC12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-02-26, 17:42, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMI - void Cpu_OnNMI(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */
#include "Cpu.h"
#include "Events.h"
#include "Init_Config.h"
#include "PDD_Includes.h"

#include "UsonicTrig.h"
#include "BitIoLdd1.h"
#include "UsonicPWM.h"
#include "ExtIntLdd5.h"

#include "main.h"
#include "DCFcom.h"
#include "sw_pwm.h"

bool CompassDataReady;					// Interrupt INT1, data ready of FXOS8700
bool trigCompassRead;

unsigned char UltrasonicCounterTime;
unsigned int UltrasonicEchoTime;
unsigned char UltrasonicDataReady;
unsigned  char compassInterruptSended;
unsigned char compassInterruptEnable;
unsigned char IrInterruptEnable;

unsigned char IrInterruptFlag;

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMI (module Events)
**
**     Component   :  Cpu [MK22FN512DC12]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMI(void)
{
  /* Write your code here ... */
}

/*

*/
/*
** ===================================================================
**     Event       :  UART0_OnError (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called when a channel error (not the error
**         returned by a given method) occurs. The errors can be read
**         using <GetError> method.
**         The event is available only when the <Interrupt
**         service/event> property is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnError(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  UART0_OnRxChar (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called after a correct character is received.
**         The event is available only when the <Interrupt
**         service/event> property is enabled and either the <Receiver>
**         property is enabled or the <SCI output mode> property (if
**         supported) is set to Single-wire mode.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnRxChar(void)
{
	static unsigned char Rec= 0;
		if(!processBuffRcv){
			UART0_RecvChar(&Rec);
			ProcessUartRxData(Rec);
		}
}

/*
** ===================================================================
**     Event       :  UART0_OnTxChar (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called after a character is transmitted.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnTxChar(void)
{

}

/*
** ===================================================================
**     Event       :  UART0_OnFullRxBuf (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called when the input buffer is full;
**         i.e. after reception of the last character 
**         that was successfully placed into input buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnFullRxBuf(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  UART0_OnFreeTxBuf (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called after the last character in output
**         buffer is transmitted.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnFreeTxBuf(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  TI1_OnInterrupt (module Events)
**
**     Component   :  TI1 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TI1_OnInterrupt(void)
{
	static unsigned char i;
	static unsigned char j;

	if(i++==1){
		i=0;
		trigCompassRead=1;
	}
	if(j++==3){
		j=0;
		compassInterruptSended=0;
	}
}

/*
** ===================================================================
**     Event       :  Int1accel_OnInterrupt (module Events)
**
**     Component   :  Int1accel [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void Int1accel_OnInterrupt(void)
{
	CompassDataReady=TRUE;
}

/*
** ===================================================================
**     Event       :  TI3_OnInterrupt (module Events)
**
**     Component   :  TI3 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TI3_OnInterrupt(void)
{
	// Sequence suivante  (2.857mS)
	changeGroupSeq();
}

/*
** ===================================================================
**     Event       :  TI2_OnInterrupt (module Events)
**
**     Component   :  TI2 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TI2_OnInterrupt(void)
{
	updateMotorsValues();

	// STOP LE TRIGGER APRES ~15uS (3x5.5uS)
	if(StartUltrasonicTrig!=0){
		if(UltrasonicCounterTime>=2){
			UsonicTrig_ClrVal();
			StartUltrasonicTrig=0;				// Trigger terminé
			UltrasonicCounterTime=0;			// Reset le compteur
		}
		else UltrasonicCounterTime++;
	}


	TimPWM_gr1++;
	TimPWM_gr2++;
	TimPWM_gr3++;
	TimPWM_gr4++;
	TimPWM_gr5++;
	TimPWM_gr6++;
	TimPWM_gr7++;

	UltrasonicEchoTime++;

}

/*
** ===================================================================
**     Event       :  UsonicPWM_OnInterrupt (module Events)
**
**     Component   :  UsonicPWM [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void UsonicPWM_OnInterrupt(void)
{
	bool state;

	if(flag_uSonicEnable&&UltrasonicWaitEcho){
		state = UsonicPWM_GetVal();
		if(state)
			UltrasonicEchoTime=0;		// Echo recu sur flanc montant, reset le compteur
		else{
			UltrasonicDataReady=1;			// Fin de l'echo
			UltrasonicWaitEcho=0;
		}
	}

}

/*
** ===================================================================
**     Event       :  IR2_detect_OnInterrupt (module Events)
**
**     Component   :  IR2_detect [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void IR2_detect_OnInterrupt(void)
{
	  bool ir2state;

		  ir2state=IR2_detect_GetVal();
		  if(ir2state)IRdetectionStatus=IRdetectionStatus|IR2_MASK;
		  else IRdetectionStatus=IRdetectionStatus&0x0B;

		  if(IrInterruptEnable&IR2_MASK){
			  IrInterruptFlag=1;
			  IRInterruptSended=0;
		  }
}

/*
** ===================================================================
**     Event       :  IR1_detect_OnInterrupt (module Events)
**
**     Component   :  IR1_detect [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void IR1_detect_OnInterrupt(void)
{
	  bool ir1state;

		  ir1state=IR1_detect_GetVal();
		  if(ir1state)IRdetectionStatus=IRdetectionStatus|IR1_MASK;
		  else IRdetectionStatus=IRdetectionStatus&0x0D;

		  if(IrInterruptEnable&IR1_MASK){
			  IrInterruptFlag=1;
			  IRInterruptSended=0;
		  }
}

/*
** ===================================================================
**     Event       :  IR0_detect_OnInterrupt (module Events)
**
**     Component   :  IR0_detect [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void IR0_detect_OnInterrupt(void)
{
  bool ir0state;



	  ir0state=IR0_detect_GetVal();
	  if(ir0state)IRdetectionStatus=IRdetectionStatus|IR0_MASK;
	  else IRdetectionStatus=IRdetectionStatus&0x0E;

	  if(IrInterruptEnable&IR0_MASK){
		  IrInterruptFlag=1;
		  IRInterruptSended=0;
	  }
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
