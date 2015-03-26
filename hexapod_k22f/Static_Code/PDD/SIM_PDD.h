/*
  PDD layer implementation for peripheral type SIM
  (C) 2013 Freescale, Inc. All rights reserved.

  This file is static and it is generated from API-Factory
*/

#if !defined(SIM_PDD_H_)
#define SIM_PDD_H_

/* ----------------------------------------------------------------------------
   -- Test if supported MCU is active
   ---------------------------------------------------------------------------- */

#if !defined(MCU_ACTIVE)
  // No MCU is active
  #error SIM PDD library: No derivative is active. Place proper #include with PDD memory map before including PDD library.
#elif \
      !defined(MCU_MK10D10) /* SIM */ && \
      !defined(MCU_MK10D5) /* SIM */ && \
      !defined(MCU_MK10D7) /* SIM */ && \
      !defined(MCU_MK10F12) /* SIM */ && \
      !defined(MCU_MK10DZ10) /* SIM */ && \
      !defined(MCU_MK11D5) /* SIM */ && \
      !defined(MCU_MK11D5WS) /* SIM */ && \
      !defined(MCU_MK12D5) /* SIM */ && \
      !defined(MCU_MK20D10) /* SIM */ && \
      !defined(MCU_MK20D5) /* SIM */ && \
      !defined(MCU_MK20D7) /* SIM */ && \
      !defined(MCU_MK20F12) /* SIM */ && \
      !defined(MCU_MK20DZ10) /* SIM */ && \
      !defined(MCU_MK21D5) /* SIM */ && \
      !defined(MCU_MK21D5WS) /* SIM */ && \
      !defined(MCU_MK21F12) /* SIM */ && \
      !defined(MCU_MK21F12WS) /* SIM */ && \
      !defined(MCU_MK22D5) /* SIM */ && \
      !defined(MCU_MK22F12810) /* SIM */ && \
      !defined(MCU_MK22F12) /* SIM */ && \
      !defined(MCU_MK22F25612) /* SIM */ && \
      !defined(MCU_MK22F51212) /* SIM */ && \
      !defined(MCU_MK24F12) /* SIM */ && \
      !defined(MCU_MK30D10) /* SIM */ && \
      !defined(MCU_MK30D7) /* SIM */ && \
      !defined(MCU_MK30DZ10) /* SIM */ && \
      !defined(MCU_MK40D10) /* SIM */ && \
      !defined(MCU_MK40D7) /* SIM */ && \
      !defined(MCU_MK40DZ10) /* SIM */ && \
      !defined(MCU_MK40X256VMD100) /* SIM */ && \
      !defined(MCU_MK50D10) /* SIM */ && \
      !defined(MCU_MK50D7) /* SIM */ && \
      !defined(MCU_MK50DZ10) /* SIM */ && \
      !defined(MCU_MK51D10) /* SIM */ && \
      !defined(MCU_MK51D7) /* SIM */ && \
      !defined(MCU_MK51DZ10) /* SIM */ && \
      !defined(MCU_MK52D10) /* SIM */ && \
      !defined(MCU_MK52DZ10) /* SIM */ && \
      !defined(MCU_MK53D10) /* SIM */ && \
      !defined(MCU_MK53DZ10) /* SIM */ && \
      !defined(MCU_MK60D10) /* SIM */ && \
      !defined(MCU_MK60F12) /* SIM */ && \
      !defined(MCU_MK60F15) /* SIM */ && \
      !defined(MCU_MK60DZ10) /* SIM */ && \
      !defined(MCU_MK60N512VMD100) /* SIM */ && \
      !defined(MCU_MK61F12) /* SIM */ && \
      !defined(MCU_MK61F15) /* SIM */ && \
      !defined(MCU_MK61F12WS) /* SIM */ && \
      !defined(MCU_MK61F15WS) /* SIM */ && \
      !defined(MCU_MK63F12) /* SIM */ && \
      !defined(MCU_MK63F12WS) /* SIM */ && \
      !defined(MCU_MK64F12) /* SIM */ && \
      !defined(MCU_MK65F18) /* SIM */ && \
      !defined(MCU_MK65F18WS) /* SIM */ && \
      !defined(MCU_MK66F18) /* SIM */ && \
      !defined(MCU_MK70F12) /* SIM */ && \
      !defined(MCU_MK70F15) /* SIM */ && \
      !defined(MCU_MK70F12WS) /* SIM */ && \
      !defined(MCU_MK70F15WS) /* SIM */ && \
      !defined(MCU_MKE02Z2) /* SIM */ && \
      !defined(MCU_MKE02Z4) /* SIM */ && \
      !defined(MCU_SKEAZN642) /* SIM */ && \
      !defined(MCU_MKE04Z1284) /* SIM */ && \
      !defined(MCU_MKE04Z4) /* SIM */ && \
      !defined(MCU_SKEAZN84) /* SIM */ && \
      !defined(MCU_MKE06Z4) /* SIM */ && \
      !defined(MCU_MKL02Z4) /* SIM */ && \
      !defined(MCU_MKL03Z4) /* SIM */ && \
      !defined(MCU_MKL04Z4) /* SIM */ && \
      !defined(MCU_MKL05Z4) /* SIM */ && \
      !defined(MCU_MKL13Z4) /* SIM */ && \
      !defined(MCU_MKL14Z4) /* SIM */ && \
      !defined(MCU_MKL15Z4) /* SIM */ && \
      !defined(MCU_MKL16Z4) /* SIM */ && \
      !defined(MCU_MKL23Z4) /* SIM */ && \
      !defined(MCU_MKL24Z4) /* SIM */ && \
      !defined(MCU_MKL25Z4) /* SIM */ && \
      !defined(MCU_MKL26Z4) /* SIM */ && \
      !defined(MCU_MKL33Z4) /* SIM */ && \
      !defined(MCU_MKL34Z4) /* SIM */ && \
      !defined(MCU_MKL36Z4) /* SIM */ && \
      !defined(MCU_MKL43Z4) /* SIM */ && \
      !defined(MCU_MKL46Z4) /* SIM */ && \
      !defined(MCU_MKV10Z7) /* SIM */ && \
      !defined(MCU_MKV31F12810) /* SIM */ && \
      !defined(MCU_MKV31F25612) /* SIM */ && \
      !defined(MCU_MKV31F51212) /* SIM */ && \
      !defined(MCU_MKV40F15) /* SIM */ && \
      !defined(MCU_MKV43F15) /* SIM */ && \
      !defined(MCU_MKV44F15) /* SIM */ && \
      !defined(MCU_MKV45F15) /* SIM */ && \
      !defined(MCU_MKV46F15) /* SIM */ && \
      !defined(MCU_MKW01Z4) /* SIM */ && \
      !defined(MCU_MKW21D5) /* SIM */ && \
      !defined(MCU_MKW21D5WS) /* SIM */ && \
      !defined(MCU_MKW22D5) /* SIM */ && \
      !defined(MCU_MKW22D5WS) /* SIM */ && \
      !defined(MCU_MKW24D5) /* SIM */ && \
      !defined(MCU_MKW24D5WS) /* SIM */ && \
      !defined(MCU_PCK20L4) /* SIM */ && \
      !defined(MCU_SKEAZ1284) /* SIM */
  // Unsupported MCU is active
  #error SIM PDD library: Unsupported derivative is active.
#endif

#include "PDD_Types.h"

/* ----------------------------------------------------------------------------
   -- Method symbol definitions
   ---------------------------------------------------------------------------- */

#if (defined(MCU_MK10D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN1 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK10D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MK10D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK10DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK10F12))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK11D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */

#elif (defined(MCU_MK11D5WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_DRY             0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG      0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */

#elif (defined(MCU_MK12D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */

#elif (defined(MCU_MK20D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN1 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK20D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK20DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK20F12))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK21D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */

#elif (defined(MCU_MK21D5WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_DRY             0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG      0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */

#elif (defined(MCU_MK21F12))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK21F12WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_DRY             0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG      0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK22D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */

#elif (defined(MCU_MK22F12))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK22F12810))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MK22F25612))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MK22F51212))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0xA6U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0xA8U /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MK24F12))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK30D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK30D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK30DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK40D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK40D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK40DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK40X256VMD100))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK50D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier 0/1 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */

#elif (defined(MCU_MK50D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK50DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */

#elif (defined(MCU_MK51D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier 0/1 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK51D7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */

#elif (defined(MCU_MK51DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */

#elif (defined(MCU_MK52D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier 0/1 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNG             0x40U /**< Clock gate identifier for Random number generator (RNG) */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK52DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGB            0x40U /**< Clock gate identifier for Random number generator (RNGB) */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK53D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier 0/1 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNG             0x40U /**< Clock gate identifier for Random number generator (RNG) */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK53DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_OPAMP           0x15U /**< Clock gate identifier for Operational Amplifier */
  #define SIM_PDD_CLOCK_GATE_TRIAMP          0x18U /**< Clock gate identifier for Trans-impedance amplifier */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGB            0x40U /**< Clock gate identifier for Random number generator (RNGB) */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LCD             0x5EU /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK60D10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_RNG             0x40U /**< Clock gate identifier for Random number generator (RNG) */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK60DZ10))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_RNGB            0x40U /**< Clock gate identifier for Random number generator (RNGB) */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */

#elif (defined(MCU_MK60N512VMD100))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGB            0x40U /**< Clock gate identifier for Random number generator (RNGB) */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU            0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS     0x81U /**< Clock gate identifier for System Register File */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory controller */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for PDMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK63F12WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_DRY             0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG      0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif (defined(MCU_MK65F18WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_I2C3            0x7U  /**< Clock gate identifier for I2C3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0x24U /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1            0x29U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2            0x2AU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_USBHS           0x41U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBPHY          0x42U /**< Clock gate identifier for USBPHY */
  #define SIM_PDD_CLOCK_GATE_USBHSDCD        0x43U /**< Clock gate identifier for USBHSDCD */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_DRY             0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG      0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_SDRAM           0xC3U /**< Clock gate identifier for Synchronous DRAM controller */

#elif (defined(MCU_MKE04Z1284))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_RTC   0U              /**< Clock gate identifier for Real-Time Counter (RTC) */
  #define SIM_PDD_CLOCK_GATE_PIT   0x1U            /**< Clock gate identifier for Periodic Interrupt Timer (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWT   0x4U            /**< Clock gate identifier for Pulse Width Timer (PWT) */
  #define SIM_PDD_CLOCK_GATE_FTM0  0x5U            /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1  0x6U            /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2  0x7U            /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_CRC   0xAU            /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_FTMRE 0xCU            /**< Clock gate identifier for Flash Memory Module (FTMRE) */
  #define SIM_PDD_CLOCK_GATE_SWD   0xDU            /**< Clock gate identifier for Serial Wire Debug (SWD) */
  #define SIM_PDD_CLOCK_GATE_I2C0  0x10U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C0) */
  #define SIM_PDD_CLOCK_GATE_I2C1  0x11U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C1) */
  #define SIM_PDD_CLOCK_GATE_SPI0  0x12U           /**< Clock gate identifier for Serial Peripheral Interface (SPI0) */
  #define SIM_PDD_CLOCK_GATE_SPI1  0x13U           /**< Clock gate identifier for Serial Peripheral Interface (SPI1) */
  #define SIM_PDD_CLOCK_GATE_UART0 0x14U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART0) */
  #define SIM_PDD_CLOCK_GATE_UART1 0x15U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART1) */
  #define SIM_PDD_CLOCK_GATE_UART2 0x16U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART2) */
  #define SIM_PDD_CLOCK_GATE_KBI0  0x18U           /**< Clock gate identifier for Keyboard Interrupt (KBI0) */
  #define SIM_PDD_CLOCK_GATE_KBI1  0x19U           /**< Clock gate identifier for Keyboard Interrupt (KBI1) */
  #define SIM_PDD_CLOCK_GATE_IRQ   0x1BU           /**< Clock gate identifier for Interrupt (IRQ) */
  #define SIM_PDD_CLOCK_GATE_ADC   0x1DU           /**< Clock gate identifier for Analog-to-digital converter (ADC) */
  #define SIM_PDD_CLOCK_GATE_ACMP0 0x1EU           /**< Clock gate identifier for Analog comparator (ACMP0) */
  #define SIM_PDD_CLOCK_GATE_ACMP1 0x1FU           /**< Clock gate identifier for Analog comparator (ACMP1) */

#elif (defined(MCU_MKL02Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0   0x66U          /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1   0x67U          /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0   0x76U          /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0 0x80U          /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_FTFA   0xA0U          /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_TPM0   0xB8U          /**< Clock gate identifier for FlexTimer (TPM) 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1   0xB9U          /**< Clock gate identifier for FlexTimer (TPM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0   0xBBU          /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */

#elif (defined(MCU_MKL03Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0    0x66U         /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_CMP     0x73U         /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_VREF    0x74U         /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_SPI0    0x76U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_LPTMR0  0x80U         /**< Clock gate identifier for Low Power Timer */
  #define SIM_PDD_CLOCK_GATE_PORTA   0x89U         /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB   0x8AU         /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_LPUART0 0x94U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_FTFA    0xA0U         /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_TPM0    0xB8U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM1    0xB9U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_ADC0    0xBBU         /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC     0xBDU         /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */

#elif (defined(MCU_MKL04Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for FlexTimer (TPM) 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for FlexTimer (TPM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL05Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for FlexTimer (TPM) 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for FlexTimer (TPM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL13Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0    0x66U         /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1    0x67U         /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_UART0   0x6CU         /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_CMP     0x73U         /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_VREF    0x74U         /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_SPI0    0x76U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1    0x77U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_LPTMR0  0x80U         /**< Clock gate identifier for Low Power Timer */
  #define SIM_PDD_CLOCK_GATE_PORTA   0x89U         /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB   0x8AU         /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC   0x8BU         /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD   0x8CU         /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE   0x8DU         /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPUART0 0x94U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_LPUART1 0x95U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_FLEXIO  0x9FU         /**< Clock gate identifier for FlexIO */
  #define SIM_PDD_CLOCK_GATE_FTFA    0xA0U         /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_DMAMUX0 0xA1U         /**< Clock gate identifier for Direct Memory Access Multiplexer 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0    0xAFU         /**< Clock gate identifier for Inter Integrated Sound */
  #define SIM_PDD_CLOCK_GATE_PIT     0xB7U         /**< Clock gate identifier for Periodic Interrupt Timer */
  #define SIM_PDD_CLOCK_GATE_TPM0    0xB8U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM1    0xB9U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM2    0xBAU         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_ADC0    0xBBU         /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC     0xBDU         /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_DAC0    0xBFU         /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_DMA     0xC8U         /**< Clock gate identifier for DMA Controller */

#elif (defined(MCU_MKL14Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL15Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL16Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S/SAI */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL23Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0    0x66U         /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1    0x67U         /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_UART0   0x6CU         /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_USB0    0x72U         /**< Clock gate identifier for Universal Serial Bus 0 */
  #define SIM_PDD_CLOCK_GATE_CMP     0x73U         /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_VREF    0x74U         /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_SPI0    0x76U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1    0x77U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_LPTMR0  0x80U         /**< Clock gate identifier for Low Power Timer */
  #define SIM_PDD_CLOCK_GATE_PORTA   0x89U         /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB   0x8AU         /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC   0x8BU         /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD   0x8CU         /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE   0x8DU         /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPUART0 0x94U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_LPUART1 0x95U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_FLEXIO  0x9FU         /**< Clock gate identifier for FlexIO */
  #define SIM_PDD_CLOCK_GATE_FTFA    0xA0U         /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_DMAMUX0 0xA1U         /**< Clock gate identifier for Direct Memory Access Multiplexer 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0    0xAFU         /**< Clock gate identifier for Inter Integrated Sound */
  #define SIM_PDD_CLOCK_GATE_PIT     0xB7U         /**< Clock gate identifier for Periodic Interrupt Timer */
  #define SIM_PDD_CLOCK_GATE_TPM0    0xB8U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM1    0xB9U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM2    0xBAU         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_ADC0    0xBBU         /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC     0xBDU         /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_DAC0    0xBFU         /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_DMA     0xC8U         /**< Clock gate identifier for DMA Controller */

#elif (defined(MCU_MKL24Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL25Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL26Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S/SAI */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL33Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0    0x66U         /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1    0x67U         /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_UART0   0x6CU         /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_CMP     0x73U         /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_VREF    0x74U         /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_SPI0    0x76U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1    0x77U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_LPTMR0  0x80U         /**< Clock gate identifier for Low Power Timer */
  #define SIM_PDD_CLOCK_GATE_PORTA   0x89U         /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB   0x8AU         /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC   0x8BU         /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD   0x8CU         /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE   0x8DU         /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LCD     0x93U         /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_LPUART0 0x94U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_LPUART1 0x95U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_FLEXIO  0x9FU         /**< Clock gate identifier for FlexIO */
  #define SIM_PDD_CLOCK_GATE_FTFA    0xA0U         /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_DMAMUX0 0xA1U         /**< Clock gate identifier for Direct Memory Access Multiplexer 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0    0xAFU         /**< Clock gate identifier for Inter Integrated Sound */
  #define SIM_PDD_CLOCK_GATE_PIT     0xB7U         /**< Clock gate identifier for Periodic Interrupt Timer */
  #define SIM_PDD_CLOCK_GATE_TPM0    0xB8U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM1    0xB9U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM2    0xBAU         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_ADC0    0xBBU         /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC     0xBDU         /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_DAC0    0xBFU         /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_DMA     0xC8U         /**< Clock gate identifier for DMA Controller */

#elif (defined(MCU_MKL34Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LCD              0x93U /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL36Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LCD              0x93U /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S/SAI */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKL43Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0    0x66U         /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1    0x67U         /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_UART0   0x6CU         /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_USB0    0x72U         /**< Clock gate identifier for Universal Serial Bus 0 */
  #define SIM_PDD_CLOCK_GATE_CMP     0x73U         /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_VREF    0x74U         /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_SPI0    0x76U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1    0x77U         /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_LPTMR0  0x80U         /**< Clock gate identifier for Low Power Timer */
  #define SIM_PDD_CLOCK_GATE_PORTA   0x89U         /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB   0x8AU         /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC   0x8BU         /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD   0x8CU         /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE   0x8DU         /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LCD     0x93U         /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_LPUART0 0x94U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_LPUART1 0x95U         /**< Clock gate identifier for Low Power Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_FLEXIO  0x9FU         /**< Clock gate identifier for FlexIO */
  #define SIM_PDD_CLOCK_GATE_FTFA    0xA0U         /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_DMAMUX0 0xA1U         /**< Clock gate identifier for Direct Memory Access Multiplexer 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0    0xAFU         /**< Clock gate identifier for Inter Integrated Sound */
  #define SIM_PDD_CLOCK_GATE_PIT     0xB7U         /**< Clock gate identifier for Periodic Interrupt Timer */
  #define SIM_PDD_CLOCK_GATE_TPM0    0xB8U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM1    0xB9U         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_TPM2    0xBAU         /**< Clock gate identifier for Timer */
  #define SIM_PDD_CLOCK_GATE_ADC0    0xBBU         /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC     0xBDU         /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_DAC0    0xBFU         /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_DMA     0xC8U         /**< Clock gate identifier for DMA Controller */

#elif (defined(MCU_MKL46Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_SPI0             0x76U /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0x77U /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LCD              0x93U /**< Clock gate identifier for Segment LCD */
  #define SIM_PDD_CLOCK_GATE_FTFA             0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S/SAI */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_TPM0             0xB8U /**< Clock gate identifier for Low Power TPM 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1             0xB9U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2             0xBAU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DAC0             0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC8U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKV10Z7))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1  0x6BU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C0   0x66U          /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_EWM    0x61U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC  0x8BU          /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD  0x8CU          /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE  0x8DU          /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0 0x80U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0   0xBFU          /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0   0xBBU          /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC1   0xBCU          /**< Clock gate identifier for Analog-to-Digital Converter 1 */
  #define SIM_PDD_CLOCK_GATE_FTM0   0xB8U          /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1   0xB9U          /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2   0xBAU          /**< Clock gate identifier for FlexTimer Module 2 */
  #define SIM_PDD_CLOCK_GATE_PDB0   0xB6U          /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CRC    0xB2U          /**< Clock gate identifier for Cyclic Redundancy Check */

#elif (defined(MCU_MKV31F12810))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKV31F25612))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKV31F51212))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFA            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0xA6U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0xA7U /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0xA8U /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0xAAU /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0xBFU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif (defined(MCU_MKV40F15))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1  0x6BU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C    0x66U          /**< Clock gate identifier for Inter-Integrated Circuit */
  #define SIM_PDD_CLOCK_GATE_EWM    0x61U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC  0x8BU          /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD  0x8CU          /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE  0x8DU          /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR  0x80U          /**< Clock gate identifier for Low-Power Timer */
  #define SIM_PDD_CLOCK_GATE_ADC    0x9CU          /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_FTM0   0xB8U          /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1   0xB9U          /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_CRC    0xB2U          /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI    0xACU          /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_DMAMUX 0xA1U          /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA    0xC8U          /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFA   0xA0U          /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_PIT    0xB7U          /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_ENC    0x95U          /**< Clock gate identifier for Quadrature encoder/decoder */
  #define SIM_PDD_CLOCK_GATE_XBARA  0x99U          /**< Clock gate identifier for Inter-peripheral crossbar switch A */
  #define SIM_PDD_CLOCK_GATE_XBARB  0x9AU          /**< Clock gate identifier for Inter-peripheral crossbar switch B */
  #define SIM_PDD_CLOCK_GATE_PDB0   0xB6U          /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PDB1   0xB1U          /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CAN0   0xA4U          /**< Clock gate identifier for Flex controller area network 0 */
  #define SIM_PDD_CLOCK_GATE_AOI    0x97U          /**< Clock gate identifier for AND-OR-INVERT module */
  #define SIM_PDD_CLOCK_GATE_FTM3   0xA6U          /**< Clock gate identifier for FlexTimer Module 3 */
  #define SIM_PDD_CLOCK_GATE_CAN1   0xA5U          /**< Clock gate identifier for Flex controller area network 1 */

#elif (defined(MCU_MKV43F15))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP      0x73U        /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0    0x6AU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1    0x6BU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C      0x66U        /**< Clock gate identifier for Inter-Integrated Circuit */
  #define SIM_PDD_CLOCK_GATE_EWM      0x61U        /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA    0x89U        /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB    0x8AU        /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC    0x8BU        /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD    0x8CU        /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE    0x8DU        /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR    0x80U        /**< Clock gate identifier for Low-Power Timer */
  #define SIM_PDD_CLOCK_GATE_ADC      0x9CU        /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_CRC      0xB2U        /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI      0xACU        /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_DMAMUX   0xA1U        /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA      0xC8U        /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFA     0xA0U        /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_PIT      0xB7U        /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH0 0x78U        /**< Clock gate identifier for Pulse width modulator channel 0 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH1 0x79U        /**< Clock gate identifier for Pulse width modulator channel 1 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH2 0x7AU        /**< Clock gate identifier for Pulse width modulator channel 2 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH3 0x7BU        /**< Clock gate identifier for Pulse width modulator channel 3 */
  #define SIM_PDD_CLOCK_GATE_ENC      0x95U        /**< Clock gate identifier for Quadrature encoder/decoder */
  #define SIM_PDD_CLOCK_GATE_XBARA    0x99U        /**< Clock gate identifier for Inter-peripheral crossbar switch A */
  #define SIM_PDD_CLOCK_GATE_XBARB    0x9AU        /**< Clock gate identifier for Inter-peripheral crossbar switch B */
  #define SIM_PDD_CLOCK_GATE_PDB0     0xB6U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PDB1     0xB1U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CAN0     0xA4U        /**< Clock gate identifier for Flex controller area network 0 */
  #define SIM_PDD_CLOCK_GATE_AOI      0x97U        /**< Clock gate identifier for AND-OR-INVERT module */
  #define SIM_PDD_CLOCK_GATE_CAN1     0xA5U        /**< Clock gate identifier for Flex controller area network 1 */

#elif (defined(MCU_MKV44F15))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP      0x73U        /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0    0x6AU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1    0x6BU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C      0x66U        /**< Clock gate identifier for Inter-Integrated Circuit */
  #define SIM_PDD_CLOCK_GATE_EWM      0x61U        /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA    0x89U        /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB    0x8AU        /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC    0x8BU        /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD    0x8CU        /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE    0x8DU        /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR    0x80U        /**< Clock gate identifier for Low-Power Timer */
  #define SIM_PDD_CLOCK_GATE_DAC      0xBFU        /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_ADC      0x9CU        /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_CRC      0xB2U        /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI      0xACU        /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_DMAMUX   0xA1U        /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA      0xC8U        /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFA     0xA0U        /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_PIT      0xB7U        /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH0 0x78U        /**< Clock gate identifier for Pulse width modulator channel 0 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH1 0x79U        /**< Clock gate identifier for Pulse width modulator channel 1 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH2 0x7AU        /**< Clock gate identifier for Pulse width modulator channel 2 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH3 0x7BU        /**< Clock gate identifier for Pulse width modulator channel 3 */
  #define SIM_PDD_CLOCK_GATE_ENC      0x95U        /**< Clock gate identifier for Quadrature encoder/decoder */
  #define SIM_PDD_CLOCK_GATE_XBARA    0x99U        /**< Clock gate identifier for Inter-peripheral crossbar switch A */
  #define SIM_PDD_CLOCK_GATE_XBARB    0x9AU        /**< Clock gate identifier for Inter-peripheral crossbar switch B */
  #define SIM_PDD_CLOCK_GATE_PDB0     0xB6U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PDB1     0xB1U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CAN0     0xA4U        /**< Clock gate identifier for Flex controller area network 0 */
  #define SIM_PDD_CLOCK_GATE_AOI      0x97U        /**< Clock gate identifier for AND-OR-INVERT module */

