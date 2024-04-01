#include "linefollower.h"


void forward()
{
	PORTA |= (1 << PINA0); // motor 1 forward
	PORTA &= ~(1 << PINA1);

	PORTA |= (1 << PINA2); // motor 2 forward
	PORTA &= ~(1 << PINA3);
}

void reverse()
{
	// motor 1 reverse
	PORTA &= ~(1 << PINA0);
	PORTA |= (1 << PINA1);

	// motor 2 reverse
	PORTA &= ~(1 << PINA2);
	PORTA |= (1 << PINA3);
}

void stop()
{
	PORTA |= (1 << PINA0); // motor 1 stop
	PORTA |= (1 << PINA1);
	PORTA |= (1 << PINA2); // motor 2 stop
	PORTA |= (1 << PINA3);
}

void left()
{
	PORTA |= (1 << PINA0); // motor 1 stop
	PORTA |= (1 << PINA1);
	PORTA |= (1 << PINA2); // motor 2 forward
	PORTA &= ~(1 << PINA3);
}

void right()
{
	PORTA |= (1 << PINA0); // motor 1 forward
	PORTA &= ~(1 << PINA1);
	PORTA |= (1 << PINA2); // motor 2 stop
	PORTA |= (1 << PINA3);
}

void acute_left()
{
	// motor 1 reverse
	PORTA &= ~(1 << PINA0);
	PORTA |= (1 << PINA1);
	PORTA |= (1 << PINA2); // motor 2 forward
	PORTA &= ~(1 << PINA3);
}

void acute_right()
{
	PORTA |= (1 << PINA0); // motor 1 forward
	PORTA &= ~(1 << PINA1);
	// motor 2 reverse
	PORTA &= ~(1 << PINA2);
	PORTA |= (1 << PINA3);
}
