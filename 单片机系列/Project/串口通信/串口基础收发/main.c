#include "reg52.h"

#define uchar unsigned char 
#define uint  unsigned int
	
void InitUART();											//	串口初始化
void ServiceUART();										//	串口服务函数
void SendByte(uchar dat2);						//	发送数据到串口



void main()
{
	InitUART();
	SendByte(01);
	while(1);
	
}

void InitUART()
{
	TMOD = 0x20;		//	工作模式：8位自动重装
	EA = 1;
	ES = 1;
	TR1 = 1;
	
	TH1 = 0xfd;
	TL1 = 0xfd;
	SCON = 0x50;
}
uchar dat1;

void ServiceUART()	interrupt 4
{
	if(RI == 1)
	{
		dat1 = SBUF;
		RI = 0;
		SendByte(dat1);
	}
	
}

void SendByte(uchar dat2)
{
	SBUF = dat2;
	while(TI == 0)
	TI = 0;
}