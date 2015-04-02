
/**********************************************************************************************
******** Nom: Thurnherr ***********************************************************************
******** Prénom: Raphael	***********************************************************************
******** Date: 09.03.2015	***********************************************************************
******** Project: Programme Gestion des capteurs :  *******
******** Carte FRDM-K22F
******** 02/12/2011 - ajout reset interruption reception dans fonction resetReception()

**********************************************************************************************/

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

#include "sensors.h"
#include "math.h"

// REDEFINITION POUR LE CAPTEUR D'ACCELERATION
#define FX1_CTRL_REG_3 0x2C
#define FX1_CTRL_REG_4 0x2D
#define FX1_CTRL_REG_5 0x2E
#define FX1_OFF_X_REG 0x2F
#define FX1_OFF_Y_REG 0x30
#define FX1_OFF_Z_REG 0x31

#define MOFF_X_LSB_REG 0x40
#define MOFF_X_MSB_REG 0x3F
#define MOFF_Y_LSB_REG 0x42
#define MOFF_Y_MSB_REG 0x41
#define MOFF_Z_LSB_REG 0x44
#define MOFF_Z_MSB_REG 0x43


#define SENSITIVITY_2G		  	4096
#define SENSITIVITY_4G		  	2048
#define SENSITIVITY_8G		  	1024
#define SENSITIVITY_MAG		  	10

// VARIABLE UTILISEES POUR ACCELEROMETRE (BOUSSOLE)
	float Heading;					// Heading au format 359.999999999999 degree
	unsigned int HeadingDec;		// Heading au format 3599 degree (*10 avec 1 decimale)
	unsigned char 	CompassDataReady;
	float Xout_uT, Yout_uT, Zout_uT;
	short Xout_Accel_14_bit, Yout_Accel_14_bit, Zout_Accel_14_bit;
	float Xout_g, Yout_g, Zout_g;

	short Xout_Mag_16_bit, Yout_Mag_16_bit, Zout_Mag_16_bit;

	short Xout_Mag_16_bit_avg, Yout_Mag_16_bit_avg, Zout_Mag_16_bit_avg;
	short Xout_Mag_16_bit_max, Yout_Mag_16_bit_max, Zout_Mag_16_bit_max;
	short Xout_Mag_16_bit_min, Yout_Mag_16_bit_min, Zout_Mag_16_bit_min;

	char X_Accel_offset, Y_Accel_offset, Z_Accel_offset;

unsigned char compassCalibrationReady;


void CompassInit(void);
void CompassCalibrate(void);
unsigned int CompassGetHeading(void);
unsigned char CompassCheck(void);


/* ------------------------------------------------------------------------------------------------
 * COMPASSINIT
 * Initialisation du capteur pour fonctionnement  en mode boussole
 * ------------------------------------------------------------------------------------------------
 */
void CompassInit(void){

	FX1_WriteReg8(FX1_CTRL_REG_2, 0x40);		// Reset all registers

	  WAIT1_Waitms(10);
	  FX1_WriteReg8(FX1_XYZ_DATA_CFG, 0x00);		// +/- 2g range with 0.244mg/LSB

	  FX1_WriteReg8(FX1_M_CTRL_REG_1, 0x1F);		// Hybride mode acc+magn, max OSR
	  FX1_WriteReg8(FX1_M_CTRL_REG_2, 0x20);		// M_OUT_X_MSB follow OUT_Z_LSB

	  FX1_WriteReg8(FX1_CTRL_REG_2, 0x02);		// +/- 2g range with 0.244mg/LSB
	  FX1_WriteReg8(FX1_CTRL_REG_3, 0x00);		// Push-pull, active low interrupt
	  FX1_WriteReg8(FX1_CTRL_REG_4, 0x01);		// Enable DRDY interrupt
	  FX1_WriteReg8(FX1_CTRL_REG_5, 0x01);		// DRDY interrupte enable
	  //FX1_WriteReg8(FX1_CTRL_REG_1, 0x35);		// ODR = 3.125Hz Reduced noise, Active mode
	  FX1_WriteReg8(FX1_CTRL_REG_1, 0x25);		// ODR = 3.125Hz Reduced noise, Active mode

	  compassCalibrationReady=0;				// Demarre une sequence de calibration
}



