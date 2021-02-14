/**
 * \file
 *
 * \brief Driver ISR.
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

#include <driver_init.h>
#include <compiler.h>
#include "sound.h"

// Display driver
#define DIM 16
#define width DIM * DIM
volatile uint16_t screen[DIM];
volatile uint8_t row = 0;

#define RCLK   (1 << 0)
#define RSDI   (1 << 1)
#define OE     (1 << 2)
#define CSDI   (1 << 3)
#define CCLK   (1 << 4)
#define LE     (1 << 5)


ISR(TCC0_OVF_vect)
{
   if (row != 0) {
      VPORT2.OUT |= RSDI;
   } else {
      VPORT2.OUT &= ~RSDI;
   }

   VPORT2.OUT |= RCLK;
   VPORT2.OUT &= ~RCLK;

   for (uint16_t col = 1; col; col <<= 1) {
      if (screen[row] & col) {
         VPORT2.OUT |= CSDI;
      } else {
         VPORT2.OUT &= ~CSDI;
      }

      VPORT2.OUT |= CCLK;
      VPORT2.OUT &= ~CCLK;
  }

   VPORT2.OUT |= LE;
   VPORT2.OUT &= ~LE;
   row = (row + 1) % DIM;
}

ISR(TCC0_CCA_vect)
{
       /* Insert your CCA Compare Interrupt handling code here */
   // LED0_toggle_level();
}

ISR(TCE0_OVF_vect)
{
   tone_isr();
}

// ISR(TCE0_CCA_vect)
// {
//    // LED1_toggle_level();
// }
