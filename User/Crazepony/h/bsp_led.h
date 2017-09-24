#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"

/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
#define ON  0
#define OFF 1

/* ���κ꣬��������������һ��ʹ�� */

#define LED1(a)	if (a)	\
					GPIO_SetBits(GPIOA,GPIO_Pin_11);\
					else		\
					GPIO_ResetBits(GPIOA,GPIO_Pin_11)
					
#define LED2(a)	if (a)	\
					GPIO_SetBits(GPIOA,GPIO_Pin_8);\
					else		\
					GPIO_ResetBits(GPIOA,GPIO_Pin_8)
					
#define LED3(a)	if (a)	\
					GPIO_SetBits(GPIOB,GPIO_Pin_1);\
					else		\
					GPIO_ResetBits(GPIOB,GPIO_Pin_1)
					
#define LED4(a)	if (a)	\
					GPIO_SetBits(GPIOB,GPIO_Pin_3);\
					else		\
					GPIO_ResetBits(GPIOB,GPIO_Pin_3)						
					

/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)			{p->BSRR=i;}			//����Ϊ�ߵ�ƽ		
#define digitalLo(p,i)			{p->BRR=i;}				//����͵�ƽ
#define digitalToggle(p,i)		{p->ODR ^=i;}			//�����ת״̬


/* �������IO�ĺ� */

#define LED1_TOGGLE		digitalToggle(GPIOA,GPIO_Pin_11)
#define LED1_OFF		digitalHi(GPIOA,GPIO_Pin_11)
#define LED1_ON			digitalLo(GPIOA,GPIO_Pin_11)

#define LED2_TOGGLE		digitalToggle(GPIOA,GPIO_Pin_8)
#define LED2_OFF		digitalHi(GPIOA,GPIO_Pin_8)
#define LED2_ON			digitalLo(GPIOA,GPIO_Pin_8)

#define LED3_TOGGLE		digitalToggle(GPIOB,GPIO_Pin_1)
#define LED3_OFF		digitalHi(GPIOB,GPIO_Pin_1)
#define LED3_ON			digitalLo(GPIOB,GPIO_Pin_1)

#define LED4_TOGGLE		digitalToggle(GPIOB,GPIO_Pin_3)
#define LED4_OFF		digitalHi(GPIOB,GPIO_Pin_3)
#define LED4_ON			digitalLo(GPIOB,GPIO_Pin_3)

void LED_GPIO_Config(void);

#endif /* __LED_H */
