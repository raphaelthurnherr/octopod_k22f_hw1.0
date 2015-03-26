/*
 * sw_pwm.h
 *
 *  Created on: 9 mars 2015
 *      Author: thurnhrl
 */

#ifndef SW_PWM_H_
#define SW_PWM_H_

#define SM_COUNT_INCREMENT 1

#define SM_A1 0
#define SM_A2 1
#define SM_A3 2

#define SM_B1 3
#define SM_B2 4
#define SM_B3 5

#define SM_C1 6
#define SM_C2 7
#define SM_C3 8

#define SM_D1 9
#define SM_D2 10
#define SM_D3 11

#define SM_E1 12
#define SM_E2 13
#define SM_E3 14

#define SM_F1 15
#define SM_F2 16
#define SM_F3 17

#define SM_EYES 18

extern unsigned char SM_Enable[20];
extern unsigned char SM_GroupeSelect;						// Variable pour la séléction du groupe de patte a traiter
extern unsigned char SM_TargetValue[20];					// Objectif de temps a atteindre
extern unsigned char SM_ActualValue[20];					// Temps de pulse actuel (incrémenté pour le smooth)

extern unsigned int TimPWM_gr1;
extern unsigned int TimPWM_gr2;
extern unsigned int TimPWM_gr3;
extern unsigned int TimPWM_gr4;
extern unsigned int TimPWM_gr5;
extern unsigned int TimPWM_gr6;
extern unsigned int TimPWM_gr7;


extern void updateMotorsValues(void);
extern void changeGroupSeq(void);

extern unsigned char StartUltrasonicTrig;
extern unsigned char flag_uSonicEnable;
extern unsigned char UltrasonicWaitEcho;

extern unsigned char sm_smoothIncrement;
extern unsigned char sm_smoothTime;

extern unsigned char SMInterruptEnable;
extern unsigned char SMInterruptFlag;
extern unsigned char SMnewCommand;

#endif /* SW_PWM_H_ */
