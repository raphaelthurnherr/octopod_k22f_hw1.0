/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : I2C1.c
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
**          Component name                                 : I2C1
**          Delay (ns)                                     : 1250
**          Trials                                         : 256
**          SDA                                            : SDA
**          SCL                                            : SCL
**          Wait                                           : WAIT1
**          Yield                                          : yes
**     Contents    :
**         Init              - void I2C1_Init(void);
**         ResetBus          - bool I2C1_ResetBus(void);
**         SendChar          - byte I2C1_SendChar(byte Chr);
**         RecvChar          - byte I2C1_RecvChar(byte *Chr);
**         SendBlock         - byte I2C1_SendBlock(void *Ptr, word Siz, word *Snt);
**         SendBlockContinue - byte I2C1_SendBlockContinue(void *Ptr, word Siz, word *Snt);
**         RecvBlock         - byte I2C1_RecvBlock(void *Ptr, word Siz, word *Rcv);
**         SendStop          - byte I2C1_SendStop(void);
**         SelectSlave       - byte I2C1_SelectSlave(byte Slv);
**         GetSelected       - byte I2C1_GetSelected(byte *Slv);
**
**     (c) Copyright Freescale Semiconductor, 2014
**     http      : www.freescale.com
** ###################################################################*/
/*!
** @file I2C1.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup I2C1_module I2C1 module documentation
**  @{
*/         

/* MODULE I2C1. */

#include "I2C1.h"

#define I2C1_HAS_RTOS  0 /* No RTOS present */
#define I2C1_YIELD     1 /* Yield is enabled in the component properties */

#if I2C1_HAS_RTOS
/* include RTOS header files */
#include "FreeRTOS.h" /* for yielding */
#endif

#if I2C1_HAS_RTOS && I2C1_YIELD
  #define I2C1_OSYIELD() taskYIELD()
#else
  #define I2C1_OSYIELD() /* do nothing */
#endif

#define ACK         0U
#define NOACK       1U
#define OUTPUT      1U
#define INPUT       0U
#define WRITE       0U
#define READ        1U
#define TRIALS      256 /* defined by component properties */

#define I2C1_DELAY_NS    1250   /* delay time in ns, as specified in the component properties */

static byte SlaveAddr;             /* destination slave address      */

#define SCL_SetDir(dir) SCL1_SetDir(dir)
#define SCL_ClrVal()    SCL1_ClrVal()
#define SCL_GetVal()    SCL1_GetVal()

#define SDA_SetDir(dir) SDA1_SetDir(dir)
#define SDA_ClrVal()    SDA1_ClrVal()
#define SDA_GetVal()    SDA1_GetVal()

/* Internal method prototypes */
static void Delay(void);
static byte Read(void);
static bool GetAck(void);
static void Write(byte Data);
static void SetAck(bool Ack);
static void InternalStop(void);

