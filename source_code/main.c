/*
 * atmel_studio_project.c
 *
 * Created: 3/30/2024 7:06:34 PM
 * Author : Tushar Malankiya
 */

#include "linefollower.h"

int main(void)
{
	DDRA = 0b00001111;
	DDRB = 0b00000000;
	PORTA = 0b00000000;
	PORTB = 0b00000000;
	/* Replace with your application code */
	while (1)
	{

		// keep going if all is on
		if (bit_is_set(PINB, 0) && bit_is_set(PINB, 1) && bit_is_set(PINB, 2) && bit_is_set(PINB, 3) && bit_is_set(PINB, 4) && bit_is_set(PINB, 5) && bit_is_set(PINB, 6) && bit_is_set(PINB, 7))
		{
			stop();
			continue;
		}

		// stop when all off
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}

		// for 3 bits
		if (bit_is_set(PINB, 0) && bit_is_set(PINB, 1) && bit_is_set(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_set(PINB, 1) && bit_is_set(PINB, 2) && bit_is_set(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_set(PINB, 2) && bit_is_set(PINB, 3) && bit_is_set(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_set(PINB, 3) && bit_is_set(PINB, 4) && bit_is_set(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_set(PINB, 4) && bit_is_set(PINB, 5) && bit_is_set(PINB, 6) && bit_is_clear(PINB, 7))
		{
			right();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_set(PINB, 5) && bit_is_set(PINB, 6) && bit_is_set(PINB, 7))
		{
			acute_right();
			continue;
		}

		// for 2 bits
		if (bit_is_set(PINB, 0) && bit_is_set(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_set(PINB, 1) && bit_is_set(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_set(PINB, 2) && bit_is_set(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_set(PINB, 3) && bit_is_set(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_set(PINB, 4) && bit_is_set(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			right();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_set(PINB, 5) && bit_is_set(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_right();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_set(PINB, 6) && bit_is_set(PINB, 7))
		{
			acute_right();
			continue;
		}

		// for only 1 bit
		if (bit_is_set(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_set(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_set(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			left();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_set(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_set(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			forward();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_set(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_clear(PINB, 7))
		{
			right();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_set(PINB, 6) && bit_is_clear(PINB, 7))
		{
			acute_right();
			continue;
		}
		if (bit_is_clear(PINB, 0) && bit_is_clear(PINB, 1) && bit_is_clear(PINB, 2) && bit_is_clear(PINB, 3) && bit_is_clear(PINB, 4) && bit_is_clear(PINB, 5) && bit_is_clear(PINB, 6) && bit_is_set(PINB, 7))
		{
			acute_right();
			continue;
		}

		reverse();
	}
}
