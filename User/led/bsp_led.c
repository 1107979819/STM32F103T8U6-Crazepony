/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ledӦ�ú����ӿ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Crazepony(STM32F103T8U6)  
  *
  ******************************************************************************
  */
  
#include "bsp_led.h"   

 /**
  * @brief  ��ʼ������LED��IO
  * @param  ��
  * @retval ��
  */
void LED_GPIO_Config(void)
{		
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

	
		/*����LED������ʱ��*/
		RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_AFIO, ENABLE); 
	
		/*JTAG-DP ���ü� SW-DP ʹ��;�������û�н���JTAG-DP�Ļ���pb3���ᱻ����*/
		GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable , ENABLE);  
	
		/*��������ģʽΪͨ���������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*������������Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

	/*ѡ��Ҫ���Ƶ�����*/															   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_11;
			/*���ÿ⺯������ʼ��GPIOA0*/
		GPIO_Init(GPIOA, &GPIO_InitStructure);

		/*ѡ��Ҫ���Ƶ�����*/															   
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_3;
			/*���ÿ⺯������ʼ��GPIOB0*/
		GPIO_Init(GPIOB, &GPIO_InitStructure);
		
		/* �ر�����led��	*/
		GPIO_SetBits(GPIOA,GPIO_Pin_11|GPIO_Pin_8);	 
			/* �ر�����led��	*/
		GPIO_SetBits(GPIOB,GPIO_Pin_1|GPIO_Pin_3);	 
}
/*********************************************END OF FILE**********************/