#elif (defined(MCU_MKV45F15))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP      0x73U        /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0    0x6AU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1    0x6BU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C      0x66U        /**< Clock gate identifier for Inter-Integrated Circuit */
  #define SIM_PDD_CLOCK_GATE_EWM      0x61U        /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA    0x89U        /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB    0x8AU        /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC    0x8BU        /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD    0x8CU        /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE    0x8DU        /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR    0x80U        /**< Clock gate identifier for Low-Power Timer */
  #define SIM_PDD_CLOCK_GATE_ADC      0x9CU        /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_FTM0     0xB8U        /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1     0xB9U        /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_CRC      0xB2U        /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI      0xACU        /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_DMAMUX   0xA1U        /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA      0xC8U        /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFA     0xA0U        /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_PIT      0xB7U        /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH0 0x78U        /**< Clock gate identifier for Pulse width modulator channel 0 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH1 0x79U        /**< Clock gate identifier for Pulse width modulator channel 1 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH2 0x7AU        /**< Clock gate identifier for Pulse width modulator channel 2 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH3 0x7BU        /**< Clock gate identifier for Pulse width modulator channel 3 */
  #define SIM_PDD_CLOCK_GATE_ENC      0x95U        /**< Clock gate identifier for Quadrature encoder/decoder */
  #define SIM_PDD_CLOCK_GATE_XBARA    0x99U        /**< Clock gate identifier for Inter-peripheral crossbar switch A */
  #define SIM_PDD_CLOCK_GATE_XBARB    0x9AU        /**< Clock gate identifier for Inter-peripheral crossbar switch B */
  #define SIM_PDD_CLOCK_GATE_PDB0     0xB6U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PDB1     0xB1U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CAN0     0xA4U        /**< Clock gate identifier for Flex controller area network 0 */
  #define SIM_PDD_CLOCK_GATE_AOI      0x97U        /**< Clock gate identifier for AND-OR-INVERT module */
  #define SIM_PDD_CLOCK_GATE_FTM3     0xA6U        /**< Clock gate identifier for FlexTimer Module 3 */
  #define SIM_PDD_CLOCK_GATE_CAN1     0xA5U        /**< Clock gate identifier for Flex controller area network 1 */

#elif (defined(MCU_MKV46F15))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP      0x73U        /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0    0x6AU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1    0x6BU        /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_I2C      0x66U        /**< Clock gate identifier for Inter-Integrated Circuit */
  #define SIM_PDD_CLOCK_GATE_EWM      0x61U        /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA    0x89U        /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB    0x8AU        /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC    0x8BU        /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD    0x8CU        /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE    0x8DU        /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR    0x80U        /**< Clock gate identifier for Low-Power Timer */
  #define SIM_PDD_CLOCK_GATE_DAC      0xBFU        /**< Clock gate identifier for Digital-to-Analog Converter */
  #define SIM_PDD_CLOCK_GATE_ADC      0x9CU        /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_FTM0     0xB8U        /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1     0xB9U        /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_CRC      0xB2U        /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI      0xACU        /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_DMAMUX   0xA1U        /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA      0xC8U        /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFA     0xA0U        /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_PIT      0xB7U        /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH0 0x78U        /**< Clock gate identifier for Pulse width modulator channel 0 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH1 0x79U        /**< Clock gate identifier for Pulse width modulator channel 1 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH2 0x7AU        /**< Clock gate identifier for Pulse width modulator channel 2 */
  #define SIM_PDD_CLOCK_GATE_PWMA_CH3 0x7BU        /**< Clock gate identifier for Pulse width modulator channel 3 */
  #define SIM_PDD_CLOCK_GATE_ENC      0x95U        /**< Clock gate identifier for Quadrature encoder/decoder */
  #define SIM_PDD_CLOCK_GATE_XBARA    0x99U        /**< Clock gate identifier for Inter-peripheral crossbar switch A */
  #define SIM_PDD_CLOCK_GATE_XBARB    0x9AU        /**< Clock gate identifier for Inter-peripheral crossbar switch B */
  #define SIM_PDD_CLOCK_GATE_PDB0     0xB6U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PDB1     0xB1U        /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CAN0     0xA4U        /**< Clock gate identifier for Flex controller area network 0 */
  #define SIM_PDD_CLOCK_GATE_CAN1     0xA5U        /**< Clock gate identifier for Flex controller area network 1 */
  #define SIM_PDD_CLOCK_GATE_AOI      0x97U        /**< Clock gate identifier for AND-OR-INVERT module */
  #define SIM_PDD_CLOCK_GATE_FTM3     0xA6U        /**< Clock gate identifier for FlexTimer Module 3 */

#elif (defined(MCU_MKW01Z4))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1  0x6BU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_UART2  0x6CU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 2 */
  #define SIM_PDD_CLOCK_GATE_I2C0   0x66U          /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1   0x67U          /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC  0x8BU          /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD  0x8CU          /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE  0x8DU          /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0 0x80U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0   0xBFU          /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0   0xBBU          /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC    0xBDU          /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_TPM0   0xB8U          /**< Clock gate identifier for Timer PWM module 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1   0xB9U          /**< Clock gate identifier for Timer PWM module 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2   0xBAU          /**< Clock gate identifier for Timer PWM module 2 */

#elif (defined(MCU_MKW21D5))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1  0x6BU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_UART2  0x6CU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 2 */
  #define SIM_PDD_CLOCK_GATE_I2C0   0x66U          /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1   0x67U          /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_EWM    0x61U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC  0x8BU          /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD  0x8CU          /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE  0x8DU          /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0 0x80U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0   0xBFU          /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0   0xBBU          /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC    0xBDU          /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_FTM0   0xB8U          /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1   0xB9U          /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2   0xBAU          /**< Clock gate identifier for FlexTimer Module 2 */
  #define SIM_PDD_CLOCK_GATE_PDB0   0xB6U          /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CRC    0xB2U          /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI0   0xACU          /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1   0xADU          /**< Clock gate identifier for Serial Peripheral Interface 1 */
  #define SIM_PDD_CLOCK_GATE_DMAMUX 0xA1U          /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA    0xC8U          /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFL   0xA0U          /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_CMT    0x62U          /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_PIT    0xB7U          /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_I2S0   0xAFU          /**< Clock gate identifier for Integrated Interchip Sound (I2S) */
  #define SIM_PDD_CLOCK_GATE_RNG    0xA9U          /**< Clock gate identifier for Random number generator accelerator */

#elif (defined(MCU_MKW21D5WS))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP        0x73U      /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0      0x6AU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1      0x6BU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_UART2      0x6CU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 2 */
  #define SIM_PDD_CLOCK_GATE_I2C0       0x66U      /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1       0x67U      /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_EWM        0x61U      /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA      0x89U      /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB      0x8AU      /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC      0x8BU      /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD      0x8CU      /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE      0x8DU      /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0     0x80U      /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0       0xBFU      /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0       0xBBU      /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC        0xBDU      /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_FTM0       0xB8U      /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1       0xB9U      /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2       0xBAU      /**< Clock gate identifier for FlexTimer Module 2 */
  #define SIM_PDD_CLOCK_GATE_PDB0       0xB6U      /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CRC        0xB2U      /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI0       0xACU      /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1       0xADU      /**< Clock gate identifier for Serial Peripheral Interface 1 */
  #define SIM_PDD_CLOCK_GATE_DMAMUX     0xA1U      /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA        0xC8U      /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFL       0xA0U      /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_CMT        0x62U      /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_DRY        0x82U      /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG 0x83U      /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PIT        0xB7U      /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_I2S0       0xAFU      /**< Clock gate identifier for Integrated Interchip Sound (I2S) */
  #define SIM_PDD_CLOCK_GATE_RNG        0xA9U      /**< Clock gate identifier for Random number generator accelerator */

#elif ((defined(MCU_MK20D5)) || (defined(MCU_PCK20L4)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFL            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */

#elif ((defined(MCU_MK60F12)) || (defined(MCU_MK60F15)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET             0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */

#elif ((defined(MCU_MK61F12)) || (defined(MCU_MK61F15)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET             0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_DDR              0x4EU /**< Clock gate identifier for  Dual data rate memory controller */

#elif ((defined(MCU_MK61F12WS)) || (defined(MCU_MK61F15WS)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET             0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_DRY              0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG       0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_DDR              0x4EU /**< Clock gate identifier for  Dual data rate memory controller */

#elif ((defined(MCU_MK63F12)) || (defined(MCU_MK64F12)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_UART5           0xBU  /**< Clock gate identifier for UART5 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0xA9U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2            0xBAU /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */

#elif ((defined(MCU_MK65F18)) || (defined(MCU_MK66F18)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_I2C2            0x6U  /**< Clock gate identifier for I2C2 */
  #define SIM_PDD_CLOCK_GATE_I2C3            0x7U  /**< Clock gate identifier for I2C3 */
  #define SIM_PDD_CLOCK_GATE_UART4           0xAU  /**< Clock gate identifier for UART4 */
  #define SIM_PDD_CLOCK_GATE_ENET            0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_LPUART0         0x24U /**< Clock gate identifier for LPUART 0 */
  #define SIM_PDD_CLOCK_GATE_TPM1            0x29U /**< Clock gate identifier for Low Power TPM 1 */
  #define SIM_PDD_CLOCK_GATE_TPM2            0x2AU /**< Clock gate identifier for Low Power TPM 2 */
  #define SIM_PDD_CLOCK_GATE_DAC0            0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1            0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA            0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_USBHS           0x41U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBPHY          0x42U /**< Clock gate identifier for USBPHY */
  #define SIM_PDD_CLOCK_GATE_USBHSDCD        0x43U /**< Clock gate identifier for USBHSDCD */
  #define SIM_PDD_CLOCK_GATE_CAN1            0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_SPI2            0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_SDHC            0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_FTM2            0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3            0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1            0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_EWM             0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT             0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0            0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1            0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0           0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1           0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2           0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3           0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0            0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP             0x73U /**< Clock gate identifier for High-speed comparator (CMP) / 6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF            0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0          0x80U /**< Clock gate identifier for Low-power timer */
  #define SIM_PDD_CLOCK_GATE_TSI0            0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA           0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB           0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC           0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD           0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE           0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_FTFE            0xA0U /**< Clock gate identifier for Flash memory */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_CAN0            0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0            0xACU /**< Clock gate identifier for SPI0 */
  #define SIM_PDD_CLOCK_GATE_SPI1            0xADU /**< Clock gate identifier for SPI1 */
  #define SIM_PDD_CLOCK_GATE_I2S0            0xAFU /**< Clock gate identifier for I2S0 */
  #define SIM_PDD_CLOCK_GATE_CRC             0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBDCD          0xB5U /**< Clock gate identifier for USBDCD */
  #define SIM_PDD_CLOCK_GATE_PDB0            0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT             0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0            0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1            0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0            0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_RTC             0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB              0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA             0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU             0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_SDRAM           0xC3U /**< Clock gate identifier for Synchronous DRAM controller */

#elif ((defined(MCU_MK70F12)) || (defined(MCU_MK70F15)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET             0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_LCDC             0x56U /**< Clock gate identifier for Graphical LCD controller */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */
  #define SIM_PDD_CLOCK_GATE_DDR              0x4EU /**< Clock gate identifier for  Dual data rate memory controller */

#elif ((defined(MCU_MK70F12WS)) || (defined(MCU_MK70F15WS)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_OSC1             0x5U /**< Clock gate identifier for OSC1 */
  #define SIM_PDD_CLOCK_GATE_UART4            0xAU /**< Clock gate identifier for UART 4 */
  #define SIM_PDD_CLOCK_GATE_UART5            0xBU /**< Clock gate identifier for UART 5 */
  #define SIM_PDD_CLOCK_GATE_ENET             0x20U /**< Clock gate identifier for Ethernet MAC and IEEE 1588 timers */
  #define SIM_PDD_CLOCK_GATE_DAC0             0x2CU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 0 */
  #define SIM_PDD_CLOCK_GATE_DAC1             0x2DU /**< Clock gate identifier for 12-bit digital-to-analog converter (DAC) 1 */
  #define SIM_PDD_CLOCK_GATE_RNGA             0x40U /**< Clock gate identifier for Random number generator accelerator (RNGA) */
  #define SIM_PDD_CLOCK_GATE_CAN1             0x44U /**< Clock gate identifier for CAN 1 */
  #define SIM_PDD_CLOCK_GATE_NFC              0x48U /**< Clock gate identifier for NAND flash controller */
  #define SIM_PDD_CLOCK_GATE_SPI2             0x4CU /**< Clock gate identifier for SPI 2 */
  #define SIM_PDD_CLOCK_GATE_DDR              0x4EU /**< Clock gate identifier for  Dual data rate memory controller */
  #define SIM_PDD_CLOCK_GATE_I2S1             0x4FU /**< Clock gate identifier for I2S 1/SAI 1 */
  #define SIM_PDD_CLOCK_GATE_SDHC             0x51U /**< Clock gate identifier for SDHC */
  #define SIM_PDD_CLOCK_GATE_LCDC             0x56U /**< Clock gate identifier for Graphical LCD controller */
  #define SIM_PDD_CLOCK_GATE_FTM2             0x58U /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_FTM3             0x59U /**< Clock gate identifier for FlexTimer (FTM) 3 */
  #define SIM_PDD_CLOCK_GATE_ADC1             0x5BU /**< Clock gate identifier for Analog-to-digital converter (ADC) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC3             0x5CU /**< Clock gate identifier for Analog-to-digital converter (ADC) 3 */
  #define SIM_PDD_CLOCK_GATE_EWM              0x61U /**< Clock gate identifier for External watchdog */
  #define SIM_PDD_CLOCK_GATE_CMT              0x62U /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_I2C0             0x66U /**< Clock gate identifier for I2C0 */
  #define SIM_PDD_CLOCK_GATE_I2C1             0x67U /**< Clock gate identifier for I2C1 */
  #define SIM_PDD_CLOCK_GATE_UART0            0x6AU /**< Clock gate identifier for UART 0 */
  #define SIM_PDD_CLOCK_GATE_UART1            0x6BU /**< Clock gate identifier for UART 1 */
  #define SIM_PDD_CLOCK_GATE_UART2            0x6CU /**< Clock gate identifier for UART 2 */
  #define SIM_PDD_CLOCK_GATE_UART3            0x6DU /**< Clock gate identifier for UART 3 */
  #define SIM_PDD_CLOCK_GATE_USB0             0x72U /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_CMP              0x73U /**< Clock gate identifier for High-speed comparator (CMP)/6-bit digital-to-analog converter (DAC) */
  #define SIM_PDD_CLOCK_GATE_VREF             0x74U /**< Clock gate identifier for Voltage reference (VREF) */
  #define SIM_PDD_CLOCK_GATE_LLWU             0x7CU /**< Clock gate identifier for Low-leakage wakeup unit (LLWU) */
  #define SIM_PDD_CLOCK_GATE_LPTMR0           0x80U /**< Clock gate identifier for Low-power timer (LPTMR) */
  #define SIM_PDD_CLOCK_GATE_SYSTEM_REGS      0x81U /**< Clock gate identifier for System register file */
  #define SIM_PDD_CLOCK_GATE_DRY              0x82U /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG       0x83U /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_TSI0             0x85U /**< Clock gate identifier for Touch sense interface (TSI) */
  #define SIM_PDD_CLOCK_GATE_PORTA            0x89U /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB            0x8AU /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC            0x8BU /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD            0x8CU /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE            0x8DU /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_PORTF            0x8EU /**< Clock gate identifier for Port F control */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR0 0xA1U /**< Clock gate identifier for DMA channel mutiplexor 0 */
  #define SIM_PDD_CLOCK_GATE_DMA_MULTIPLEXOR1 0xA2U /**< Clock gate identifier for DMA channel mutiplexor 1 */
  #define SIM_PDD_CLOCK_GATE_CAN0             0xA4U /**< Clock gate identifier for CAN 0 */
  #define SIM_PDD_CLOCK_GATE_SPI0             0xACU /**< Clock gate identifier for SPI 0 */
  #define SIM_PDD_CLOCK_GATE_SPI1             0xADU /**< Clock gate identifier for SPI 1 */
  #define SIM_PDD_CLOCK_GATE_I2S0             0xAFU /**< Clock gate identifier for I2S 0/SAI 0 */
  #define SIM_PDD_CLOCK_GATE_CRC              0xB2U /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_USBHS            0xB4U /**< Clock gate identifier for USB OTG HS/FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD           0xB5U /**< Clock gate identifier for USB DCD */
  #define SIM_PDD_CLOCK_GATE_PDB0             0xB6U /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_PIT              0xB7U /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0             0xB8U /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1             0xB9U /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_ADC0             0xBBU /**< Clock gate identifier for Analog-to-digital converter (ADC) 0 */
  #define SIM_PDD_CLOCK_GATE_ADC2             0xBCU /**< Clock gate identifier for Analog-to-digital converter (ADC) 2 */
  #define SIM_PDD_CLOCK_GATE_RTC              0xBDU /**< Clock gate identifier for Real-time clock (RTC) */
  #define SIM_PDD_CLOCK_GATE_FB               0xC0U /**< Clock gate identifier for FlexBus */
  #define SIM_PDD_CLOCK_GATE_DMA              0xC1U /**< Clock gate identifier for DMA controller */
  #define SIM_PDD_CLOCK_GATE_MPU              0xC2U /**< Clock gate identifier for MPU */

#elif ((defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN84)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_RTC   0U              /**< Clock gate identifier for Real-Time Counter (RTC) */
  #define SIM_PDD_CLOCK_GATE_PIT   0x1U            /**< Clock gate identifier for Periodic Interrupt Timer (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWT   0x4U            /**< Clock gate identifier for Pulse Width Timer (PWT) */
  #define SIM_PDD_CLOCK_GATE_FTM0  0x5U            /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM2  0x7U            /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_CRC   0xAU            /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_FTMRE 0xCU            /**< Clock gate identifier for Flash Memory Module (FTMRE) */
  #define SIM_PDD_CLOCK_GATE_SWD   0xDU            /**< Clock gate identifier for Serial Wire Debug (SWD) */
  #define SIM_PDD_CLOCK_GATE_I2C0  0x11U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C0) */
  #define SIM_PDD_CLOCK_GATE_SPI0  0x12U           /**< Clock gate identifier for Serial Peripheral Interface (SPI0) */
  #define SIM_PDD_CLOCK_GATE_UART0 0x14U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART0) */
  #define SIM_PDD_CLOCK_GATE_KBI0  0x18U           /**< Clock gate identifier for Keyboard Interrupt (KBI0) */
  #define SIM_PDD_CLOCK_GATE_KBI1  0x19U           /**< Clock gate identifier for Keyboard Interrupt (KBI1) */
  #define SIM_PDD_CLOCK_GATE_IRQ   0x1BU           /**< Clock gate identifier for Interrupt (IRQ) */
  #define SIM_PDD_CLOCK_GATE_ADC   0x1DU           /**< Clock gate identifier for Analog-to-digital converter (ADC) */
  #define SIM_PDD_CLOCK_GATE_ACMP0 0x1EU           /**< Clock gate identifier for Analog comparator (ACMP0) */
  #define SIM_PDD_CLOCK_GATE_ACMP1 0x1FU           /**< Clock gate identifier for Analog comparator (ACMP1) */

#elif ((defined(MCU_MKE06Z4)) || (defined(MCU_SKEAZ1284)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_RTC   0U              /**< Clock gate identifier for Real-Time Counter (RTC) */
  #define SIM_PDD_CLOCK_GATE_PIT   0x1U            /**< Clock gate identifier for Periodic Interrupt Timer (PIT) */
  #define SIM_PDD_CLOCK_GATE_PWT   0x4U            /**< Clock gate identifier for Pulse Width Timer (PWT) */
  #define SIM_PDD_CLOCK_GATE_FTM0  0x5U            /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1  0x6U            /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2  0x7U            /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_CRC   0xAU            /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_FTMRE 0xCU            /**< Clock gate identifier for Flash Memory Module (FTMRE) */
  #define SIM_PDD_CLOCK_GATE_SWD   0xDU            /**< Clock gate identifier for Serial Wire Debug (SWD) */
  #define SIM_PDD_CLOCK_GATE_MSCAN 0xFU            /**< Clock gate identifier for Modular Scalable Controller Area Network (MSCAN) */
  #define SIM_PDD_CLOCK_GATE_I2C0  0x10U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C0) */
  #define SIM_PDD_CLOCK_GATE_I2C1  0x11U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C1) */
  #define SIM_PDD_CLOCK_GATE_SPI0  0x12U           /**< Clock gate identifier for Serial Peripheral Interface (SPI0) */
  #define SIM_PDD_CLOCK_GATE_SPI1  0x13U           /**< Clock gate identifier for Serial Peripheral Interface (SPI1) */
  #define SIM_PDD_CLOCK_GATE_UART0 0x14U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART0) */
  #define SIM_PDD_CLOCK_GATE_UART1 0x15U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART1) */
  #define SIM_PDD_CLOCK_GATE_UART2 0x16U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART2) */
  #define SIM_PDD_CLOCK_GATE_KBI0  0x18U           /**< Clock gate identifier for Keyboard Interrupt (KBI0) */
  #define SIM_PDD_CLOCK_GATE_KBI1  0x19U           /**< Clock gate identifier for Keyboard Interrupt (KBI1) */
  #define SIM_PDD_CLOCK_GATE_IRQ   0x1BU           /**< Clock gate identifier for Interrupt (IRQ) */
  #define SIM_PDD_CLOCK_GATE_ADC   0x1DU           /**< Clock gate identifier for Analog-to-digital converter (ADC) */
  #define SIM_PDD_CLOCK_GATE_ACMP0 0x1EU           /**< Clock gate identifier for Analog comparator (ACMP0) */
  #define SIM_PDD_CLOCK_GATE_ACMP1 0x1FU           /**< Clock gate identifier for Analog comparator (ACMP1) */

#elif ((defined(MCU_MKW22D5)) || (defined(MCU_MKW24D5)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP    0x73U          /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0  0x6AU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1  0x6BU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_UART2  0x6CU          /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 2 */
  #define SIM_PDD_CLOCK_GATE_I2C0   0x66U          /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1   0x67U          /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_EWM    0x61U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA  0x89U          /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB  0x8AU          /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC  0x8BU          /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD  0x8CU          /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE  0x8DU          /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0 0x80U          /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0   0xBFU          /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0   0xBBU          /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC    0xBDU          /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_FTM0   0xB8U          /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1   0xB9U          /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2   0xBAU          /**< Clock gate identifier for FlexTimer Module 2 */
  #define SIM_PDD_CLOCK_GATE_PDB0   0xB6U          /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CRC    0xB2U          /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI0   0xACU          /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1   0xADU          /**< Clock gate identifier for Serial Peripheral Interface 1 */
  #define SIM_PDD_CLOCK_GATE_DMAMUX 0xA1U          /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA    0xC8U          /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFL   0xA0U          /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_USB0   0x72U          /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD 0xB5U          /**< Clock gate identifier for USB Device Charger Detection Module */
  #define SIM_PDD_CLOCK_GATE_CMT    0x62U          /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_PIT    0xB7U          /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_I2S0   0xAFU          /**< Clock gate identifier for Integrated Interchip Sound (I2S) */
  #define SIM_PDD_CLOCK_GATE_RNG    0xA9U          /**< Clock gate identifier for Random number generator accelerator */

#elif ((defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5WS)))
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_CMP        0x73U      /**< Clock gate identifier for Comparators */
  #define SIM_PDD_CLOCK_GATE_UART0      0x6AU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 0 */
  #define SIM_PDD_CLOCK_GATE_UART1      0x6BU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 1 */
  #define SIM_PDD_CLOCK_GATE_UART2      0x6CU      /**< Clock gate identifier for Universal Asynchronous Receiver Transmitter 2 */
  #define SIM_PDD_CLOCK_GATE_I2C0       0x66U      /**< Clock gate identifier for Inter-Integrated Circuit 0 */
  #define SIM_PDD_CLOCK_GATE_I2C1       0x67U      /**< Clock gate identifier for Inter-Integrated Circuit 1 */
  #define SIM_PDD_CLOCK_GATE_EWM        0x61U      /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_PORTA      0x89U      /**< Clock gate identifier for Port A control */
  #define SIM_PDD_CLOCK_GATE_PORTB      0x8AU      /**< Clock gate identifier for Port B control */
  #define SIM_PDD_CLOCK_GATE_PORTC      0x8BU      /**< Clock gate identifier for Port C control */
  #define SIM_PDD_CLOCK_GATE_PORTD      0x8CU      /**< Clock gate identifier for Port D control */
  #define SIM_PDD_CLOCK_GATE_PORTE      0x8DU      /**< Clock gate identifier for Port E control */
  #define SIM_PDD_CLOCK_GATE_LPTMR0     0x80U      /**< Clock gate identifier for External Watchdog Monitor */
  #define SIM_PDD_CLOCK_GATE_DAC0       0xBFU      /**< Clock gate identifier for Digital-to-Analog Converter 0 */
  #define SIM_PDD_CLOCK_GATE_ADC0       0xBBU      /**< Clock gate identifier for Analog-to-Digital Converter 0 */
  #define SIM_PDD_CLOCK_GATE_RTC        0xBDU      /**< Clock gate identifier for Real-time clock (RTC) seconds LLWU source */
  #define SIM_PDD_CLOCK_GATE_FTM0       0xB8U      /**< Clock gate identifier for FlexTimer Module 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1       0xB9U      /**< Clock gate identifier for FlexTimer Module 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2       0xBAU      /**< Clock gate identifier for FlexTimer Module 2 */
  #define SIM_PDD_CLOCK_GATE_PDB0       0xB6U      /**< Clock gate identifier for Programmable delay block (PDB) */
  #define SIM_PDD_CLOCK_GATE_CRC        0xB2U      /**< Clock gate identifier for Cyclic Redundancy Check */
  #define SIM_PDD_CLOCK_GATE_SPI0       0xACU      /**< Clock gate identifier for Serial Peripheral Interface */
  #define SIM_PDD_CLOCK_GATE_SPI1       0xADU      /**< Clock gate identifier for Serial Peripheral Interface 1 */
  #define SIM_PDD_CLOCK_GATE_DMAMUX     0xA1U      /**< Clock gate identifier for Direct Memory Access Multiplexer */
  #define SIM_PDD_CLOCK_GATE_DMA        0xC8U      /**< Clock gate identifier for Direct Memory Access Controller */
  #define SIM_PDD_CLOCK_GATE_FTFL       0xA0U      /**< Clock gate identifier for Flash Memory Module */
  #define SIM_PDD_CLOCK_GATE_USB0       0x72U      /**< Clock gate identifier for USB OTG FS/LS */
  #define SIM_PDD_CLOCK_GATE_USBDCD     0xB5U      /**< Clock gate identifier for USB Device Charger Detection Module */
  #define SIM_PDD_CLOCK_GATE_CMT        0x62U      /**< Clock gate identifier for Carrier modulator timer (CMT) */
  #define SIM_PDD_CLOCK_GATE_DRY        0x82U      /**< Clock gate identifier for DryIce */
  #define SIM_PDD_CLOCK_GATE_DRY_SECREG 0x83U      /**< Clock gate identifier for DryIce secure storage */
  #define SIM_PDD_CLOCK_GATE_PIT        0xB7U      /**< Clock gate identifier for Periodic interrupt timers (PIT) */
  #define SIM_PDD_CLOCK_GATE_I2S0       0xAFU      /**< Clock gate identifier for Integrated Interchip Sound (I2S) */
  #define SIM_PDD_CLOCK_GATE_RNG        0xA9U      /**< Clock gate identifier for Random number generator accelerator */

