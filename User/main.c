/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    
  * @brief   测试led
  ******************************************************************************
  * @attention
  *
  * 实验平台:Crazepony(STM32F103T8U6)  
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	/* LED 端口初始化 */
	LED_GPIO_Config();	 
 
	/* 方法2，使用固件库控制IO */
	while (1)
	{
		LED1( ON );			  // 亮
		Delay(0x07FFFF);
		LED1( OFF );		  // 灭
	
		
		LED2( ON );			  // 亮
		Delay(0x07FFFF);
		LED2( OFF );		  // 灭
	
		
		LED3( ON );			  // 亮
		Delay(0x07FFFF);
		LED3( OFF );		  // 灭
	
		
		LED4( ON );			  // 亮
		Delay(0x07FFFF);
		LED4( OFF );		  // 灭
	}

}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
