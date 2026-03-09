#include <STC12C5A60S2.H>
#include <Delay.h>

//unsigned char MatrixKey(void)
//{
//	unsigned char KeyNumber=0;
//	P3=0xFF;
//	P34=0;
//	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=12;}
//	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=9;}
//	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=6;}
//	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=3;}
//	P3=0xFF;
//	P35=0;
//	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=11;}
//	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=8;}
//	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=5;}
//	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=2;}
//	P3=0xFF;
//	P36=0;
//	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=10;}
//	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=7;}
//	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=4;}
//	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=1;}
//	P3=0xFF;
//	P37=0;
//	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=13;}
//	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=14;}
//	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=15;}
//	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=16;}
//    return KeyNumber;
//}

unsigned char MatrixKey(void)
{
	unsigned char KeyNumber=17;
	P3=0xFF;
	P34=0;
	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=13;}
	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=14;}
	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=15;}
	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=16;}
	P3=0xFF;
	P35=0;
	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=12;}
	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=9;}
	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=6;}
	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=3;}
	P3=0xFF;
	P36=0;
	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=11;}
	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=8;}
	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=5;}
	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=2;}
	P3=0xFF;
	P37=0;
	if(P33==0){Delay(20);while(P33==0);Delay(20);KeyNumber=0;}
	if(P32==0){Delay(20);while(P32==0);Delay(20);KeyNumber=7;}
	if(P31==0){Delay(20);while(P31==0);Delay(20);KeyNumber=4;}
	if(P30==0){Delay(20);while(P30==0);Delay(20);KeyNumber=1;}
    return KeyNumber;
}