/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : hexapod_k22f
**     Processor   : MK22FN512VDC12
**     Component   : MK22FN512DC12
**     Version     : Component 01.048, Driver 01.00, CPU db: 3.00.000
**     Datasheet   : K22P121M120SF7RM, Rev. 1, March 24, 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-25, 20:53, # CodeGen: 1
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         No public methods
**
**     (c) Freescale Semiconductor, Inc.
**     2004 All Rights Reserved
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
** @file Cpu.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

/* {Default RTOS Adapter} No RTOS includes */
#include "Cpu.h"
#include "Events.h"
#include "Init_Config.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
** ===================================================================
**     Method      :  Common_Init (component MK22FN512DC12)
**     Description :
**         Initialization of registers for that there is no 
**         initialization component.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMMON_INIT
void Common_Init(void)
{
  /* Common initialization of registers which initialization is required 
     for proper functionality of components in the project but initialization
     component which would be configuring these registers is missing 
     in the project. 
     Add associated initialization component to the project to avoid 
     initialization of registers in the Common_Init().
     Also, after reset value optimization property affects initialization of 
     registers in this method (see active generator configuration 
     Optimizations\Utilize after reset values property or enabled processor 
     component Common settings\Utilize after reset values property) */
  /* Enable clock gate of peripherals initialized in Common_Init() */
  /* SIM_SCGC5: PORTD=1,PORTA=1 */
  SIM_SCGC5 |= (SIM_SCGC5_PORTD_MASK | SIM_SCGC5_PORTA_MASK);

  /* PORTA_PCR13: ISF=0,PE=1 */
  PORTA_PCR13 = (uint32_t)((PORTA_PCR13 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK
                )) | (uint32_t)(
                 PORT_PCR_PE_MASK
                ));
  /* PORTD_PCR0: ISF=0,PE=0,PS=1 */
  PORTD_PCR0 = (uint32_t)((PORTD_PCR0 & (uint32_t)~(uint32_t)(
                PORT_PCR_ISF_MASK |
                PORT_PCR_PE_MASK
               )) | (uint32_t)(
                PORT_PCR_PS_MASK
               ));

  /* Disable clock gate of peripherals initialized in Common_Init() */
  /* SIM_SCGC5: PORTD=0,PORTA=0 */
  SIM_SCGC5 &= (uint32_t)~(uint32_t)(
                SIM_SCGC5_PORTD_MASK |
                SIM_SCGC5_PORTA_MASK
               );
}

#endif /* CPU_COMMON_INIT */

/*
** ===================================================================
**     Method      :  Components_Init (component MK22FN512DC12)
**     Description :
**         Initialization of components (with exception for Peripheral
**         Initialization Components which are initialized in 
**         Peripherals_Init() method).
**         For example, if automatic initialization feature 
**         is enabled in LDD component then its Init method call 
**         is executed in Components_Init() method.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMPONENTS_INIT
void Components_Init(void)
{
  /* ### BitIO_LDD "BitIoLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd2_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd3" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd3_Init(NULL);
  /* ### GenericSWI2C "I2C1" init code ... */
  I2C1_Init();
  /* ### GenericI2C "GI2C1" init code ... */
  GI2C1_Init();
  /* ### FXOS8700CQ "FX1" init code ... */
  /* Write code here ... */
  /* ### Asynchro serial "UART0" init code ... */
  UART0_Init();
  /* ### TimerInt_LDD "TimerIntLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)TimerIntLdd1_Init(NULL);
  /* ### TimerInt "TI1" init code ... */
  /* ### ExtInt_LDD "ExtIntLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)ExtIntLdd1_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd4" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd4_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd5" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd5_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd6" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd6_Init(NULL);
  /* ### TimerInt_LDD "TimerIntLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)TimerIntLdd2_Init(NULL);
  /* ### TimerInt "TI2" init code ... */
  /* ### TimerInt_LDD "TimerIntLdd3" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)TimerIntLdd3_Init(NULL);
  /* ### TimerInt "TI3" init code ... */
  /* ### BitIO_LDD "BitIoLdd7" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd7_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd8" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd8_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd9" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd9_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd10" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd10_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd11" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd11_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd12" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd12_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd13" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd13_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd14" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd14_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd15" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd15_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd16" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd16_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd17" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd17_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd18" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd18_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd19" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd19_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd20" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd20_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd21" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd21_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd22" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd22_Init(NULL);
  /* ### ExtInt_LDD "ExtIntLdd2" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)ExtIntLdd2_Init(NULL);
  /* ### ExtInt_LDD "ExtIntLdd3" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)ExtIntLdd3_Init(NULL);
  /* ### ExtInt_LDD "ExtIntLdd4" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)ExtIntLdd4_Init(NULL);
  /* ### BitIO_LDD "BitIoLdd1" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)BitIoLdd1_Init(NULL);
  /* ### ExtInt_LDD "ExtIntLdd5" component auto initialization. Auto initialization feature can be disabled by component property "Auto initialization". */
  (void)ExtIntLdd5_Init(NULL);
}
#endif /* CPU_COMPONENTS_INIT */

/*
** ===================================================================
**     Method      :  Cpu_Cpu_ivINT_PORTC (component MK22FN512DC12)
**
**     Description :
**         This ISR services the ivINT_PORTC interrupt shared by several 
**         components.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_ivINT_PORTC)
{
    ExtIntLdd2_Interrupt();              /* Call the service routine */
    ExtIntLdd3_Interrupt();              /* Call the service routine */
}

/*
** ===================================================================
**     Method      :  Cpu_INT_NMIInterrupt (component MK22FN512DC12)
**
**     Description :
**         This ISR services the Non Maskable Interrupt interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_INT_NMIInterrupt)
{
  Cpu_OnNMI();
}


#ifdef __cplusplus
}
#endif

/* END Cpu. */

