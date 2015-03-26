/**********************************************************************************************
******** Nom: Thurnherr ***********************************************************************
******** Prénom: Raphael	***********************************************************************
******** Date: 11.01.2011	***********************************************************************
******** Project: Programme de test pour communication :  *******
**********************************************************************************************/
/*
- 01/07/2014 -> Retrait des #define de communication

*/


#define MAX_DCF_BYTES 50
#define NACK_FRAME_LENGTH 9

// Code des messages de commande DCF <-> MCU
#define SOF 0xAA

#define SM_COUNT_INCREMENT 1

// DEFINITION DES SLOTS DE LA TRAME DE COMMUNICATION
#define	 RCV_COMMAND 		0

#define  MOTORS_ENABLE_SLOT 1
#define  OUT_OFFSET_SLOT	1
#define  OUT_COUNT_SLOT		2
#define  OUT_DATA_SLOT		3


#define  USONIC_MEANING_SLOT	1

#define  COMPASS_ENABLE_SLOT	1
#define  COMPASS_HEADINGMIN_SLOT	1
#define  COMPASS_HEADINGMAX_SLOT	3

#define  USONIC_STATUS_SLOT	1
#define  USONIC_DATAH_SLOT	2
#define  USONIC_DATAL_SLOT	3

#define IR0_ENABLE_SLOT	1
#define IR1_ENABLE_SLOT 2
#define IR2_ENABLE_SLOT 3

// DEFINITION DES COMMANDES RECUES
#define SM_ENABLE		0
#define SM_POSITION		1
#define SM_SMOOTH		2
#define SET_MOTORS_INT_ENABLE 9


#define  USONIC_READ	10
#define  USONIC_STOP	11

#define COMPASS_READ    20
#define COMPASS_STOP  	21
#define SET_COMPASS_INT_ENABLE 22
#define SET_COMPASS_INT_HEADING 23
#define COMPASS_CALIB  	25

#define IRDETECT_READ    30
#define SET_IRDETECT_INT_ENABLE 32

// ACK INTERRUPT & HEARTHBIT

#define INTERRUPT_MOTORS  100
#define INTERRUPT_EYES    101
#define INTERRUPT_USONIC  110
#define INTERRUPT_COMPASS 120
#define INTERRUPT_IRDET   130

#define HEART_BIT	200
#define TXDELAYFORHOST 250		// DEBUG, PROBLEME DE COMMUNICATION AVEC PC


#define CHANNELCOUNT 201	   // Nombre de cannaux à transmettre sur bus DMX (128 par défaut) (=1..512)
#define REFRESHPERIODE 202     // Periode de rafraichissement du bus DMX (200ms par defaut) (=0..255 x20mS)

extern void ResetReception();
extern void ResetTransmission();
extern void ProcessUartRxData(unsigned char myDataChar);					// Interruption ligne de communication
extern void ProcessUartTxData(void);
extern void UartDebug(unsigned char myDataChar);


#ifndef DCFCOM_H
#define DCFCOM_H

extern unsigned char TXbyteDelay;										// Flag demande de delais 2ms entre chaque caractère envoyé
																// car PROBLEME DE RECEPTION SOUS WINDOWS.....

extern unsigned char buffRcvDcfData[MAX_DCF_BYTES];
extern unsigned char buffSndDcfData[MAX_DCF_BYTES];				// Trame pour traitement de la commande


extern unsigned char UARTDataReady;
extern unsigned char DataLength;

extern unsigned char receiveData;
extern unsigned char TimeOutCount;

extern unsigned char buffRcvDCFbusy;
extern unsigned char buffSndDCFbusy;
extern unsigned char processBuffRcv;

extern unsigned char sendingHeader;
#endif

