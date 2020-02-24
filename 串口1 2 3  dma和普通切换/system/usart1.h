#ifndef __USART1_H
#define __USART1_H
#include "stdio.h"	
#include <stdarg.h>
#include "sys.h" 

#define    USART1_DMA             1//��������SPI2_DMA��ͻ

#define    USART1_MAX_TX_LEN		500			     //����ͻ����ֽ���
#define    USART1_MAX_RX_LEN		200			     //�����ջ����ֽ���
extern u8  USART1_TX_BUF[USART1_MAX_TX_LEN]; //���ͻ�����
extern u8  USART1_RX_BUF[USART1_MAX_RX_LEN]; //���ջ�����
extern u16 USART1_RX_STA;         		       //����״̬���	

__packed typedef struct
{
	//��̬
	USART_TypeDef *                  USARTx ;                         //����
  uint32_t                         USARTx_RCC ;	                    //����ʱ��ʱ��
  uint32_t                         GPIO_RCC_APBx;                   //GPIOʱ��ʱ��
  GPIO_TypeDef  *                  GPIO_TX_RX_Pin_TypeDef;          //GPIOx
	uint16_t                         GPIO_TX_Pin; 
  uint16_t                         GPIO_RX_Pin;  
	uint8_t                          USARTx_IRQn;                     //�����ж���
#if USART1_DMA==1
	uint8_t                          USART_TX_DMA1_Channelx_IRQn_NVIC;//DMA����ͨ�����ȼ�
	DMA_Channel_TypeDef *            USART_TX_DMA1_Channelx;          //DMA����ͨ��  
	uint8_t                          USART_TX_DMA1_Channelx_IRQn;     //DMA�����ж���
	uint32_t                         USART_TX_FLAG_GL;                //DMA�������б��
	uint32_t                         USART_TX_FLAG_TC;                //DMA������ɱ��

  uint8_t                          USART_RX_DMA1_Channelx_IRQn_NVIC;//DMA����ͨ�����ȼ�
  DMA_Channel_TypeDef *            USART_RX_DMA1_Channelx;          //DMA����ͨ��  
	uint8_t                          USART_RX_DMA1_Channelx_IRQn;     //DMA�����ж���
	uint32_t                         USART_RX_FLAG_GL;                //DMA�������б��
	uint32_t                         USART_RX_FLAG_TC;                //DMA������ɱ��
	//��̬
	volatile u8                      Tx_flag;                         //DMAæµ��־,1	
	volatile u8                      Rx_flag;                         //DMA������ɱ�־,0
#endif	
}USART1_DMA_InitTypeDef ;    //����DMA���ղ��������ݽṹ��
extern USART1_DMA_InitTypeDef    USART1_DMA_InitStructure;

void   USART1_Init(u32 botelv,IRQ_IRQHandler_Callback cb);
void   USART1_printf (char *fmt, ...);
void   USART1_Send_Array (u8 *array,u16 num);
void   USART1_IRQHandler_Callback_Default(void);

#if USART1_DMA==1
extern DMA_InitTypeDef DMA_USART1_InitStructure;//Ϊ���л��������޸ĵ�ַ�������ȫ�ֵ�
void   DMA_USART1_Init(void);//DMA��������
void   DMA_USART1_Tx_Data(u16 size);
void   USART1_DMA_CLR_BUFF(u8 *BUFF,u8 data,u16 len);
#endif

#endif
