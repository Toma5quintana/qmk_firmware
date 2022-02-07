/*
Copyright 2021 Dimitris Mantzouranis

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "rgb.h"

// Manage Windows and Mac LEDs
// - Show status of mode switch
// - Turn LEDs off durring USB suspend
static bool mode_leds_show = true;
static bool mode_leds_windows;

static void mode_leds_update(void){
    writePin(LED_WIN_PIN, mode_leds_show && mode_leds_windows);
    writePin(LED_MAC_PIN, mode_leds_show && !mode_leds_windows);
}

bool dip_switch_update_user(uint8_t index, bool active){
    if(index == 0) {
        if(active) { // Mac mode
            layer_move(0);
        } else { // Windows mode
            layer_move(2);
        }

        // Update mode and update leds
        mode_leds_windows = !active;
        mode_leds_update();
    }
    return true;
}

void keyboard_pre_init_kb(void) {
    // Setup Win & Mac LED Pins as output
    setPinOutput(LED_WIN_PIN);
    setPinOutput(LED_MAC_PIN);

    keyboard_pre_init_user();
}

void suspend_power_down_kb(void) {
    // Turn leds off
    mode_leds_show = false;
    mode_leds_update();

    suspend_power_down_user();
}

/// TODO: Clean-up workaround
/// Currently the suspend_wakeup_init_user() has issues. See https://github.com/SonixQMK/qmk_firmware/issues/80
/// A workaround is to use housekeeping_task_user() instead.
void housekeeping_task_kb(void) {
    // Turn on
    mode_leds_show = true;
    mode_leds_update();

    housekeeping_task_user();
}

#ifdef RGB_MATRIX_ENABLE

#include "rgb_matrix.h"

#define XX NO_LED

led_config_t g_led_config = { {
  {  0,  1, 2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, XX,  13, 14, 15},
  { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,  30, 31, 32},
  { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,  47, 48, 49},
  { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, XX, 62,  XX, XX, XX},
  { 63, XX, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, XX, 74,  XX, 75, XX},
  { 76, 77, 78, XX, XX, XX, 79, XX, XX, XX, 80, 81, 82, 83,  84, 85, 86}
}, {
    {0  ,  0}, {12 ,  0}, {25 ,  0}, {37 ,  0}, {50 ,  0}, {62 ,  0}, {75 ,  0}, {87 ,  0}, {100,  0}, {112,  0}, {124,  0}, {137,  0}, {149,  0},            {174,  0}, {187,  0}, {199,  0},
    {0  , 13}, {12 , 13}, {25 , 13}, {37 , 13}, {50 , 13}, {62 , 13}, {75 , 13}, {87 , 13}, {100, 13}, {112, 13}, {124, 13}, {137, 13}, {149, 13}, {168, 13}, {174, 13}, {187, 13}, {199, 13},
    {3  , 26}, {19 , 26}, {31 , 26}, {44 , 26}, {56 , 26}, {68 , 26}, {81 , 26}, {93 , 26}, {106, 26}, {118, 26}, {131, 26}, {143, 26}, {156, 26}, {168, 26}, {174, 26}, {187, 26}, {199, 26},
    {5  , 38}, {22 , 38}, {34 , 38}, {47 , 38}, {59 , 38}, {72 , 38}, {84 , 38}, {96 , 38}, {109, 38}, {121, 38}, {134, 38}, {146, 38},            {166, 38},
    {8  , 51},            {28 , 51}, {40 , 51}, {53 , 51}, {65 , 51}, {78 , 51}, {90 , 51}, {103, 51}, {115, 51}, {128, 51}, {140, 51},            {157, 51},            {187, 51},
    {2  , 64}, {17 , 64}, {33 , 64},                                  {79 , 64},                                  {124, 64}, {137, 64}, {149, 64}, {162, 64}, {174, 64}, {187, 64}, {199, 64},
}, {
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
   4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
   4,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,    4,
   4, 4, 4,          4,          4, 4, 4, 4, 4, 4, 4
} };

#endif
