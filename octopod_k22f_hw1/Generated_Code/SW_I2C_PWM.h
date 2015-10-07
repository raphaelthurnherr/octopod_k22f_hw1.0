/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : SW_I2C_PWM.h
**     Project     : octopod_k22f_hw1
**     Processor   : MK22FN512VLH12
**     Component   : GenericI2C
**     Version     : Component 01.023, Driver 01.00, CPU db: 3.00.000
**     Repository  : My Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-09-17, 16:30, # CodeGen: 21
**     Abstract    :
**         This component implements a generic I2C driver wrapper to work both with LDD and non-LDD I2C components.
**     Settings    :
**          Component name                                 : SW_I2C_PWM
**          Wait                                           : WAIT1
**          Support STOP_NOSTART                           : no
**          Write Buffer Size                              : 16
**          non-LDD I2C                                    : Enabled
**            I2C                                          : I2C2
**          LDD I2C                                        : Disabled
**          RTOS                                           : Disabled
**          Init() on startup                              : yes
**     Contents    :
**         SelectSlave       - byte SW_I2C_PWM_SelectSlave(byte i2cAddr);
**         UnselectSlave     - byte SW_I2C_PWM_UnselectSlave(void);
**         RequestBus        - void SW_I2C_PWM_RequestBus(void);
**         ReleaseBus        - void SW_I2C_PWM_ReleaseBus(void);
**         ReadBlock         - byte SW_I2C_PWM_ReadBlock(void* data, word dataSize, SW_I2C_PWM_EnumSendFlags...
**         WriteBlock        - byte SW_I2C_PWM_WriteBlock(void* data, word dataSize,...
**         ReadAddress       - byte SW_I2C_PWM_ReadAddress(byte i2cAddr, byte *memAddr, byte memAddrSize,...
**         WriteAddress      - byte SW_I2C_PWM_WriteAddress(byte i2cAddr, byte *memAddr, byte memAddrSize,...
**         ReadByteAddress8  - byte SW_I2C_PWM_ReadByteAddress8(byte i2cAddr, byte memAddr, byte *data);
**         WriteByteAddress8 - byte SW_I2C_PWM_WriteByteAddress8(byte i2cAddr, byte memAddr, byte data);
**         ProbeACK          - byte SW_I2C_PWM_ProbeACK(void* data, word dataSize, SW_I2C_PWM_EnumSendFlags...
**         GetSemaphore      - void* SW_I2C_PWM_GetSemaphore(void);
**         Deinit            - void SW_I2C_PWM_Deinit(void);
**         ScanDevice        - byte SW_I2C_PWM_ScanDevice(byte i2cAddr);
**         Init              - void SW_I2C_PWM_Init(void);
**
**     License   :  Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2013-2014, all rights reserved.
**     http          : www.mcuoneclipse.com
**     This an open source software implementing software using Processor Expert.
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file SW_I2C_PWM.h
** @version 01.00
** @brief
**         This component implements a generic I2C driver wrapper to work both with LDD and non-LDD I2C components.
*/         
/*!
**  @addtogroup SW_I2C_PWM_module SW_I2C_PWM module documentation
**  @{
*/         

#ifndef __SW_I2C_PWM_H
#define __SW_I2C_PWM_H

/* MODULE SW_I2C_PWM. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "WAIT1.h"
#include "I2C2.h"

#include "Cpu.h"


#ifndef __BWUserType_SW_I2C_PWM_TTIME
#define __BWUserType_SW_I2C_PWM_TTIME
  typedef struct {                     /* Time in binary format */
    byte hour;                         /* hours */
    byte min;                          /* minutes */
    byte sec;                          /* seconds */
    bool mode;                         /* clock mode, 0 for 12-hour mode, otherwise 0-24 hour mode */
    byte am_pm;                        /* 0: AM, otherwise PM */
  } SW_I2C_PWM_TTIME;
#endif
#ifndef __BWUserType_SW_I2C_PWM_TDATE
#define __BWUserType_SW_I2C_PWM_TDATE
  typedef struct {                     /* Date in binary format */
    byte year;                         /* year */
    byte month;                        /* month */
    byte day;                          /* day */
    bool dayOfWeek;                    /* Day of week, where 0 is the first day. In the range of 0..6 */
  } SW_I2C_PWM_TDATE;
#endif

#define SW_I2C_PWM_WRITE_BUFFER_SIZE 16 /* size of internal buffer used, set in the component properties */

typedef enum SW_I2C_PWM_EnumSendFlags_ {
  SW_I2C_PWM_SEND_STOP,        /* STOP is sent */
  SW_I2C_PWM_DO_NOT_SEND_STOP, /* STOP is not sent */
  SW_I2C_PWM_STOP_NOSTART      /* send STOP without START condition */
} SW_I2C_PWM_EnumSendFlags;

void SW_I2C_PWM_Init(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_Init (component GenericI2C)
**     Description :
**         Initializes the driver.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SW_I2C_PWM_Deinit(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_Deinit (component GenericI2C)
**     Description :
**         Deinitializes the driver.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

byte SW_I2C_PWM_ReadAddress(byte i2cAddr, byte *memAddr, byte memAddrSize, byte *data, word dataSize);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ReadAddress (component GenericI2C)
**     Description :
**         Read from the device. This writes (S+i2cAddr+0), (memAddr),
**         (Sr+i2cAddr+1), (data)...(data+P)
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - I2C Address of device
**       * memAddr         - Pointer to device memory address
**         memAddrSize     - number of address bytes
**       * data            - Pointer to read buffer
**         dataSize        - Size of read buffer
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_WriteAddress(byte i2cAddr, byte *memAddr, byte memAddrSize, byte *data, word dataSize);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_WriteAddress (component GenericI2C)
**     Description :
**         Write to the device: (S+i2cAddr+0), (memAddr), (data)...
**         (data+P)
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - I2C address of device
**       * memAddr         - Pointer to device memory address
**         memAddrSize     - number of address bytes
**       * data            - Pointer to data write buffer
**         dataSize        - Size of data buffer in bytes
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void* SW_I2C_PWM_GetSemaphore(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_GetSemaphore (component GenericI2C)
**     Description :
**         Returns the currently allocated semaphore.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_ReadBlock(void* data, word dataSize, SW_I2C_PWM_EnumSendFlags flags);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ReadBlock (component GenericI2C)
**     Description :
**         Read from the device a block.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * data            - Read buffer
**         dataSize        - Size of read buffer
**         flags           - flags for the transaction
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_WriteBlock(void* data, word dataSize, SW_I2C_PWM_EnumSendFlags flags);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_WriteBlock (component GenericI2C)
**     Description :
**         Write a block to the device.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * data            - Data write buffer
**         dataSize        - 
**         flags           - flags for the transaction
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void SW_I2C_PWM_RequestBus(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_RequestBus (component GenericI2C)
**     Description :
**         Starts a critical section for accessing the bus.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SW_I2C_PWM_ReleaseBus(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ReleaseBus (component GenericI2C)
**     Description :
**         Finishes a critical section for accessing the bus.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

byte SW_I2C_PWM_SelectSlave(byte i2cAddr);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_SelectSlave (component GenericI2C)
**     Description :
**         Selects the slave device on the bus. Method might use a
**         semaphore to protect bus access.
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - I2C Address of device
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_UnselectSlave(void);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_UnselectSlave (component GenericI2C)
**     Description :
**         Unselects the device. Method will release a used a semaphore.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_ReadByteAddress8(byte i2cAddr, byte memAddr, byte *data);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ReadByteAddress8 (component GenericI2C)
**     Description :
**         Read a byte from the device using an 8bit memory address.
**         This writes (S+i2cAddr+0), (memAddr), (Sr+i2cAddr+1), (data)..
**         .(data+P)
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - I2C Address of device
**         memAddr         - Device memory address
**       * data            - Pointer to read buffer (single byte)
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_WriteByteAddress8(byte i2cAddr, byte memAddr, byte data);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_WriteByteAddress8 (component GenericI2C)
**     Description :
**         Write a byte to the device using an 8bit memory address:
**         (S+i2cAddr+0), (memAddr), (data)...(data+P)
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - I2C address of device
**         memAddr         - Device memory address
**         data            - Data value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_ScanDevice(byte i2cAddr);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ScanDevice (component GenericI2C)
**     Description :
**         Checks if a device responds on the bus with an ACK.
**     Parameters  :
**         NAME            - DESCRIPTION
**         i2cAddr         - 7bit I2C device address
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte SW_I2C_PWM_ProbeACK(void* data, word dataSize, SW_I2C_PWM_EnumSendFlags flags, word WaitTimeUS);
/*
** ===================================================================
**     Method      :  SW_I2C_PWM_ProbeACK (component GenericI2C)
**     Description :
**         Accesses the bus to check if the device responds with an ACK
**         (ACK polling).
**     Parameters  :
**         NAME            - DESCRIPTION
**       * data            - Data write buffer
**         dataSize        - 
**         flags           - flags for the transaction
**         WaitTimeUS      - Waiting time in microseconds
**                           to wait for the ACK on the bus.
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

/* END SW_I2C_PWM. */

#endif
/* ifndef __SW_I2C_PWM_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
