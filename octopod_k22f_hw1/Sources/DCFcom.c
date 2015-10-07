/**********************************************************************************************
******** Nom: Thurnherr ***********************************************************************
******** Prénom: Raphael	***********************************************************************
******** Date: 11.01.2011	***********************************************************************
******** Project: Programme de test pour trames DMX :  *******
********
******** 02/12/2011 - ajout reset interruption reception dans fonction resetReception()
********			- ajout d'une fonction reset transmission
********			- Séparation des buffers de comm. DCF et renomage de ces buffers
********			- renomage des flag de com DCF
**********************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "UART0.h"
#include "DCFcom.h"
#include "WAIT1.h"

/*---------------------------------------------------------------------------------------------
-------- Declaration des Fonctions ------------------------------------------------------------
---------------------------------------------------------------------------------------------*/

void ResetReception();
void ResetTransmission();

void ProcessUartRxData(unsigned char myDataChar);					// Interruption ligne de communication
void ProcessUartTxData();					// Interruption ligne de communication


const unsigned char DbgMessage[] ="\r\nDEBUG: ";
unsigned char TXbyteDelay;
/*---------------------------------------------------------------------------------------------
-------- Declaration des Varibles -------------------------------------------------------------
---------------------------------------------------------------------------------------------*/

unsigned char buffSndDcfHeader[2];
unsigned char buffRcvDcfHeader[2];
unsigned char buffRcvDcfData[MAX_DCF_BYTES];
unsigned char buffSndDcfData[MAX_DCF_BYTES];					// Communication DCF
unsigned char UARTDataReady=0;
unsigned char DataLength=0;
unsigned int dataOffset;
unsigned int dataCount;
unsigned int ptrRcvChar=0;
unsigned int ptrSndChar=0;					// Variable pour compter les octets des trames PC										// Comptage des données utiles

//unsigned char sendingResponse;
unsigned char sendingHeader = 0;

unsigned char receiveSof=0;
unsigned char receiveHeader=0;
unsigned char buffSndDCFbusy;
unsigned char buffRcvDCFbusy;
unsigned char processBuffRcv;

// Gestion time out de reception
unsigned char receiveData;
unsigned char TimeOutCount;							// Sur reception de donnée

/*------Fonctions----------------------------------------------------------------------------*/


void ProcessUartRxData(unsigned char myDataChar){					// Réception sur le port UART1

	unsigned char IncomeChar=0;						// Variable de réception de caractère

	//	FIN DE RECEPTION de 1 caractere

		IncomeChar = myDataChar;
		
		if(!UARTDataReady){
			if(receiveSof && receiveHeader){	// RECEPTION DES DONNEES
					if(ptrRcvChar<DataLength-1){
						buffRcvDcfData[ptrRcvChar]=IncomeChar;
						ptrRcvChar++;

					}
					else{
						buffRcvDcfData[ptrRcvChar]=IncomeChar;
						ResetReception();
						UARTDataReady=1;						// signal une donnée prete
						buffRcvDCFbusy=0;
						//UART_ClearRxBuf();
					}
					TimeOutCount=0;
			}

			if(receiveSof && !receiveHeader){ 				// RECEPTION DU HEADER
							DataLength=IncomeChar;
							receiveHeader=1;
			}

			if(!receiveSof&&IncomeChar==SOF){				// DETECTION NOUVELLE TRAME			
				receiveSof=1;
				receiveData=1;						// Récéption en cours
				buffRcvDCFbusy=1;
				TimeOutCount = 0;
			}
		}
}


void ProcessUartTxData(){							// Réception sur le port UART1
	unsigned char i;
	// ENVOYE NOUVELLE TRAME
	buffSndDCFbusy=1;								// Verouille le buffer de emission

	buffSndDcfData[0]=SOF;
	buffSndDcfData[1]=DataLength;


	i=0;
	for(i=0;i<DataLength+2;i++)	{
			UART0_SendChar(buffSndDcfData[i]);
			//if(TXbyteDelay) WAIT1_Waitms(1);
	}

	buffSndDCFbusy=0;								// Libère le buffer de emission
}


void UartDebug(unsigned char myDataChar){							// Réception sur le port UART1
	unsigned char i;
/*
	// print out debug message
	i=0;
	while(DbgMessage[i] != '\0')	{
	        UARTCharPut(UART1_BASE, DbgMessage[i++]);
	}
*/
	UART0_SendChar(myDataChar);
}


// Réinitialise la récéption de donnée DCF
void ResetReception(){
	UARTDataReady=0;
	ptrRcvChar=0;						
	receiveSof=0;						// Reinitialisation
	receiveHeader=0;
	receiveData=0;
	buffRcvDCFbusy=0;
	//UART_ClearTxBuf();
	//UART_ClearRxBuf();
}

// Réinitialise la transmission de donnée DCF
void ResetTransmission(){
	ptrSndChar=0;						// Réinitialisation à 1
	sendingHeader=0;
	buffSndDCFbusy=0;
}
