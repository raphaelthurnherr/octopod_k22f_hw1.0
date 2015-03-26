/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : IR0_detect.c
**     Project     : hexapod_k22f
**     Processor   : MK22FN512VDC12
**     Component   : ExtInt
**     Version     : Component 02.105, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-25, 20:53, # CodeGen: 1
**     Abstract    :
**         This component "ExtInt" implements an external 
**         interrupt, its control methods and interrupt/event 
**         handling procedure.
**         The component uses one pin which generates interrupt on 
**         selected edge.
**     Settings    :
**         Interrupt name              : INT_PORTC
**         User handling procedure     : IR0_detect_OnInterrupt
**
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       82            |  CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT/I2S0_TX_BCLK/LPUART0_RX
**             ----------------------------------------------------
**
**         Port name                   : PTC
**
**         Bit number (in port)        : 3
**         Bit mask of the port        : 0x0008
**
**         Signal edge/level           : both
**         Priority                    : 112
**         Pull option                 : off
**         Initial state               : Enabled
**
**
**         Port data register          : GPIOC_PDOR [0x400FF080]
**         Port control register       : GPIOC_PDDR [0x400FF094]
**     Contents    :
**         GetVal - bool IR0_detect_GetVal(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file IR0_detect.c
** @version 01.00
** @brief
**         This component "ExtInt" implements an external 
**         interrupt, its control methods and interrupt/event 
**         handling procedure.
**         The component uses one pin which generates interrupt on 
**         selected edge.
*/         
/*!
**  @addtogroup IR0_detect_module IR0_detect module documentation
**  @{
*/         

/* MODULE IR0_detect. */

#include "Events.h"
#include "IR0_detect.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  IR0_detect_GetVal (component ExtInt)
**     Description :
**         Returns the actual value of the input pin of the component.
**     Parameters  : None
**     Returns     :
**         ---             - Returned input value. Possible values:
**                           <false> - logical "0" (Low level) <true> -
**                           logical "1" (High level)
** ===================================================================
*/
/*
bool IR0_detect_GetVal(void)

**  This method is implemented as a macro. See IR0_detect.h file.  **
*/

/*
** ===================================================================
**     Method      :  IR0_detect_OnInterrupt (component ExtInt)
**
**     Description :
**         This event is called when an active signal edge/level has 
**         occurred. The event services the event of the inherited 
**         component and eventually invokes other events.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void ExtIntLdd2_OnInterrupt(LDD_TUserData *UserDataPtr)
{
  (void)UserDataPtr;                   /* Parameter is not used, suppress unused argument warning */
  IR0_detect_OnInterrupt();            /* Invoke OnInterrupt event */
}

/* END IR0_detect. */

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