#else /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_SKEAZN642)) */
/* Clock gate identifiers */
  #define SIM_PDD_CLOCK_GATE_RTC   0U              /**< Clock gate identifier for Real-Time Counter (RTC) */
  #define SIM_PDD_CLOCK_GATE_PIT   0x1U            /**< Clock gate identifier for Periodic Interrupt Timer (PIT) */
  #define SIM_PDD_CLOCK_GATE_FTM0  0x5U            /**< Clock gate identifier for FlexTimer (FTM) 0 */
  #define SIM_PDD_CLOCK_GATE_FTM1  0x6U            /**< Clock gate identifier for FlexTimer (FTM) 1 */
  #define SIM_PDD_CLOCK_GATE_FTM2  0x7U            /**< Clock gate identifier for FlexTimer (FTM) 2 */
  #define SIM_PDD_CLOCK_GATE_CRC   0xAU            /**< Clock gate identifier for CRC */
  #define SIM_PDD_CLOCK_GATE_FTMRH 0xCU            /**< Clock gate identifier for Flash Memory Module (FTMRH) */
  #define SIM_PDD_CLOCK_GATE_SWD   0xDU            /**< Clock gate identifier for Serial Wire Debug (SWD) */
  #define SIM_PDD_CLOCK_GATE_I2C0  0x11U           /**< Clock gate identifier for Inter-Integrated Circuit (I2C0) */
  #define SIM_PDD_CLOCK_GATE_SPI0  0x12U           /**< Clock gate identifier for Serial Peripheral Interface (SPI0) */
  #define SIM_PDD_CLOCK_GATE_SPI1  0x13U           /**< Clock gate identifier for Serial Peripheral Interface (SPI1) */
  #define SIM_PDD_CLOCK_GATE_UART0 0x14U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART0) */
  #define SIM_PDD_CLOCK_GATE_UART1 0x15U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART1) */
  #define SIM_PDD_CLOCK_GATE_KBI0  0x18U           /**< Clock gate identifier for Keyboard Interrupt (KBI0) */
  #define SIM_PDD_CLOCK_GATE_KBI1  0x19U           /**< Clock gate identifier for Keyboard Interrupt (KBI1) */
  #define SIM_PDD_CLOCK_GATE_IRQ   0x1BU           /**< Clock gate identifier for Interrupt (IRQ) */
  #define SIM_PDD_CLOCK_GATE_ADC   0x1DU           /**< Clock gate identifier for Analog-to-digital converter (ADC) */
  #define SIM_PDD_CLOCK_GATE_ACMP0 0x1EU           /**< Clock gate identifier for Analog comparator (ACMP0) */
  #define SIM_PDD_CLOCK_GATE_ACMP1 0x1FU           /**< Clock gate identifier for Analog comparator (ACMP1) */
  #define SIM_PDD_CLOCK_GATE_UART2 0x16U           /**< Clock gate identifier for Universal Asynchronous Receiver/Transmitter (UART2) */

#endif /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_SKEAZN642)) */
/* Clock 1 output divider constants */
#define SIM_PDD_CLK_OUT1_DIVIDER_1  0U           /**< Divide by 1 */
#define SIM_PDD_CLK_OUT1_DIVIDER_2  0x1U         /**< Divide by 2 */
#define SIM_PDD_CLK_OUT1_DIVIDER_3  0x2U         /**< Divide by 3 */
#define SIM_PDD_CLK_OUT1_DIVIDER_4  0x3U         /**< Divide by 4 */
#define SIM_PDD_CLK_OUT1_DIVIDER_5  0x4U         /**< Divide by 5 */
#define SIM_PDD_CLK_OUT1_DIVIDER_6  0x5U         /**< Divide by 6 */
#define SIM_PDD_CLK_OUT1_DIVIDER_7  0x6U         /**< Divide by 7 */
#define SIM_PDD_CLK_OUT1_DIVIDER_8  0x7U         /**< Divide by 8 */
#define SIM_PDD_CLK_OUT1_DIVIDER_9  0x8U         /**< Divide by 9 */
#define SIM_PDD_CLK_OUT1_DIVIDER_10 0x9U         /**< Divide by 10 */
#define SIM_PDD_CLK_OUT1_DIVIDER_11 0xAU         /**< Divide by 11 */
#define SIM_PDD_CLK_OUT1_DIVIDER_12 0xBU         /**< Divide by 12 */
#define SIM_PDD_CLK_OUT1_DIVIDER_13 0xCU         /**< Divide by 13 */
#define SIM_PDD_CLK_OUT1_DIVIDER_14 0xDU         /**< Divide by 14 */
#define SIM_PDD_CLK_OUT1_DIVIDER_15 0xEU         /**< Divide by 15 */
#define SIM_PDD_CLK_OUT1_DIVIDER_16 0xFU         /**< Divide by 16 */

#if ((defined(MCU_MKL03Z4)) || (defined(MCU_MKL13Z4)) || (defined(MCU_MKL23Z4)) || (defined(MCU_MKL33Z4)) || (defined(MCU_MKL43Z4)) || (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/* Clock 4 output divider constants */
  #define SIM_PDD_CLK_OUT4_DIVIDER_1 0U            /**< Divide by 1 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_2 0x1U          /**< Divide by 2 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_3 0x2U          /**< Divide by 3 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_4 0x3U          /**< Divide by 4 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_5 0x4U          /**< Divide by 5 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_6 0x5U          /**< Divide by 6 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_7 0x6U          /**< Divide by 7 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_8 0x7U          /**< Divide by 8 */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Clock 4 output divider constants */
  #define SIM_PDD_CLK_OUT4_DIVIDER_1  0U           /**< Divide by 1 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_2  0x1U         /**< Divide by 2 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_3  0x2U         /**< Divide by 3 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_4  0x3U         /**< Divide by 4 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_5  0x4U         /**< Divide by 5 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_6  0x5U         /**< Divide by 6 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_7  0x6U         /**< Divide by 7 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_8  0x7U         /**< Divide by 8 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_9  0x8U         /**< Divide by 9 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_10 0x9U         /**< Divide by 10 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_11 0xAU         /**< Divide by 11 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_12 0xBU         /**< Divide by 12 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_13 0xCU         /**< Divide by 13 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_14 0xDU         /**< Divide by 14 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_15 0xEU         /**< Divide by 15 */
  #define SIM_PDD_CLK_OUT4_DIVIDER_16 0xFU         /**< Divide by 16 */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Clock 5 output divider constants */
#define SIM_PDD_CLK_OUT5_DIVIDER_1 0U            /**< Divide by 1 */
#define SIM_PDD_CLK_OUT5_DIVIDER_2 0x1U          /**< Divide by 2 */
#define SIM_PDD_CLK_OUT5_DIVIDER_3 0x2U          /**< Divide by 3 */
#define SIM_PDD_CLK_OUT5_DIVIDER_4 0x3U          /**< Divide by 4 */
#define SIM_PDD_CLK_OUT5_DIVIDER_5 0x4U          /**< Divide by 5 */
#define SIM_PDD_CLK_OUT5_DIVIDER_6 0x5U          /**< Divide by 6 */
#define SIM_PDD_CLK_OUT5_DIVIDER_7 0x6U          /**< Divide by 7 */
#define SIM_PDD_CLK_OUT5_DIVIDER_8 0x7U          /**< Divide by 8 */

/* FTM3 channel pin mask constants. */
#define SIM_PDD_FTM3_CHANNEL7_OUTPUT SIM_SOPT8_FTM3OCH7SRC_MASK /**< FTM3 channel 7 output */
#define SIM_PDD_FTM3_CHANNEL6_OUTPUT SIM_SOPT8_FTM3OCH6SRC_MASK /**< FTM3 channel 6 output */
#define SIM_PDD_FTM3_CHANNEL5_OUTPUT SIM_SOPT8_FTM3OCH5SRC_MASK /**< FTM3 channel 5 output */
#define SIM_PDD_FTM3_CHANNEL4_OUTPUT SIM_SOPT8_FTM3OCH4SRC_MASK /**< FTM3 channel 4 output */
#define SIM_PDD_FTM3_CHANNEL3_OUTPUT SIM_SOPT8_FTM3OCH3SRC_MASK /**< FTM3 channel 3 output */
#define SIM_PDD_FTM3_CHANNEL2_OUTPUT SIM_SOPT8_FTM3OCH2SRC_MASK /**< FTM3 channel 2 output */
#define SIM_PDD_FTM3_CHANNEL1_OUTPUT SIM_SOPT8_FTM3OCH1SRC_MASK /**< FTM3 channel 1 output */
#define SIM_PDD_FTM3_CHANNEL0_OUTPUT SIM_SOPT8_FTM3OCH0SRC_MASK /**< FTM3 channel 0 output */

/* FTM0 channel pin mask constants. */
#define SIM_PDD_FTM0_CHANNEL7_OUTPUT SIM_SOPT8_FTM0OCH7SRC_MASK /**< FTM0 channel 7 output */
#define SIM_PDD_FTM0_CHANNEL6_OUTPUT SIM_SOPT8_FTM0OCH6SRC_MASK /**< FTM0 channel 6 output */
#define SIM_PDD_FTM0_CHANNEL5_OUTPUT SIM_SOPT8_FTM0OCH5SRC_MASK /**< FTM0 channel 5 output */
#define SIM_PDD_FTM0_CHANNEL4_OUTPUT SIM_SOPT8_FTM0OCH4SRC_MASK /**< FTM0 channel 4 output */
#define SIM_PDD_FTM0_CHANNEL3_OUTPUT SIM_SOPT8_FTM0OCH3SRC_MASK /**< FTM0 channel 3 output */
#define SIM_PDD_FTM0_CHANNEL2_OUTPUT SIM_SOPT8_FTM0OCH2SRC_MASK /**< FTM0 channel 2 output */
#define SIM_PDD_FTM0_CHANNEL1_OUTPUT SIM_SOPT8_FTM0OCH1SRC_MASK /**< FTM0 channel 1 output */
#define SIM_PDD_FTM0_CHANNEL0_OUTPUT SIM_SOPT8_FTM0OCH0SRC_MASK /**< FTM0 channel 0 output */

/* FTM channel mask constants. */
#define SIM_PDD_FTM3_TRIGGER0_INPUT SIM_SOPT8_FTM3SYNCBIT_MASK /**< Trigger 0 input to FTM3 */
#define SIM_PDD_FTM1_TRIGGER0_INPUT SIM_SOPT8_FTM1SYNCBIT_MASK /**< Trigger 0 input to FTM1 */
#define SIM_PDD_FTM0_TRIGGER0_INPUT SIM_SOPT8_FTM0SYNCBIT_MASK /**< Trigger 0 input to FTM0 */

/* Clock 2 output divider constants */
#define SIM_PDD_CLK_OUT2_DIVIDER_1  0U           /**< Divide by 1 */
#define SIM_PDD_CLK_OUT2_DIVIDER_2  0x1U         /**< Divide by 2 */
#define SIM_PDD_CLK_OUT2_DIVIDER_3  0x2U         /**< Divide by 3 */
#define SIM_PDD_CLK_OUT2_DIVIDER_4  0x3U         /**< Divide by 4 */
#define SIM_PDD_CLK_OUT2_DIVIDER_5  0x4U         /**< Divide by 5 */
#define SIM_PDD_CLK_OUT2_DIVIDER_6  0x5U         /**< Divide by 6 */
#define SIM_PDD_CLK_OUT2_DIVIDER_7  0x6U         /**< Divide by 7 */
#define SIM_PDD_CLK_OUT2_DIVIDER_8  0x7U         /**< Divide by 8 */
#define SIM_PDD_CLK_OUT2_DIVIDER_9  0x8U         /**< Divide by 9 */
#define SIM_PDD_CLK_OUT2_DIVIDER_10 0x9U         /**< Divide by 10 */
#define SIM_PDD_CLK_OUT2_DIVIDER_11 0xAU         /**< Divide by 11 */
#define SIM_PDD_CLK_OUT2_DIVIDER_12 0xBU         /**< Divide by 12 */
#define SIM_PDD_CLK_OUT2_DIVIDER_13 0xCU         /**< Divide by 13 */
#define SIM_PDD_CLK_OUT2_DIVIDER_14 0xDU         /**< Divide by 14 */
#define SIM_PDD_CLK_OUT2_DIVIDER_15 0xEU         /**< Divide by 15 */
#define SIM_PDD_CLK_OUT2_DIVIDER_16 0xFU         /**< Divide by 16 */

#if ((defined(MCU_MKL03Z4)) || (defined(MCU_MKL13Z4)) || (defined(MCU_MKL23Z4)) || (defined(MCU_MKL33Z4)) || (defined(MCU_MKL43Z4)))
/* Clock sources */
  #define SIM_PDD_LPUART0_DISABLE_CLOCK           0U /**< Disable the clock. */
  #define SIM_PDD_LPUART0_FAST_INTERNAL_REF_CLOCK 0x4000000U /**< Fast internal reference clock. */
  #define SIM_PDD_LPUART0_EXTERNAL_REF_CLOCK      0x8000000U /**< External reference clock. */
  #define SIM_PDD_LPUART0_SLOW_INTERNAL_REF_CLOCK 0xC000000U /**< Slow internal reference clock. */

#else /* (defined(MCU_MK22F12810)) || (defined(MCU_MK22F25612)) || (defined(MCU_MK22F51212)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MKV31F12810)) || (defined(MCU_MKV31F25612)) || (defined(MCU_MKV31F51212)) */
/* Clock sources */
  #define SIM_PDD_LPUART0_DISABLE_CLOCK      0U    /**< Disable the clock. */
  #define SIM_PDD_LPUART0_PLL_FLL_CLOCK      0x4000000U /**< MCG PLL or FLL clock. */
  #define SIM_PDD_LPUART0_EXTERNAL_REF_CLOCK 0x8000000U /**< External reference clock. */
  #define SIM_PDD_LPUART0_INTERNAL_REF_CLOCK 0xC000000U /**< Internal reference clock. */

#endif /* (defined(MCU_MK22F12810)) || (defined(MCU_MK22F25612)) || (defined(MCU_MK22F51212)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MKV31F12810)) || (defined(MCU_MKV31F25612)) || (defined(MCU_MKV31F51212)) */
#if ((defined(MCU_MKL02Z4)) || (defined(MCU_MKL04Z4)) || (defined(MCU_MKL05Z4)))
/* Clock sources */
  #define SIM_PDD_UART0_DISABLE_CLOCK      0U      /**< Disable the clock. */
  #define SIM_PDD_UART0_FLL_CLOCK          0x4000000U /**< MCG FLL clock. */
  #define SIM_PDD_UART0_EXTERNAL_REF_CLOCK 0x8000000U /**< External reference clock. */
  #define SIM_PDD_UART0_INTERNAL_REF_CLOCK 0xC000000U /**< Internal reference clock. */

#else /* (defined(MCU_MKL14Z4)) || (defined(MCU_MKL15Z4)) || (defined(MCU_MKL16Z4)) || (defined(MCU_MKL24Z4)) || (defined(MCU_MKL25Z4)) || (defined(MCU_MKL26Z4)) || (defined(MCU_MKL34Z4)) || (defined(MCU_MKL36Z4)) || (defined(MCU_MKL46Z4)) */
/* Clock sources */
  #define SIM_PDD_UART0_DISABLE_CLOCK      0U      /**< Disable the clock. */
  #define SIM_PDD_UART0_PLL_FLL_CLOCK      0x4000000U /**< MCG PLL or FLL clock. */
  #define SIM_PDD_UART0_EXTERNAL_REF_CLOCK 0x8000000U /**< External reference clock. */
  #define SIM_PDD_UART0_INTERNAL_REF_CLOCK 0xC000000U /**< Internal reference clock. */

#endif /* (defined(MCU_MKL14Z4)) || (defined(MCU_MKL15Z4)) || (defined(MCU_MKL16Z4)) || (defined(MCU_MKL24Z4)) || (defined(MCU_MKL25Z4)) || (defined(MCU_MKL26Z4)) || (defined(MCU_MKL34Z4)) || (defined(MCU_MKL36Z4)) || (defined(MCU_MKL46Z4)) */
/* Clock sources */
#define SIM_PDD_LPUART1_DISABLE_CLOCK           0U /**< Disable the clock. */
#define SIM_PDD_LPUART1_FAST_INTERNAL_REF_CLOCK 0x10000000U /**< Fast internal reference clock. */
#define SIM_PDD_LPUART1_EXTERNAL_REF_CLOCK      0x20000000U /**< External reference clock. */
#define SIM_PDD_LPUART1_SLOW_INTERNAL_REF_CLOCK 0x30000000U /**< Slow internal reference clock. */

#if ((defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)))
/* 32 kHz clock source constants */
  #define SIM_PDD_LPTMR_SYSTEM_OSCILLATOR    0U    /**< System oscillator (OSC32KCLK) */
  #define SIM_PDD_LPTMR_RTC_32KHZ_OSCILLATOR 0x80000U /**< RTC 32.768kHz oscillator (RTC clock) */
  #define SIM_PDD_LPTMR_LOW_POWER_OSCILLATOR 0xC0000U /**< Low power oscillator 1kHz (LPO) */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW01Z4)) */
/* 32 kHz clock source constants */
  #define SIM_PDD_LPTMR_SYSTEM_OSCILLATOR    0U    /**< System oscillator (OSC32KCLK) */
  #define SIM_PDD_LPTMR_LOW_POWER_OSCILLATOR 0xC0000U /**< Low power oscillator 1kHz (LPO) */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW01Z4)) */
/* Clock for FTMx constants */
#define SIM_PDD_FTM_FIXED_FREQUENCY    0U        /**< Fixed frequency clock (MCGFFCLK) */
#define SIM_PDD_FTM_INTERNAL_REFERENCE 0x1000000U /**< Internal reference clock (MCGIRCLK) */
#define SIM_PDD_FTM_SYSTEM_OSCILLATOR  0x2000000U /**< System oscillator clock (OSCERCLK) */

/* Clock to output on the CLKOUT pin constants */
#define SIM_PDD_CLKOUT_BUS_CLOCK            0x40U /**< Bus clock */
#define SIM_PDD_CLKOUT_LOW_POWER_OSCILLATOR 0x60U /**< Low power oscillator 1kHz (LPO) */
#define SIM_PDD_CLKOUT_INTERNAL_REFERENCE   0x80U /**< Internal reference clock (MCGIRCLK) */
#define SIM_PDD_CLKOUT_SYSTEM_OSCILLATOR    0xC0U /**< System oscillator clock (OSCERCLK) */

#if (defined(MCU_MKV10Z7))
/* FTM2 external clock pin constants */
  #define SIM_PDD_FTM2_CLKIN0_PIN 0U               /**< FTM2 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM2_CLKIN1_PIN 0x10000000U      /**< FTM2 external clock driven by FTM_CLKIN1 pin */
  #define SIM_PDD_FTM2_CLKIN2_PIN 0x20000000U      /**< FTM2 external clock driven by FTM_CLKIN2 pin */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* FTM2 external clock pin constants */
  #define SIM_PDD_FTM2_CLKIN0_PIN 0U               /**< FTM2 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM2_CLKIN1_PIN 0x4000000U       /**< FTM2 external clock driven by FTM_CLKIN1 pin */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKV10Z7))
/* FTM1 external clock pin constants */
  #define SIM_PDD_FTM1_CLKIN0_PIN 0U               /**< FTM1 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM1_CLKIN1_PIN 0x4000000U       /**< FTM1 external clock driven by FTM_CLKIN1 pin */
  #define SIM_PDD_FTM1_CLKIN2_PIN 0x8000000U       /**< FTM1 external clock driven by FTM_CLKIN2 pin */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* FTM1 external clock pin constants */
  #define SIM_PDD_FTM1_CLKIN0_PIN 0U               /**< FTM1 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM1_CLKIN1_PIN 0x2000000U       /**< FTM1 external clock driven by FTM_CLKIN1 pin */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKV10Z7))
/* FTM0 external clock pin constants */
  #define SIM_PDD_FTM0_CLKIN0_PIN 0U               /**< FTM0 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM0_CLKIN1_PIN 0x1000000U       /**< FTM0 external clock driven by FTM_CLKIN1 pin */
  #define SIM_PDD_FTM0_CLKIN2_PIN 0x2000000U       /**< FTM0 external clock driven by FTM_CLKIN2 pin */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* FTM0 external clock pin constants */
  #define SIM_PDD_FTM0_CLKIN0_PIN 0U               /**< FTM0 external clock driven by FTM_CLKIN0 pin */
  #define SIM_PDD_FTM0_CLKIN1_PIN 0x1000000U       /**< FTM0 external clock driven by FTM_CLKIN1 pin */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* FTM2 channel 1 input capture source constants */
#define SIM_PDD_FTM2_CH1_INPUT_FTM2_CH1                           0U /**< FTM2_CH1 pin is fed to FTM2 CH1 */
#define SIM_PDD_FTM2_CH1_INPUT_FTM2_CH1_XOR_FTM2_CH0_XOR_FTM1_CH1 0x400000U /**< FTM2_CH1 pin XOR FTM2_CH0 pin XOR FTM1_CH1 pin is fed to FTM2 CH1 */

/* FTM2 channel 0 input capture source constants */
#define SIM_PDD_FTM2_CH0_INPUT_FTM2_CH0 0U       /**< FTM2_CH0 signal */
#define SIM_PDD_FTM2_CH0_INPUT_CMP0     0x100000U /**< CMP0 output */
#define SIM_PDD_FTM2_CH0_INPUT_CMP1     0x200000U /**< CMP1 output */

#if (defined(MCU_MKV10Z7))
/* FTM1 channel 0 input capture source constants */
  #define SIM_PDD_FTM1_CH0_INPUT_FTM1_CH0 0U       /**< FTM1_CH0 signal */
  #define SIM_PDD_FTM1_CH0_INPUT_CMP0     0x40000U /**< CMP0 output */
  #define SIM_PDD_FTM1_CH0_INPUT_CMP1     0x80000U /**< CMP1 output */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* FTM1 channel 0 input capture source constants */
  #define SIM_PDD_FTM1_CH0_INPUT_FTM1_CH0 0U       /**< FTM1_CH0 signal */
  #define SIM_PDD_FTM1_CH0_INPUT_CMP0     0x40000U /**< CMP0 output */
  #define SIM_PDD_FTM1_CH0_INPUT_CMP1     0x80000U /**< CMP1 output */
  #define SIM_PDD_FTM1_CH0_INPUT_USB      0xC0000U /**< USB start of frame pulse */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM2 hardware trigger 2 constants */
#define SIM_PDD_FTM2_TRIGGER2_CMP0_OUTPUT 0U     /**< CMP0 output */
#define SIM_PDD_FTM2_TRIGGER2_CMP1_OUTPUT 0x8000U /**< CMP1 output */

/* Source of FTM2 hardware trigger 1 constants */
#define SIM_PDD_FTM2_TRIGGER1_PDB_TRIGGER1 0U    /**< PDB output trigger 1 */
#define SIM_PDD_FTM2_TRIGGER1_FTM1_MATCH   0x4000U /**< FTM1 channel match */

/* Source of FTM2 hardware trigger 0 constants */
#define SIM_PDD_FTM2_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
#define SIM_PDD_FTM2_TRIGGER0_FTM0_MATCH  0x2000U /**< FTM0 channel match */

#if (defined(MCU_MKV10Z7))
/* Source of FTM1 hardware trigger 2 constants */
  #define SIM_PDD_FTM1_TRIGGER2_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM1_TRIGGER2_CMP1_OUTPUT 0x1000U /**< CMP1 output */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/* Source of FTM1 hardware trigger 2 constants */
  #define SIM_PDD_FTM1_TRIGGER2_FTM1_FLT0_PIN 0U   /**< FTM1_FLT0 pin */
  #define SIM_PDD_FTM1_TRIGGER2_ABARA_OUT35   0x400000U /**< XBARA output 35 */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/* Source of FTM1 hardware trigger 1 constants */
#define SIM_PDD_FTM1_TRIGGER1_PDB_CHANNEL1 0U    /**< PDB channel 1 trigger */
#define SIM_PDD_FTM1_TRIGGER1_FTM2_MATCH   0x800U /**< FTM2 channel match */

#if (defined(MCU_MKV10Z7))
/* Source of FTM1 hardware trigger 0 constants */
  #define SIM_PDD_FTM1_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM1_TRIGGER0_FTM0_MATCH  0x400U /**< FTM0 channel match */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/* Source of FTM1 hardware trigger 0 constants */
  #define SIM_PDD_FTM1_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM1_TRIGGER0_FTM0_MATCH  0x100000U /**< FTM0 channel match */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
