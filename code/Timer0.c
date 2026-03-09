#include <STC12C5A60S2.H>

void Timer0_Init(void)		//1毫秒@11.0592MHz
{
	TMOD &= 0xF0;			//设置定时器模式
	TMOD |= 0x01;			//设置定时器模式
	TL0 = 0x66;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	TF0 = 0;				//清除TF0标志
	TR0 = 1;				//定时器0开始计时
	ET0 = 1;				//使能定时器0中断
	EA=1;
}
void Timer0_close(void)
{
	TR0 = 0;
	ET0 = 0;
	EA=0;
}
	
//void Timer0_Isr(void) interrupt 1
//{
//	TL0 = 0x66;				//设置定时初始值
//	TH0 = 0xFC;				//设置定时初始值
//}
