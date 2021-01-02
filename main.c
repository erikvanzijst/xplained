#include <atmel_start.h>
#include <atmel_start_pins.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

extern volatile uint16_t screen[16];

// Adjust for hardware wiring error in v01:
// https://github.com/erikvanzijst/dotmatrix/commit/3c7690eb47
#define fix(row) (row + ((row & 1) ? -1 : 1))

void setpixel(uint8_t row, uint8_t col, bool on) {
  if (on) {
    screen[fix(row)] |= (0x8000 >> col);
  } else {
    screen[fix(row)] &= ((0x8000 >> col) ^ 0xff);
  }
}

void clearScreen() {
  for (uint8_t row = 0; row < 16; row++) {
    screen[row] = 0;
  }
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	LED1_set_level(true);
	LED0_set_level(true);
	PORTE_set_pin_level(4, false);	// turn off the LCD backlight
	sei();

	float dx = 0.9;
	float dy = 0.5;
	float x = 8;
	float y = 8;

	for (;;) {
		clearScreen();

		// float mut = rand() / (float)RAND_MAX;
		if (((x+dx) < 0 || (x+dx) >= 16)) {
			dx *= -1;
			// LED0_toggle_level();
		}
		if (((y+dy) < 0 || (y+dy) >= 16)) {
			dy *= -1;
		}
		x += dx;
		y += dy;

		setpixel((uint8_t)y, (uint8_t)x, true);
		_delay_ms(50);
	}
}