#if (defined(MCU_MKV10Z7))
/* Source of FTM0 hardware trigger 2 constants */
  #define SIM_PDD_FTM0_TRIGGER2_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM0_TRIGGER2_CMP1_OUTPUT 0x200U /**< CMP1 output */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/* Source of FTM0 hardware trigger 2 constants */
  #define SIM_PDD_FTM0_TRIGGER2_FTM0_FLT0_PIN 0U   /**< FTM0_FLT0 pin */
  #define SIM_PDD_FTM0_TRIGGER2_ABARA_OUT34   0x40000U /**< XBARA output 34 */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
#if (defined(MCU_MKV10Z7))
/* Source of FTM0 hardware trigger 1 constants */
  #define SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL1 0U    /**< PDB channel 1 trigger */
  #define SIM_PDD_FTM0_TRIGGER1_FTM2_MATCH   0x100U /**< FTM2 channel match */

#elif ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Source of FTM0 hardware trigger 1 constants */
  #define SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL0 0U    /**< PDB0 output trigger */
  #define SIM_PDD_FTM0_TRIGGER1_FTM1_MATCH   0x20000U /**< FTM1 channel match */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM0 hardware trigger 1 constants */
  #define SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL1 0U    /**< PDB channel 1 trigger */
  #define SIM_PDD_FTM0_TRIGGER1_FTM2_MATCH   0x20000000U /**< FTM2 channel match */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKV10Z7))
/* Source of FTM0 hardware trigger 0 constants */
  #define SIM_PDD_FTM0_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM0_TRIGGER0_FTM1_MATCH  0x80U  /**< FTM1 channel match */

#elif ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Source of FTM0 hardware trigger 0 constants */
  #define SIM_PDD_FTM0_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM0_TRIGGER0_FTM1_MATCH  0x10000U /**< FTM1 channel match */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM0 hardware trigger 0 constants */
  #define SIM_PDD_FTM0_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
  #define SIM_PDD_FTM0_TRIGGER0_FTM1_MATCH  0x10000000U /**< FTM1 channel match */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKV10Z7))
/* Source of FTM2 fault 0 constants */
  #define SIM_PDD_FTM2_FAULT0_FTM2_FLT0_PIN 0U     /**< FTM2_FLT0 pin */
  #define SIM_PDD_FTM2_FAULT0_CMP0_OUTPUT   0x8U   /**< CMP0 output */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM2 fault 0 constants */
  #define SIM_PDD_FTM2_FAULT0_FTM2_FLT0_PIN 0U     /**< FTM2_FLT0 pin */
  #define SIM_PDD_FTM2_FAULT0_CMP0_OUTPUT   0x100U /**< CMP0 output */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKV10Z7))
/* Source of FTM1 fault 0 constants */
  #define SIM_PDD_FTM1_FAULT0_FTM1_FLT0_PIN 0U     /**< FTM1_FLT0 pin */
  #define SIM_PDD_FTM1_FAULT0_CMP0_OUTPUT   0x4U   /**< CMP0 output */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM1 fault 0 constants */
  #define SIM_PDD_FTM1_FAULT0_FTM1_FLT0_PIN 0U     /**< FTM1_FLT0 pin */
  #define SIM_PDD_FTM1_FAULT0_CMP0_OUTPUT   0x10U  /**< CMP0 output */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM0 fault 1 constants */
#define SIM_PDD_FTM0_FAULT1_FTM0_FLT1_PIN 0U     /**< FTM0_FLT1 pin */
#define SIM_PDD_FTM0_FAULT1_CMP1_OUTPUT   0x2U   /**< CMP1 output */

#if (defined(MCU_MKV10Z7))
/* Source of FTM0 fault 0 constants */
  #define SIM_PDD_FTM0_FAULT0_FTM0_FLT0_PIN 0U     /**< FTM0_FLT0 pin */
  #define SIM_PDD_FTM0_FAULT0_CMP1_OUTPUT   0x1U   /**< CMP1 output */

#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of FTM0 fault 0 constants */
  #define SIM_PDD_FTM0_FAULT0_FTM0_FLT0_PIN 0U     /**< FTM0_FLT0 pin */
  #define SIM_PDD_FTM0_FAULT0_CMP0_OUTPUT   0x1U   /**< CMP0 output */

#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKW01Z4))
/* Source of UART 1 RxD constants */
  #define SIM_PDD_UART1_RX_PIN      0U             /**< UART1_RX pin */
  #define SIM_PDD_UART1_CMP0_OUTPUT 0x40U          /**< CMP0 output */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of UART 1 RxD constants */
  #define SIM_PDD_UART1_RX_PIN      0U             /**< UART1_RX pin */
  #define SIM_PDD_UART1_CMP0_OUTPUT 0x40U          /**< CMP0 output */
  #define SIM_PDD_UART1_CMP1_OUTPUT 0x80U          /**< CMP1 output */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Source of UART 1 TxD constants */
  #define SIM_PDD_UART1_TX_PIN                         0U /**< UART1_TX pin */
  #define SIM_PDD_UART1_TX_PIN_MUDULATED_FTM1_CHANNEL0 0x10U /**< UART1 Tx pin modulated with FTM1 channel 0 output */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of UART 1 TxD constants */
  #define SIM_PDD_UART1_TX_PIN                         0U /**< UART1_TX pin */
  #define SIM_PDD_UART1_TX_PIN_MUDULATED_FTM1_CHANNEL0 0x10U /**< UART1 Tx pin modulated with FTM1 channel 0 output */
  #define SIM_PDD_UART1_TX_PIN_MUDULATED_FTM2_CHANNEL0 0x20U /**< UART1 Tx pin modulated with FTM2 channel 0 output */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if (defined(MCU_MKW01Z4))
/* Source of UART 0 RxD constants */
  #define SIM_PDD_UART0_RX_PIN      0U             /**< UART1_RX pin */
  #define SIM_PDD_UART0_CMP0_OUTPUT 0x4U           /**< CMP0 output */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of UART 0 RxD constants */
  #define SIM_PDD_UART0_RX_PIN      0U             /**< UART1_RX pin */
  #define SIM_PDD_UART0_CMP0_OUTPUT 0x4U           /**< CMP0 output */
  #define SIM_PDD_UART0_CMP1_OUTPUT 0x8U           /**< CMP1 output */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Source of UART 0 TxD constants */
  #define SIM_PDD_UART0_TX_PIN                         0U /**< UART1_TX pin */
  #define SIM_PDD_UART0_TX_PIN_MUDULATED_FTM1_CHANNEL0 0x10U /**< UART1 Tx pin modulated with FTM1 channel 0 output */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Source of UART 0 TxD constants */
  #define SIM_PDD_UART0_TX_PIN                         0U /**< UART1_TX pin */
  #define SIM_PDD_UART0_TX_PIN_MUDULATED_FTM1_CHANNEL0 0x10U /**< UART1 Tx pin modulated with FTM1 channel 0 output */
  #define SIM_PDD_UART0_TX_PIN_MUDULATED_FTM2_CHANNEL0 0x20U /**< UART1 Tx pin modulated with FTM2 channel 0 output */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* ADC1 alternate clock source constants */
#define SIM_PDD_ADC1_ALT_CLK_CORE_CLK_DIV_5     0U /**< Core frequency divided by 5 (OUTDIV5) */
#define SIM_PDD_ADC1_ALT_CLK_INTERNAL_REFERENCE 0x4000000U /**< Internal reference clock (MCGIRCLK) */
#define SIM_PDD_ADC1_ALT_CLK_SYSTEM_OSCILLATOR  0x8000000U /**< System oscillator clock (OSCERCLK) */

/* ADC0 alternate clock source constants */
#define SIM_PDD_ADC0_ALT_CLK_CORE_CLK_DIV_5     0U /**< Core frequency divided by 5 (OUTDIV5) */
#define SIM_PDD_ADC0_ALT_CLK_INTERNAL_REFERENCE 0x1000000U /**< Internal reference clock (MCGIRCLK) */
#define SIM_PDD_ADC0_ALT_CLK_SYSTEM_OSCILLATOR  0x2000000U /**< System oscillator clock (OSCERCLK) */

/* ADC1 pre-trigger source constants */
#define SIM_PDD_ADC1_PRE_TRIGGER_A 0U            /**< Pre-trigger A */
#define SIM_PDD_ADC1_PRE_TRIGGER_B 0x1000U       /**< Pre-trigger B */

/* ADC1 trigger source constants */
#define SIM_PDD_ADC1_TRIGGER_EXTERNAL_PIN          0U /**< External trigger pin input (PDB0_EXTRG) */
#define SIM_PDD_ADC1_TRIGGER_CMP0_OUTPUT           0x100U /**< HSCMP0 output */
#define SIM_PDD_ADC1_TRIGGER_CMP1_OUTPUT           0x200U /**< HSCMP1 output */
#define SIM_PDD_ADC1_TRIGGER_DMA_CHANNEL0_COMPLETE 0x400U /**< DMA channel 0 transfer last write complete */
#define SIM_PDD_ADC1_TRIGGER_DMA_CHANNEL1_COMPLETE 0x500U /**< DMA channel 1 transfer last write complete */
#define SIM_PDD_ADC1_TRIGGER_DMA_CHANNEL2_COMPLETE 0x600U /**< DMA channel 2 transfer last write complete */
#define SIM_PDD_ADC1_TRIGGER_DMA_CHANNEL3_COMPLETE 0x700U /**< DMA channel 3 transfer last write complete */
#define SIM_PDD_ADC1_TRIGGER_FTM0_OVERFLOW         0x800U /**< FTM0 overflow */
#define SIM_PDD_ADC1_TRIGGER_FTM1_OVERFLOW         0x900U /**< FTM1 overflow */
#define SIM_PDD_ADC1_TRIGGER_FTM2_OVERFLOW         0xA00U /**< FTM2 overflow */
#define SIM_PDD_ADC1_TRIGGER_LOW_POWER_TIMER0      0xE00U /**< LPTMR0 trigger */

/* ADC0 pre-trigger source constants */
#define SIM_PDD_ADC0_PRE_TRIGGER_A 0U            /**< Pre-trigger A */
#define SIM_PDD_ADC0_PRE_TRIGGER_B 0x10U         /**< Pre-trigger B */

#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/* ADC0 trigger source constants */
  #define SIM_PDD_ADC0_TRIGGER_EXTERNAL_PIN          0U /**< External trigger pin input (PDB0_EXTRG) */
  #define SIM_PDD_ADC0_TRIGGER_CMP0_OUTPUT           0x1U /**< HSCMP0 output */
  #define SIM_PDD_ADC0_TRIGGER_CMP1_OUTPUT           0x2U /**< HSCMP1 output */
  #define SIM_PDD_ADC0_TRIGGER_DMA_CHANNEL0_COMPLETE 0x4U /**< DMA channel 0 transfer last write complete */
  #define SIM_PDD_ADC0_TRIGGER_DMA_CHANNEL1_COMPLETE 0x5U /**< DMA channel 1 transfer last write complete */
  #define SIM_PDD_ADC0_TRIGGER_DMA_CHANNEL2_COMPLETE 0x6U /**< DMA channel 2 transfer last write complete */
  #define SIM_PDD_ADC0_TRIGGER_DMA_CHANNEL3_COMPLETE 0x7U /**< DMA channel 3 transfer last write complete */
  #define SIM_PDD_ADC0_TRIGGER_FTM0_OVERFLOW         0x8U /**< FTM0 overflow */
  #define SIM_PDD_ADC0_TRIGGER_FTM1_OVERFLOW         0x9U /**< FTM1 overflow */
  #define SIM_PDD_ADC0_TRIGGER_FTM2_OVERFLOW         0xAU /**< FTM2 overflow */
  #define SIM_PDD_ADC0_TRIGGER_LOW_POWER_TIMER0      0xEU /**< LPTMR0 trigger */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* ADC0 trigger source constants */
  #define SIM_PDD_ADC0_TRIGGER_EXTERNAL_PIN     0U /**< External trigger pin input (PDB0_EXTRG) */
  #define SIM_PDD_ADC0_TRIGGER_CMP0_OUTPUT      0x1U /**< HSCMP0 output */
  #define SIM_PDD_ADC0_TRIGGER_CMP1_OUTPUT      0x2U /**< HSCMP1 output */
  #define SIM_PDD_ADC0_TRIGGER_PIT_CHANNEL0     0x4U /**< PIT channel 0 trigger */
  #define SIM_PDD_ADC0_TRIGGER_PIT_CHANNEL1     0x5U /**< PIT channel 1 trigger */
  #define SIM_PDD_ADC0_TRIGGER_PIT_CHANNEL2     0x6U /**< PIT channel 2 trigger */
  #define SIM_PDD_ADC0_TRIGGER_PIT_CHANNEL3     0x7U /**< PIT channel 3 trigger */
  #define SIM_PDD_ADC0_TRIGGER_FTM0_OVERFLOW    0x8U /**< FTM0 overflow */
  #define SIM_PDD_ADC0_TRIGGER_FTM1_OVERFLOW    0x9U /**< FTM1 overflow */
  #define SIM_PDD_ADC0_TRIGGER_FTM2_OVERFLOW    0xAU /**< FTM2 overflow */
  #define SIM_PDD_ADC0_TRIGGER_RTC_ALARM        0xCU /**< RTC alarm */
  #define SIM_PDD_ADC0_TRIGGER_RTC_SECONDS      0xDU /**< RTC seconds */
  #define SIM_PDD_ADC0_TRIGGER_LOW_POWER_TIMER0 0xEU /**< LPTMR0 trigger */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/* V-family ID constant. */
  #define SIM_PDD_V_FAMILY_ID_MKV10ZX 0x10000000U  /**< MKV10Zx V-family device ID */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* V-family ID constant. */
  #define SIM_PDD_V_FAMILY_ID_MKW24ZX 0x60U        /**< MKW24Zx W-family device ID */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Sub-family ID constant. */
#define SIM_PDD_SUB_FAMILY_ID_MKV10XXXX 0U       /**< MKV10xxxx sub-family device ID */

/* Series ID constant. */
#define SIM_PDD_SERIES_ID_V_FAMILY_MOTOR_CONTROL 0x600000U /**< V-family - motor control series ID */

#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/* System SRAM size constant. */
  #define SIM_PDD_SYSTEM_SRAM_512B 0U              /**< System SRAM size is 512B */
  #define SIM_PDD_SYSTEM_SRAM_1KB  0x10000U        /**< System SRAM size is 1kB */
  #define SIM_PDD_SYSTEM_SRAM_2KB  0x20000U        /**< System SRAM size is 2kB */
  #define SIM_PDD_SYSTEM_SRAM_4KB  0x30000U        /**< System SRAM size is 4kB */
  #define SIM_PDD_SYSTEM_SRAM_8KB  0x40000U        /**< System SRAM size is 8kB */
  #define SIM_PDD_SYSTEM_SRAM_16KB 0x50000U        /**< System SRAM size is 16kB */
  #define SIM_PDD_SYSTEM_SRAM_32KB 0x60000U        /**< System SRAM size is 32kB */
  #define SIM_PDD_SYSTEM_SRAM_64KB 0x70000U        /**< System SRAM size is 64kB */

#elif ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* System SRAM size constant. */
  #define SIM_PDD_SYSTEM_SRAM_16KB 0x3000U         /**< System SRAM size is 16kB */
  #define SIM_PDD_SYSTEM_SRAM_32KB 0x5000U         /**< System SRAM size is 32kB */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* System SRAM size constant. */
  #define SIM_PDD_SYSTEM_SRAM_8KB   0x1000U        /**< System SRAM size is 8kB */
  #define SIM_PDD_SYSTEM_SRAM_16KB  0x2000U        /**< System SRAM size is 16kB */
  #define SIM_PDD_SYSTEM_SRAM_32KB  0x4000U        /**< System SRAM size is 32kB */
  #define SIM_PDD_SYSTEM_SRAM_64KB  0x6000U        /**< System SRAM size is 64kB */
  #define SIM_PDD_SYSTEM_SRAM_128KB 0x8000U        /**< System SRAM size is 128kB */
  #define SIM_PDD_SYSTEM_SRAM_256KB 0x9000U        /**< System SRAM size is 256kB */
  #define SIM_PDD_SYSTEM_SRAM_24KB  0x3000U        /**< System SRAM size is 24kB */
  #define SIM_PDD_SYSTEM_SRAM_48KB  0x5000U        /**< System SRAM size is 48kB */
  #define SIM_PDD_SYSTEM_SRAM_96KB  0x7000U        /**< System SRAM size is 96kB */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/* Pincount indetification constant. */
  #define SIM_PDD_PINCOUNT_ID_32  0x2U             /**< 32 pincount */
  #define SIM_PDD_PINCOUNT_ID_48  0x4U             /**< 48 pincount */
  #define SIM_PDD_PINCOUNT_ID_64  0x5U             /**< 64 pincount */
  #define SIM_PDD_PINCOUNT_ID_80  0x6U             /**< 80 pincount */
  #define SIM_PDD_PINCOUNT_ID_81  0x7U             /**< 81 pincount */
  #define SIM_PDD_PINCOUNT_ID_100 0x8U             /**< 100 pincount */
  #define SIM_PDD_PINCOUNT_ID_121 0x9U             /**< 121 pincount */
  #define SIM_PDD_PINCOUNT_ID_144 0xAU             /**< 144 pincount */
  #define SIM_PDD_PINCOUNT_ID_196 0xCU             /**< 196 pincount */
  #define SIM_PDD_PINCOUNT_ID_256 0xEU             /**< 256 pincount */

#elif ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Pincount indetification constant. */
  #define SIM_PDD_PINCOUNT_ID_48  0x4U             /**< 48 pincount */
  #define SIM_PDD_PINCOUNT_ID_64  0x5U             /**< 64 pincount */
  #define SIM_PDD_PINCOUNT_ID_100 0x8U             /**< 100 pincount */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Pincount indetification constant. */
  #define SIM_PDD_PINCOUNT_ID_32    0x2U           /**< 32 pincount */
  #define SIM_PDD_PINCOUNT_ID_48    0x4U           /**< 48 pincount */
  #define SIM_PDD_PINCOUNT_ID_64    0x5U           /**< 64 pincount */
  #define SIM_PDD_PINCOUNT_ID_80    0x6U           /**< 80 pincount */
  #define SIM_PDD_PINCOUNT_ID_81    0x7U           /**< 81 pincount */
  #define SIM_PDD_PINCOUNT_ID_100   0x8U           /**< 100 pincount */
  #define SIM_PDD_PINCOUNT_ID_121   0x9U           /**< 121 pincount */
  #define SIM_PDD_PINCOUNT_ID_144   0xAU           /**< 144 pincount */
  #define SIM_PDD_PINCOUNT_ID_WLCSP 0xBU           /**< Custom pinout WLCSP */
  #define SIM_PDD_PINCOUNT_ID_256   0xEU           /**< 256 pincount */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Program flash size constants. */
  #define SIM_PDD_PROGRAM_FLASH_32KB_PROTECTION_1KB  0x3000000U /**< 32 KB of program flash memory, 1 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_64KB_PROTECTION_2KB  0x5000000U /**< 64 KB of program flash memory, 2 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_128KB_PROTECTION_4KB 0x7000000U /**< 128 KB of program flash memory, 4 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_256KB_PROTECTION_4KB 0x9000000U /**< 256 KB of program flash memory, 4 KB protection region */

#else /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Program flash size constants. */
  #define SIM_PDD_PROGRAM_FLASH_8KB_PROTECTION_256B  0U /**< 8 KB of program flash memory, 0.25 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_16KB_PROTECTION_512B 0x1000000U /**< 16 KB of program flash memory, 0.5 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_32KB_PROTECTION_1KB  0x3000000U /**< 32 KB of program flash memory, 1 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_64KB_PROTECTION_2KB  0x5000000U /**< 64 KB of program flash memory, 2 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_128KB_PROTECTION_4KB 0x7000000U /**< 128 KB of program flash memory, 4 KB protection region */
  #define SIM_PDD_PROGRAM_FLASH_256KB_PROTECTION_4KB 0x9000000U /**< 256 KB of program flash memory, 4 KB protection region */

#endif /* (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Watchdog clock source constants */
#define SIM_PDD_WDOG_INTERNAL_1KHZ      0U       /**< Internal 1 kHz clock is source to watchdog */
#define SIM_PDD_WDOG_INTERNAL_REFERENCE 0x2U     /**< Internal reference clock (MCGIRCLK) is source to watchdog */

#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/* Debug/trace clock source constants */
  #define SIM_PDD_MCGPLLCLK   0U                   /**< MCGPLLCLK - MCG output of the PLL */
  #define SIM_PDD_MCGPLLCLK2X 0x80000000U          /**< MCGPLLCLK2X - MCG output of PLL two time faster than MCGPLLCLK */

#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* MCG clock output constants */
  #define SIM_PDD_MCGFLLCLK 0U                     /**< MCG output of the FLL */
  #define SIM_PDD_MCGPLLCLK 0x10000U               /**< MCG output of the PLL */

#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/* Debug/trace clock source constants */
#define SIM_PDD_MCGOUTCLK  0U                    /**< MCGOUTCLK - MCG output clock */
#define SIM_PDD_CORE_CLOCK 0x1000U               /**< Core, system and platform clock */

/* CLKOUT pin clock source constants */
#define SIM_PDD_FLASHCLK       0x40U             /**< Bus/Flash clock */
#define SIM_PDD_LPOCLK         0x60U             /**< PMC 1kHz output */
#define SIM_PDD_MCGIRCLK       0x80U             /**< MCG output of the slow or fast internal reference clock */
#define SIM_PDD_OSCERCLK_UNDIV 0xA0U             /**< Undivided system oscillator output */
#define SIM_PDD_OSCERCLK       0xC0U             /**< System oscillator output */

/* Source of FTM3 hardware trigger 2 constants */
#define SIM_PDD_FTM3_TRIGGER2_FTM3_FLT0_PIN 0U   /**< FTM3_FLT0 pin */
#define SIM_PDD_FTM3_TRIGGER2_ABARA_OUT37   0x40000000U /**< XBARA output 37 */

/* Source of FTM3 hardware trigger 1 constants */
#define SIM_PDD_FTM3_TRIGGER1_PDB_CHANNEL1 0U    /**< PDB1 output trigger */
#define SIM_PDD_FTM3_TRIGGER1_FTM1_MATCH   0x20000000U /**< FTM1 channel match */

/* Source of FTM3 hardware trigger 0 constants */
#define SIM_PDD_FTM3_TRIGGER0_CMP0_OUTPUT 0U     /**< CMP0 output */
#define SIM_PDD_FTM3_TRIGGER0_FTM1_MATCH  0x10000000U /**< FTM1 channel match */

/* Source of FTM0 fault 3 constants */
#define SIM_PDD_FTM0_FAULT3_FTM0_FLT3_PIN 0U     /**< FTM0_FLT3 pin */
#define SIM_PDD_FTM0_FAULT3_XBARA_OUT49   0x8U   /**< XBARA output 49 */

/* Source of FTM0 fault 2 constants */
#define SIM_PDD_FTM0_FAULT2_FTM0_FLT2_PIN 0U     /**< FTM0_FLT2 pin */
#define SIM_PDD_FTM0_FAULT2_CMP2_OUTPUT   0x4U   /**< CMP2 output */

/* ADCB conversion triggers constants */
#define SIM_PDD_ADCB_XBARA_OUT13       0U        /**< XBARA output 13 */
#define SIM_PDD_ADCB_PDB1_TRIGGER      0x4000U   /**< PDB1 trigger */
#define SIM_PDD_ADCB_ALTERNATE_TRIGGER 0x8000U   /**< Alternate trigger selected for ADCB */

/* ADCB trigger source constants */
#define SIM_PDD_ADCB_TRIGGER_CMP0_OUTPUT      0x100U /**< HSCMP0 output */
#define SIM_PDD_ADCB_TRIGGER_CMP1_OUTPUT      0x200U /**< HSCMP1 output */
#define SIM_PDD_ADCB_TRIGGER_CMP2_OUTPUT      0x300U /**< HSCMP2 output */
#define SIM_PDD_ADCB_TRIGGER_PIT_CHANNEL0     0x400U /**< PIT channel 0 trigger */
#define SIM_PDD_ADCB_TRIGGER_PIT_CHANNEL1     0x500U /**< PIT channel 1 trigger */
#define SIM_PDD_ADCB_TRIGGER_PIT_CHANNEL2     0x600U /**< PIT channel 2 trigger */
#define SIM_PDD_ADCB_TRIGGER_PIT_CHANNEL3     0x700U /**< PIT channel 3 trigger */
#define SIM_PDD_ADCB_TRIGGER_FTM0_OVERFLOW    0x800U /**< FTM0 overflow */
#define SIM_PDD_ADCB_TRIGGER_FTM1_OVERFLOW    0x900U /**< FTM1 overflow */
#define SIM_PDD_ADCB_TRIGGER_FTM3_OVERFLOW    0xB00U /**< FTM3 overflow */
#define SIM_PDD_ADCB_TRIGGER_ABARA_OUT41      0xC00U /**< XBARA output 41 */
#define SIM_PDD_ADCB_TRIGGER_LOW_POWER_TIMER0 0xE00U /**< LPTMR0 trigger */

/* ADCA conversion triggers constants */
#define SIM_PDD_ADCA_XBARA_OUT12       0U        /**< XBARA output 12 */
#define SIM_PDD_ADCA_PDB0_TRIGGER      0x40U     /**< PDB0 trigger */
#define SIM_PDD_ADCA_ALTERNATE_TRIGGER 0x80U     /**< Alternate trigger selected for ADCA */

