#include <atmel_start.h>
#include <atmel_start_pins.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

// Display driver
#define DIM 16
#define width DIM * DIM
volatile unsigned int screen[DIM];
volatile uint8_t row = 0;

const unsigned int RCLK   = 7;
const unsigned int RSDI   = 6;
const unsigned int OE     = 5;
const unsigned int CSDI   = 4;
const unsigned int CCLK   = 3;
const unsigned int LE     = 2;

volatile int cnt = 0;

ISR (TCC2_LCMPA_vect) {
	if (++cnt == 1000) 
	{
		LED1_toggle_level();
		cnt = 0;
	}
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	sei();
	/* Replace with your application code */
	while (1) {
		LED0_toggle_level();
		// LED0_set_level(true);
		// _delay_ms(250);
		// LED0_set_level(false);
		_delay_ms(250);
	}
}
