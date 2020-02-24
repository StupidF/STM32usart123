#include "stm32f10x_it.h"
#include "sys.h"


#include "usart1.h"	  
#include "usart2.h"
#include "usart3.h"	
 


//ϵͳ
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void NMI_Handler        (void){           }//�ڲ��жϣ�Ӳ���Զ������־λ
void HardFault_Handler  (void){while (1){}}//�ڲ��жϣ�Ӳ���Զ������־λ
void MemManage_Handler  (void){while (1){}}//�ڲ��жϣ�Ӳ���Զ������־λ
void BusFault_Handler   (void){while (1){}}//�ڲ��жϣ�Ӳ���Զ������־λ
void UsageFault_Handler (void){while (1){}}//�ڲ��жϣ�Ӳ���Զ������־λ
void DebugMon_Handler   (void){           }
#if (SYSTEM_SUPPORT_OS==0)
void PendSV_Handler     (void){           }//�ڲ��жϣ�Ӳ���Զ������־λ
void SVC_Handler        (void){           }//�ڲ��жϣ�Ӳ���Զ������־λ
#endif
//void SysTick_Handler  (void){           }//�ڲ��жϣ�Ӳ���Զ������־λ

//USART1
IRQ_IRQHandler_Callback  USART1_IRQHandler_Callback;
void USART1_IRQHandler(void)                	//����1�жϷ������
{
     USART1_IRQHandler_Callback();
} 
//USART2
IRQ_IRQHandler_Callback  USART2_IRQHandler_Callback;
void USART2_IRQHandler(void)                	//����2�жϷ������
{
     USART2_IRQHandler_Callback();
} 
//USART3
IRQ_IRQHandler_Callback  USART3_IRQHandler_Callback;
void USART3_IRQHandler(void)                	//����2�жϷ������
{
     USART3_IRQHandler_Callback();
} 
//DMA1
IRQ_IRQHandler_Callback  DMA1_Channel1_IRQHandler_Callback;
void DMA1_Channel1_IRQHandler(void)
{
	   DMA1_Channel1_IRQHandler_Callback();
}
//TIM1
IRQ_IRQHandler_Callback  TIM1_UP_IRQHandler_Callback;
void TIM1_UP_IRQHandler(void)
{
     TIM1_UP_IRQHandler_Callback();
}
//TIM2
IRQ_IRQHandler_Callback  TIM2_IRQHandler_Callback;
void TIM2_IRQHandler(void)
{
	   TIM2_IRQHandler_Callback();
}
//TIM3
IRQ_IRQHandler_Callback  TIM3_IRQHandler_Callback;
void TIM3_IRQHandler(void)
{
	   TIM3_IRQHandler_Callback();
}
//TIM4
IRQ_IRQHandler_Callback  TIM4_IRQHandler_Callback;
void TIM4_IRQHandler(void)
{
	   TIM4_IRQHandler_Callback();
}
//EXIT
IRQ_IRQHandler_Callback  EXTI0_IRQHandler_Callback;
void EXTI0_IRQHandler(void)
{
	   EXTI0_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI1_IRQHandler_Callback;
void EXTI1_IRQHandler(void)
{
	   EXTI1_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI2_IRQHandler_Callback;
void EXTI2_IRQHandler(void)
{
	   EXTI2_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI3_IRQHandler_Callback;
void EXTI3_IRQHandler(void)
{
	   EXTI3_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI4_IRQHandler_Callback;
void EXTI4_IRQHandler(void)
{
	   EXTI0_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI9_5_IRQHandler_Callback;
void EXTI9_5_IRQHandler(void)
{
	   EXTI9_5_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  EXTI15_10_IRQHandler_Callback;
void EXTI15_10_IRQHandler(void)
{
	   EXTI15_10_IRQHandler_Callback();
}
//PVD������
IRQ_IRQHandler_Callback  PVD_IRQHandler_Callback;
void PVD_IRQHandler(void)
{
	   PVD_IRQHandler_Callback();
}
//CAN
IRQ_IRQHandler_Callback  USB_LP_CAN1_RX0_IRQHandler_Callback;
void USB_LP_CAN1_RX0_IRQHandler(void)
{
	   USB_LP_CAN1_RX0_IRQHandler_Callback();
}
IRQ_IRQHandler_Callback  CAN1_RX1_IRQHandler_Callback;
void CAN1_RX1_IRQHandler(void)
{
	   CAN1_RX1_IRQHandler_Callback();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



 