void CompassCalibrate(void){

	static unsigned char accelConfigOk;
	static unsigned char i=0;

	if(CompassDataReady){
		CompassDataReady=FALSE;

		// -------------- ACCEL CALIBRATION
		if(!accelConfigOk){
			FX1_WriteReg8(FX1_CTRL_REG_1, 0x00);		// Standyby mode

			Xout_Accel_14_bit=FX1_GetX();
			Yout_Accel_14_bit=FX1_GetY();
			Zout_Accel_14_bit=FX1_GetZ();

			X_Accel_offset=FX1_GetX() /8 * (-1);
			Y_Accel_offset=FX1_GetY() /8 * (-1);
			Z_Accel_offset=(FX1_GetZ()-SENSITIVITY_2G) /8 * (-1);

			FX1_WriteReg8(FX1_OFF_X_REG, X_Accel_offset);
			FX1_WriteReg8(FX1_OFF_Y_REG, Y_Accel_offset);
			FX1_WriteReg8(FX1_OFF_Z_REG, Z_Accel_offset);

			FX1_WriteReg8(FX1_CTRL_REG_1, 0x35);		// ODR = 3.125Hz Reduced noise, Active mode
			//FX1_WriteReg8(FX1_CTRL_REG_1, 0x25);		// ODR = 3.125Hz Reduced noise, Active mode

			accelConfigOk=1;
			i=0;
		}
		else
			// -------------- MAG CALIBRATION
				if (i < 188){	// This will take ~30s (94 samples * 1/3.125)

						FX1_GetMagX(&Xout_Mag_16_bit);		// Compute 16-bit X-axis magnetic output value
						FX1_GetMagY(&Yout_Mag_16_bit);		// Compute 16-bit Y-axis magnetic output value
						FX1_GetMagZ(&Zout_Mag_16_bit);		// Compute 16-bit Z-axis magnetic output value

						if (i == 0)
						{
							Xout_Mag_16_bit_max = Xout_Mag_16_bit;
							Xout_Mag_16_bit_min = Xout_Mag_16_bit;

							Yout_Mag_16_bit_max = Yout_Mag_16_bit;
							Yout_Mag_16_bit_min = Yout_Mag_16_bit;

							Zout_Mag_16_bit_max = Zout_Mag_16_bit;
							Zout_Mag_16_bit_min = Zout_Mag_16_bit;
						}


						// Check to see if current sample is the maximum or minimum X-axis value
						if (Xout_Mag_16_bit > Xout_Mag_16_bit_max)	{Xout_Mag_16_bit_max = Xout_Mag_16_bit;}
						if (Xout_Mag_16_bit < Xout_Mag_16_bit_min)	{Xout_Mag_16_bit_min = Xout_Mag_16_bit;}

						// Check to see if current sample is the maximum or minimum Y-axis value
						if (Yout_Mag_16_bit > Yout_Mag_16_bit_max)	{Yout_Mag_16_bit_max = Yout_Mag_16_bit;}
						if (Yout_Mag_16_bit < Yout_Mag_16_bit_min)	{Yout_Mag_16_bit_min = Yout_Mag_16_bit;}

						// Check to see if current sample is the maximum or minimum Z-axis value
						if (Zout_Mag_16_bit > Zout_Mag_16_bit_max)	{Zout_Mag_16_bit_max = Zout_Mag_16_bit;}
						if (Zout_Mag_16_bit < Zout_Mag_16_bit_min)	{Zout_Mag_16_bit_min = Zout_Mag_16_bit;}

						i++;
				}
				else{
						Xout_Mag_16_bit_avg = (Xout_Mag_16_bit_max + Xout_Mag_16_bit_min) / 2;		// X-axis hard-iron offset
						Yout_Mag_16_bit_avg = (Yout_Mag_16_bit_max + Yout_Mag_16_bit_min) / 2;		// Y-axis hard-iron offset
						Zout_Mag_16_bit_avg = (Zout_Mag_16_bit_max + Zout_Mag_16_bit_min) / 2;		// Z-axis hard-iron offset

						// Left-shift by one as magnetometer offset registers are 15-bit only, left justified
						Xout_Mag_16_bit_avg <<= 1;
						Yout_Mag_16_bit_avg <<= 1;
						Zout_Mag_16_bit_avg <<= 1;

						FX1_WriteReg8(FX1_CTRL_REG_1, 0x00);		// Standby mode to allow writing to the offset registers

						FX1_WriteReg8(MOFF_X_LSB_REG,(char) (Xout_Mag_16_bit_avg & 0xFF));
						FX1_WriteReg8(MOFF_X_MSB_REG,(char) ((Xout_Mag_16_bit_avg >> 8) & 0xFF));
						FX1_WriteReg8(MOFF_Y_LSB_REG,(char) (Yout_Mag_16_bit_avg & 0xFF));
						FX1_WriteReg8(MOFF_Y_MSB_REG,(char) ((Yout_Mag_16_bit_avg >> 8) & 0xFF));
						FX1_WriteReg8(MOFF_Z_LSB_REG,(char) (Zout_Mag_16_bit_avg & 0xFF));
						FX1_WriteReg8(MOFF_Z_MSB_REG,(char) ((Zout_Mag_16_bit_avg >> 8) & 0xFF));

						FX1_WriteReg8(FX1_CTRL_REG_1, 0x25);		// ODR = 25Hz Reduced noise, Active mode

						accelConfigOk = 0;
						compassCalibrationReady=1;
				}
		}
}



