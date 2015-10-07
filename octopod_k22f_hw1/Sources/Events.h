/* ###################################################################
**     Filename    : Events.h
**     Project     : octopod_k22f_hw1
**     Processor   : MK22FN512VLH12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-09-11, 12:59, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMI - void Cpu_OnNMI(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "pin_mux.h"
#include "Int1accel.h"
#include "ExtIntLdd1.h"
#include "I2C1.h"
#include "SDA1.h"
#include "BitIoLdd1.h"
#include "SCL1.h"
#include "BitIoLdd2.h"
#include "WAIT1.h"
#include "GI2C1.h"
#include "FX1.h"
#include "TI1.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "I2C2.h"
#include "SDA2.h"
#include "BitIoLdd3.h"
#include "SCL2.h"
#include "BitIoLdd4.h"
#include "SW_I2C_PWM.h"
#include "PWM_CTRL_OE.h"
#include "BitIoLdd5.h"
#include "UsonicTrig.h"
#include "BitIoLdd6.h"
#include "IR0_detect.h"
#include "ExtIntLdd2.h"
#include "IR1_detect.h"
#include "ExtIntLdd3.h"
#include "IR2_detect.h"
#include "ExtIntLdd4.h"
#include "UsonicPWM.h"
#include "ExtIntLdd5.h"
#include "UART0.h"
#include "ASerialLdd1.h"
#include "TI2.h"
#include "TimerIntLdd2.h"
#include "TU2.h"
#include "TI3.h"
#include "TimerIntLdd3.h"
#include "TU3.h"
#include "Led_red.h"
#include "BitIoLdd8.h"
#include "Led_blue.h"
#include "BitIoLdd9.h"
#include "Led_green.h"
#include "BitIoLdd7.h"


extern bool blink;
extern bool trigCompassRead;

extern unsigned int UltrasonicEchoTime;
extern unsigned char UltrasonicDataReady;

extern unsigned char IrInterruptFlag;
extern unsigned char IrInterruptEnable;

extern unsigned char TimeSmoothMotorsRefresh;
extern unsigned char TimeStartUSonic;



#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnNMI (module Events)
**
**     Component   :  Cpu [MK22FN512LH12]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMI(void);


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
void TI3_OnInterrupt(void);

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
void TI2_OnInterrupt(void);

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
void UART0_OnError(void);

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
void UART0_OnRxChar(void);

/*
** ===================================================================
**     Event       :  UART0_OnRxCharExt (module Events)
**
**     Component   :  UART0 [AsynchroSerial]
**     Description :
**         This event is called after a correct character is received.
**         The last received character is passed as a parameter of the
**         event function.
**         Nevertheless, the last received character is placed in the
**         external buffer of the component.
**         This event is identical in function with the <OnRxChar>
**         event with a parameter added. It is not recommended to use
**         both <OnRxChar> and OnRxCharExt events at the same time.
**         The event is available only when the <Interrupt
**         service/event> property is enabled and either the <Receiver>
**         property is enabled or the <SCI output mode> property (if
**         supported) is set to Single-wire mode.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Chr             - The last character correctly received.
**     Returns     : Nothing
** ===================================================================
*/
void UART0_OnRxCharExt(UART0_TComData Chr);

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
void UART0_OnTxChar(void);

void UsonicPWM_OnInterrupt(void);
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

void IR2_detect_OnInterrupt(void);
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

void IR1_detect_OnInterrupt(void);
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

void IR0_detect_OnInterrupt(void);
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
void TI1_OnInterrupt(void);

void Int1accel_OnInterrupt(void);
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
void UART0_OnFullRxBuf(void);

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
void UART0_OnFreeTxBuf(void);

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
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
