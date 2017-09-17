/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   led应用函数接口
  ******************************************************************************
  * @attention
  *
  * 实验平台:Crazepony(STM32F103T8U6)  
  *
  ******************************************************************************
  */
  
#include "bsp_led.h"   

 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void LED_GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

	
		/*开启LED的外设时钟*/
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO, ENABLE); 
	
		/*JTAG-DP 禁用及 SW-DP 使能;如果这里没有禁用JTAG-DP的话，pb3不会被点亮*/
		GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable , ENABLE);  
	
		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

	/*选择要控制的引脚*/															   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_11;
			/*调用库函数，初始化GPIOA0*/
		GPIO_Init(GPIOA, &GPIO_InitStructure);

		/*选择要控制的引脚*/															   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_3;
			/*调用库函数，初始化GPIOB0*/
		GPIO_Init(GPIOB, &GPIO_InitStructure);
		
		/* 关闭所有led灯	*/
		GPIO_SetBits(GPIOA,GPIO_Pin_11|GPIO_Pin_8);	 
			/* 关闭所有led灯	*/
		GPIO_SetBits(GPIOB,GPIO_Pin_1|GPIO_Pin_3);	 
}
/*********************************************END OF FILE**********************/
