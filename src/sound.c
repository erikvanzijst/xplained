#include <compiler.h>
#include <port.h>
#include <stdint.h>
#include "sound.h"

int32_t toggle_count = -1;

void tone(uint16_t frequency, int32_t duration) {
	uint32_t per = F_CPU / frequency / 2 - 1;
	uint16_t prescalar = TC_CLKSEL_DIV1_gc;

	if (per > 0xffff) {
		prescalar = TC_CLKSEL_DIV64_gc;
		per = F_CPU / frequency / 2 / 64 - 1;
	}

	if (duration > 0) {
		toggle_count = 2 * frequency * duration / 1000;
	} else {
		toggle_count = -1;
	}
	TCE0.CTRLA = prescalar;
	TCE0.PER = per;
}

void no_tone() {
    toggle_count = -1;
    TCE0.CTRLA = TC_CLKSEL_OFF_gc;
}

void tone_isr()
{
	if (toggle_count != 0) {
		// LED1_toggle_level();
   		PORTE_toggle_pin_level(0);
		toggle_count--;
	} else {
		TCE0.CTRLA = TC_CLKSEL_OFF_gc;
	}
}
