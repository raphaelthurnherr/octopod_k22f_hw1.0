/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : I2C2.h
**     Project     : octopod_k22f_hw1
**     Processor   : MK22FN512VLH12
**     Component   : GenericSWI2C
**     Version     : Component 01.007, Driver 01.00, CPU db: 3.00.000
**     Repository  : My Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-09-17, 16:30, # CodeGen: 21
**     Abstract    :
**
**     Settings    :
**          Component name                                 : I2C2
**          Delay (ns)                                     : 1250
**          Trials                                         : 256
**          SDA                                            : SDA
**          SCL                                            : SCL
**          Wait                                           : WAIT1
**          Yield                                          : yes
**     Contents    :
**         Init              - void I2C2_Init(void);
**         ResetBus          - bool I2C2_ResetBus(void);
**         SendChar          - byte I2C2_SendChar(byte Chr);
**         RecvChar          - byte I2C2_RecvChar(byte *Chr);
**         SendBlock         - byte I2C2_SendBlock(void *Ptr, word Siz, word *Snt);
**         SendBlockContinue - byte I2C2_SendBlockContinue(void *Ptr, word Siz, word *Snt);
**         RecvBlock         - byte I2C2_RecvBlock(void *Ptr, word Siz, word *Rcv);
**         SendStop          - byte I2C2_SendStop(void);
**         SelectSlave       - byte I2C2_SelectSlave(byte Slv);
**         GetSelected       - byte I2C2_GetSelected(byte *Slv);
**
**     (c) Copyright Freescale Semiconductor, 2014
**     http      : www.freescale.com
** ###################################################################*/
/*!
** @file I2C2.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup I2C2_module I2C2 module documentation
**  @{
*/         

#ifndef __I2C2_H
#define __I2C2_H

/* MODULE I2C2. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "SDA2.h"
#include "SCL2.h"
#include "WAIT1.h"

#include "Cpu.h"




void I2C2_Init(void);
/*
** ===================================================================
**     Method      :  I2C2_Init (component GenericSWI2C)
**     Description :
**         Initializes the associated peripheral(s) and the components
**         internal variables. The method is called automatically as a
**         part of the application initialization code.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

byte I2C2_SendChar(byte Chr);
/*
** ===================================================================
**     Method      :  I2C2_SendChar (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method writes 7 bits of slave
**         address plus R/W bit = 0 to the I2C bus and then writes one
**         character (byte) to the bus. The slave address must be
**         specified before by the "SelectSlave" method or in the
**         component initialization section of 'Slave address init'
**         property. When working as the SLAVE, this method writes one
**         character (byte) to the bus. If the ERR_NOTAVAIL error code
**         returned, the char is successfully sent to master but the
**         master device responds by an acknowledgment instead of no
**         acknowledgment at the end of transfer. 'OnError' event is
**         called in this case.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Chr             - Character to send
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_BUSY - The slave device is busy, it
**                           does not respond by the acknowledgment
**                           (MASTER mode only)
**                           ERR_NOTAVAIL - The master device sends
**                           acknowledgment instead of no acknowledgment
**                           after the last byte transfer (SLAVE mode
**                           only)
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSOFF - Clock timeout elapsed (SLAVE
**                           mode only)
** ===================================================================
*/

byte I2C2_RecvChar(byte *Chr);
/*
** ===================================================================
**     Method      :  I2C2_RecvChar (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method writes 7 bits of slave
**         address plus R/W bit = 1 to the I2C bus and then reads one
**         character (byte) from the bus. The slave address must be
**         specified before by the "SelectSlave" method or in the
**         component initialization section of 'Slave address init'
**         property. When working as a SLAVE, this method reads one
**         character (byte) from the bus.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Chr             - Pointer to received character
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_BUSY - The slave device is busy, it
**                           does not respond by the acknowledgment
**                           (MASTER mode only)
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSOFF - Clock timeout elapsed (SLAVE
**                           mode only)
** ===================================================================
*/

byte I2C2_SendBlock(void *Ptr, word Siz, word *Snt);
/*
** ===================================================================
**     Method      :  I2C2_SendBlock (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method writes 7 bits of slave
**         address plus R/W bit = 0 to the I2C bus and then writes the
**         block of characters to the bus. If the component is disabled
**         (by the "Disable" method or initialization), the block is
**         moved to the output buffer if the 'Output buffer size'
**         property is different from zero. The content of the output
**         buffer is sent immediately with the stop condition at the
**         end when the component is enabled by the "Enable" method.
**         After the output buffer transmission, the whole output
**         buffer is cleared. The slave address must be specified
**         before by the "SelectSlave" method or in component
**         initialization section of 'Slave address init' property.
**         When working as a SLAVE, this method writes block of
**         characters to the bus. If the ERR_NOTAVAIL error code is
**         returned, the whole block is successfully sent to a master
**         but the master device responds by an acknowledgment instead
**         of no acknowledgment sent at the end of the last block byte
**         transfer. 'OnError' event is called in this case.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Ptr             - A pointer to the block of data to send
**         Siz             - The size of the block
**       * Snt             - A pointer to the number of data that are
**                           sent (copied to buffer)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_BUSY - The slave device is busy, it
**                           does not respond by the acknowledgment
**                           (MASTER mode only)
**                           ERR_TXFULL - Output buffer is full (MASTER
**                           mode only)
**                           ERR_NOTAVAIL - The master device sends
**                           acknowledgment instead of no acknowledgment
**                           after the last byte transfer (SLAVE mode
**                           only)
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSOFF - Clock timeout elapsed (SLAVE
**                           mode only)
** ===================================================================
*/

