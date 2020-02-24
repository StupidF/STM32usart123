
#ifndef __STM32F10x_IT_H
#define __STM32F10x_IT_H

#ifdef __cplusplus
 extern "C" {
#endif 
#include "stm32f10x.h"
#include "set.h"
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef void (* IRQ_IRQHandler_Callback)(void);	 
	 
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
#if (SYSTEM_SUPPORT_OS==0)
void PendSV_Handler(void);
void SysTick_Handler(void);
#endif
//void SysTick_Handler(void);
	 

extern IRQ_IRQHandler_Callback  USART1_IRQHandler_Callback; 
extern IRQ_IRQHandler_Callback  USART2_IRQHandler_Callback;
extern IRQ_IRQHandler_Callback  USART3_IRQHandler_Callback;

extern IRQ_IRQHandler_Callback  DMA1_Channel1_IRQHandler_Callback;

extern IRQ_IRQHandler_Callback  TIM1_UP_IRQHandler_Callback;
extern IRQ_IRQHandler_Callback  TIM2_IRQHandler_Callback;
extern IRQ_IRQHandler_Callback  TIM3_IRQHandler_Callback;
extern IRQ_IRQHandler_Callback  TIM4_IRQHandler_Callback;

//EXIT
extern IRQ_IRQHandler_Callback  EXTI0_IRQHandler_Callback;
void EXTI0_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI1_IRQHandler_Callback;
void EXTI1_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI2_IRQHandler_Callback;
void EXTI2_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI3_IRQHandler_Callback;
void EXTI3_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI4_IRQHandler_Callback;
void EXTI4_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI9_5_IRQHandler_Callback;
void EXTI9_5_IRQHandler(void);
extern IRQ_IRQHandler_Callback  EXTI15_10_IRQHandler_Callback;
void EXTI15_10_IRQHandler(void);

extern IRQ_IRQHandler_Callback  PVD_IRQHandler_Callback;

extern IRQ_IRQHandler_Callback  USB_LP_CAN1_RX0_IRQHandler_Callback;
extern IRQ_IRQHandler_Callback  CAN1_RX1_IRQHandler_Callback;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

#ifdef __cplusplus
}
#endif

#endif

