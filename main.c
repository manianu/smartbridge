/*
 * 7segment.c
 *
 * Created: 10-06-2019 10:05:25
 * Author : ganga
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD=0XFF;
    while (1) 
    {
		PORTD=0X3F;
		_delay_ms(2000);
		PORTD=0X06;
		_delay_ms(2000);
		PORTD=0X5B;
		_delay_ms(2000);
		PORTD=0X4F;
		_delay_ms(2000);
		PORTD=0X66;
		_delay_ms(2000);
		PORTD=0X6D;
		_delay_ms(2000);
		PORTD=0X7D;
		_delay_ms(2000);
		PORTD=0X07;
		_delay_ms(2000);
		PORTD=0XFF;
		_delay_ms(2000);
		PORTD=0X67;
		_delay_ms(2000);
		PORTD=0X77;
		_delay_ms(2000);
		PORTD=0X7C;
		_delay_ms(2000);
		PORTD=0X39;
		_delay_ms(2000);
		PORTD=0X5E;
		_delay_ms(2000);
		PORTD=0X79;
		_delay_ms(2000);
		PORTD=0X71;
		_delay_ms(2000);
		
			}
}

