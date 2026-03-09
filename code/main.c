#include <stdlib.h>
#include <STC12C5A60S2.H>
#include "LCD1602.H"
#include "MATRIXKEY.H"
#include "Delay.h"

unsigned char tureword[]={0,0,0,0};
unsigned char word[]={0,0,0,0};
unsigned char flag,door;
unsigned char keynum,i;

void Waitenter(void);
void Getnum(unsigned char a[]);
unsigned char Check(void);

void main()
{
	LCD_Init();
	while(1)
	{
		if(door==0)		//密码锁未被破解
		{
			LCD_clear();
			LCD_ShowString(1,1,"Password:");
			LCD_ShowString(2,1,"____");
			Getnum(word);
			door=Check();
			LCD_clear();
			if(door) LCD_ShowString(1,1,"Correct code!");
			else LCD_ShowString(1,1,"Error code!");
			Waitenter();
		}
		if(door==1)		//密码锁已被破解
		{
			LCD_clear();
			LCD_ShowString(1,1,"1.Chang Code");
			LCD_ShowString(2,1,"2.Game 3.Exit");
			keynum=17;
			while(keynum!=1&&keynum!=2&&keynum!=3) keynum=MatrixKey();//等待获取输入 
			if(keynum==1) door=2;		
			if(keynum==2) door=3;
			if(keynum==3) door=0;
		}
		if(door==2)//change password
		{			
			LCD_clear();
			LCD_ShowString(1,1,"New Password");
			LCD_ShowString(2,1,"____");
			Getnum(tureword);
			LCD_clear();
			LCD_ShowString(1,1,"It is changed!");
			Waitenter();
			door=1;
		}	
		if(door==3)//game
		{
			unsigned char score=0;
			unsigned char c1=2,r1=1,c2,r2,r3,c3;
			
			LCD_clear();
			LCD_ShowString(1,1,"Game is loading");
			for(i=1;i<=16;i++){ LCD_ShowChar(2,i,0xFF);Delay((17-i)*100);}
			
			LCD_clear();
			while(1);
		}
	}
}
void Waitenter(void)
{
	keynum=17;
	while(keynum!=12) keynum=MatrixKey();
}
void Getnum(unsigned char a[])
{
	unsigned char col=1;
	flag=0;
	keynum=17;
	while(flag==0)																	//等待键盘输入
	{
		keynum=MatrixKey();
		if(keynum<10&&col<=4)
		{ 																			//判断键盘键位为输入
			a[col-1]=keynum;
			LCD_ShowNum(2,col++,keynum,1);
		}
		if(keynum==11&&col>=2) LCD_ShowChar(2,--col,'_');							//判断键盘键位为退格
		if(keynum==12&&col==5) flag=1;												//判断键盘键位为确认输入
	}
}
unsigned char Check(void)
{
	unsigned char ret=1;keynum=17;
	for(i=0;i<4;i++) if(tureword[i]!=word[i]) ret=0;
	return ret;
}
void Timer0_Isr(void) interrupt 1
{
	static unsigned char cnt=0;
	TL0 = 0x66;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	
	cnt++;
	if(cnt==100)
	{
		
		cnt=0;
	}
}
