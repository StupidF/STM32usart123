#ifndef __USART1_H
#define __USART1_H
#include "stdio.h"	
#include <stdarg.h>
#include "sys.h" 

#define    USART1_DMA             1//开启会与SPI2_DMA冲突

#define    USART1_MAX_TX_LEN		500			     //最大发送缓存字节数
#define    USART1_MAX_RX_LEN		200			     //最大接收缓存字节数
extern u8  USART1_TX_BUF[USART1_MAX_TX_LEN]; //发送缓冲区
extern u8  USART1_RX_BUF[USART1_MAX_RX_LEN]; //接收缓冲区
extern u16 USART1_RX_STA;         		       //接收状态标记	

__packed typedef struct
{
	//静态
	USART_TypeDef *                  USARTx ;                         //串口
  uint32_t                         USARTx_RCC ;	                    //串口时钟时能
  uint32_t                         GPIO_RCC_APBx;                   //GPIO时钟时能
  GPIO_TypeDef  *                  GPIO_TX_RX_Pin_TypeDef;          //GPIOx
	uint16_t                         GPIO_TX_Pin; 
  uint16_t                         GPIO_RX_Pin;  
	uint8_t                          USARTx_IRQn;                     //串口中断线
#if USART1_DMA==1
	uint8_t                          USART_TX_DMA1_Channelx_IRQn_NVIC;//DMA发送通道优先级
	DMA_Channel_TypeDef *            USART_TX_DMA1_Channelx;          //DMA发送通道  
	uint8_t                          USART_TX_DMA1_Channelx_IRQn;     //DMA发送中断线
	uint32_t                         USART_TX_FLAG_GL;                //DMA发送所有标记
	uint32_t                         USART_TX_FLAG_TC;                //DMA传输完成标记

  uint8_t                          USART_RX_DMA1_Channelx_IRQn_NVIC;//DMA接收通道优先级
  DMA_Channel_TypeDef *            USART_RX_DMA1_Channelx;          //DMA接收通道  
	uint8_t                          USART_RX_DMA1_Channelx_IRQn;     //DMA接收中断线
	uint32_t                         USART_RX_FLAG_GL;                //DMA接收所有标记
	uint32_t                         USART_RX_FLAG_TC;                //DMA传输完成标记
	//动态
	volatile u8                      Tx_flag;                         //DMA忙碌标志,1	
	volatile u8                      Rx_flag;                         //DMA接收完成标志,0
#endif	
}USART1_DMA_InitTypeDef ;    //串口DMA接收不定长数据结构体
extern USART1_DMA_InitTypeDef    USART1_DMA_InitStructure;

void   USART1_Init(u32 botelv,IRQ_IRQHandler_Callback cb);
void   USART1_printf (char *fmt, ...);
void   USART1_Send_Array (u8 *array,u16 num);
void   USART1_IRQHandler_Callback_Default(void);

#if USART1_DMA==1
extern DMA_InitTypeDef DMA_USART1_InitStructure;//为了切换缓冲区修改地址，定义成全局的
void   DMA_USART1_Init(void);//DMA串口配置
void   DMA_USART1_Tx_Data(u16 size);
void   USART1_DMA_CLR_BUFF(u8 *BUFF,u8 data,u16 len);
#endif

#endif
