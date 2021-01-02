/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set RCLK output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void RCLK_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(0, output_pull_mode);
}

/**
 * \brief Set RCLK data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RCLK_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set RCLK input/sense configuration
 *
 * Enable/disable RCLK digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void RCLK_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(0, isc);
}

/**
 * \brief Set RCLK inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on RCLK is inverted
 *                     false = I/O on RCLK is not inverted
 */
static inline void RCLK_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(0, inverted);
}

/**
 * \brief Set RCLK level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RCLK_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on RCLK
 *
 * Toggle the pin level
 */
static inline void RCLK_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on RCLK
 *
 * Reads the level on a pin
 */
static inline bool RCLK_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set RCLK interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void RCLK_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set RCLK interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void RCLK_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set RCLK interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void RCLK_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set RSDI output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void RSDI_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(1, output_pull_mode);
}

/**
 * \brief Set RSDI data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RSDI_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set RSDI input/sense configuration
 *
 * Enable/disable RSDI digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void RSDI_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(1, isc);
}

/**
 * \brief Set RSDI inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on RSDI is inverted
 *                     false = I/O on RSDI is not inverted
 */
static inline void RSDI_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(1, inverted);
}

/**
 * \brief Set RSDI level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RSDI_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on RSDI
 *
 * Toggle the pin level
 */
static inline void RSDI_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on RSDI
 *
 * Reads the level on a pin
 */
static inline bool RSDI_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set RSDI interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void RSDI_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set RSDI interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void RSDI_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set RSDI interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void RSDI_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set OE output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void OE_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(2, output_pull_mode);
}

/**
 * \brief Set OE data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void OE_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set OE input/sense configuration
 *
 * Enable/disable OE digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void OE_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(2, isc);
}

/**
 * \brief Set OE inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on OE is inverted
 *                     false = I/O on OE is not inverted
 */
static inline void OE_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(2, inverted);
}

/**
 * \brief Set OE level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void OE_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on OE
 *
 * Toggle the pin level
 */
static inline void OE_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on OE
 *
 * Reads the level on a pin
 */
static inline bool OE_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set OE interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void OE_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set OE interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void OE_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set OE interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void OE_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set CSDI output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void CSDI_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(3, output_pull_mode);
}

/**
 * \brief Set CSDI data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void CSDI_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set CSDI input/sense configuration
 *
 * Enable/disable CSDI digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void CSDI_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(3, isc);
}

/**
 * \brief Set CSDI inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on CSDI is inverted
 *                     false = I/O on CSDI is not inverted
 */
static inline void CSDI_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(3, inverted);
}

/**
 * \brief Set CSDI level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void CSDI_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on CSDI
 *
 * Toggle the pin level
 */
static inline void CSDI_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on CSDI
 *
 * Reads the level on a pin
 */
static inline bool CSDI_get_level()
{
	return PORTC_get_pin_level(3);
}

/**
 * \brief Set CSDI interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void CSDI_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set CSDI interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void CSDI_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set CSDI interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void CSDI_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set CCLK output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void CCLK_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(4, output_pull_mode);
}

/**
 * \brief Set CCLK data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void CCLK_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set CCLK input/sense configuration
 *
 * Enable/disable CCLK digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void CCLK_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(4, isc);
}

/**
 * \brief Set CCLK inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on CCLK is inverted
 *                     false = I/O on CCLK is not inverted
 */
static inline void CCLK_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(4, inverted);
}

/**
 * \brief Set CCLK level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void CCLK_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on CCLK
 *
 * Toggle the pin level
 */
static inline void CCLK_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on CCLK
 *
 * Reads the level on a pin
 */
static inline bool CCLK_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set CCLK interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void CCLK_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set CCLK interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void CCLK_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set CCLK interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void CCLK_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set LE output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void LE_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTC_set_pin_output_pull_mode(5, output_pull_mode);
}

/**
 * \brief Set LE data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LE_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set LE input/sense configuration
 *
 * Enable/disable LE digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void LE_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(5, isc);
}

/**
 * \brief Set LE inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on LE is inverted
 *                     false = I/O on LE is not inverted
 */
static inline void LE_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(5, inverted);
}

/**
 * \brief Set LE level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LE_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on LE
 *
 * Toggle the pin level
 */
static inline void LE_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on LE
 *
 * Reads the level on a pin
 */
static inline bool LE_get_level()
{
	return PORTC_get_pin_level(5);
}

/**
 * \brief Set LE interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void LE_int_level(const uint8_t level)
{
	PORTC_set_int_level(level);
}

/**
 * \brief Set LE interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void LE_int0_mask(const uint8_t value)
{
	PORTC_write_int0_mask(value);
}

/**
 * \brief Set LE interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void LE_int1_mask(const uint8_t value)
{
	PORTC_write_int1_mask(value);
}

/**
 * \brief Set PE2 output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void PE2_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTE_set_pin_output_pull_mode(2, output_pull_mode);
}

/**
 * \brief Set PE2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PE2_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(2, dir);
}

/**
 * \brief Set PE2 input/sense configuration
 *
 * Enable/disable PE2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PE2_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(2, isc);
}

/**
 * \brief Set PE2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PE2 is inverted
 *                     false = I/O on PE2 is not inverted
 */
static inline void PE2_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(2, inverted);
}

/**
 * \brief Set PE2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PE2_set_level(const bool level)
{
	PORTE_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PE2
 *
 * Toggle the pin level
 */
static inline void PE2_toggle_level()
{
	PORTE_toggle_pin_level(2);
}