/* ADCA trigger source constants */
#define SIM_PDD_ADCA_TRIGGER_PDB0_EXTTRG      0U /**< PDB external trigger pin input */
#define SIM_PDD_ADCA_TRIGGER_CMP0_OUTPUT      0x1U /**< HSCMP0 output */
#define SIM_PDD_ADCA_TRIGGER_CMP1_OUTPUT      0x2U /**< HSCMP1 output */
#define SIM_PDD_ADCA_TRIGGER_CMP2_OUTPUT      0x3U /**< HSCMP2 output */
#define SIM_PDD_ADCA_TRIGGER_PIT_CHANNEL0     0x4U /**< PIT channel 0 trigger */
#define SIM_PDD_ADCA_TRIGGER_PIT_CHANNEL1     0x5U /**< PIT channel 1 trigger */
#define SIM_PDD_ADCA_TRIGGER_PIT_CHANNEL2     0x6U /**< PIT channel 2 trigger */
#define SIM_PDD_ADCA_TRIGGER_PIT_CHANNEL3     0x7U /**< PIT channel 3 trigger */
#define SIM_PDD_ADCA_TRIGGER_FTM0_OVERFLOW    0x8U /**< FTM0 overflow */
#define SIM_PDD_ADCA_TRIGGER_FTM1_OVERFLOW    0x9U /**< FTM1 overflow */
#define SIM_PDD_ADCA_TRIGGER_FTM3_OVERFLOW    0xBU /**< FTM3 overflow */
#define SIM_PDD_ADCA_TRIGGER_ABARA_OUT38      0xCU /**< XBARA output 38 */
#define SIM_PDD_ADCA_TRIGGER_LOW_POWER_TIMER0 0xEU /**< LPTMR0 trigger */

/* FTM3 carrier modulation constants. */
#define SIM_PDD_FTM3_MODULATED_BY_FTM1_CH1         0U /**< FTM1 channel 1 output provides the carrier signal for FTM3 */
#define SIM_PDD_FTM3_MODULATED_BY_LPTMR0_PRESCALER 0x200U /**< LPTMR0 prescaler output provides the carrier signal for FTM3 */

/* FTM0 carrier modulation constants. */
#define SIM_PDD_FTM0_MODULATED_BY_FTM1_CH1         0U /**< FTM1 channel 1 output provides the carrier signal for FTM0 */
#define SIM_PDD_FTM0_MODULATED_BY_LPTMR0_PRESCALER 0x100U /**< LPTMR0 prescaler output provides the carrier signal for FTM0 */

/* Flex timer 3 external clock constants */
#define SIM_PDD_FTM3_DRIVEN_BY_FTM_CLK0_PIN 0U   /**< FTM3 external clock driven by FTM_CLK0 pin */
#define SIM_PDD_FTM3_DRIVEN_BY_FTM_CLK1_PIN 0x40000000U /**< FTM3 external clock driven by FTM_CLK1 pin */
#define SIM_PDD_FTM3_DRIVEN_BY_FTM_CLK2_PIN 0x80000000U /**< FTM3 external clock driven by FTM_CLK2 pin */

/* Flex timer 1 external clock constants */
#define SIM_PDD_FTM1_DRIVEN_BY_FTM_CLK0_PIN 0U   /**< FTM1 external clock driven by FTM_CLK0 pin */
#define SIM_PDD_FTM1_DRIVEN_BY_FTM_CLK1_PIN 0x4000000U /**< FTM1 external clock driven by FTM_CLK1 pin */
#define SIM_PDD_FTM1_DRIVEN_BY_FTM_CLK2_PIN 0x8000000U /**< FTM1 external clock driven by FTM_CLK2 pin */

/* Flex timer 0 external clock constants */
#define SIM_PDD_FTM0_DRIVEN_BY_FTM_CLK0_PIN 0U   /**< FTM0 external clock driven by FTM_CLK0 pin */
#define SIM_PDD_FTM0_DRIVEN_BY_FTM_CLK1_PIN 0x1000000U /**< FTM0 external clock driven by FTM_CLK1 pin */
#define SIM_PDD_FTM0_DRIVEN_BY_FTM_CLK2_PIN 0x2000000U /**< FTM0 external clock driven by FTM_CLK2 pin */

/* Flex timer 1 channel 1 input capture source constants */
#define SIM_PDD_FTM1_CH1_CAPTURED_BY_FTM1_CH1                      0U /**< FTM1 captured by FTM1 channel 1 signal */
#define SIM_PDD_FTM1_CH1_XOR_BETWEEN_FTM1_CH1_FTM1_CH0_XBARA_OUT42 0x40U /**< Exclusive OR of FTM1_CH1, FTM1_CH0 and XBARA output 42 */

/* Flex timer 1 channel 0 input capture source constants */
#define SIM_PDD_FTM1_CH0_CAPTURED_BY_FTM1_CH0    0U /**< FTM1 captured by FTM1 channel 0 signal */
#define SIM_PDD_FTM1_CH0_CAPTURED_BY_CMP0_OUTPUT 0x10U /**< FTM1 captured by CMP0 output signal */
#define SIM_PDD_FTM1_CH0_CAPTURED_BY_CMP1_OUTPUT 0x20U /**< FTM1 captured by CMP1 output signal */

/* Kinetis sub-family ID constant. */
#define SIM_PDD_KVx0_SUBFAMILY 0U                /**< KVx0 Subfamily (FlexTimer & MC_ADC) */
#define SIM_PDD_KVx1_SUBFAMILY 0x1000000U        /**< KVx1 Subfamily (FlexTimer & HS_ADC) */
#define SIM_PDD_KVx2_SUBFAMILY 0x2000000U        /**< KVx2 Subfamily (Reserved) */
#define SIM_PDD_KVx3_SUBFAMILY 0x3000000U        /**< KVx3 Subfamily (eFlexPWM & MC_ADC) */
#define SIM_PDD_KVx4_SUBFAMILY 0x4000000U        /**< KVx4 Subfamily (eFlexPWM & HS_ADC) */
#define SIM_PDD_KVx5_SUBFAMILY 0x5000000U        /**< KVx5 Subfamily (eFlexPWM with FlexTimer & MC_ADC) */
#define SIM_PDD_KVx6_SUBFAMILY 0x6000000U        /**< KVx6 Subfamily (eFlexPWM with FlexTimer & HS_ADC) */

/* Kinetis series ID constant. */
#define SIM_PDD_KINETIS_K_SERIES 0U              /**< Kinetis K series */
#define SIM_PDD_KINETIS_L_SERIES 0x100000U       /**< Kinetis L series */
#define SIM_PDD_KINETIS_W_SERIES 0x500000U       /**< Kinetis W series */
#define SIM_PDD_KINETIS_V_SERIES 0x600000U       /**< Kinetis V series */

/* DAC0 hardware trigger input source constants */
#define SIM_PDD_DAC0_TRIGGERED_BY_XBARA_OUT15   0U /**< DAC0 triggered by XBARA out 15 */
#define SIM_PDD_DAC0_TRIGGERED_BY_PDB0_AND_PDB1 0x40000U /**< DAC0 triggered by both PDB0 interval trigger 0 and PDB1 interval trigger 0 */
#define SIM_PDD_DAC0_TRIGGERED_BY_PDB0          0x80000U /**< DAC0 triggered by PDB0 interval trigger 0 */
#define SIM_PDD_DAC0_TRIGGERED_BY_PDB1          0xC0000U /**< DAC0 triggered by PDB1 interval trigger 0 */

/* EWM input source constants */
#define SIM_PDD_EWM_INPUT_FROM_XBARA_OUT58 0U    /**< EWM input from XBARA output 58 */
#define SIM_PDD_EWM_INPUT_FROM_EWM_IN_PIN  0x10000U /**< EWM input from EWM_IN pin */

/* CMP3 sample/window input source constants */
#define SIM_PDD_CMP3_SAMPLED_BY_XBARA_OUT19                 0U /**< Sample/window is driven by XBARA output 19 */
#define SIM_PDD_CMP3_SAMPLED_BY_PDB0_AND_PDB1_PULSE_OUT_CH3 0x4000U /**< CMP3 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 3 */
#define SIM_PDD_CMP3_SAMPLED_BY_PDB0_PULSE_OUT_CH3          0x8000U /**< Sample/window is driven by PDB0 pluse-out channel 3 */
#define SIM_PDD_CMP3_SAMPLED_BY_PDB1_PULSE_OUT_CH3          0xC000U /**< Sample/window is driven by PDB1 pluse-out channel 3 */

/* CMP2 sample/window input source constants */
#define SIM_PDD_CMP2_SAMPLED_BY_XBARA_OUT18                 0U /**< Sample/window is driven by XBARA output 18 */
#define SIM_PDD_CMP2_SAMPLED_BY_PDB0_AND_PDB1_PULSE_OUT_CH2 0x1000U /**< CMP2 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 2 */
#define SIM_PDD_CMP2_SAMPLED_BY_PDB0_PULSE_OUT_CH2          0x2000U /**< Sample/window is driven by PDB0 pluse-out channel 2 */
#define SIM_PDD_CMP2_SAMPLED_BY_PDB1_PULSE_OUT_CH2          0x3000U /**< Sample/window is driven by PDB1 pluse-out channel 2 */

/* CMP1 sample/window input source constants */
#define SIM_PDD_CMP1_SAMPLED_BY_XBARA_OUT17                 0U /**< Sample/window is driven by XBARA output 17 */
#define SIM_PDD_CMP1_SAMPLED_BY_PDB0_AND_PDB1_PULSE_OUT_CH1 0x400U /**< CMP1 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 1 */
#define SIM_PDD_CMP1_SAMPLED_BY_PDB0_PULSE_OUT_CH1          0x800U /**< Sample/window is driven by PDB0 pluse-out channel 1 */
#define SIM_PDD_CMP1_SAMPLED_BY_PDB1_PULSE_OUT_CH1          0xC00U /**< Sample/window is driven by PDB1 pluse-out channel 1 */

/* CMP0 sample/window input source constants */
#define SIM_PDD_CMP0_SAMPLED_BY_XBARA_OUT16                 0U /**< Sample/window is driven by XBARA output 16 */
#define SIM_PDD_CMP0_SAMPLED_BY_PDB0_AND_PDB1_PULSE_OUT_CH0 0x100U /**< CMP0 Sample/Window input is driven by both PDB0 and PDB1 pluse-out channel 0 */
#define SIM_PDD_CMP0_SAMPLED_BY_PDB0_PULSE_OUT_CH0          0x200U /**< Sample/window is driven by PDB0 pluse-out channel 0 */
#define SIM_PDD_CMP0_SAMPLED_BY_PDB1_PULSE_OUT_CH0          0x300U /**< Sample/window is driven by PDB1 pluse-out channel 0 */

/* Clock source of the WDOG2008 watchdog constants */
#define SIM_PDD_WDOG_CLK_SOURCE_INTERNAL_1KHZ 0U /**< Internal 1 kHz clock is source to WDOG2008 */
#define SIM_PDD_WDOG_CLK_SOURCE_MCGIRCLK      0x2U /**< Internal reference clock */

/* Nanoedge PMC status constants. */
#define SIM_PDD_PMC_NANOEDGE_IS_NOT_READY 0U     /**< Power supply for nanoedge isn't ready */
#define SIM_PDD_PMC_NANOEDGE_IS_OK        0x10000U /**< Power supply for nanoedge is OK */

/* Nanoedge PMC power ready constants */
#define SIM_PDD_NANOEDGE_PMC_POWER_NOT_READY    0U /**< Not ready */
#define SIM_PDD_NANOEDGE_PMC_POWER_OUTPUT_READY 0x200U /**< Assert PMC power output ready */

/* Nanoedge regulator 1.2V supply standby control constants */
#define SIM_PDD_NANOEDGE_1_2V_SUPPLY_IN_NORMAL_MODE            0U /**< Nanoedge regulator 1.2V supply placed in normal mode */
#define SIM_PDD_NANOEDGE_1_2V_SUPPLY_IN_STANDBY_MODE           0x40U /**< Nanoedge regulator 1.2V supply placed in standby mode */
#define SIM_PDD_NANOEDGE_1_2V_SUPPLY_IN_NORMAL_MODE_PROTECTED  0x80U /**< Nanoedge regulator 1.2V supply placed in normal mode and SR12STDBY is write protected until chip reset */
#define SIM_PDD_NANOEDGE_1_2V_SUPPLY_IN_STANDBY_MODE_PROTECTED 0xC0U /**< Nanoedge regulator 1.2V supply placed in standby mode and SR12STDBY is write protected until chip reset */

/* Nanoedge regulator 2.7V supply standby control constants */
#define SIM_PDD_NANOEDGE_2_7V_SUPPLY_IN_NORMAL_MODE            0U /**< Nanoedge regulator 2.7V supply placed in normal mode */
#define SIM_PDD_NANOEDGE_2_7V_SUPPLY_IN_STANDBY_MODE           0x4U /**< Nanoedge regulator 2.7V supply placed in standby mode */
#define SIM_PDD_NANOEDGE_2_7V_SUPPLY_IN_NORMAL_MODE_PROTECTED  0x8U /**< Nanoedge regulator 2.7V supply placed in normal mode and SR27STDBY is write protected until chip reset */
#define SIM_PDD_NANOEDGE_2_7V_SUPPLY_IN_STANDBY_MODE_PROTECTED 0xCU /**< Nanoedge regulator 2.7V supply placed in standby mode and SR27STDBY is write protected until chip reset */

/* Nanoedge regulator 2.7V and 1.2V supply powerdown control */
#define SIM_PDD_NANOEDGE_2_7V_AND_1_7V_SUPPLY_IN_NORMAL_MODE            0U /**< Nanoedge regulator placed in normal mode */
#define SIM_PDD_NANOEDGE_2_7V_AND_1_7V_SUPPLY_IN_STANDBY_MODE           0x1U /**< Nanoedge regulator placed in powerdown mode */
#define SIM_PDD_NANOEDGE_2_7V_AND_1_7V_SUPPLY_IN_NORMAL_MODE_PROTECTED  0x2U /**< Nanoedge regulator placed in normal mode and SRPDN is write protected until chip reset */
#define SIM_PDD_NANOEDGE_2_7V_AND_1_7V_SUPPLY_IN_STANDBY_MODE_PROTECTED 0x3U /**< Nanoedge regulator placed in powerdown mode and SRPDN is write protected until chip reset */

/* ADC clock status constants. */
#define SIM_PDD_ADC_CLOCK_FAST_PERIPHERAL 0U     /**< ADC clock is fast peripherial clock */
#define SIM_PDD_ADC_CLOCK_MCGIRCLK        0x2000000U /**< ADC clock is internal reference clock */

/* ADCB MUX1's channel to ADCB channel 7 constants */
#define SIM_PDD_ADCB_MUX1_CHANNEL_A 0U           /**< ADCB MUX1's channel a */
#define SIM_PDD_ADCB_MUX1_CHANNEL_B 0x1000U      /**< ADCB MUX1's channel b */
#define SIM_PDD_ADCB_MUX1_CHANNEL_C 0x2000U      /**< ADCB MUX1's channel c */
#define SIM_PDD_ADCB_MUX1_CHANNEL_D 0x3000U      /**< ADCB MUX1's channel d */
#define SIM_PDD_ADCB_MUX1_CHANNEL_E 0x4000U      /**< ADCB MUX1's channel e */
#define SIM_PDD_ADCB_MUX1_CHANNEL_F 0x5000U      /**< ADCB MUX1's channel f */
#define SIM_PDD_ADCB_MUX1_CHANNEL_G 0x6000U      /**< ADCB MUX1's channel g */

/* ADCB MUX0's channel to ADCB channel 6 constants */
#define SIM_PDD_ADCB_MUX0_CHANNEL_A 0U           /**< ADCB MUX0's channel a */
#define SIM_PDD_ADCB_MUX0_CHANNEL_B 0x100U       /**< ADCB MUX0's channel b */
#define SIM_PDD_ADCB_MUX0_CHANNEL_C 0x200U       /**< ADCB MUX0's channel c */
#define SIM_PDD_ADCB_MUX0_CHANNEL_D 0x300U       /**< ADCB MUX0's channel d */
#define SIM_PDD_ADCB_MUX0_CHANNEL_E 0x400U       /**< ADCB MUX0's channel e */
#define SIM_PDD_ADCB_MUX0_CHANNEL_F 0x500U       /**< ADCB MUX0's channel f */
#define SIM_PDD_ADCB_MUX0_CHANNEL_G 0x600U       /**< ADCB MUX0's channel g */
#define SIM_PDD_ADCB_MUX0_PMC_1V    0x700U       /**< PMC 1V */

/* ADCA MUX1's channel to ADCA channel 7 constants */
#define SIM_PDD_ADCA_MUX1_CHANNEL_A 0U           /**< ADCA MUX0's channel a */
#define SIM_PDD_ADCA_MUX1_CHANNEL_B 0x10U        /**< ADCA MUX0's channel b */
#define SIM_PDD_ADCA_MUX1_CHANNEL_C 0x20U        /**< ADCA MUX0's channel c */
#define SIM_PDD_ADCA_MUX1_CHANNEL_E 0x40U        /**< ADCA MUX0's channel e */
#define SIM_PDD_ADCA_MUX1_CHANNEL_F 0x50U        /**< ADCA MUX0's channel f */
#define SIM_PDD_ADCA_MUX1_CHANNEL_G 0x60U        /**< ADCA MUX0's channel g */
#define SIM_PDD_ADCA_MUX1_PMC_1V    0x70U        /**< PMC 1V */

/* ADCA MUX0's channel to ADCA channel 6 constants */
#define SIM_PDD_ADCA_MUX0_CHANNEL_A 0U           /**< ADCA MUX0's channel a */
#define SIM_PDD_ADCA_MUX0_CHANNEL_B 0x1U         /**< ADCA MUX0's channel b */
#define SIM_PDD_ADCA_MUX0_CHANNEL_C 0x2U         /**< ADCA MUX0's channel c */
#define SIM_PDD_ADCA_MUX0_CHANNEL_D 0x3U         /**< ADCA MUX0's channel d */
#define SIM_PDD_ADCA_MUX0_CHANNEL_E 0x4U         /**< ADCA MUX0's channel e */
#define SIM_PDD_ADCA_MUX0_CHANNEL_G 0x6U         /**< ADCA MUX0's channel g */
#define SIM_PDD_ADCA_MUX0_PMC_1V    0x7U         /**< PMC 1V */

/* USB clock source constants */
#define SIM_PDD_USB_CLKIN              0U        /**< External bypass clock (USB_CLKIN) */
#define SIM_PDD_USB_FRACTIONAL_DIVIDER 0x40000U  /**< MCG PLL/FLL clock divided by the USB fractional divider */

/* Pad's drive strength constants */
#define SIM_PDD_SINGLE_PAD 0U                    /**< Single pad drive strength */
#define SIM_PDD_DOUBLE_PAD 0x800U                /**< Doubele pad drive strength */

/* RTC_CLKOUT pin clock source constants */
#define SIM_PDD_RTC1HZCLK   0U                   /**< RTC 1 Hz clock */
#define SIM_PDD_RTC32KHZCLK 0x10U                /**< RTC 32.768kHz clock */

/* USB fractional clock divider divisor constants */
#define SIM_PDD_USB_CLK_DIVISOR_1 0U             /**< USB fractional clock divider =  SetUSBClockDividerFraction / 1 */
#define SIM_PDD_USB_CLK_DIVISOR_2 0x2U           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 2 */
#define SIM_PDD_USB_CLK_DIVISOR_3 0x4U           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 3 */
#define SIM_PDD_USB_CLK_DIVISOR_4 0x6U           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 4 */
#define SIM_PDD_USB_CLK_DIVISOR_5 0x8U           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 5 */
#define SIM_PDD_USB_CLK_DIVISOR_6 0xAU           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 6 */
#define SIM_PDD_USB_CLK_DIVISOR_7 0xCU           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 7 */
#define SIM_PDD_USB_CLK_DIVISOR_8 0xEU           /**< USB fractional clock divider =  SetUSBClockDividerFraction / 8 */

/* USB fractional clock divider fraction constants */
#define SIM_PDD_USB_CLK_FRACTION_1 0U            /**< USB fractional clock divider =  1 / SetUSBClockDividerDivisor */
#define SIM_PDD_USB_CLK_FRACTION_2 0x1U          /**< USB fractional clock divider =  2 / SetUSBClockDividerDivisor */


/* ----------------------------------------------------------------------------
   -- SetClockGate
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKL02Z4)) || (defined(MCU_MKL03Z4)))
/**
 * @brief Enable or disable clock gate for specified device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Index Parameter specifying which device will be addressed. Use
 *        constants from group 'Clock gate identifiers'. This parameter is of index type.
 * @param State Parameter specifying if clock gate will be enabled or disabled.
 *        This parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in
 *        PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC1, SIM_SCGC2,
 *          SIM_SCGC3, SIM_SCGC4, SIM_SCGC5, SIM_SCGC6, SIM_SCGC7, SIM_SCGC
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockGate(<peripheral>_BASE_PTR, periphID, PDD_DISABLE);
 *      @endcode
 */
  #define SIM_PDD_SetClockGate(PeripheralBase, Index, State) ( \
      ((uint32_t)((uint32_t)(Index) >> 5U) == 0x3U) ? ( \
        SIM_SCGC4_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC4_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x4U) ? ( \
        SIM_SCGC5_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC5_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : ( \
        SIM_SCGC6_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC6_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) \
      ) \
    )
#elif ((defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z1284)) || (defined(MCU_MKE04Z4)) || (defined(MCU_MKE06Z4)) || (defined(MCU_SKEAZ1284)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)))
/**
 * @brief Enable or disable clock gate for specified device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Index Parameter specifying which device will be addressed. Use
 *        constants from group 'Clock gate identifiers'. This parameter is of index type.
 * @param State Parameter specifying if clock gate will be enabled or disabled.
 *        This parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in
 *        PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC1, SIM_SCGC2,
 *          SIM_SCGC3, SIM_SCGC4, SIM_SCGC5, SIM_SCGC6, SIM_SCGC7, SIM_SCGC
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockGate(<peripheral>_BASE_PTR, periphID, PDD_DISABLE);
 *      @endcode
 */
  #define SIM_PDD_SetClockGate(PeripheralBase, Index, State) ( \
      SIM_SCGC_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SCGC_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
        (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU)))) \
    )
#elif ((defined(MCU_MK10D5)) || (defined(MCU_MK11D5)) || (defined(MCU_MK11D5WS)) || (defined(MCU_MK12D5)) || (defined(MCU_MK20D5)) || (defined(MCU_MK21D5)) || (defined(MCU_MK21D5WS)) || (defined(MCU_MK22D5)) || (defined(MCU_MK22F12810)) || (defined(MCU_MK22F25612)) || (defined(MCU_MK22F51212)) || (defined(MCU_MKL04Z4)) || (defined(MCU_MKL05Z4)) || (defined(MCU_MKL13Z4)) || (defined(MCU_MKL14Z4)) || (defined(MCU_MKL15Z4)) || (defined(MCU_MKL16Z4)) || (defined(MCU_MKL23Z4)) || (defined(MCU_MKL24Z4)) || (defined(MCU_MKL25Z4)) || (defined(MCU_MKL26Z4)) || (defined(MCU_MKL33Z4)) || (defined(MCU_MKL34Z4)) || (defined(MCU_MKL36Z4)) || (defined(MCU_MKL43Z4)) || (defined(MCU_MKL46Z4)) || (defined(MCU_MKV10Z7)) || (defined(MCU_MKV31F12810)) || (defined(MCU_MKV31F25612)) || (defined(MCU_MKV31F51212)) || (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW01Z4)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) || (defined(MCU_PCK20L4)))
/**
 * @brief Enable or disable clock gate for specified device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Index Parameter specifying which device will be addressed. Use
 *        constants from group 'Clock gate identifiers'. This parameter is of index type.
 * @param State Parameter specifying if clock gate will be enabled or disabled.
 *        This parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in
 *        PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC1, SIM_SCGC2,
 *          SIM_SCGC3, SIM_SCGC4, SIM_SCGC5, SIM_SCGC6, SIM_SCGC7, SIM_SCGC
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockGate(<peripheral>_BASE_PTR, periphID, PDD_DISABLE);
 *      @endcode
 */
  #define SIM_PDD_SetClockGate(PeripheralBase, Index, State) ( \
      ((uint32_t)((uint32_t)(Index) >> 5U) == 0x3U) ? ( \
        SIM_SCGC4_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC4_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x4U) ? ( \
        SIM_SCGC5_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC5_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x5U) ? ( \
        SIM_SCGC6_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC6_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : ( \
        SIM_SCGC7_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC7_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) \
      )) \
    )
#else /* (defined(MCU_MK10D10)) || (defined(MCU_MK10D7)) || (defined(MCU_MK10DZ10)) || (defined(MCU_MK10F12)) || (defined(MCU_MK20D10)) || (defined(MCU_MK20D7)) || (defined(MCU_MK20DZ10)) || (defined(MCU_MK20F12)) || (defined(MCU_MK21F12)) || (defined(MCU_MK21F12WS)) || (defined(MCU_MK22F12)) || (defined(MCU_MK24F12)) || (defined(MCU_MK30D10)) || (defined(MCU_MK30D7)) || (defined(MCU_MK30DZ10)) || (defined(MCU_MK40D10)) || (defined(MCU_MK40D7)) || (defined(MCU_MK40DZ10)) || (defined(MCU_MK40X256VMD100)) || (defined(MCU_MK50D10)) || (defined(MCU_MK50D7)) || (defined(MCU_MK50DZ10)) || (defined(MCU_MK51D10)) || (defined(MCU_MK51D7)) || (defined(MCU_MK51DZ10)) || (defined(MCU_MK52D10)) || (defined(MCU_MK52DZ10)) || (defined(MCU_MK53D10)) || (defined(MCU_MK53DZ10)) || (defined(MCU_MK60D10)) || (defined(MCU_MK60DZ10)) || (defined(MCU_MK60F12)) || (defined(MCU_MK60F15)) || (defined(MCU_MK60N512VMD100)) || (defined(MCU_MK61F12)) || (defined(MCU_MK61F12WS)) || (defined(MCU_MK61F15)) || (defined(MCU_MK61F15WS)) || (defined(MCU_MK63F12)) || (defined(MCU_MK63F12WS)) || (defined(MCU_MK64F12)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MK70F12)) || (defined(MCU_MK70F12WS)) || (defined(MCU_MK70F15)) || (defined(MCU_MK70F15WS)) */
/**
 * @brief Enable or disable clock gate for specified device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Index Parameter specifying which device will be addressed. Use
 *        constants from group 'Clock gate identifiers'. This parameter is of index type.
 * @param State Parameter specifying if clock gate will be enabled or disabled.
 *        This parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in
 *        PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC1, SIM_SCGC2,
 *          SIM_SCGC3, SIM_SCGC4, SIM_SCGC5, SIM_SCGC6, SIM_SCGC7, SIM_SCGC
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockGate(<peripheral>_BASE_PTR, periphID, PDD_DISABLE);
 *      @endcode
 */
  #define SIM_PDD_SetClockGate(PeripheralBase, Index, State) ( \
      ((uint32_t)((uint32_t)(Index) >> 5U) == 0U) ? ( \
        SIM_SCGC1_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC1_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x1U) ? ( \
        SIM_SCGC2_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC2_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x2U) ? ( \
        SIM_SCGC3_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC3_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x3U) ? ( \
        SIM_SCGC4_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC4_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x4U) ? ( \
        SIM_SCGC5_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC5_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : (((uint32_t)((uint32_t)(Index) >> 5U) == 0x5U) ? ( \
        SIM_SCGC6_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC6_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) : ( \
        SIM_SCGC7_REG(PeripheralBase) = \
         (uint32_t)(( \
          (uint32_t)(( \
           SIM_SCGC7_REG(PeripheralBase)) & ( \
           (uint32_t)(~(uint32_t)((uint32_t)0x1U << (uint8_t)((uint8_t)(Index) & 0x1FU)))))) | ( \
          (uint32_t)((uint32_t)(State) << (uint8_t)((uint8_t)(Index) & 0x1FU))))) \
      ))))) \
    )