// Lecture periodique des valeurs de la boussole et mise en forme
unsigned char CompassCheck(void){

  	if(CompassDataReady){
  		CompassDataReady=FALSE;

			Xout_Accel_14_bit=((short)FX1_GetX())>>2;
			Yout_Accel_14_bit=((short)FX1_GetY())>>2;
			Zout_Accel_14_bit=((short)FX1_GetZ())>>2;

			FX1_GetMagX(&Xout_Mag_16_bit);
			FX1_GetMagY(&Yout_Mag_16_bit);
			FX1_GetMagZ(&Zout_Mag_16_bit);
/*
			// Accelerometer data converted to g's
			Xout_g = ( (float)Xout_Accel_14_bit) / SENSITIVITY_2G;		// Compute X-axis output value in g's
			Yout_g = ((float)Yout_Accel_14_bit) / SENSITIVITY_2G;		// Compute Y-axis output value in g's
			Zout_g = ( (float)Zout_Accel_14_bit) / SENSITIVITY_2G;		// Compute Z-axis output value in g's
*/
			// Magnetometer data converted to microteslas
			Xout_uT = (float)(Xout_Mag_16_bit) / SENSITIVITY_MAG;		// Compute X-axis output magnetic value in uT
			Yout_uT = (float)(Yout_Mag_16_bit) / SENSITIVITY_MAG;		// Compute Y-axis output magnetic value in uT
			Zout_uT = (float)(Zout_Mag_16_bit) / SENSITIVITY_MAG;		// Compute Z-axis output magnetic value in uT

			Heading = (atan2 (Yout_uT, Xout_uT) * 180) / 3.14159265358979323846;		// Compute Yaw angle

			return TRUE;
  	}
  	else return FALSE;

}

unsigned int CompassGetHeading(void){
	if(Heading<0)Heading=360+Heading;
	HeadingDec=Heading*10;
	return(HeadingDec);

}
