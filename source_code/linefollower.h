#ifndef LINEFOLLOWER_H
#define LINEFOLLOWER_H

// Define the clock frequency
#define F_CPU 16000000UL

// Include necessary libraries
#include <avr/io.h>
#include <util/delay.h>
#include <avr/sfr_defs.h>

// Function prototypes
void forward();
void reverse();
void left();
void right();
void acute_left();
void acute_right();
void stop();

#endif