#endif /* (defined(MCU_MK10D10)) || (defined(MCU_MK10D7)) || (defined(MCU_MK10DZ10)) || (defined(MCU_MK10F12)) || (defined(MCU_MK20D10)) || (defined(MCU_MK20D7)) || (defined(MCU_MK20DZ10)) || (defined(MCU_MK20F12)) || (defined(MCU_MK21F12)) || (defined(MCU_MK21F12WS)) || (defined(MCU_MK22F12)) || (defined(MCU_MK24F12)) || (defined(MCU_MK30D10)) || (defined(MCU_MK30D7)) || (defined(MCU_MK30DZ10)) || (defined(MCU_MK40D10)) || (defined(MCU_MK40D7)) || (defined(MCU_MK40DZ10)) || (defined(MCU_MK40X256VMD100)) || (defined(MCU_MK50D10)) || (defined(MCU_MK50D7)) || (defined(MCU_MK50DZ10)) || (defined(MCU_MK51D10)) || (defined(MCU_MK51D7)) || (defined(MCU_MK51DZ10)) || (defined(MCU_MK52D10)) || (defined(MCU_MK52DZ10)) || (defined(MCU_MK53D10)) || (defined(MCU_MK53DZ10)) || (defined(MCU_MK60D10)) || (defined(MCU_MK60DZ10)) || (defined(MCU_MK60F12)) || (defined(MCU_MK60F15)) || (defined(MCU_MK60N512VMD100)) || (defined(MCU_MK61F12)) || (defined(MCU_MK61F12WS)) || (defined(MCU_MK61F15)) || (defined(MCU_MK61F15WS)) || (defined(MCU_MK63F12)) || (defined(MCU_MK63F12WS)) || (defined(MCU_MK64F12)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MK70F12)) || (defined(MCU_MK70F12WS)) || (defined(MCU_MK70F15)) || (defined(MCU_MK70F15WS)) */

/* ----------------------------------------------------------------------------
   -- SetClockSourceLPUART0
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKL03Z4)) || (defined(MCU_MKL13Z4)) || (defined(MCU_MKL23Z4)) || (defined(MCU_MKL33Z4)) || (defined(MCU_MKL43Z4)))
/**
 * @brief Selects the clock source (in the SIM module).
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. Possible values: DISABLE_CLOCK,
 *        FAST_INTERNAL_REF_CLOCK, EXTERNAL_REF_CLOCK, SLOW_INTERNAL_REF_CLOCK. This parameter is
 *        of "Clock sources" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockSourceLPUART0(<peripheral>_BASE_PTR,
 *      SIM_PDD_LPUART0_DISABLE_CLOCK);
 *      @endcode
 */
  #define SIM_PDD_SetClockSourceLPUART0(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT2_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT2_LPUART0SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MK22F12810)) || (defined(MCU_MK22F25612)) || (defined(MCU_MK22F51212)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MKV31F12810)) || (defined(MCU_MKV31F25612)) || (defined(MCU_MKV31F51212)) */
/**
 * @brief Selects the clock source (in the SIM module).
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. Possible values: DISABLE_CLOCK, PLL_FLL_CLOCK,
 *        EXTERNAL_REF_CLOCK, INTERNAL_REF_CLOCK. This parameter is of "Clock
 *        sources" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockSourceLPUART0(<peripheral>_BASE_PTR,
 *      SIM_PDD_LPUART0_DISABLE_CLOCK);
 *      @endcode
 */
  #define SIM_PDD_SetClockSourceLPUART0(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT2_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT2_LPUARTSRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MK22F12810)) || (defined(MCU_MK22F25612)) || (defined(MCU_MK22F51212)) || (defined(MCU_MK65F18)) || (defined(MCU_MK65F18WS)) || (defined(MCU_MK66F18)) || (defined(MCU_MKV31F12810)) || (defined(MCU_MKV31F25612)) || (defined(MCU_MKV31F51212)) */

/* ----------------------------------------------------------------------------
   -- ReadSystemResetStatusIDReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system reset status and ID register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SRSID.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemResetStatusIDReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemResetStatusIDReg(PeripheralBase) ( \
    SIM_SRSID_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption0Reg
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKE04Z1284)) || (defined(MCU_MKE06Z4)) || (defined(MCU_SKEAZ1284)))
/**
 * @brief Writes new value specified by the Value parameter into system options
 * 0 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 0 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption0Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_WriteSystemOption0Reg(PeripheralBase, Value) ( \
      SIM_SOPT0_REG(PeripheralBase) = \
       (uint32_t)(Value) \
    )
#else /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */
/**
 * @brief Writes new value specified by the Value parameter into system options
 * 0 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 0 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption0Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_WriteSystemOption0Reg(PeripheralBase, Value) ( \
      SIM_SOPT_REG(PeripheralBase) = \
       (uint32_t)(Value) \
    )
#endif /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */

/* ----------------------------------------------------------------------------
   -- ReadSystemOption0Reg
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKE04Z1284)) || (defined(MCU_MKE06Z4)) || (defined(MCU_SKEAZ1284)))
/**
 * @brief Reads system options 0 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption0Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_ReadSystemOption0Reg(PeripheralBase) ( \
      SIM_SOPT0_REG(PeripheralBase) \
    )
#else /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */
/**
 * @brief Reads system options 0 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption0Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_ReadSystemOption0Reg(PeripheralBase) ( \
      SIM_SOPT_REG(PeripheralBase) \
    )
#endif /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */

/* ----------------------------------------------------------------------------
   -- WritePinSelection0Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into pin selection 0
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the pin selection 0 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PINSEL, SIM_PINSEL0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_WritePinSelection0Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WritePinSelection0Reg(PeripheralBase, Value) ( \
    SIM_PINSEL_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniversallyUniqueIdentifierLowReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads Universally Unique Identifier Low register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UUIDL.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniversallyUniqueIdentifierLowReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniversallyUniqueIdentifierLowReg(PeripheralBase) ( \
    SIM_UUIDL_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- SetTriggerDelay
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKE04Z1284)) || (defined(MCU_MKE06Z4)) || (defined(MCU_SKEAZ1284)))
/**
 * @brief Set ADC HW trigger delay.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Delay Parameter specifying the requested ADC HW trigger delay. Value
 *        should be in range from 0 to 255. This parameter is a 8-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetTriggerDelay(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_SetTriggerDelay(PeripheralBase, Delay) ( \
      SIM_SOPT0_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(SIM_SOPT0_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT0_DELAY_MASK))) | ( \
        (uint32_t)((uint32_t)(Delay) << SIM_SOPT0_DELAY_SHIFT))) \
    )
#else /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */
/**
 * @brief Set ADC HW trigger delay.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Delay Parameter specifying the requested ADC HW trigger delay. Value
 *        should be in range from 0 to 255. This parameter is a 8-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT, SIM_SOPT0
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      SIM_PDD_SetTriggerDelay(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_SetTriggerDelay(PeripheralBase, Delay) ( \
      SIM_SOPT_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(SIM_SOPT_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT_DELAY_MASK))) | ( \
        (uint32_t)((uint32_t)(Delay) << SIM_SOPT_DELAY_SHIFT))) \
    )
#endif /* (defined(MCU_MKE02Z2)) || (defined(MCU_MKE02Z4)) || (defined(MCU_MKE04Z4)) || (defined(MCU_SKEAZN642)) || (defined(MCU_SKEAZN84)) */

/* ----------------------------------------------------------------------------
   -- WriteSystemOption1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 1 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption1Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption1Reg(PeripheralBase, Value) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption1Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption1Reg(PeripheralBase) ( \
    SIM_SOPT1_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WritePinSelection1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into pin selection 1
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the pin selection 1 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PINSEL1.
 * @par Example:
 *      @code
 *      SIM_PDD_WritePinSelection1Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WritePinSelection1Reg(PeripheralBase, Value) ( \
    SIM_PINSEL1_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadPinSelection1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads pin selection 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_PINSEL1.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadPinSelection1Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadPinSelection1Reg(PeripheralBase) ( \
    SIM_PINSEL1_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniversallyUniqueIdentifierMidHighReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads Universally Unique Identifier Middle High register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UUIDMH.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniversallyUniqueIdentifierMidHighReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniversallyUniqueIdentifierMidHighReg(PeripheralBase) ( \
    SIM_UUIDMH_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockDividerReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * divider register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock divider register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockDividerReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockDividerReg(PeripheralBase, Value) ( \
    SIM_CLKDIV_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockDividerReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock divider register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_CLKDIV.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockDividerReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockDividerReg(PeripheralBase) ( \
    SIM_CLKDIV_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- SetClockSourceUART0
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKL02Z4)) || (defined(MCU_MKL04Z4)) || (defined(MCU_MKL05Z4)))
/**
 * @brief Selects the clock source (in the SIM module).
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. Possible values: DISABLE_CLOCK, FLL_CLOCK,
 *        EXTERNAL_REF_CLOCK, INTERNAL_REF_CLOCK. This parameter is of "Clock sources"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockSourceUART0(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART0_DISABLE_CLOCK);
 *      @endcode
 */
  #define SIM_PDD_SetClockSourceUART0(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(SIM_SOPT2_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT2_UART0SRC_MASK))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKL14Z4)) || (defined(MCU_MKL15Z4)) || (defined(MCU_MKL16Z4)) || (defined(MCU_MKL24Z4)) || (defined(MCU_MKL25Z4)) || (defined(MCU_MKL26Z4)) || (defined(MCU_MKL34Z4)) || (defined(MCU_MKL36Z4)) || (defined(MCU_MKL46Z4)) */
/**
 * @brief Selects the clock source (in the SIM module).
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. Possible values: DISABLE_CLOCK, PLL_FLL_CLOCK,
 *        EXTERNAL_REF_CLOCK, INTERNAL_REF_CLOCK. This parameter is of "Clock
 *        sources" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockSourceUART0(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART0_DISABLE_CLOCK);
 *      @endcode
 */
  #define SIM_PDD_SetClockSourceUART0(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(SIM_SOPT2_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT2_UART0SRC_MASK))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKL14Z4)) || (defined(MCU_MKL15Z4)) || (defined(MCU_MKL16Z4)) || (defined(MCU_MKL24Z4)) || (defined(MCU_MKL25Z4)) || (defined(MCU_MKL26Z4)) || (defined(MCU_MKL34Z4)) || (defined(MCU_MKL36Z4)) || (defined(MCU_MKL46Z4)) */

/* ----------------------------------------------------------------------------
   -- ReadSystemOption2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption2Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption2Reg(PeripheralBase) ( \
    SIM_SOPT2_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 2 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption2Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption2Reg(PeripheralBase, Value) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption4Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption4Reg(PeripheralBase) ( \
    SIM_SOPT4_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 4 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption4Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption4Reg(PeripheralBase, Value) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 5 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption5Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption5Reg(PeripheralBase) ( \
    SIM_SOPT5_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 5 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 5 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption5Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption5Reg(PeripheralBase, Value) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption7Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 7 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption7Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption7Reg(PeripheralBase) ( \
    SIM_SOPT7_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption7Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 7 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 7 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption7Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption7Reg(PeripheralBase, Value) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadClockGating4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads clock gating control register 4.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC4.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadClockGating4Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadClockGating4Reg(PeripheralBase) ( \
    SIM_SCGC4_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteClockGating4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into clock gating
 * control register 4.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the clock gating control register 4. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC4.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteClockGating4Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteClockGating4Reg(PeripheralBase, Value) ( \
    SIM_SCGC4_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadClockGating5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads clock gating control register 5.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC5.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadClockGating5Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadClockGating5Reg(PeripheralBase) ( \
    SIM_SCGC5_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteClockGating5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into clock gating
 * control register 5.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the clock gating control register 5. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC5.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteClockGating5Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteClockGating5Reg(PeripheralBase, Value) ( \
    SIM_SCGC5_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadClockGating6Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads clock gating control register 6.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC6.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadClockGating6Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadClockGating6Reg(PeripheralBase) ( \
    SIM_SCGC6_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteClockGating6Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into clock gating
 * control register 6.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the clock gating control register 6. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC6.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteClockGating6Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteClockGating6Reg(PeripheralBase, Value) ( \
    SIM_SCGC6_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- SetClock1OutputDivider
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets clock 1 output divider Value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider New value of the clock 1 output divider. This parameter is a
 *        4-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClock1OutputDivider(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_SetClock1OutputDivider(PeripheralBase, Divider) ( \
    SIM_CLKDIV1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV1_MASK)))) | ( \
      (uint32_t)((uint32_t)(Divider) << SIM_CLKDIV1_OUTDIV1_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SetClock4OutputDivider
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKL03Z4)) || (defined(MCU_MKL13Z4)) || (defined(MCU_MKL23Z4)) || (defined(MCU_MKL33Z4)) || (defined(MCU_MKL43Z4)) || (defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/**
 * @brief Sets clock 4 output divider Value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider New value of the clock 4 output divider. This parameter is a
 *        3-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClock4OutputDivider(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_SetClock4OutputDivider(PeripheralBase, Divider) ( \
      SIM_CLKDIV1_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_CLKDIV1_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV4_MASK)))) | ( \
        (uint32_t)((uint32_t)(Divider) << SIM_CLKDIV1_OUTDIV4_SHIFT))) \
    )
#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Sets clock 4 output divider Value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider New value of the clock 4 output divider. This parameter is a
 *        4-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClock4OutputDivider(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
  #define SIM_PDD_SetClock4OutputDivider(PeripheralBase, Divider) ( \
      SIM_CLKDIV1_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_CLKDIV1_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV4_MASK)))) | ( \
        (uint32_t)((uint32_t)(Divider) << SIM_CLKDIV1_OUTDIV4_SHIFT))) \
    )
#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- ReadFlashConfiguration1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads flash configuration 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_FCFG1.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadFlashConfiguration1Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadFlashConfiguration1Reg(PeripheralBase) ( \
    SIM_FCFG1_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteFlashConfiguration1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into flash
 * configuration 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the flash configuration 1 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_FCFG1.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteFlashConfiguration1Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteFlashConfiguration1Reg(PeripheralBase, Value) ( \
    SIM_FCFG1_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadFlashConfiguration2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads flash configuration 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_FCFG2.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadFlashConfiguration2Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadFlashConfiguration2Reg(PeripheralBase) ( \
    SIM_FCFG2_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniqueIdentificationMidHighReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads unique identification mid-high register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UIDMH.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniqueIdentificationMidHighReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniqueIdentificationMidHighReg(PeripheralBase) ( \
    SIM_UIDMH_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniqueIdentificationMidLowReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads unique identification mid-low register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UIDML.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniqueIdentificationMidLowReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniqueIdentificationMidLowReg(PeripheralBase) ( \
    SIM_UIDML_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniqueIdentificationLowReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads unique identification low register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UIDL.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniqueIdentificationLowReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniqueIdentificationLowReg(PeripheralBase) ( \
    SIM_UIDL_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadCOPControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads COP control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_COPC.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadCOPControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadCOPControlReg(PeripheralBase) ( \
    SIM_COPC_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteCOPControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into COP control
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the COP control register. This parameter
 *        is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_COPC.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteCOPControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteCOPControlReg(PeripheralBase, Value) ( \
    SIM_COPC_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- WriteCOPServiceReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into COP service
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the COP service register. This parameter
 *        is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SRVCOP.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteCOPServiceReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteCOPServiceReg(PeripheralBase, Value) ( \
    SIM_SRVCOP_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- SetClockSourceLPUART1
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock source (in the SIM module).
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. Possible values: DISABLE_CLOCK,
 *        FAST_INTERNAL_REF_CLOCK, EXTERNAL_REF_CLOCK, SLOW_INTERNAL_REF_CLOCK. This parameter is
 *        of "Clock sources" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClockSourceLPUART1(<peripheral>_BASE_PTR,
 *      SIM_PDD_LPUART1_DISABLE_CLOCK);
 *      @endcode
 */
#define SIM_PDD_SetClockSourceLPUART1(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_LPUART1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectLptrm32kHzClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the 32 kHz clock source (ERCLK32K) for LPTMR.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. The user should use one from the enumerated
 *        values. This parameter is of "32 kHz clock source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectLptrm32kHzClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_LPTMR_SYSTEM_OSCILLATOR);
 *      @endcode
 */
#define SIM_PDD_SelectLptrm32kHzClockSource(PeripheralBase, Source) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT1_OSC32KSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtmClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the fixed frequency clock for FTM0, FTM1 and FTM2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTMx clock source. The user should use one from the enumerated
 *        values. This parameter is of "Clock for FTMx constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtmClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM_FIXED_FREQUENCY);
 *      @endcode
 */
#define SIM_PDD_SelectFtmClockSource(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_FTMFFCLKSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectClkOutPinClock
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock to output on the CLKOUT pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ClkOut Clock to output on the CLKOUT pin source. The user should use
 *        one from the enumerated values. This parameter is of "Clock to output on
 *        the CLKOUT pin constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectClkOutPinClock(<peripheral>_BASE_PTR,
 *      SIM_PDD_CLKOUT_BUS_CLOCK);
 *      @endcode
 */
