#include <reg52.h>
#include "stdio.h"
#define uchar unsigned char
#define uint 	unsigned int 
uchar temp;
uchar strtmp[] = "abcdefg";
void InitUART();
void ServiceUART();
void SendByte(uchar dat);
void SendString(uchar *str);
	

void main()
{
	
	InitUART();
	SendString("welcomabcs!\0");
	while(1)
	{
		
	}
}

void SendByte(uchar dat)
{
	SBUF = dat;
	while(TI == 0)
	TI = 0;
}

void SendString(unsigned char *s)
{   
    char i = 0;   
    while(s[ i ] != '\0')   
    {
        SendByte(s[ i ]);
        i++;
    }
}

void InitUART()
{
	TMOD = 0x20;	//	8为自动重装模式
	TH1 = 0xfd;
	TL1 = 0xfd;
	
	TR1 = 1;
	SCON |= 0x50;
	EA = 1;
	ES = 1;

}

void ServiceUART()	interrupt 4
{
	if(RI == 1)
	{
			RI = 0;
	}
}