/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
#include <keypad.h>
int main(void) {
    /* Insert DDR and PORT initializations */
	unsigned char x;
	DDRA = 0xFF;	PORTA = 0x00;
	DDRC = 0xF0;	PORTC = 0x0F;
    /* Insert your solution below */
    while (1) {
	x = GetKeypadKey();
	switch(x){
		case '\0':PORTA = 0x1F; break;
		case '1':PORTA = 0x01; break;
		case '2':PORTA = 0x02; break;
		case '3':PORTA = 0x03; break;
		case '4':PORTA = 0x04; break;
		case '5':PORTA = 0x05; break;
		case '6':PORTA = 0x06; break;
		case '7':PORTA = 0x07; break;
		case '8':PORTA = 0x08; break;
		case '9':PORTA = 0x09; break;
		case 'A':PORTA = 0x0A; break;
		case 'B':PORTA = 0x0B; break;
		case 'C':PORTA = 0x0C; break;
		case 'D':PORTA = 0x0D; break;
		case '*':PORTA = 0x0E; break;
		case '0':PORTA = 0x00; break;  
		case '#':PORTA = 0x0F; break;

		default: PORTA = 0x1B; break;
	}
	//PORTA = 0xFF;
    }
    return 1;
}
