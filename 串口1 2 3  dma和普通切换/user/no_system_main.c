

#include "sys.h"
#include "usart1.h"
#include "usart2.h"
#include "usart3.h"

int main()
{	
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
		USART1_Init(115200,USART1_IRQHandler_Callback_Default);
	  USART2_Init(115200,USART2_IRQHandler_Callback_Default);
    USART3_Init(115200,USART3_IRQHandler_Callback_Default);

		while(1)
		{
				if(USART1_RX_STA&0x8000)
				{		
						USART1_printf("USART1_RX_BUF=%s",USART1_RX_BUF);	
					//printf("USART1_RX_BUF=%s",USART1_RX_BUF);//串口1可用printf 在sys里面设置，但是printf非dma发送				
						USART1_RX_STA=0;
				}
				if(USART2_RX_STA&0x8000)
				{		
						USART2_printf("USART2_RX_BUF=%s",USART2_RX_BUF);						
						USART2_RX_STA=0;
				}
				if(USART3_RX_STA&0x8000)
				{		
						USART3_printf("USART3_RX_BUF=%s",USART3_RX_BUF);						
						USART3_RX_STA=0;
				}	
		}	
}
