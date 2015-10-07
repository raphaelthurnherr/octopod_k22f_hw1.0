/*
 * hw_pwm.h
 *
 *  Created on: 9 mars 2015
 *      Author: thurnhrl
 */

#ifndef HW_PWM_H_
#define HW_PWM_H_

#define PWM_CTRL_LEG_AD 64
#define PWM_CTRL_LEG_EH 65


extern void ConvertAngleToPCA9685value(void);
extern unsigned char PCA9685Config(void);
extern unsigned char PCA9685EnableOutput(unsigned char ENABLE);
extern unsigned char PCA9685SetAllPWMvalue(void);
extern unsigned char PCA968SetOnePWMvalue(unsigned char outputNb);

extern void smoothUpdateMotors(void);

#define SM_COUNT_INCREMENT 1

extern unsigned char SM_Enable[26];
extern unsigned char SM_TargetValue[26];					// Objectif de temps a atteindre
extern unsigned char SM_ActualValue[26];					// Temps de pulse actuel (incrémenté pour le smooth)

extern unsigned char StartUltrasonicTrig;
extern unsigned char flag_uSonicEnable;
extern unsigned char UltrasonicWaitEcho;

extern unsigned char sm_smoothIncrement;

extern unsigned char SMInterruptEnable;
extern unsigned char SMInterruptFlag;
extern unsigned char SMnewCommand;

#endif /* HW_PWM_H_ */
