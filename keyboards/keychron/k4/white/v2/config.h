/* Copyright 2021 Alex Meyer <alexwreyem@gmail.com>
 * Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"
#include "config_led.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x05AC
#define PRODUCT_ID      0x024F
#define DEVICE_VER      0x0001

#define MANUFACTURER    Keychron
#define PRODUCT         K4
#define DESCRIPTION     K4 White Backlight v2 ANSI

#define WAIT_FOR_USB

/* key matrix size */
#define MATRIX_ROWS                 6
#define MATRIX_COLS                 19

// #define SN32_MATRIX_READ_COLS
#define DIODE_DIRECTION             COL2ROW

#define MATRIX_COL_PINS             { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, D0, D1, D2 }
#define MATRIX_ROW_PINS             { C3, C4, C5, C6, C7, C8 }

/* Connects each switch in the dip switch to the GPIO pin of the MCU */
#define DIP_SWITCH_PINS             { D6, D7 } // D6 is cable/BT, D7 is Mac/Win

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE                    5

/* LED Status indicators */
#define LED_NUM_LOCK_PIN            D8
#define LED_CAPS_LOCK_PIN           D3
#define LED_PIN_ON_STATE            1
