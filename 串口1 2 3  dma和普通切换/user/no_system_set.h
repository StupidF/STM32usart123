#ifndef __no_system_set_H
#define __no_system_set_H			

//����
#define USART1_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART1ȫ���ж�
#define USART2_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART2ȫ���ж�
#define USART3_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART3ȫ���ж�
//#define UART4_IRQHandler_NVIC_IRQChannelPreemptionPriority           8//UART4ȫ���ж�
//#define UART5_IRQHandler_NVIC_IRQChannelPreemptionPriority           8//UART5ȫ���ж�
////�ⲿ�ж���
#define EXTI0_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI��0�ж�
#define EXTI1_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI��1�ж�
//#define EXTI2_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI��2�ж�
//#define EXTI3_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI��3�ж�
//#define EXTI4_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI��4�ж�
//#define EXTI9_5_IRQHandler_NVIC_IRQChannelPreemptionPriority         2//EXTI��5-9�ж�
//#define EXTI15_10_IRQHandler_NVIC_IRQChannelPreemptionPriority       2//EXTI��10-15�ж�
////��ʱ���жϣ�TIM1,8�߼���ʱ����TIM2,3,4,5ͨ�ö�ʱ����TIM6,7������ʱ����
//#define TIM1_BRK_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//TIM1ɲ���ж�
//#define TIM1_UP_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM1�����ж�
//#define TIM1_TRG_COM_IRQHandler_NVIC_IRQChannelPreemptionPriority    1//TIM1������ͨ���ж� 
//#define TIM1_CC_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM1����Ƚ��ж�
#define TIM2_IRQHandler_NVIC_IRQChannelPreemptionPriority            3//TIM2ȫ���ж�
#define TIM3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM3ȫ���ж�
#define TIM4_IRQHandler_NVIC_IRQChannelPreemptionPriority            0//TIM4ȫ���ж�
//#define TIM5_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM5ȫ���ж�
//#define TIM6_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM6ȫ���ж�
//#define TIM7_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM7ȫ���ж�
//#define TIM8_BRK_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//TIM8ɲ���ж�
//#define TIM8_UP_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM8�����ж�
//#define TIM8_TRG_COM_IRQHandler_NVIC_IRQChannelPreemptionPriority    1//TIM8������ͨ���ж�
//#define TIM8_CC_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM8����Ƚ��ж�
////DMA�ж�
#define DMA1_Channel1_IRQHandler_NVIC_IRQChannelPreemptionPriority   3//DMA1ͨ��1ȫ���ж�
#define DMA1_Channel2_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��2ȫ���ж�
#define DMA1_Channel3_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��3ȫ���ж�
#define DMA1_Channel4_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��4ȫ���ж�
#define DMA1_Channel5_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��5ȫ���ж�
#define DMA1_Channel6_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��6ȫ���ж�
#define DMA1_Channel7_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1ͨ��7ȫ���ж�
//#define DMA2_Channel1_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2ͨ��1ȫ���ж�
//#define DMA2_Channel2_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2ͨ��2ȫ���ж�
//#define DMA2_Channel3_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2ͨ��3ȫ���ж�
//#define DMA2_Channel4_5_IRQHandler_NVIC_IRQChannelPreemptionPriority 1//DMA2ͨ��4ȫ���ж�
////CAN USB
//#define USB_HP_CAN1_TX_IRQHandler_NVIC_IRQChannelPreemptionPriority  1//USB�����ȼ���CAN�����ж� 
#define CAN1_RX1_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//             CAN����1�ж�
#define USB_LP_CAN1_RX0_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//USB�����ȼ���CAN����0�ж� 
//#define CAN1_SCE_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//CAN SCE�ж� 
//#define USBWakeUp_IRQHandler_NVIC_IRQChannelPreemptionPriority       1//����EXTI�Ĵ�USB���������ж�
////RTCʵʱʱ��
#define RTC_IRQHandler_NVIC_IRQChannelPreemptionPriority             14//ʵʱʱ��(RTC)ȫ���ж� 
#define RTCAlarm_IRQHandler_NVIC_IRQChannelPreemptionPriority        13//����EXTI��RTC�����жϣ�//Ҫ��RTCȫ���жϵ����ȼ���


////������
//���ڿ��Ź�
//#define WWDG_IRQHandler_NVIC_IRQChannelPreemptionPriority            14//���ڿ��Ź�
////SPI  IIC SDIO�ж�
//#define SPI1_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI1ȫ���ж�
//#define SPI2_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI2ȫ���ж�
//#define SPI3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI3ȫ���ж�
//#define I2C1_EV_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C1�¼��ж�
//#define I2C1_ER_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C1�����ж�
//#define I2C2_EV_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C2�¼��ж�
//#define I2C2_ER_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C2�����ж�
//#define SDIO_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SDIOȫ���ж�
////ADC
//#define ADC1_2_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//ADC1��ADC2ȫ���ж�
//#define ADC3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//ADC3ȫ���ж�

//#define FSMC_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//FSMCȫ���ж�
//#define FLASH_IRQHandler_NVIC_IRQChannelPreemptionPriority           1//����ȫ���ж� 
//#define RCC_IRQHandler_NVIC_IRQChannelPreemptionPriority             1//��λ��ʱ�ӿ���(RCC)�ж�
#define PVD_IRQHandler_NVIC_IRQChannelPreemptionPriority             0//����EXTI_Line16�ĵ�Դ��ѹ���(PVD)�ж� 
//#define TAMPER_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//�������ж� 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif




 















