// #define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main ()
{
	DDRB |= (1 << PB5);

	while(1) 
	{
			//PORTB ^= (1 << PB5); // toggling
		_delay_ms(500);
			//_delay_ms(1000);
		PORTB &= ~(1 << PB5); // set low
		_delay_ms(1000);
			//_delay_ms(1000);
			//PORTB ^= (1 << PB5); // set toggle
			//_delay_ms(1000);
		_delay_ms(1000);
		PORTB |= (1 << PB5); // set high
		_delay_ms(500);
			//_delay_ms(1000);
	}
}
