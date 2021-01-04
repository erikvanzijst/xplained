/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/*
 * Code generated by START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

void TIMER_0_initialization(void)
{

	TIMER_0_init();
}

/* configure pins and initialize registers */
void SLEEP_initialization(void)
{
	SLEEP_init();
}

/* Configure pins and initialize registers */
void USART_0_initialization(void)
{

	// Set pin direction to input
	PE2_set_dir(PORT_DIR_IN);

	PE2_set_output_pull_mode(
	    // <y> Output and Pull Configuration
	    // <id> pad_output_pull_config
	    // <PORT_CONFIGURATION_TOTEM"> Totem-pole
	    // <PORT_CONFIGURATION_BUSKEEPER"> Totem-pole with bus-keeper
	    // <PORT_CONFIGURATION_PULLDOWN"> Pull-down
	    // <PORT_CONFIGURATION_PULLUP"> Pull-up
	    // <PORT_CONFIGURATION_WIREDOR"> Wired-OR
	    // <PORT_CONFIGURATION_WIREDAND"> Wired-AND
	    // <PORT_CONFIGURATION_WIREDORPULL"> Wired-OR with pull-down
	    // <PORT_CONFIGURATION_WIREDANDPULL"> Wired-AND with pull-up
	    PORT_CONFIGURATION_TOTEM);

	// Set pin direction to output
	PE3_set_dir(PORT_DIR_OUT);

	PE3_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	USART_0_init();
}

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();

	/* PORT setting on PC0 */

	// Set pin direction to output
	RCLK_set_dir(PORT_DIR_OUT);

	RCLK_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC1 */

	// Set pin direction to output
	RSDI_set_dir(PORT_DIR_OUT);

	RSDI_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC2 */

	// Set pin direction to output
	OE_set_dir(PORT_DIR_OUT);

	OE_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC3 */

	// Set pin direction to output
	CSDI_set_dir(PORT_DIR_OUT);

	CSDI_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC4 */

	// Set pin direction to output
	CCLK_set_dir(PORT_DIR_OUT);

	CCLK_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC5 */

	// Set pin direction to output
	LE_set_dir(PORT_DIR_OUT);

	LE_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PR0 */

	// Set pin direction to output
	LED0_set_dir(PORT_DIR_OUT);

	LED0_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PR1 */

	// Set pin direction to output
	LED1_set_dir(PORT_DIR_OUT);

	LED1_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	PORTC_set_pin_dir(7, PORT_DIR_OUT);
	PORTE_set_pin_dir(4, PORT_DIR_OUT);

	PORTCFG.VPCTRLA = PORTCFG_VP1MAP_PORTB_gc | PORTCFG_VP0MAP_PORTA_gc;	// assign the virtual ports A==>VP0, B==>VP1
	PORTCFG.VPCTRLB = PORTCFG_VP3MAP_PORTD_gc | PORTCFG_VP2MAP_PORTC_gc;	// assign the virtual ports C==>VP2, D==>VP3

	TIMER_0_initialization();

	OSC_init();

	CLK_init();

	PMIC_init();

	SLEEP_initialization();

	USART_0_initialization();
}
