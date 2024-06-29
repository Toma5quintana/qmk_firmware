/* Copyright 2023 @ NetUserGet
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

#include "quantum.h"

bool mode_leds_show = true;
bool mode_leds_windows;

static void mode_leds_update(void){
    if (mode_leds_show && mode_leds_windows) {
        gpio_write_pin_high(LED_WIN_PIN);
    } else if (mode_leds_show && !mode_leds_windows) {
        gpio_write_pin_high(LED_MAC_PIN);
    }
}

#ifdef DIP_SWITCH_ENABLE

bool dip_switch_update_kb(uint8_t index, bool active) {
    if (!dip_switch_update_user(index, active)) {
        return false;
    }
    if (index == 0) {
        default_layer_set(1UL << (active ? 2 : 0));
    }

    mode_leds_windows = !active;
    mode_leds_update();
    return true;
}

#endif // DIP_SWITCH_ENABLE

void keyboard_pre_init_user(void) {
    // Setup Win & Mac LED Pins as output
    gpio_set_pin_output(LED_WIN_PIN);
    gpio_set_pin_output(LED_MAC_PIN);
}

void suspend_power_down_user(void) {
    // Turn leds off
    mode_leds_show = false;
    mode_leds_update();
}

void suspend_wakeup_init_user(void) {
    mode_leds_show = true;
    mode_leds_update();
}
