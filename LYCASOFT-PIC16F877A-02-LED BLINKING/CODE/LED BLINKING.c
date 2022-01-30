#include<pic.h>
#include<htc.h>
#define _XTAL_FREQ 20e6
__CONFIG(0X3F3A);

void main()
{
	TRISB=0X00;
	PORTB=0X00;
	
	while(1)
	{
		PORTB=0X01;
		__delay_ms(1000);
		PORTB=0X00;
		__delay_ms(1000);
	}
}