byte I2C2_RecvBlock(void *Ptr, word Siz, word *Rcv);
/*
** ===================================================================
**     Method      :  I2C2_RecvBlock (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method writes 7 bits of slave
**         address plus R/W bit = 1 to the I2C bus and then reads the
**         block of characters from the bus. The slave address must be
**         specified before by the "SelectSlave" method or in component
**         initialization section of 'Slave address init' property.
**         When working as a SLAVE, this method reads the block of
**         characters from the bus.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Ptr             - A pointer to the block space for received
**                           data
**         Siz             - The size of the block
**       * Rcv             - A pointer to the number of actually
**                           received data
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_BUSY - The slave device is busy, it
**                           does not respond by the acknowledgment
**                           (MASTER mode only)
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSOFF - Clock timeout elapsed (SLAVE
**                           mode only)
** ===================================================================
*/

byte I2C2_SendStop(void);
/*
** ===================================================================
**     Method      :  I2C2_SendStop (component GenericSWI2C)
**     Description :
**         When working as a MASTER, if the 'Automatic stop condition'
**         property value is 'no', this method sends a valid stop
**         condition to the serial data line of the I2C bus to
**         terminate the communication on the bus after using send
**         methods. This method is enabled only if the component is in
**         MASTER mode and 'Automatic stop condition' property value is
**         'no'
**     Parameters  : None
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_DISABLED - Device is disabled
** ===================================================================
*/

byte I2C2_SelectSlave(byte Slv);
/*
** ===================================================================
**     Method      :  I2C2_SelectSlave (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method selects a new slave
**         for communication by its slave address value. Any send or
**         receive method are directed to or from the selected device,
**         until a new slave device is selected by this method. If the
**         selected slave uses 10-bit slave addressing, as the
**         parameter 7 bits must be passed, which involves 10-bit
**         addressing (11110XX), including two MSBs of slave address
**         (XX). The second byte of the 10-bit slave address must be
**         sent to the slave as a general character of send methods.
**         This method is available only if the component is in MASTER
**         mode.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Slv             - Slave address value
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_DISABLED -  Device is disabled
** ===================================================================
*/

byte I2C2_GetSelected(byte *Slv);
/*
** ===================================================================
**     Method      :  I2C2_GetSelected (component GenericSWI2C)
**     Description :
**         When working as a MASTER, this method returns the
**         identification address value of the slave, which is
**         currently selected for communication with the master. If the
**         current slave uses 10-bit slave addressing, the method
**         returns the first 7 bits only, which involves 10-bit
**         addressing (11110XX), including two MSBs of the slave
**         address (XX). This method is not able to return the rest
**         value of 10-bit slave address. This method is available only
**         if the component is in MASTER mode.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Slv             - A pointer to the current selected slave
**                           address value
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/

bool I2C2_ResetBus(void);
/*
** ===================================================================
**     Method      :  I2C2_ResetBus (component GenericSWI2C)
**     Description :
**         Reset bus if needed.
**     Parameters  : None
**     Returns     :
**         ---             - TRUE if bus is idle, FALSE if bus is
**                           busy/hung
** ===================================================================
*/

byte I2C2_SendBlockContinue(void *Ptr, word Siz, word *Snt);
/*
** ===================================================================
**     Method      :  I2C2_SendBlockContinue (component GenericSWI2C)
**     Description :
**         Same is SendBlock() but does not send start condition. When
**         working as a MASTER, this method writes 7 bits of slave
**         address plus R/W bit = 0 to the I2C bus and then writes the
**         block of characters to the bus. If the component is disabled
**         (by the "Disable" method or initialization), the block is
**         moved to the output buffer if the 'Output buffer size'
**         property is different from zero. The content of the output
**         buffer is sent immediately with the stop condition at the
**         end when the component is enabled by the "Enable" method.
**         After the output buffer transmission, the whole output
**         buffer is cleared. The slave address must be specified
**         before by the "SelectSlave" method or in component
**         initialization section of 'Slave address init' property.
**         When working as a SLAVE, this method writes block of
**         characters to the bus. If the ERR_NOTAVAIL error code is
**         returned, the whole block is successfully sent to a master
**         but the master device responds by an acknowledgment instead
**         of no acknowledgment sent at the end of the last block byte
**         transfer. 'OnError' event is called in this case.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Ptr             - A pointer to the block of data to send
**         Siz             - The size of the block
**       * Snt             - A pointer to the number of data that are
**                           sent (copied to buffer)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_BUSY - The slave device is busy, it
**                           does not respond by the acknowledgment
**                           (MASTER mode only)
**                           ERR_TXFULL - Output buffer is full (MASTER
**                           mode only)
**                           ERR_NOTAVAIL - The master device sends
**                           acknowledgment instead of no acknowledgment
**                           after the last byte transfer (SLAVE mode
**                           only)
**                           ERR_DISABLED - Device is disabled
**                           ERR_BUSOFF - Clock timeout elapsed (SLAVE
**                           mode only)
** ===================================================================
*/

/* END I2C2. */

#endif
/* ifndef __I2C2_H */
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
