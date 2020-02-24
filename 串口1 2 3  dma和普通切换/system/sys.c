#include "sys.h"
#include "stdio.h"	
#include <stdarg.h>

#define  printf_usartx   USART1

//printf 打印大数组要用这个
#pragma import(__use_no_semihosting)                    
struct __FILE {int handle;}; //标准库需要的支持函数 
FILE __stdout;         
//_sys_exit(int x) {x = x;} //定义_sys_exit()以避免使用半主机模式    未开启c99
void  _sys_exit(int x){x = x;}//定义_sys_exit()以避免使用半主机模式  开启c99时 c99取消了函数返回类型默认为 int 的规定
int fputc(int ch, FILE *f)//重定义fputc函数 
{      
	while((printf_usartx->SR&0X40)==0);//循环发送,直到发送完毕   
     printf_usartx->DR = (u8) ch;      
	return ch;
}	

//THUMB指令不支持汇编内联,采用如下方法实现执行汇编指令WFI  
//事件可分为中断事件或非中断事件,中断时间产生中断，非中断事件一般是产生标志位置位
void WFI_SET(void)//WFI: wait for Interrupt 等待中断，即下一次中断发生前都在此hold住不干活
{
	__ASM volatile("wfi");		  
}
void WFE_SET(void)//WFE: wait for Events 等待事件，即下一次事件发生前都在此hold住不干活
{
	__ASM volatile("wfe");		  
}
void INTX_DISABLE(void)//关闭所有中断
{		  
	__ASM volatile("cpsid i");
}
void INTX_ENABLE(void)//开启所有中断
{
	__ASM volatile("cpsie i");		  
}
__asm void MSR_MSP(u32 addr) //设置栈顶地址//addr:栈顶地址
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
