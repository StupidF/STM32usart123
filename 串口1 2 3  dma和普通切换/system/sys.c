#include "sys.h"
#include "stdio.h"	
#include <stdarg.h>

#define  printf_usartx   USART1

//printf ��ӡ������Ҫ�����
#pragma import(__use_no_semihosting)                    
struct __FILE {int handle;}; //��׼����Ҫ��֧�ֺ��� 
FILE __stdout;         
//_sys_exit(int x) {x = x;} //����_sys_exit()�Ա���ʹ�ð�����ģʽ    δ����c99
void  _sys_exit(int x){x = x;}//����_sys_exit()�Ա���ʹ�ð�����ģʽ  ����c99ʱ c99ȡ���˺�����������Ĭ��Ϊ int �Ĺ涨
int fputc(int ch, FILE *f)//�ض���fputc���� 
{      
	while((printf_usartx->SR&0X40)==0);//ѭ������,ֱ���������   
     printf_usartx->DR = (u8) ch;      
	return ch;
}	

//THUMBָ�֧�ֻ������,�������·���ʵ��ִ�л��ָ��WFI  
//�¼��ɷ�Ϊ�ж��¼�����ж��¼�,�ж�ʱ������жϣ����ж��¼�һ���ǲ�����־λ��λ
void WFI_SET(void)//WFI: wait for Interrupt �ȴ��жϣ�����һ���жϷ���ǰ���ڴ�holdס���ɻ�
{
	__ASM volatile("wfi");		  
}
void WFE_SET(void)//WFE: wait for Events �ȴ��¼�������һ���¼�����ǰ���ڴ�holdס���ɻ�
{
	__ASM volatile("wfe");		  
}
void INTX_DISABLE(void)//�ر������ж�
{		  
	__ASM volatile("cpsid i");
}
void INTX_ENABLE(void)//���������ж�
{
	__ASM volatile("cpsie i");		  
}
__asm void MSR_MSP(u32 addr) //����ջ����ַ//addr:ջ����ַ
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
