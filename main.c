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

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	LED1_set_level(true);
	LED0_set_level(true);
	sei();
	/* Replace with your application code */
	while (1) {
	   LED0_toggle_level();
		_delay_ms(250);
	}
}
