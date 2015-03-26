/*
 * sensors.h
 *
 *  Created on: 9 mars 2015
 *      Author: thurnhrl
 */
/**********************************************************************************************
******** Nom: Thurnherr ***********************************************************************
******** Prénom: Raphael	***********************************************************************
******** Date:09.03.2015	***********************************************************************
******** Project: Gestion des capteurs  :  *******
**********************************************************************************************/
/*
- 01/07/2014 -> Retrait des #define de communication

*/
#ifndef SENSORS_H_
#define SENSORS_H_

extern unsigned char 	CompassDataReady;
extern unsigned char compassCalibrationReady;
extern void CompassInit(void);
extern void CompassCalibrate(void);
extern unsigned int CompassGetHeading(void);
extern unsigned char CompassCheck(void);
extern unsigned char compassInterruptEnable;


#endif /* SENSORS_H_ */
