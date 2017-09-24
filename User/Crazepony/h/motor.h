#ifndef __MOTOR_H
#define	__MOTOR_H

#include "stm32f10x.h"

#define Moto_PwmMax 999

void Motor_Pwm(int16_t MOTO1_PWM,int16_t MOTO2_PWM,int16_t MOTO3_PWM,int16_t MOTO4_PWM);

void MOTOR_Init(void);

#endif /* __MOTOR_H */