/*
** ===================================================================
**     Method      :  Delay (component GenericSWI2C)
**
**     Description :
**         The method waits in delay loop.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static void Delay(void)
{
  I2C1_OSYIELD();
  WAIT1_Waitns(I2C1_DELAY_NS);
}

/*
** ===================================================================
**     Method      :  I2C1_Init (component GenericSWI2C)
**     Description :
**         Initializes the associated peripheral(s) and the components
**         internal variables. The method is called automatically as a
**         part of the application initialization code.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void I2C1_Init(void)
{
  SlaveAddr = 0;
}

/*
** ===================================================================
**     Method      :  Write (component GenericSWI2C)
**
**     Description :
**         The method sends one byte of data to the bus.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static void Write(byte Data)
{
  byte Shift;
  byte I;
  word timeout;

  Shift = 0x80U;
  for (I = 0x08U; I != 0U; I--) {
    if (Data & Shift) {
      SDA_SetDir((bool)INPUT);   /* SDA HIGH */
    } else {
      SDA_SetDir((bool)OUTPUT);
      SDA_ClrVal();              /* SDA LOW */
    }
    Delay();
    Shift = (byte)(Shift >> 1);
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();
    timeout = 65535U;
    while((SCL_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
}

/*
** ===================================================================
**     Method      :  Read (component GenericSWI2C)
**
**     Description :
**         The method reads one byte of data from the bus.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static byte Read(void)
{
  byte Shift;
  byte I;
  word timeout;

  Shift = 0U;
  SDA_SetDir((bool)INPUT);       /* SDA INPUT MODE */
  Delay(); /* give SDA setup time */
  for (I = 0x08U; I != 0U; I--) {
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();
    timeout = 65535U;
    while((SCL_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    Shift = (byte)(Shift << 1);
    if (SDA_GetVal()) {
      Shift++;
    }
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  return Shift;
}

/*
** ===================================================================
**     Method      :  GetAck (component GenericSWI2C)
**
**     Description :
**         The method reads ACK from the bus.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static bool GetAck(void)
{
  word timeout;

  SDA_SetDir((bool)INPUT);       /* SDA HIGH */
  Delay();
  SCL_SetDir((bool)INPUT);       /* CLOCK HIGH PULSE */
  Delay();
  timeout = 65535U;
  while((SCL_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
    timeout--;
    I2C1_OSYIELD();
  }
  return((bool)SDA_GetVal());    /* ACKNOWLEDGE VALUE */
}

/*
** ===================================================================
**     Method      :  SetAck (component GenericSWI2C)
**
**     Description :
**         The method sends ACK to the bus.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static void SetAck(bool Ack)
{
  word timeout;

  Delay();
  if (Ack) {
    SDA_SetDir((bool)INPUT);     /* MASTER NOACKNOWLEDGE - SDA HIGH */
  } else {
    SDA_SetDir((bool)OUTPUT);
    SDA_ClrVal();                /* MASTER ACKNOWLEDGE - SDA LOW */
  }
  Delay();
  SCL_SetDir((bool)INPUT);       /* HIGH CLOCK PULSE */
  Delay();
  timeout = 65535U;
  while((SCL_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
    timeout--;
    I2C1_OSYIELD();
  }
  Delay();
  SCL_SetDir((bool)OUTPUT);
  SCL_ClrVal();                  /* LOW CLOCK PULSE */
  Delay();
  SDA_SetDir((bool)INPUT);       /* ACKNOWLEDGE END - SDA HIGH  */
  Delay();
}

/*
** ===================================================================
**     Method      :  InternalStop (component GenericSWI2C)
**
**     Description :
**         The method generates the Stop condition on the bus.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
static void InternalStop(void)
{
  Delay();
  SDA_SetDir((bool)OUTPUT);
  SDA_ClrVal();                  /* STOP SETUP */
  SCL_SetDir((bool)INPUT);       /* CLOCK HIGH PULSE + STOP SETUP TIME */
  Delay();
  SDA_SetDir((bool)INPUT);       /* STOP CONDITION */
  Delay();                       /* stop setup time to SCL low (which might follow) */
}

/*
** ===================================================================
**     Method      :  I2C1_ResetBus (component GenericSWI2C)
**     Description :
**         Reset bus if needed.
**     Parameters  : None
**     Returns     :
**         ---             - TRUE if bus is idle, FALSE if bus is
**                           busy/hung
** ===================================================================
*/
bool I2C1_ResetBus(void)
{
  char i;

  if(SDA_GetVal() && SCL_GetVal()) {
    return TRUE;
  }
  SCL_SetDir((bool)INPUT);
  SDA_SetDir((bool)INPUT);
  Delay();
  if(!SCL_GetVal()) {
    return FALSE; /* SCL held low externally, nothing we can do */
  }
  for(i = 0; i<9; i++) { /* up to 9 clocks until SDA goes high */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();
    Delay();
    SCL_SetDir((bool)INPUT);
    Delay();
    if( SDA_GetVal()) {
      break; /* finally SDA high so we can generate a STOP */
    }
  } /* for */
  if(!SDA_GetVal()) {
    return FALSE; /* after 9 clocks still nothing */
  }
  InternalStop();
  return(SDA_GetVal() && SCL_GetVal()); /* both high then we succeeded */
}

/*
** ===================================================================
**     Method      :  I2C1_SendChar (component GenericSWI2C)
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
byte I2C1_SendChar(byte Chr)
{
  word Trial;
  bool Acknowledge;
  word timeout;

  Trial = TRIALS;
  do {
    SDA_SetDir((bool)INPUT);     /* SDA HIGH - START SETUP*/
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();                       /* CLOCK HIGH PULSE & BUS FREE TIME */
    /* check that we have a valid start condition: SDA needs to be high */
    timeout = 65535U;
    while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    if (timeout==0) {
      InternalStop();
      return ERR_BUSY;
    }
    SDA_SetDir((bool)OUTPUT);
    SDA_ClrVal();                /* START CONDITION */
    Delay();                       /* START HOLD TIME */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
    Write((byte)(SlaveAddr + WRITE));
    Acknowledge = GetAck();
    --Trial;
  } while ((Trial != 0U) && Acknowledge);
  if (Acknowledge) {               /* WRONG ACKNOWLEDGE */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    InternalStop();
    return ERR_BUSY;
  } else {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  Write(Chr);
  if (GetAck()) {                  /* WRONG ACKNOWLEDGE */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    InternalStop();
    return ERR_BUSY;
  } else {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_RecvChar (component GenericSWI2C)
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
byte I2C1_RecvChar(byte *Chr)
{
  word Trial;
  bool Acknowledge;
  word timeout;

  Trial = TRIALS;
  do {
    SDA_SetDir((bool)INPUT);     /* SDA HIGH - START SETUP */
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();                     /* CLOCK HIGH PULSE & BUS FREE TIME */
    /* check that we have a valid start condition: SDA needs to be high */
    timeout = 65535U;
    while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    if (timeout==0) {
      InternalStop();
      return ERR_BUSY;
    }
    SDA_SetDir((bool)OUTPUT);
    SDA_ClrVal();                /* START CONDITION */
    Delay();                       /* START HOLD TIME */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
    Write((byte)(SlaveAddr + READ));
    Acknowledge = GetAck();
    --Trial;
  } while ((Trial != 0U) && Acknowledge);
  if (Acknowledge) {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    InternalStop();
    return ERR_BUSY;
  } else {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  *Chr = Read();
  SetAck((bool)NOACK);
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_SendBlock (component GenericSWI2C)
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
byte I2C1_SendBlock(void *Ptr, word Siz, word *Snt)
{
  register word I;
  bool Acknowledge;
  word Trial;
  word timeout;

  *Snt = 0U;
  Trial = TRIALS;
  do {
    SDA_SetDir((bool)INPUT);     /* SDA HIGH  - START SETUP */
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();                     /* CLOCK HIGH PULSE + BUS FREE TIME */
    /* check that we have a valid start condition: SDA needs to be high */
    timeout = 65535U;
    while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    if (timeout==0) {
      return ERR_BUSY;
    }
    SDA_SetDir((bool)OUTPUT);
    SDA_ClrVal();                /* START CONDITION */
    Delay();                     /* START HOLD TIME */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
    Write((byte)(SlaveAddr + WRITE));
    Acknowledge = GetAck();
    --Trial;
  } while ((Trial != 0U) && Acknowledge);
  if (Acknowledge) {
    return ERR_BUSY;
  } else {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  for (I = 0U; I < Siz; I++) {
    Write (*((const byte*)Ptr + I) );
    if (GetAck()) {
      SCL_SetDir((bool)OUTPUT);
      SCL_ClrVal();              /* CLOCK LOW PULSE */
      InternalStop();
      return ERR_BUSY;
    } else {
      SCL_SetDir((bool)OUTPUT);
      SCL_ClrVal();              /* CLOCK LOW PULSE */
      Delay();
    }
    ++(*Snt);
  }
  Delay();
  timeout = 65535U;
  while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
    timeout--;
    I2C1_OSYIELD();
  }
  if (timeout==0) {
    return ERR_BUSY;
  }
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_SendBlockContinue (component GenericSWI2C)
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
byte I2C1_SendBlockContinue(void *Ptr, word Siz, word *Snt)
{
  register word I;
  word Trial;
  word timeout;

  *Snt = 0U;
  Trial = TRIALS;
  for (I = 0U; I < Siz; I++) {
    Write (*((const byte*)Ptr + I) );
    if (GetAck()) {
      SCL_SetDir((bool)OUTPUT);
      SCL_ClrVal();              /* CLOCK LOW PULSE */
      InternalStop();
      return ERR_BUSY;
    } else {
      SCL_SetDir((bool)OUTPUT);
      SCL_ClrVal();              /* CLOCK LOW PULSE */
      Delay();
    }
    ++(*Snt);
  }
  Delay();
  timeout = 65535U;
  while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
    timeout--;
    I2C1_OSYIELD();
  }
  if (timeout==0) {
    return ERR_BUSY;
  }
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_RecvBlock (component GenericSWI2C)
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
byte I2C1_RecvBlock(void *Ptr, word Siz, word *Rcv)
{
  register word I;
  bool Acknowledge;
  word Trial;
  word timeout;

  *Rcv = 0U;
  Trial = TRIALS;
  do {
    SDA_SetDir((bool)INPUT);     /* SDA HIGH - START SETUP */
    SCL_SetDir((bool)INPUT);     /* CLOCK HIGH PULSE */
    Delay();                     /* CLOCK HIGH PULSE + BUS FREE TIME */
    /* check that we have a valid start condition: SDA needs to be high */
    timeout = 65535U;
    while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    Delay();
    if (timeout==0) {
      /* InternalStop(); */
      return ERR_BUSY;
    }
    SDA_SetDir((bool)OUTPUT);
    SDA_ClrVal();                /* START CONDITION */
    Delay();                     /* START HOLD TIME */
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
    Write((byte)(SlaveAddr + READ));
    Acknowledge = GetAck();
    --Trial;
  } while ((Trial != 0U) && Acknowledge);
  if (Acknowledge) {
    /* SCL_SetDir((bool)OUTPUT); */
    /* SCL_ClrVal(); */               /* CLOCK LOW PULSE */
    /* InternalStop(); */
    return ERR_BUSY;
  } else {
    SCL_SetDir((bool)OUTPUT);
    SCL_ClrVal();                /* CLOCK LOW PULSE */
    Delay();
  }
  for (I = 0U; I < Siz; I++) {
    *((byte *)Ptr + I) = Read();
    timeout = 65535U;
    while((SDA_GetVal()==0U)&&(timeout!=0U)) { /* WAIT FOR CLOCK HIGH PULSE */
      timeout--;
      I2C1_OSYIELD();
    }
    if (timeout==0) {
      /* InternalStop(); */
      return ERR_BUSY;
    }
    if (I == (Siz - 1U)) {
      SetAck((bool)NOACK);
    } else {
      SetAck((bool)ACK);
    }
    ++(*Rcv);
  }
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_SendStop (component GenericSWI2C)
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
byte I2C1_SendStop(void)
{
  Delay();
  SDA_SetDir((bool)OUTPUT);
  SDA_ClrVal();                  /* STOP SETUP */
  Delay();
  SCL_SetDir((bool)INPUT);       /* HIGH CLOCK PULSE + STOP SETUP TIME */
  Delay();
  SDA_SetDir((bool)INPUT);       /* STOP CONDITION */
  Delay(); /* add stop time */
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_SelectSlave (component GenericSWI2C)
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
byte I2C1_SelectSlave(byte Slv)
{
  SlaveAddr = (byte)(Slv<<1);
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  I2C1_GetSelected (component GenericSWI2C)
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
byte I2C1_GetSelected(byte *Slv)
{
  *Slv = (byte)(SlaveAddr>>1);
  return ERR_OK;
}

/* END I2C1. */

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