/**
 * \brief Get level on PE2
 *
 * Reads the level on a pin
 */
static inline bool PE2_get_level()
{
	return PORTE_get_pin_level(2);
}

/**
 * \brief Set PE2 interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void PE2_int_level(const uint8_t level)
{
	PORTE_set_int_level(level);
}

/**
 * \brief Set PE2 interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void PE2_int0_mask(const uint8_t value)
{
	PORTE_write_int0_mask(value);
}

/**
 * \brief Set PE2 interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void PE2_int1_mask(const uint8_t value)
{
	PORTE_write_int1_mask(value);
}

/**
 * \brief Set PE3 output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void PE3_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTE_set_pin_output_pull_mode(3, output_pull_mode);
}

/**
 * \brief Set PE3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PE3_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(3, dir);
}

/**
 * \brief Set PE3 input/sense configuration
 *
 * Enable/disable PE3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PE3_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(3, isc);
}

/**
 * \brief Set PE3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PE3 is inverted
 *                     false = I/O on PE3 is not inverted
 */
static inline void PE3_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(3, inverted);
}

/**
 * \brief Set PE3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PE3_set_level(const bool level)
{
	PORTE_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PE3
 *
 * Toggle the pin level
 */
static inline void PE3_toggle_level()
{
	PORTE_toggle_pin_level(3);
}

/**
 * \brief Get level on PE3
 *
 * Reads the level on a pin
 */
static inline bool PE3_get_level()
{
	return PORTE_get_pin_level(3);
}

/**
 * \brief Set PE3 interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void PE3_int_level(const uint8_t level)
{
	PORTE_set_int_level(level);
}

/**
 * \brief Set PE3 interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void PE3_int0_mask(const uint8_t value)
{
	PORTE_write_int0_mask(value);
}

/**
 * \brief Set PE3 interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void PE3_int1_mask(const uint8_t value)
{
	PORTE_write_int1_mask(value);
}

/**
 * \brief Set LED0 output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void LED0_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTR_set_pin_output_pull_mode(0, output_pull_mode);
}

/**
 * \brief Set LED0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LED0_set_dir(const enum port_dir dir)
{
	PORTR_set_pin_dir(0, dir);
}

/**
 * \brief Set LED0 input/sense configuration
 *
 * Enable/disable LED0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void LED0_set_isc(const PORT_ISC_t isc)
{
	PORTR_pin_set_isc(0, isc);
}

/**
 * \brief Set LED0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on LED0 is inverted
 *                     false = I/O on LED0 is not inverted
 */
static inline void LED0_set_inverted(const bool inverted)
{
	PORTR_pin_set_inverted(0, inverted);
}

/**
 * \brief Set LED0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LED0_set_level(const bool level)
{
	PORTR_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on LED0
 *
 * Toggle the pin level
 */
static inline void LED0_toggle_level()
{
	PORTR_toggle_pin_level(0);
}

/**
 * \brief Get level on LED0
 *
 * Reads the level on a pin
 */
static inline bool LED0_get_level()
{
	return PORTR_get_pin_level(0);
}

/**
 * \brief Set LED0 interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void LED0_int_level(const uint8_t level)
{
	PORTR_set_int_level(level);
}

/**
 * \brief Set LED0 interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void LED0_int0_mask(const uint8_t value)
{
	PORTR_write_int0_mask(value);
}

/**
 * \brief Set LED0 interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void LED0_int1_mask(const uint8_t value)
{
	PORTR_write_int1_mask(value);
}

/**
 * \brief Set LED1 output & pull configuration
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] output_pull_mode Pin output & pull mode
 */
static inline void LED1_set_output_pull_mode(const enum port_output_pull_mode output_pull_mode)
{
	PORTR_set_pin_output_pull_mode(1, output_pull_mode);
}

/**
 * \brief Set LED1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void LED1_set_dir(const enum port_dir dir)
{
	PORTR_set_pin_dir(1, dir);
}

/**
 * \brief Set LED1 input/sense configuration
 *
 * Enable/disable LED1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void LED1_set_isc(const PORT_ISC_t isc)
{
	PORTR_pin_set_isc(1, isc);
}

/**
 * \brief Set LED1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on LED1 is inverted
 *                     false = I/O on LED1 is not inverted
 */
static inline void LED1_set_inverted(const bool inverted)
{
	PORTR_pin_set_inverted(1, inverted);
}

/**
 * \brief Set LED1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void LED1_set_level(const bool level)
{
	PORTR_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on LED1
 *
 * Toggle the pin level
 */
static inline void LED1_toggle_level()
{
	PORTR_toggle_pin_level(1);
}

/**
 * \brief Get level on LED1
 *
 * Reads the level on a pin
 */
static inline bool LED1_get_level()
{
	return PORTR_get_pin_level(1);
}

/**
 * \brief Set LED1 interrupt level
 *
 * Sets interrupt level for port
 *
 * \param[in] level Value to write to the port register
 */
static inline void LED1_int_level(const uint8_t level)
{
	PORTR_set_int_level(level);
}

/**
 * \brief Set LED1 interrupt vector 0 mask
 *
 * Sets interrupt mask for port vector 0
 *
 * \param[in] value Value to write to the port register
 */
static inline void LED1_int0_mask(const uint8_t value)
{
	PORTR_write_int0_mask(value);
}

/**
 * \brief Set LED1 interrupt vector 1 mask
 *
 * Sets interrupt mask for port vector 1
 *
 * \param[in] value Value to write to the port register
 */
static inline void LED1_int1_mask(const uint8_t value)
{
	PORTR_write_int1_mask(value);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
