#include <msp430.h> 

unsigned int i = 0;

void main(void) {
	WDTCTL = WDTPW + WDTHOLD;

	P1DIR |= 0x01;

	for (;;) {

		for (i = 0; i < 45000; i++)
					;

		P1OUT ^= 0x01;

		for (i = 0; i < 45000; i++)
			;
	}
}
