/* Copyright 2022 Philip Mourdjis <philip.j.m@gmail.com>
 * Copyright 2023 KeijoMika (https://github.com/KeijoMika)
 * Copyright 2023 Santanu Paik (https://github.com/ITNerd69)
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
#define SN32_RGB_MATRIX_ROW_PINS { C3, C1, C0, C6, C5, C4, C9, C8, C7, C12, C11, C10, B13, C14, C13, B14, B15, D3 }
#define DIP_SWITCH_PINS { D6, D5 }
#define WEAR_LEVELING_SN32_EMULATION_PAGE_COUNT 29

// 1000hz force
#define USB_POLLING_INTERVAL_MS 1

#define LED_CAPS_LOCK_PIN D4

////////////////////////////////////////////////////////////////////////////////
// source: platforms/chibios/_wait.h
//
// ( used by quantum/matrix.c and quantum/matrix_common.c)
//
// original = CPU_CLOCK / 1000000L / 4
//
// inside quantum/matrix_common.c  there:
// __attribute__((weak)) void matrix_output_select_delay(void) {
//    waitInputPinDelay();
//}
//
// so  platforms/chibios/_wait.h =  #define waitInputPinDelay() wait_cpuclock(GPIO_INPUT_PIN_DELAY)
//
// there is a big BUG and DIFFERENCE between the Keychron stock firmware and
// the latest SN32 sonix qmk firmware ( both sn32_devel & sn32_master - on Tue 20 Feb 2024 have THIS bug )
// whole keys have insane pretouch sensitivity, so it's fixing that issue
//
//  suggest that it might be a good idea to write your own matrix.c
//  but i don't have a time to fix that shit, so don't buy keychron K3v2
//
//#define GPIO_INPUT_PIN_DELAY (CPU_CLOCK / 1000000L / 2)
//
#define MATRIX_IO_DELAY 200
//
//
//
////////////////////////////////////////////////////////////////////////////////
//#define TAPPING_TERM 200

//#define LEADER_TIMEOUT 200

//#define POINTING_DEVICE_ENABLE = no

//#define TAP_CODE_DELAY 50
//#define DEBOUNCE 30

//#define NO_DEBUG 0

//// trash disabled (prevent building why?)
//#define MIDI_ENABLE = no
//#define STENO_ENABLE = no
//#define MOUSEKEY_ENABLE = no

//#define CONSOLE_ENABLE = no
//#define MATRIX_HAS_GHOST
//#define NO_PRINT
//#define CONSOLE_ENABLE = yes
//#define DEBUG_MATRIX_SCAN_RATE
//#define CONSOLE_ENABLE = yes

//#define NO_ACTION_TAPPING

//#define NO_ACTION_ONESHOT

//#define DEBOUNCE_TYPE asym_eager_defer_pk


//test bugfix







///////test
//#define CONSOLE_ENABLE = yes





// test
/* Disable locking support */
#ifdef LOCKING_SUPPORT_ENABLE
        #undef LOCKING_SUPPORT_ENABLE
#endif

/* Disable locking support */
#ifdef LOCKING_RESYNC_ENABLE
        #undef LOCKING_RESYNC_ENABLE
#endif


//test

//SRC += rgb_matrix_user.c

/* Temporary solution for matrix delay */
//#define IGNORE_ATOMIC_BLOCK