#define SIM_PDD_SelectClkOutPinClock(PeripheralBase, ClkOut) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_CLKOUTSEL_MASK)))) | ( \
      (uint32_t)(ClkOut))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2ExternalClockPin
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the flex timer 2 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ExtPin FTM2 external clock pin select. The user should use one from
 *        the enumerated values. This parameter is of "FTM2 external clock pin
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2ExternalClockPin(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_CLKIN0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2ExternalClockPin(PeripheralBase, ExtPin) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2CLKSEL_MASK)))) | ( \
      (uint32_t)(ExtPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1ExternalClockPin
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the flex timer 1 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ExtPin FTM1 external clock pin select. The user should use one from
 *        the enumerated values. This parameter is of "FTM1 external clock pin
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1ExternalClockPin(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_CLKIN0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1ExternalClockPin(PeripheralBase, ExtPin) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1CLKSEL_MASK)))) | ( \
      (uint32_t)(ExtPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0ExternalClockPin
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the flex timer 0 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ExtPin FTM0 external clock pin select. The user should use one from
 *        the enumerated values. This parameter is of "FTM0 external clock pin
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0ExternalClockPin(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_CLKIN0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0ExternalClockPin(PeripheralBase, ExtPin) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0CLKSEL_MASK)))) | ( \
      (uint32_t)(ExtPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2Channel1InputCaptureSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source for flex timer 2 channel 1 input capture.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM2 channel 1 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "FTM2 channel 1 input
 *        capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2Channel1InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_CH1_INPUT_FTM2_CH1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2Channel1InputCaptureSource(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2ICH1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2Channel0InputCaptureSource
   ---------------------------------------------------------------------------- */

#if (defined(MCU_MKV10Z7))
/**
 * @brief Selects the source for flex timer 2 channel 0 input capture.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM2 channel 0 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "FTM2 channel 0 input
 *        capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2Channel0InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_CH0_INPUT_FTM2_CH0);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm2Channel0InputCaptureSource(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2ICH0SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Selects the source for flex timer 2 channel 0 input capture.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM2 channel 0 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "FTM2 channel 0 input
 *        capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2Channel0InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_CH0_INPUT_FTM2_CH0);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm2Channel0InputCaptureSource(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2CH0SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- SelectFtm1Channel0InputCaptureSource
   ---------------------------------------------------------------------------- */

#if (defined(MCU_MKV10Z7))
/**
 * @brief Selects the source for flex timer 1 channel 0 input capture.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM1 channel 0 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "FTM1 channel 0 input
 *        capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1Channel0InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_CH0_INPUT_FTM1_CH0);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm1Channel0InputCaptureSource(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1ICH0SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Selects the source for flex timer 1 channel 0 input capture.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM1 channel 0 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "FTM1 channel 0 input
 *        capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1Channel0InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_CH0_INPUT_FTM1_CH0);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm1Channel0InputCaptureSource(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1CH0SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- SelectFtm2HardwareTrigger2Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 2 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM2 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM2 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_TRIGGER2_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2HardwareTrigger2Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2TRG2SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2HardwareTrigger1Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 2 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM2 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM2 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2HardwareTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_TRIGGER1_PDB_TRIGGER1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2HardwareTrigger1Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2TRG1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2HardwareTrigger0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 2 hardware trigger 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM2 hardware trigger 0. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM2 hardware
 *        trigger 0 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2HardwareTrigger0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_TRIGGER0_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2HardwareTrigger0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2TRG0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1HardwareTrigger2Source
   ---------------------------------------------------------------------------- */

#if (defined(MCU_MKV10Z7))
/**
 * @brief Selects the source of flex timer 1 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM1 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM1 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_TRIGGER2_CMP0_OUTPUT);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm1HardwareTrigger2Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1TRG2SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/**
 * @brief Selects the source of flex timer 1 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM1 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM1 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_TRIGGER2_FTM1_FLT0_PIN);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm1HardwareTrigger2Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1TRG2SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */

/* ----------------------------------------------------------------------------
   -- SelectFtm1HardwareTrigger1Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 1 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM1 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM1 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1HardwareTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_TRIGGER1_PDB_CHANNEL1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1HardwareTrigger1Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1TRG1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1HardwareTrigger0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 1 hardware trigger 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM1 hardware trigger 0. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM1 hardware
 *        trigger 0 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1HardwareTrigger0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_TRIGGER0_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1HardwareTrigger0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1TRG0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0HardwareTrigger2Source
   ---------------------------------------------------------------------------- */

#if (defined(MCU_MKV10Z7))
/**
 * @brief Selects the source of flex timer 0 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER2_CMP0_OUTPUT);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm0HardwareTrigger2Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG2SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */
/**
 * @brief Selects the source of flex timer 0 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER2_FTM0_FLT0_PIN);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm0HardwareTrigger2Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG2SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) */

/* ----------------------------------------------------------------------------
   -- SelectFtm0Hardw0areTrigger1Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0Hardw0areTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0Hardw0areTrigger1Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0HardwareTrigger0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 hardware trigger 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 0. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 0 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0HardwareTrigger0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER0_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0HardwareTrigger0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm2Fault0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 2 fault 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM2 fault 0. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM2 fault 0 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm2Fault0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM2_FAULT0_FTM2_FLT0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm2Fault0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM2FLT0_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1Fault0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 1 fault 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM1 fault 0. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM1 fault 0 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1Fault0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_FAULT0_FTM1_FLT0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1Fault0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM1FLT0_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0Fault1Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 fault 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 fault 1. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM0 fault 1 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0Fault1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_FAULT1_FTM0_FLT1_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0Fault1Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0FLT1_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0Fault0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 fault 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 fault 0. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM0 fault 0 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0Fault0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_FAULT0_FTM0_FLT0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0Fault0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0FLT0_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableUart1OpenDrain
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables or disables the open drain on UART1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of open drain on UART1. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableUart1OpenDrain(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableUart1OpenDrain(PeripheralBase, State) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT5_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT5_UART1ODE_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT5_UART1ODE_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableUart0OpenDrain
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables or disables the open drain on UART0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of open drain on UART0. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableUart0OpenDrain(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableUart0OpenDrain(PeripheralBase, State) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT5_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT5_UART0ODE_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT5_UART0ODE_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectUart1RxDataSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source for the UART 1 receive data.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of UART 1 receive data. The user should use one from the
 *        enumerated values. This parameter is of "Source of UART 1 RxD
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectUart1RxDataSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART1_RX_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectUart1RxDataSource(PeripheralBase, Source) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT5_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT5_UART1RXSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectUart1TxDataSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source for the UART 1 transmit data.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of UART 1 transmit data. The user should use one from
 *        the enumerated values. This parameter is of "Source of UART 1 TxD
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectUart1TxDataSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART1_TX_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectUart1TxDataSource(PeripheralBase, Source) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT5_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT5_UART1TXSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectUart0RxDataSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source for the UART 0 receive data.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of UART 0 receive data. The user should use one from the
 *        enumerated values. This parameter is of "Source of UART 0 RxD
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectUart0RxDataSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART0_RX_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectUart0RxDataSource(PeripheralBase, Source) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT5_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT5_UART0RXSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectUart0TxDataSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source for the UART 0 transmit data.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of UART 0 transmit data. The user should use one from
 *        the enumerated values. This parameter is of "Source of UART 0 TxD
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT5.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectUart0TxDataSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_UART0_TX_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectUart0TxDataSource(PeripheralBase, Source) ( \
    SIM_SOPT5_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT5_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT5_UART1TXSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc1AlternateClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADC1 alternate clock source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC1 alternate clock source. The user should use one from the
 *        enumerated values. This parameter is of "ADC1 alternate clock source
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc1AlternateClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC1_ALT_CLK_CORE_CLK_DIV_5);
 *      @endcode
 */
#define SIM_PDD_SelectAdc1AlternateClockSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC1ALTCLKSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc0AlternateClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADC0 alternate clock source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC0 alternate clock source. The user should use one from the
 *        enumerated values. This parameter is of "ADC0 alternate clock source
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc0AlternateClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC0_ALT_CLK_CORE_CLK_DIV_5);
 *      @endcode
 */
#define SIM_PDD_SelectAdc0AlternateClockSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC0ALTCLKSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableAdc1AlternateTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables or disables alternative conversion triggers for ADC1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of ADC1 alternate trigger. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableAdc1AlternateTrigger(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableAdc1AlternateTrigger(PeripheralBase, State) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC1ALTTRGEN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT7_ADC1ALTTRGEN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc1PreTriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADC1 pre-trigger source when alternative triggers are
 * enabled.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC1 pre-trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADC1 pre-trigger source constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc1PreTriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC1_PRE_TRIGGER_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdc1PreTriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC1PRETRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc1TriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADC1 trigger source when alternative triggers are
 * functional in Stop and VLPS modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC1 trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADC1 trigger source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc1TriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC1_TRIGGER_EXTERNAL_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectAdc1TriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC1TRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableAdc0AlternateTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables or disables alternative conversion triggers for ADC0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of ADC0 alternate trigger. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableAdc0AlternateTrigger(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableAdc0AlternateTrigger(PeripheralBase, State) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC0ALTTRGEN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT7_ADC0ALTTRGEN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc0PreTriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADC0 pre-trigger source when alternative triggers are
 * enabled.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC0 pre-trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADC0 pre-trigger source constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc0PreTriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC0_PRE_TRIGGER_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdc0PreTriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC0PRETRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdc0TriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADC0 trigger source when alternative triggers are
 * functional in Stop and VLPS modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADC0 trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADC0 trigger source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdc0TriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADC0_TRIGGER_EXTERNAL_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectAdc0TriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADC0TRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption8Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 8 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption8Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption8Reg(PeripheralBase) ( \
    SIM_SOPT8_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption8Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 8 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 8 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption8Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption8Reg(PeripheralBase, Value) ( \
    SIM_SOPT8_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- GetVFamilyDeviceId
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/**
 * @brief Returns the V-family ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "V-family ID constant." type. The value is cast to
 *         "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetVFamilyDeviceId(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_GetVFamilyDeviceId(PeripheralBase) ( \
      (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_FAMID_MASK) \
    )
#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Returns the W-family ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "V-family ID constant." type. The value is cast to
 *         "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetVFamilyDeviceId(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_GetVFamilyDeviceId(PeripheralBase) ( \
      (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_FAMID_MASK) \
    )
#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- GetSubFamilyDeviceId
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the sub-family ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Sub-family ID constant." type. The value is cast
 *         to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetSubFamilyDeviceId(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetSubFamilyDeviceId(PeripheralBase) ( \
    (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_SUBFAMID_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- GetSeriesDeviceId
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the series ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Series ID constant." type. The value is cast to
 *         "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetSeriesDeviceId(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetSeriesDeviceId(PeripheralBase) ( \
    (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_SERIERID_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- GetSystemSramSize
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKV10Z7)) || (defined(MCU_MKW01Z4)))
/**
 * @brief Returns the system SRAM size.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "System SRAM size constant." type. The value is
 *         cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID, SIM_SOPT1
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetSystemSramSize(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_GetSystemSramSize(PeripheralBase) ( \
      (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_SRAMSIZE_MASK) \
    )
#else /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Returns the system SRAM size.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "System SRAM size constant." type. The value is
 *         cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID, SIM_SOPT1
 *          (depending on the peripheral).
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetSystemSramSize(<peripheral>_BASE_PTR);
 *      @endcode
 */
  #define SIM_PDD_GetSystemSramSize(PeripheralBase) ( \
      (uint32_t)(SIM_SOPT1_REG(PeripheralBase) & SIM_SOPT1_RAMSIZE_MASK) \
    )
#endif /* (defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)) || (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- GetDeviceRevisionNumber
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns device revision number value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 4-bit value. The value is cast to "uint8_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint8_t result = SIM_PDD_GetDeviceRevisionNumber(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetDeviceRevisionNumber(PeripheralBase) ( \
    (uint8_t)(( \
     (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_REVID_MASK)) >> ( \
     SIM_SDID_REVID_SHIFT)) \
  )

/* ----------------------------------------------------------------------------
   -- GetDeviceDieNumber
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns device die number value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 5-bit value. The value is cast to "uint8_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint8_t result = SIM_PDD_GetDeviceDieNumber(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetDeviceDieNumber(PeripheralBase) ( \
    (uint8_t)(( \
     (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_DIEID_MASK)) >> ( \
     SIM_SDID_DIEID_SHIFT)) \
  )

/* ----------------------------------------------------------------------------
   -- GetPincountIndetification
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the pincount indetification of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Pincount indetification constant." type. The
 *         value is cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_GetPincountIndetification(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetPincountIndetification(PeripheralBase) ( \
    (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_PINID_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemDeviceIdentificationReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system device identification register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemDeviceIdentificationReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemDeviceIdentificationReg(PeripheralBase) ( \
    SIM_SDID_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockGatingControl4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock gating control 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC4.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockGatingControl4Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockGatingControl4Reg(PeripheralBase) ( \
    SIM_SCGC4_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockGatingControl4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * gating control 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock gating control 4
 *        register. This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC4.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockGatingControl4Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockGatingControl4Reg(PeripheralBase, Value) ( \
    SIM_SCGC4_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockGatingControl5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock gating control 5 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC5.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockGatingControl5Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockGatingControl5Reg(PeripheralBase) ( \
    SIM_SCGC5_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockGatingControl5Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * gating control 5 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock gating control 5
 *        register. This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC5.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockGatingControl5Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockGatingControl5Reg(PeripheralBase, Value) ( \
    SIM_SCGC5_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockGatingControl6Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock gating control 6 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC6.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockGatingControl6Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockGatingControl6Reg(PeripheralBase) ( \
    SIM_SCGC6_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockGatingControl6Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * gating control 6 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock gating control 6
 *        register. This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC6.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockGatingControl6Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockGatingControl6Reg(PeripheralBase, Value) ( \
    SIM_SCGC6_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockGatingControl7Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock gating control 7 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SCGC7.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockGatingControl7Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockGatingControl7Reg(PeripheralBase) ( \
    SIM_SCGC7_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockGatingControl7Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * gating control 7 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock gating control 7
 *        register. This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SCGC7.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockGatingControl7Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockGatingControl7Reg(PeripheralBase, Value) ( \
    SIM_SCGC7_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- EnableClock5OutputDivider
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables the clock 5 output divider control.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of clock 5 output divider control. This
 *        parameter is of "Global enumeration used for specifying general enable/disable
 *        states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableClock5OutputDivider(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableClock5OutputDivider(PeripheralBase, State) ( \
    SIM_CLKDIV1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV5EN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_CLKDIV1_OUTDIV5EN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SetClock5OutputDivider
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets clock 5 output divider Value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider New value of the clock 5 output divider. This parameter is a
 *        3-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClock5OutputDivider(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_SetClock5OutputDivider(PeripheralBase, Divider) ( \
    SIM_CLKDIV1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV5_MASK)))) | ( \
      (uint32_t)((uint32_t)(Divider) << SIM_CLKDIV1_OUTDIV5_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockDivider1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock divider 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockDivider1Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockDivider1Reg(PeripheralBase) ( \
    SIM_CLKDIV1_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockDivider1Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * divider 1 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock divider 1 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockDivider1Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockDivider1Reg(PeripheralBase, Value) ( \
    SIM_CLKDIV1_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- GetProgramFlashSize
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the amount of program flash memory available on the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Program flash size constants." type. The value is
 *         cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_FCFG1.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetProgramFlashSize(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetProgramFlashSize(PeripheralBase) ( \
    (uint32_t)(SIM_FCFG1_REG(PeripheralBase) & SIM_FCFG1_PFSIZE_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- EnableFlashMemoryInDozeMode
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables the flash memory for the duration of doze mode.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of flash memory for the duration of doze mode.
 *        This parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_FCFG1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableFlashMemoryInDozeMode(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableFlashMemoryInDozeMode(PeripheralBase, State) ( \
    ((State) == PDD_DISABLE) ? ( \
      SIM_FCFG1_REG(PeripheralBase) |= \
       SIM_FCFG1_FLASHDOZE_MASK) : ( \
      SIM_FCFG1_REG(PeripheralBase) &= \
       (uint32_t)(~(uint32_t)SIM_FCFG1_FLASHDOZE_MASK)) \
  )

/* ----------------------------------------------------------------------------
   -- EnableFlashMemoryAccess
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables the flash memory access. When flash accesses are
 * disabled, the flash memory is placed in a low power state.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of flash memory access. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_FCFG1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableFlashMemoryAccess(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableFlashMemoryAccess(PeripheralBase, State) ( \
    ((State) == PDD_DISABLE) ? ( \
      SIM_FCFG1_REG(PeripheralBase) |= \
       SIM_FCFG1_FLASHDIS_MASK) : ( \
      SIM_FCFG1_REG(PeripheralBase) &= \
       (uint32_t)(~(uint32_t)SIM_FCFG1_FLASHDIS_MASK)) \
  )

/* ----------------------------------------------------------------------------
   -- GetFirstInvalidAddressValue
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the first invalid address value of program flash.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_FCFG2.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_GetFirstInvalidAddressValue(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetFirstInvalidAddressValue(PeripheralBase) ( \
    (uint32_t)((uint32_t)(SIM_FCFG2_REG(PeripheralBase) & SIM_FCFG2_MAXADDR_MASK) << 13U) \
  )

/* ----------------------------------------------------------------------------
   -- SelectWatchdogClocktSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock source of the watchdog.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Watchdog clock source parameter. The user should use one from
 *        the enumerated values. This parameter is of "Watchdog clock source
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_WDOGCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectWatchdogClocktSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_WDOG_INTERNAL_1KHZ);
 *      @endcode
 */
#define SIM_PDD_SelectWatchdogClocktSource(PeripheralBase, Source) ( \
    SIM_WDOGCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_WDOGCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_WDOGCTRL_WDOGCLKS_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadWatchdogControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads watchdog control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_WDOGCTRL.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadWatchdogControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadWatchdogControlReg(PeripheralBase) ( \
    SIM_WDOGCTRL_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteWatchdogControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into watchdog
 * control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the watchdog control register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_WDOGCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteWatchdogControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteWatchdogControlReg(PeripheralBase, Value) ( \
    SIM_WDOGCTRL_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- SelectLptmr32kHzClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the 32 kHz clock source (ERCLK32K) for LPTMR.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source. The user should use one from the enumerated
 *        values. This parameter is of "32 kHz clock source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectLptmr32kHzClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_LPTMR_SYSTEM_OSCILLATOR);
 *      @endcode
 */
#define SIM_PDD_SelectLptmr32kHzClockSource(PeripheralBase, Source) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT1_OSC32KSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectNanoedgeClock
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the PLL 2x clock(MCGPLLCLK2X) or 1x clock (MCGPLLCLK) as the
 * nanoedge clock source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Nanoedge clock source. This parameter is of "Debug/trace clock
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectNanoedgeClock(<peripheral>_BASE_PTR, SIM_PDD_MCGPLLCLK);
 *      @endcode
 */
#define SIM_PDD_SelectNanoedgeClock(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_NANOEDGECLK2XSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- DebugTraceClockSelect
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/**
 * @brief Selects the core, system and platform clock or MCGOUTCLK as the trace
 * clock source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Debug/trace clock source. This parameter is of "Debug/trace
 *        clock source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_DebugTraceClockSelect(<peripheral>_BASE_PTR, SIM_PDD_MCGOUTCLK);
 *      @endcode
 */
  #define SIM_PDD_DebugTraceClockSelect(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT2_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT2_TRACECLKSEL_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Selects the Core, system and platform clock or MCGOUTCLK as the trace
 * clock source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Debug/trace clock source. This parameter is of "Debug/trace
 *        clock source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_DebugTraceClockSelect(<peripheral>_BASE_PTR, SIM_PDD_MCGOUTCLK);
 *      @endcode
 */
  #define SIM_PDD_DebugTraceClockSelect(PeripheralBase, Source) ( \
      SIM_SOPT2_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT2_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT2_TRACECLKSEL_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- CLKOUTClockSelect
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock to output on the CLKOUT pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source CLKOUT pin clock source. This parameter is of "CLKOUT pin clock
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_CLKOUTClockSelect(<peripheral>_BASE_PTR, SIM_PDD_FLASHCLK);
 *      @endcode
 */
#define SIM_PDD_CLKOUTClockSelect(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_CLKOUTSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm3HardwareTrigger2Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 3 hardware trigger 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM3 hardware trigger 2. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM3 hardware
 *        trigger 2 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm3HardwareTrigger2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_TRIGGER2_FTM3_FLT0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm3HardwareTrigger2Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM3TRG2SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm3HardwareTrigger1Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 3 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM3 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM3 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm3HardwareTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_TRIGGER1_PDB_CHANNEL1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm3HardwareTrigger1Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM3TRG1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm3HardwareTrigger0Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 3 hardware trigger 0.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM3 hardware trigger 0. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM3 hardware
 *        trigger 0 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm3HardwareTrigger0Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_TRIGGER0_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectFtm3HardwareTrigger0Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT4_FTM3TRG0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0HardwareTrigger1Source
   ---------------------------------------------------------------------------- */

#if ((defined(MCU_MKV40F15)) || (defined(MCU_MKV43F15)) || (defined(MCU_MKV44F15)) || (defined(MCU_MKV45F15)) || (defined(MCU_MKV46F15)))
/**
 * @brief Selects the source of flex timer 0 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0HardwareTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL0);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm0HardwareTrigger1Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG1SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#else /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */
/**
 * @brief Selects the source of flex timer 0 hardware trigger 1.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 hardware trigger 1. The user should use one from
 *        the enumerated values. This parameter is of "Source of FTM0 hardware
 *        trigger 1 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0HardwareTrigger1Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_TRIGGER1_PDB_CHANNEL1);
 *      @endcode
 */
  #define SIM_PDD_SelectFtm0HardwareTrigger1Source(PeripheralBase, Source) ( \
      SIM_SOPT4_REG(PeripheralBase) = \
       (uint32_t)(( \
        (uint32_t)(( \
         SIM_SOPT4_REG(PeripheralBase)) & ( \
         (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0TRG1SRC_MASK)))) | ( \
        (uint32_t)(Source))) \
    )
#endif /* (defined(MCU_MKW21D5)) || (defined(MCU_MKW21D5WS)) || (defined(MCU_MKW22D5)) || (defined(MCU_MKW22D5WS)) || (defined(MCU_MKW24D5)) || (defined(MCU_MKW24D5WS)) */

/* ----------------------------------------------------------------------------
   -- SelectFtm0Fault3Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 fault 3.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 fault 3. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM0 fault 3 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0Fault3Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_FAULT3_FTM0_FLT3_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0Fault3Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0FLT3_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0Fault2Source
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the source of flex timer 0 fault 2.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Source of FTM0 fault 2. The user should use one from the
 *        enumerated values. This parameter is of "Source of FTM0 fault 2 constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT4.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0Fault2Source(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_FAULT2_FTM0_FLT2_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0Fault2Source(PeripheralBase, Source) ( \
    SIM_SOPT4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT4_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT4_FTM0FLT2_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableAdcbAlternateTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Enable ADCB alternative conversion triggers for ADCB.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADCB trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADCB conversion triggers constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableAdcbAlternateTrigger(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCB_XBARA_OUT13);
 *      @endcode
 */
#define SIM_PDD_EnableAdcbAlternateTrigger(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADCBALTTRGEN_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcbTriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADCB trigger source when alternative triggers are
 * functional in Stop and VLPS modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADCB trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADCB trigger source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcbTriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCB_TRIGGER_CMP0_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SelectAdcbTriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADCBTRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableAdcaAlternateTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Enable ADCA alternative conversion triggers for ADCB.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADCA trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADCA conversion triggers constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableAdcaAlternateTrigger(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCA_XBARA_OUT12);
 *      @endcode
 */
#define SIM_PDD_EnableAdcaAlternateTrigger(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADCAALTTRGEN_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcaTriggerSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the ADCA trigger source when alternative triggers are
 * functional in Stop and VLPS modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source ADCA trigger source. The user should use one from the
 *        enumerated values. This parameter is of "ADCA trigger source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT7.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcaTriggerSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCA_TRIGGER_PDB0_EXTTRG);
 *      @endcode
 */
#define SIM_PDD_SelectAdcaTriggerSource(PeripheralBase, Source) ( \
    SIM_SOPT7_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT7_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT7_ADCATRGSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SetFtm3OutputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Set FTM3 channel x output source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param OutputMask Mask of FTM3_CHx pin defining which should be set as
 *        output. The user should use the constant values. Use constants from group
 *        "FTM3 channel pin mask constants.". This parameter is 32 bits wide.
 * @param ModulatedMask Mask of FTM3_CHx pin defining which should be set as
 *        output modulated by carrier frequency clock, as per FTM3CFSEL. The user
 *        should use the constant values. Use constants from group "FTM3 channel
 *        pin mask constants.". This parameter is 32 bits wide.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_SetFtm3OutputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_CHANNEL7_OUTPUT, SIM_PDD_FTM3_CHANNEL7_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SetFtm3OutputSource(PeripheralBase, OutputMask, ModulatedMask) ( \
    SIM_SOPT8_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT8_REG(PeripheralBase) & (uint32_t)(~(uint32_t)(OutputMask)))) | ( \
      (uint32_t)(ModulatedMask))) \
  )

/* ----------------------------------------------------------------------------
   -- SetFtm0OutputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Set FTM0 channel x output source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param OutputMask Mask of FTM0_CHx pin defining which should be set as
 *        output. The user should use the constant values. Use constants from group
 *        "FTM0 channel pin mask constants.". This parameter is 32 bits wide.
 * @param ModulatedMask Mask of FTM0_CHx pin defining which should be set as
 *        output modulated by carrier frequency clock, as per FTM0CFSEL. The user
 *        should use the constant values. Use constants from group "FTM0 channel
 *        pin mask constants.". This parameter is 32 bits wide.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_SetFtm0OutputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_CHANNEL7_OUTPUT, SIM_PDD_FTM0_CHANNEL7_OUTPUT);
 *      @endcode
 */
#define SIM_PDD_SetFtm0OutputSource(PeripheralBase, OutputMask, ModulatedMask) ( \
    SIM_SOPT8_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT8_REG(PeripheralBase) & (uint32_t)(~(uint32_t)(OutputMask)))) | ( \
      (uint32_t)(ModulatedMask))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm3CarrierModulation
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects carrier frequency for FTM3 output channel.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM3 carrier modulation source. The user should use one from
 *        the enumerated values. This parameter is of "FTM3 carrier modulation
 *        constants." type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm3CarrierModulation(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_MODULATED_BY_FTM1_CH1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm3CarrierModulation(PeripheralBase, Source) ( \
    SIM_SOPT8_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT8_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT8_FTM3CFSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0CarrierModulation
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects carrier frequency for FTM0 output channel.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM0 carrier modulation source. The user should use one from
 *        the enumerated values. This parameter is of "FTM0 carrier modulation
 *        constants." type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0CarrierModulation(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_MODULATED_BY_FTM1_CH1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0CarrierModulation(PeripheralBase, Source) ( \
    SIM_SOPT8_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT8_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT8_FTM0CFSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- AssertFtmTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Assert FTMx TRIG0 input.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param FtmMask Mask of FTMx device defining which should be assert the
 *        trigger input. The user should use the constant values. Use constants from
 *        group "FTM channel mask constants.". This parameter is 32 bits wide.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT8.
 * @par Example:
 *      @code
 *      SIM_PDD_AssertFtmTrigger(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_TRIGGER0_INPUT);
 *      @endcode
 */
#define SIM_PDD_AssertFtmTrigger(PeripheralBase, FtmMask) ( \
    (SIM_SOPT8_REG(PeripheralBase) |= \
     (uint32_t)(FtmMask)), \
    (SIM_SOPT8_REG(PeripheralBase) &= \
     (uint32_t)(~(uint32_t)0xBU)) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm3ExternalClock
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects flex timer 3 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ClockPin FTM3 external pin. The user should use one from the
 *        enumerated values. This parameter is of "Flex timer 3 external clock constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm3ExternalClock(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM3_DRIVEN_BY_FTM_CLK0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm3ExternalClock(PeripheralBase, ClockPin) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT9_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT9_FTM3CLKSEL_MASK)))) | ( \
      (uint32_t)(ClockPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1ExternalClock
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects flex timer 1 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ClockPin FTM1 external pin. The user should use one from the
 *        enumerated values. This parameter is of "Flex timer 1 external clock constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1ExternalClock(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_DRIVEN_BY_FTM_CLK0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1ExternalClock(PeripheralBase, ClockPin) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT9_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT9_FTM1CLKSEL_MASK)))) | ( \
      (uint32_t)(ClockPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm0ExternalClock
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects flex timer 0 external clock pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param ClockPin FTM0 external pin. The user should use one from the
 *        enumerated values. This parameter is of "Flex timer 0 external clock constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm0ExternalClock(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM0_DRIVEN_BY_FTM_CLK0_PIN);
 *      @endcode
 */
#define SIM_PDD_SelectFtm0ExternalClock(PeripheralBase, ClockPin) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT9_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT9_FTM0CLKSEL_MASK)))) | ( \
      (uint32_t)(ClockPin))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1Ch1InputCaptureSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects flex timer 1 channel 1 input capture source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM1 channel 1 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "Flex timer 1 channel 1
 *        input capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1Ch1InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_CH1_CAPTURED_BY_FTM1_CH1);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1Ch1InputCaptureSource(PeripheralBase, Source) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT9_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT9_FTM1ICH1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectFtm1Ch0InputCaptureSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects flex timer 1 channel 0 input capture source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source FTM1 channel 0 input capture source. The user should use one
 *        from the enumerated values. This parameter is of "Flex timer 1 channel 0
 *        input capture source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectFtm1Ch0InputCaptureSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_FTM1_CH0_CAPTURED_BY_FTM1_CH0);
 *      @endcode
 */
#define SIM_PDD_SelectFtm1Ch0InputCaptureSource(PeripheralBase, Source) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT9_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT9_FTM1ICH0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemOption9Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system options 9 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadSystemOption9Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemOption9Reg(PeripheralBase) ( \
    SIM_SOPT9_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemOption9Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system options
 * 9 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system options 9 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT9.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemOption9Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemOption9Reg(PeripheralBase, Value) ( \
    SIM_SOPT9_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- GetKinetisFamilyId
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns kinetis family ID value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 4-bit value. The value is cast to "uint8_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint8_t result = SIM_PDD_GetKinetisFamilyId(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetKinetisFamilyId(PeripheralBase) ( \
    (uint8_t)(( \
     (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_FAMILYID_MASK)) >> ( \
     SIM_SDID_FAMILYID_SHIFT)) \
  )

/* ----------------------------------------------------------------------------
   -- GetKinetisSubfamilyId
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the kinetis sub-family ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Kinetis sub-family ID constant." type. The value
 *         is cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetKinetisSubfamilyId(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetKinetisSubfamilyId(PeripheralBase) ( \
    (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_SUBFAMID_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- GetKinetisSeriesId
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the kinetis series ID of the device.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Kinetis series ID constant." type. The value is
 *         cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_SDID.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetKinetisSeriesId(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetKinetisSeriesId(PeripheralBase) ( \
    (uint32_t)(SIM_SDID_REG(PeripheralBase) & SIM_SDID_SERIESID_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- SetClock2OutputDivider
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets clock 2 output divider Value.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider New value of the clock 2 output divider. This parameter is a
 *        4-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV1.
 * @par Example:
 *      @code
 *      SIM_PDD_SetClock2OutputDivider(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_SetClock2OutputDivider(PeripheralBase, Divider) ( \
    SIM_CLKDIV1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV1_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV1_OUTDIV2_MASK)))) | ( \
      (uint32_t)((uint32_t)(Divider) << SIM_CLKDIV1_OUTDIV2_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadUniqueIdentificationHighReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads unique identification register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_UIDH.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadUniqueIdentificationHighReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadUniqueIdentificationHighReg(PeripheralBase) ( \
    SIM_UIDH_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- EnableDebugTraceDivider
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables debug trace divider control.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of debug trace divider control. This parameter
 *        is of "Global enumeration used for specifying general enable/disable
 *        states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV4.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableDebugTraceDivider(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableDebugTraceDivider(PeripheralBase, State) ( \
    SIM_CLKDIV4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV4_TRACEDIVEN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_CLKDIV4_TRACEDIVEN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SetTraceClockDividerDivisor
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets the trace clock divider divisor.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Trace clock divider divisor value[0..7]. This parameter is a
 *        3-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV4.
 * @par Example:
 *      @code
 *      SIM_PDD_SetTraceClockDividerDivisor(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_SetTraceClockDividerDivisor(PeripheralBase, Value) ( \
    SIM_CLKDIV4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV4_TRACEDIV_MASK)))) | ( \
      (uint32_t)((uint32_t)(Value) << SIM_CLKDIV4_TRACEDIV_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SetTraceClockDividerFraction
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets the trace clock divider fraction.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Trace clock divider fraction value[0..1]. This parameter is a
 *        1-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV4.
 * @par Example:
 *      @code
 *      SIM_PDD_SetTraceClockDividerFraction(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_SetTraceClockDividerFraction(PeripheralBase, Value) ( \
    SIM_CLKDIV4_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV4_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV4_TRACEFRAC_MASK)))) | ( \
      (uint32_t)(Value))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockDivider4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock divider 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_CLKDIV4.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockDivider4Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockDivider4Reg(PeripheralBase) ( \
    SIM_CLKDIV4_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockDivider4Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * divider 4 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock divider 4 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV4.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockDivider4Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockDivider4Reg(PeripheralBase, Value) ( \
    SIM_CLKDIV4_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- SelectDac0HwTriggerInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects DAC0 hardware trigger input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source DAC0 hardware trigger input source. The user should use one
 *        from the enumerated values. This parameter is of "DAC0 hardware trigger
 *        input source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectDac0HwTriggerInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_DAC0_TRIGGERED_BY_XBARA_OUT15);
 *      @endcode
 */
#define SIM_PDD_SelectDac0HwTriggerInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_DACTRIGSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectEwmInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects external watchdog monitor input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source EWM input source. The user should use one from the enumerated
 *        values. This parameter is of "EWM input source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectEwmInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_EWM_INPUT_FROM_XBARA_OUT58);
 *      @endcode
 */
#define SIM_PDD_SelectEwmInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_EWMINSRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectCmp3SampleInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects CMP3 sample/window input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source CMP3 sample/window input source. The user should use one from
 *        the enumerated values. This parameter is of "CMP3 sample/window input
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectCmp3SampleInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_CMP3_SAMPLED_BY_XBARA_OUT19);
 *      @endcode
 */
