#ifndef __no_system_set_H
#define __no_system_set_H			

//串口
#define USART1_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART1全局中断
#define USART2_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART2全局中断
#define USART3_IRQHandler_NVIC_IRQChannelPreemptionPriority          8//USART3全局中断
//#define UART4_IRQHandler_NVIC_IRQChannelPreemptionPriority           8//UART4全局中断
//#define UART5_IRQHandler_NVIC_IRQChannelPreemptionPriority           8//UART5全局中断
////外部中断线
#define EXTI0_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI线0中断
#define EXTI1_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI线1中断
//#define EXTI2_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI线2中断
//#define EXTI3_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI线3中断
//#define EXTI4_IRQHandler_NVIC_IRQChannelPreemptionPriority           2//EXTI线4中断
//#define EXTI9_5_IRQHandler_NVIC_IRQChannelPreemptionPriority         2//EXTI线5-9中断
//#define EXTI15_10_IRQHandler_NVIC_IRQChannelPreemptionPriority       2//EXTI线10-15中断
////定时器中断（TIM1,8高级定时器，TIM2,3,4,5通用定时器，TIM6,7基本定时器）
//#define TIM1_BRK_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//TIM1刹车中断
//#define TIM1_UP_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM1更新中断
//#define TIM1_TRG_COM_IRQHandler_NVIC_IRQChannelPreemptionPriority    1//TIM1触发和通信中断 
//#define TIM1_CC_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM1捕获比较中断
#define TIM2_IRQHandler_NVIC_IRQChannelPreemptionPriority            3//TIM2全局中断
#define TIM3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM3全局中断
#define TIM4_IRQHandler_NVIC_IRQChannelPreemptionPriority            0//TIM4全局中断
//#define TIM5_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM5全局中断
//#define TIM6_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM6全局中断
//#define TIM7_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//TIM7全局中断
//#define TIM8_BRK_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//TIM8刹车中断
//#define TIM8_UP_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM8更新中断
//#define TIM8_TRG_COM_IRQHandler_NVIC_IRQChannelPreemptionPriority    1//TIM8触发和通信中断
//#define TIM8_CC_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//TIM8捕获比较中断
////DMA中断
#define DMA1_Channel1_IRQHandler_NVIC_IRQChannelPreemptionPriority   3//DMA1通道1全局中断
#define DMA1_Channel2_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道2全局中断
#define DMA1_Channel3_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道3全局中断
#define DMA1_Channel4_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道4全局中断
#define DMA1_Channel5_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道5全局中断
#define DMA1_Channel6_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道6全局中断
#define DMA1_Channel7_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA1通道7全局中断
//#define DMA2_Channel1_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2通道1全局中断
//#define DMA2_Channel2_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2通道2全局中断
//#define DMA2_Channel3_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//DMA2通道3全局中断
//#define DMA2_Channel4_5_IRQHandler_NVIC_IRQChannelPreemptionPriority 1//DMA2通道4全局中断
////CAN USB
//#define USB_HP_CAN1_TX_IRQHandler_NVIC_IRQChannelPreemptionPriority  1//USB高优先级或CAN发送中断 
#define CAN1_RX1_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//             CAN接收1中断
#define USB_LP_CAN1_RX0_IRQHandler_NVIC_IRQChannelPreemptionPriority   1//USB低优先级或CAN接收0中断 
//#define CAN1_SCE_IRQHandler_NVIC_IRQChannelPreemptionPriority        1//CAN SCE中断 
//#define USBWakeUp_IRQHandler_NVIC_IRQChannelPreemptionPriority       1//连到EXTI的从USB待机唤醒中断
////RTC实时时钟
#define RTC_IRQHandler_NVIC_IRQChannelPreemptionPriority             14//实时时钟(RTC)全局中断 
#define RTCAlarm_IRQHandler_NVIC_IRQChannelPreemptionPriority        13//连到EXTI的RTC闹钟中断，//要比RTC全局中断的优先级高


////不常用
//窗口看门狗
//#define WWDG_IRQHandler_NVIC_IRQChannelPreemptionPriority            14//窗口看门狗
////SPI  IIC SDIO中断
//#define SPI1_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI1全局中断
//#define SPI2_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI2全局中断
//#define SPI3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SPI3全局中断
//#define I2C1_EV_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C1事件中断
//#define I2C1_ER_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C1错误中断
//#define I2C2_EV_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C2事件中断
//#define I2C2_ER_IRQHandler_NVIC_IRQChannelPreemptionPriority         1//I2C2错误中断
//#define SDIO_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//SDIO全局中断
////ADC
//#define ADC1_2_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//ADC1和ADC2全局中断
//#define ADC3_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//ADC3全局中断

//#define FSMC_IRQHandler_NVIC_IRQChannelPreemptionPriority            1//FSMC全局中断
//#define FLASH_IRQHandler_NVIC_IRQChannelPreemptionPriority           1//闪存全局中断 
//#define RCC_IRQHandler_NVIC_IRQChannelPreemptionPriority             1//复位和时钟控制(RCC)中断
#define PVD_IRQHandler_NVIC_IRQChannelPreemptionPriority             0//连到EXTI_Line16的电源电压检测(PVD)中断 
//#define TAMPER_IRQHandler_NVIC_IRQChannelPreemptionPriority          1//侵入检测中断 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif




 















