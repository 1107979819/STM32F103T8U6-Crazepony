/**
  ******************************************************************************
  * @file    main.c
  * @brief   测试tim2四个通道输出不同占空比的pwm波
  * 实验平台:Crazepony(STM32T8U6)
  *
  ******************************************************************************
  */  
#include "stm32f10x.h"
#include "motor.h"
#include "bsp_usart1.h"
#include "bsp_led.h"

void Delay(__IO u32 nCount);
/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	LED_GPIO_Config();
	
	/*PWM TIM2 波输出初始化，并使能TIM2 PWM输出 */
	MOTOR_Init();
	
	/* USART1 配置模式为 115200 8-N-1，中断接收 */
	USART1_Config();
	
	NVIC_Configuration();
	uint16_t count = 0;
	
	while (1)
	{
		Delay(0x0FFFFF);
		LED1( ON );	 
		Delay(0x0FFFFF);
		LED1( OFF );	 
		if(count==100)
		{
			count = 100;
			LED1( ON );	 
			printf("ok");
		}else
		{
			count++;
		}
		
	}
	
	
}
void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