#define SIM_PDD_SelectCmp3SampleInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_CMPWIN3SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectCmp2SampleInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects CMP2 sample/window input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source CMP2 sample/window input source. The user should use one from
 *        the enumerated values. This parameter is of "CMP2 sample/window input
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectCmp2SampleInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_CMP2_SAMPLED_BY_XBARA_OUT18);
 *      @endcode
 */
#define SIM_PDD_SelectCmp2SampleInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_CMPWIN2SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectCmp1SampleInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects CMP1 sample/window input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source CMP1 sample/window input source. The user should use one from
 *        the enumerated values. This parameter is of "CMP1 sample/window input
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectCmp1SampleInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_CMP1_SAMPLED_BY_XBARA_OUT17);
 *      @endcode
 */
#define SIM_PDD_SelectCmp1SampleInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_CMPWIN1SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectCmp0SampleInputSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects CMP0 sample/window input source.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source CMP0 sample/window input source. The user should use one from
 *        the enumerated values. This parameter is of "CMP0 sample/window input
 *        source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectCmp0SampleInputSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_CMP0_SAMPLED_BY_XBARA_OUT16);
 *      @endcode
 */
#define SIM_PDD_SelectCmp0SampleInputSource(PeripheralBase, Source) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL_CMPWIN0SRC_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadMiscellaneousControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads miscellaneous control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadMiscellaneousControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadMiscellaneousControlReg(PeripheralBase) ( \
    SIM_MISCTRL_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteMiscellaneousControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into miscellaneous
 * control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the miscellaneous control register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteMiscellaneousControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteMiscellaneousControlReg(PeripheralBase, Value) ( \
    SIM_MISCTRL_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForCmp3SampleInput
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for CMP3's sample/window
 * input with flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForCmp3SampleInput(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForCmp3SampleInput(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCCMP3SAMPLEWIN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCCMP3SAMPLEWIN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForCmp2SampleInput
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for CMP2's sample/window
 * input with flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForCmp2SampleInput(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForCmp2SampleInput(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCCMP2SAMPLEWIN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCCMP2SAMPLEWIN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForCmp1SampleInput
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for CMP1's sample/window
 * input with flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForCmp1SampleInput(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForCmp1SampleInput(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCCMP1SAMPLEWIN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCCMP1SAMPLEWIN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForCmp0SampleInput
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for CMP0's sample/window
 * input with flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForCmp0SampleInput(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForCmp0SampleInput(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCCMP0SAMPLEWIN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCCMP0SAMPLEWIN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForEwmInput
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for EWM's ewm_in with
 * flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForEwmInput(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForEwmInput(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCEWMIN_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCEWMIN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraOutputForDacHwTrigger
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's output for DAC hardware trigger
 * with flash/slow clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraOutputForDacHwTrigger(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraOutputForDacHwTrigger(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCDACHWTRIG_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCDACHWTRIG_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbarbInputForPitTrigger1
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARB's input PIT trigger 1 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbarbInputForPitTrigger1(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbarbInputForPitTrigger1(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARBPITTRIG1_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARBPITTRIG1_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbarbInputForPitTrigger0
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARB's input PIT trigger 0 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbarbInputForPitTrigger0(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbarbInputForPitTrigger0(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARBPITTRIG0_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARBPITTRIG0_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraInputForPitTrigger3
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's input PIT trigger 3 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger3(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger3(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARAPITTRIG3_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARAPITTRIG3_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraInputForPitTrigger2
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's input PIT trigger 2 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger2(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger2(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARAPITTRIG2_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARAPITTRIG2_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraInputForPitTrigger1
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's input PIT trigger 1 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger1(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger1(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARAPITTRIG1_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARAPITTRIG1_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableSynchronizeXbaraInputForPitTrigger0
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables synchronize XBARA's input PIT trigger 0 with fast
 * clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of bypass synchronizer. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger0(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableSynchronizeXbaraInputForPitTrigger0(PeripheralBase, State) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_MISCTRL2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_MISCTRL2_SYNCXBARAPITTRIG0_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_MISCTRL2_SYNCXBARAPITTRIG0_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadMiscellaneousControl2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads miscellaneous control 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadMiscellaneousControl2Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadMiscellaneousControl2Reg(PeripheralBase) ( \
    SIM_MISCTRL2_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteMiscellaneousControl2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into miscellaneous
 * control 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the miscellaneous control 2 register.
 *        This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_MISCTRL2.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteMiscellaneousControl2Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteMiscellaneousControl2Reg(PeripheralBase, Value) ( \
    SIM_MISCTRL2_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- SelectWdogClockSource
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock source of the WDOG2008 watchdog.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Clock source of the WDOG2008 watchdog. The user should use one
 *        from the enumerated values. This parameter is of "Clock source of the
 *        WDOG2008 watchdog constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_WDOGC.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectWdogClockSource(<peripheral>_BASE_PTR,
 *      SIM_PDD_WDOG_CLK_SOURCE_INTERNAL_1KHZ);
 *      @endcode
 */
#define SIM_PDD_SelectWdogClockSource(PeripheralBase, Source) ( \
    SIM_WDOGC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_WDOGC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_WDOGC_WDOGCLKS_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadWdogControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads WDOG control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_WDOGC.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadWdogControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadWdogControlReg(PeripheralBase) ( \
    SIM_WDOGC_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteWdogControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into WDOG control
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the WDOG control register. This parameter
 *        is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_WDOGC.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteWdogControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteWdogControlReg(PeripheralBase, Value) ( \
    SIM_WDOGC_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- GetNanoedgePmcStatus
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the nanoedge PMC status.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Nanoedge PMC status constants." type. The value
 *         is cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetNanoedgePmcStatus(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetNanoedgePmcStatus(PeripheralBase) ( \
    (uint32_t)(SIM_PWRC_REG(PeripheralBase) & SIM_PWRC_SRPWROK_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- SetNanoedgePmcPowerReady
   ---------------------------------------------------------------------------- */

/**
 * @brief Set nanoedge PMC power ready.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Nanoedge PMC power ready. The user should use one from the
 *        enumerated values. This parameter is of "Nanoedge PMC power ready constants"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_SetNanoedgePmcPowerReady(<peripheral>_BASE_PTR,
 *      SIM_PDD_NANOEDGE_PMC_POWER_NOT_READY);
 *      @endcode
 */
#define SIM_PDD_SetNanoedgePmcPowerReady(PeripheralBase, State) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_PWRC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_PWRC_SRPWRRDY_MASK))) | ( \
      (uint32_t)(State))) \
  )

/* ----------------------------------------------------------------------------
   -- GetNanoedgePmcPowerReady
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the nanoedge PMC power ready status.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "Nanoedge PMC power ready constants" type. The
 *         value is cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_GetNanoedgePmcPowerReady(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetNanoedgePmcPowerReady(PeripheralBase) ( \
    (uint32_t)(SIM_PWRC_REG(PeripheralBase) & SIM_PWRC_SRPWRRDY_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- EnableNanoedgePmcPowerDetect
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables nanoedge PMC power dectect.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of nanoedge PMC power dectect. This parameter is
 *        of "Global enumeration used for specifying general enable/disable
 *        states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableNanoedgePmcPowerDetect(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableNanoedgePmcPowerDetect(PeripheralBase, State) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_PWRC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_PWRC_SRPWRDETEN_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_PWRC_SRPWRDETEN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SetNanoedgeRegulator1_2vSupplyStandbyControl
   ---------------------------------------------------------------------------- */

/**
 * @brief Set nanoedge regulator 1.2V supply standby control.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Nanoedge regulator 1.2V supply standby control. The user should
 *        use one from the enumerated values. This parameter is of "Nanoedge
 *        regulator 1.2V supply standby control constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_SetNanoedgeRegulator1_2vSupplyStandbyControl(<peripheral>_BASE_PTR,
 *      SIM_PDD_NANOEDGE_1_2V_SUPPLY_IN_NORMAL_MODE);
 *      @endcode
 */
#define SIM_PDD_SetNanoedgeRegulator1_2vSupplyStandbyControl(PeripheralBase, State) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_PWRC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_PWRC_SR12STDBY_MASK))) | ( \
      (uint32_t)(State))) \
  )

/* ----------------------------------------------------------------------------
   -- SetNanoedgeRegulator2_7vSupplyStandbyControl
   ---------------------------------------------------------------------------- */

/**
 * @brief Set nanoedge regulator 2.7V supply standby control.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Nanoedge regulator 1.2 V supply standby control. The user should
 *        use one from the enumerated values. This parameter is of "Nanoedge
 *        regulator 2.7V supply standby control constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_SetNanoedgeRegulator2_7vSupplyStandbyControl(<peripheral>_BASE_PTR,
 *      SIM_PDD_NANOEDGE_2_7V_SUPPLY_IN_NORMAL_MODE);
 *      @endcode
 */
#define SIM_PDD_SetNanoedgeRegulator2_7vSupplyStandbyControl(PeripheralBase, State) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_PWRC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_PWRC_SR27STDBY_MASK))) | ( \
      (uint32_t)(State))) \
  )

/* ----------------------------------------------------------------------------
   -- SetNanoedgeRegulator2_7vAnd1_2vSupplyPowerdownControl
   ---------------------------------------------------------------------------- */

/**
 * @brief Set nanoedge regulator 2.7V and 1.2V supply powerdown control.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Nanoedge regulator 2.7V and 1.2V supply powerdown control. The
 *        user should use one from the enumerated values. This parameter is of
 *        "Nanoedge regulator 2.7V and 1.2V supply powerdown control" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_SetNanoedgeRegulator2_7vAnd1_2vSupplyPowerdownControl(<peripheral>_BASE_PTR,
 *      SIM_PDD_NANOEDGE_2_7V_AND_1_7V_SUPPLY_IN_NORMAL_MODE);
 *      @endcode
 */
#define SIM_PDD_SetNanoedgeRegulator2_7vAnd1_2vSupplyPowerdownControl(PeripheralBase, State) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_PWRC_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_PWRC_SRPDN_MASK))) | ( \
      (uint32_t)(State))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadPowerControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads power control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_ReadPowerControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadPowerControlReg(PeripheralBase) ( \
    SIM_PWRC_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WritePowerControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into power control
 * register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the power control register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_PWRC.
 * @par Example:
 *      @code
 *      SIM_PDD_WritePowerControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WritePowerControlReg(PeripheralBase, Value) ( \
    SIM_PWRC_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- GetAdcClockStatus
   ---------------------------------------------------------------------------- */

/**
 * @brief Returns the ADC clock status.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a value of "ADC clock status constants." type. The value is
 *         cast to "uint32_t".
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      uint32_t result = SIM_PDD_GetAdcClockStatus(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_GetAdcClockStatus(PeripheralBase) ( \
    (uint32_t)(SIM_ADCOPT_REG(PeripheralBase) & SIM_ADCOPT_ADCIRCLK_MASK) \
  )

/* ----------------------------------------------------------------------------
   -- EnableAdcLowCurrentMode
   ---------------------------------------------------------------------------- */

/**
 * @brief Enables/disables ADC low current mode.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Requested state of ADC low current mode. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableAdcLowCurrentMode(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableAdcLowCurrentMode(PeripheralBase, State) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_ADCOPT_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_ADCOPT_ROSB_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_ADCOPT_ROSB_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcbMux1ToAdcbChannel7
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADCB MUX1's channel to ADCB channel 7.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param MuxChannel ADCB MUX1's channel to ADCB channel 7. The user should use
 *        one from the enumerated values. This parameter is of "ADCB MUX1's
 *        channel to ADCB channel 7 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcbMux1ToAdcbChannel7(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCB_MUX1_CHANNEL_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdcbMux1ToAdcbChannel7(PeripheralBase, MuxChannel) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_ADCOPT_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_ADCOPT_ADCBCH7SEL_MASK)))) | ( \
      (uint32_t)(MuxChannel))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcbMux0ToAdcbChannel6
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADCB MUX0's channel to ADCB channel 6.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param MuxChannel ADCB MUX0's channel to ADCB channel 6. The user should use
 *        one from the enumerated values. This parameter is of "ADCB MUX0's
 *        channel to ADCB channel 6 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcbMux0ToAdcbChannel6(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCB_MUX0_CHANNEL_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdcbMux0ToAdcbChannel6(PeripheralBase, MuxChannel) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_ADCOPT_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_ADCOPT_ADCBCH6SEL_MASK)))) | ( \
      (uint32_t)(MuxChannel))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcaMux1ToAdcaChannel7
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADCA MUX1's channel to ADCA channel 7.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param MuxChannel ADCA MUX1's channel to ADCA channel 7. The user should use
 *        one from the enumerated values. This parameter is of "ADCA MUX1's
 *        channel to ADCA channel 7 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcaMux1ToAdcaChannel7(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCA_MUX1_CHANNEL_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdcaMux1ToAdcaChannel7(PeripheralBase, MuxChannel) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_ADCOPT_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_ADCOPT_ADCACH7SEL_MASK)))) | ( \
      (uint32_t)(MuxChannel))) \
  )

/* ----------------------------------------------------------------------------
   -- SelectAdcaMux0ToAdcaChannel6
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects ADCA MUX0's channel to ADCA channel 6.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param MuxChannel ADCA MUX0's channel to ADCA channel 6. The user should use
 *        one from the enumerated values. This parameter is of "ADCA MUX0's
 *        channel to ADCA channel 6 constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_SelectAdcaMux0ToAdcaChannel6(<peripheral>_BASE_PTR,
 *      SIM_PDD_ADCA_MUX0_CHANNEL_A);
 *      @endcode
 */
#define SIM_PDD_SelectAdcaMux0ToAdcaChannel6(PeripheralBase, MuxChannel) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_ADCOPT_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_ADCOPT_ADCACH6SEL_MASK)))) | ( \
      (uint32_t)(MuxChannel))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadAdcChannel6_7MuxControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads ADC channel 6/7 mux control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadAdcChannel6_7MuxControlReg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadAdcChannel6_7MuxControlReg(PeripheralBase) ( \
    SIM_ADCOPT_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteAdcChannel6_7MuxControlReg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into ADC channel 6/7
 * mux control register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the ADC channel 6/7 mux control register.
 *        This parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_ADCOPT.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteAdcChannel6_7MuxControlReg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteAdcChannel6_7MuxControlReg(PeripheralBase, Value) ( \
    SIM_ADCOPT_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )

/* ----------------------------------------------------------------------------
   -- EnableUsbVoltageRegulator
   ---------------------------------------------------------------------------- */

/**
 * @brief Controls whether the USB voltage regulator is enabled.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables or disables USB voltage regulator. This parameter is of
 *        "Global enumeration used for specifying general enable/disable states
 *        (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableUsbVoltageRegulator(<peripheral>_BASE_PTR, PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableUsbVoltageRegulator(PeripheralBase, State) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT1_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT1_USBREGEN_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1_USBREGEN_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableWriteUsbVoltageRegulator
   ---------------------------------------------------------------------------- */

/**
 * @brief Allows one usage of EnableUsbVoltageRegulator macro. After
 * EnableUsbVoltageRegulator is used the EnableWriteUsbVoltageRegulator is set do DISABLE
 * state.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables one usage of EnableUsbVoltageRegulator macro. This
 *        parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1CFG.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableWriteUsbVoltageRegulator(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableWriteUsbVoltageRegulator(PeripheralBase, State) ( \
    SIM_SOPT1CFG_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT1CFG_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT1CFG_URWE_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1CFG_URWE_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableUsbVoltageRegulatorInStop
   ---------------------------------------------------------------------------- */

/**
 * @brief Controls whether the USB voltage regulator is placed in standby mode
 * during Stop, VLPS, LLS and VLLS modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables or disables USB voltage regulator in standby mode during
 *        Stop, VLPS, LLS and VLLS modes. This parameter is of "Global
 *        enumeration used for specifying general enable/disable states (PDD_DISABLE and
 *        PDD_ENABLE defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableUsbVoltageRegulatorInStop(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableUsbVoltageRegulatorInStop(PeripheralBase, State) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT1_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT1_USBSSTBY_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1_USBSSTBY_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableWriteUsbVoltageRegulatorInStop
   ---------------------------------------------------------------------------- */

/**
 * @brief Allows one usage of EnableUsbVoltageRegulatorInStop macro. After
 * EnableUsbVoltageRegulatorInStop is used the EnableUsbVoltageRegulatorInStop is set
 * do DISABLE state.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables one usage of EnableUsbVoltageRegulatorInStop macro. This
 *        parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1CFG.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableWriteUsbVoltageRegulatorInStop(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableWriteUsbVoltageRegulatorInStop(PeripheralBase, State) ( \
    SIM_SOPT1CFG_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT1CFG_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT1CFG_USSWE_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1CFG_USSWE_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableUsbVoltageRegulatorInVLPR
   ---------------------------------------------------------------------------- */

/**
 * @brief Controls whether the USB voltage regulator is placed in standby mode
 * during VLPR and VLPW modes.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables or disables USB voltage regulator in standby mode during
 *        VLPR and VLPW modes. This parameter is of "Global enumeration used for
 *        specifying general enable/disable states (PDD_DISABLE and PDD_ENABLE
 *        defined in PDD_Types.h)" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableUsbVoltageRegulatorInVLPR(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableUsbVoltageRegulatorInVLPR(PeripheralBase, State) ( \
    SIM_SOPT1_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT1_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT1_USBVSTBY_MASK))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1_USBVSTBY_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- EnableWriteUsbVoltageRegulatorInVLPR
   ---------------------------------------------------------------------------- */

/**
 * @brief Allows one usage of EnableUsbVoltageRegulatorInVLPR macro. After
 * EnableUsbVoltageRegulatorInVLPR is used the EnableUsbVoltageRegulatorInStop is set
 * do DISABLE state.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param State Enables one usage of EnableUsbVoltageRegulatorInStop macro. This
 *        parameter is of "Global enumeration used for specifying general
 *        enable/disable states (PDD_DISABLE and PDD_ENABLE defined in PDD_Types.h)"
 *        type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT1CFG.
 * @par Example:
 *      @code
 *      SIM_PDD_EnableWriteUsbVoltageRegulatorInVLPR(<peripheral>_BASE_PTR,
 *      PDD_DISABLE);
 *      @endcode
 */
#define SIM_PDD_EnableWriteUsbVoltageRegulatorInVLPR(PeripheralBase, State) ( \
    SIM_SOPT1CFG_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT1CFG_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT1CFG_UVSWE_MASK)))) | ( \
      (uint32_t)((uint32_t)(State) << SIM_SOPT1CFG_UVSWE_SHIFT))) \
  )

/* ----------------------------------------------------------------------------
   -- USBClockSourceSelect
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the clock source for the USB 48 MHz clock.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source USB clock source. This parameter is of "USB clock source
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_USBClockSourceSelect(<peripheral>_BASE_PTR, SIM_PDD_USB_CLKIN);
 *      @endcode
 */
#define SIM_PDD_USBClockSourceSelect(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT2_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT2_USBSRC_MASK))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- PllFllClockSelect
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects the MCGPLLCLK or MCGFLLCLK clock for various peripheral
 * clocking options.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source Name of MCG output. This parameter is of "MCG clock output
 *        constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_PllFllClockSelect(<peripheral>_BASE_PTR, SIM_PDD_MCGFLLCLK);
 *      @endcode
 */
#define SIM_PDD_PllFllClockSelect(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_PLLFLLSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- PTD7DriveStrength
   ---------------------------------------------------------------------------- */

/**
 * @brief Controls the output drive strength of the PTD7 pin by selecting either
 * one or two pads to drive it.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Strength Pad's drive strength. This parameter is of "Pad's drive
 *        strength constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_PTD7DriveStrength(<peripheral>_BASE_PTR, SIM_PDD_SINGLE_PAD);
 *      @endcode
 */
#define SIM_PDD_PTD7DriveStrength(PeripheralBase, Strength) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(SIM_SOPT2_REG(PeripheralBase) & (uint32_t)(~(uint32_t)SIM_SOPT2_PTD7PAD_MASK))) | ( \
      (uint32_t)(Strength))) \
  )

/* ----------------------------------------------------------------------------
   -- RTC_CLKOUTClockSelect
   ---------------------------------------------------------------------------- */

/**
 * @brief Selects either the RTC 1 Hz clock or the 32.768kHz clock to be output
 * on the RTC_CLKOUT pin.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Source RTC_CLKOUT pin clock source. This parameter is of "RTC_CLKOUT
 *        pin clock source constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_SOPT2.
 * @par Example:
 *      @code
 *      SIM_PDD_RTC_CLKOUTClockSelect(<peripheral>_BASE_PTR, SIM_PDD_RTC1HZCLK);
 *      @endcode
 */
#define SIM_PDD_RTC_CLKOUTClockSelect(PeripheralBase, Source) ( \
    SIM_SOPT2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_SOPT2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_SOPT2_RTCCLKOUTSEL_MASK)))) | ( \
      (uint32_t)(Source))) \
  )

/* ----------------------------------------------------------------------------
   -- SetUSBClockDividerDivisor
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets the divide value for the "USB fractional clock divider" of the
 * PLL/FLL clock (defined by the "USBClockSourceSelect").
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Divider Divisor value of the USB fractional clock divider. This
 *        parameter is of "USB fractional clock divider divisor constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetUSBClockDividerDivisor(<peripheral>_BASE_PTR,
 *      SIM_PDD_USB_CLK_DIVISOR_1);
 *      @endcode
 */
#define SIM_PDD_SetUSBClockDividerDivisor(PeripheralBase, Divider) ( \
    SIM_CLKDIV2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV2_USBDIV_MASK)))) | ( \
      (uint32_t)(Divider))) \
  )

/* ----------------------------------------------------------------------------
   -- SetUSBClockDividerFraction
   ---------------------------------------------------------------------------- */

/**
 * @brief Sets the fraction value for the "USB fractional clock divider" of the
 * PLL/FLL clock (defined by the "USBClockSourceSelect").
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Fraction Fraction value of the USB fractional clock divider. This
 *        parameter is of "USB fractional clock divider fraction constants" type.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV2.
 * @par Example:
 *      @code
 *      SIM_PDD_SetUSBClockDividerFraction(<peripheral>_BASE_PTR,
 *      SIM_PDD_USB_CLK_FRACTION_1);
 *      @endcode
 */
#define SIM_PDD_SetUSBClockDividerFraction(PeripheralBase, Fraction) ( \
    SIM_CLKDIV2_REG(PeripheralBase) = \
     (uint32_t)(( \
      (uint32_t)(( \
       SIM_CLKDIV2_REG(PeripheralBase)) & ( \
       (uint32_t)(~(uint32_t)SIM_CLKDIV2_USBFRAC_MASK)))) | ( \
      (uint32_t)(Fraction))) \
  )

/* ----------------------------------------------------------------------------
   -- ReadSystemClockDivider2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Reads system clock divider 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @return Returns a 32-bit value.
 * @remarks The macro accesses the following registers: SIM_CLKDIV2.
 * @par Example:
 *      @code
 *      uint32_t result =
 *      SIM_PDD_ReadSystemClockDivider2Reg(<peripheral>_BASE_PTR);
 *      @endcode
 */
#define SIM_PDD_ReadSystemClockDivider2Reg(PeripheralBase) ( \
    SIM_CLKDIV2_REG(PeripheralBase) \
  )

/* ----------------------------------------------------------------------------
   -- WriteSystemClockDivider2Reg
   ---------------------------------------------------------------------------- */

/**
 * @brief Writes new value specified by the Value parameter into system clock
 * divider 2 register.
 * @param PeripheralBase Pointer to a peripheral registers structure (peripheral
 *        base address). You can use the constant defined in the registers
 *        definition header file (<peripheral>_BASE_PTR) or the constant defined in
 *        the peripheral initialization component header file
 *        (<component_name>_DEVICE).
 * @param Value Value to be written to the system clock divider 2 register. This
 *        parameter is a 32-bit value.
 * @return Returns a value of void type.
 * @remarks The macro accesses the following registers: SIM_CLKDIV2.
 * @par Example:
 *      @code
 *      SIM_PDD_WriteSystemClockDivider2Reg(<peripheral>_BASE_PTR, 1);
 *      @endcode
 */
#define SIM_PDD_WriteSystemClockDivider2Reg(PeripheralBase, Value) ( \
    SIM_CLKDIV2_REG(PeripheralBase) = \
     (uint32_t)(Value) \
  )
#endif  /* #if defined(SIM_PDD_H_) */

/* SIM_PDD.h, eof. */
