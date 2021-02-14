#include <atmel_start.h>
#include <atmel_start_pins.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#define __DELAY_BACKWARD_COMPATIBLE__
#include <util/delay.h>
#include "sound.h"

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

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
int melody[] = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=192
  
  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,

  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,
  NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,

  NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,
  NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,
  NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,
  NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,
  

  NOTE_E5,2,  NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,2,   NOTE_A4,2,
  NOTE_GS4,2,  NOTE_B4,4,  REST,4, 
  NOTE_E5,2,   NOTE_C5,2,
  NOTE_D5,2,   NOTE_B4,2,
  NOTE_C5,4,   NOTE_E5,4,  NOTE_A5,2,
  NOTE_GS5,2, REST, 2,

};

void play_tetris_tune() {
	// change this to make the song slower or faster
	int tempo=144; 

	// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
	// there are two values per note (pitch and duration), so for each note there are four bytes
	int notes=sizeof(melody)/sizeof(melody[0])/2; 

	// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
	int wholenote = (60000 * 4) / tempo;

	int divider = 0;
	uint32_t noteDuration = 0;

  // iterate over the notes of the melody. 
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(melody[thisNote], noteDuration*0.9);

    // Wait for the specief duration before playing the next note.
    _delay_ms(noteDuration);
    
    // stop the waveform generation before the next note.
    no_tone();
  }
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	LED1_set_level(false);
	LED0_set_level(true);
	PORTE_set_pin_level(4, false);	// turn off the LCD backlight
	sei();

	PORTE_set_pin_dir(0, PORT_DIR_OUT);

	float dx = 0.9;
	float dy = 0.5;
	float x = 8;
	float y = 8;

	for (;;) {
		play_tetris_tune();

		tone(NOTE_C4, 100);
		_delay_ms(110);
		tone(NOTE_D4, 100);
		_delay_ms(110);
		tone(NOTE_E4, 100);
		_delay_ms(110);
		tone(NOTE_F4, 100);
		_delay_ms(110);
		tone(NOTE_G4, 100);
		_delay_ms(110);
		tone(NOTE_A4, 100);
		_delay_ms(110);
		tone(NOTE_B4, 100);
		_delay_ms(110);

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
		_delay_ms(100);
	}
}
