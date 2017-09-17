/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    
  * @brief   ����led
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Crazepony(STM32F103T8U6)  
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(__IO u32 nCount); 

/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{	
	/* LED �˿ڳ�ʼ�� */
	LED_GPIO_Config();	 
 
	/* ����2��ʹ�ù̼������IO */
	while (1)
	{
		LED1( ON );			  // ��
		Delay(0x07FFFF);
		LED1( OFF );		  // ��
	
		
		LED2( ON );			  // ��
		Delay(0x07FFFF);
		LED2( OFF );		  // ��
	
		
		LED3( ON );			  // ��
		Delay(0x07FFFF);
		LED3( OFF );		  // ��
	
		
		LED4( ON );			  // ��
		Delay(0x07FFFF);
		LED4( OFF );		  // ��
	}

}

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
