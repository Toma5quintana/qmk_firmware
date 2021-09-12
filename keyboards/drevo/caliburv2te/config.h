/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x05AC
#define PRODUCT_ID      0x024F
#define DEVICE_VER      0xF100

#define MANUFACTURER    Drevo
#define PRODUCT         CaliburV2TE_kai
#define DESCRIPTION

/* key matrix size */
#define MATRIX_ROWS (5 + 1)
#define MATRIX_COLS (16 + 6)

/* key matrix pins */
#define MATRIX_ROW_PINS { D11, D10, D9, D8, D7,    B8 }
//                                                 ^^^^^^^^^^ side rgb led's (dummy)
#define MATRIX_COL_PINS { A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5, B6, B7,    C1, C0, B12, B11, B10, B9 }
//                                                                                                 ^^^^^^^^^^ side rgb led's
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Per-key tapping term, for use with Magic FN */
// #define TAPPING_TERM_PER_KEY

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 120
#define IGNORE_MOD_TAP_INTERRUPT

#include "config_led.h"
