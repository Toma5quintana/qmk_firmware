/*
Copyright 2020 Dimitris Mantzouranis

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
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#define _BL 0
#define _FL 1
#define _SL 2

#define SWITCH_MODE 0x1688
#define GUI_LOCK    0x1689

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

extern uint8_t is_orgb_mode;

enum layer_names {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_65_iso(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_ESC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_HOME, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_ESC, KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_BSPC), KC_UP, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), MO(2), KC_LEFT, KC_DOWN, KC_RGHT),
        [1] = LAYOUT_65_iso(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F10, KC_F12, KC_NO, RGB_TOG, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_DEL, KC_END, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPI, RGB_SAI, KC_NO, RGB_HUI, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPD, RGB_SAD, RGB_VAI, RGB_HUD, KC_LCTL, KC_NO, KC_LALT, KC_NO, KC_RALT, KC_TRNS, KC_TRNS, RGB_TOG, RGB_VAD, RGB_RMOD),
        [2] = LAYOUT_65_iso(SWITCH_MODE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

void dip_switch_update_user(uint8_t index, bool active){
  switch(index){
    case 0:
      if(active){ //BT mode
// do stuff
      }
      else{ //Cable mode
// do stuff
      }
      break;
    case 1:
      if(active){ // Win/Android mode
// do stuff
      }
      else{ // Mac/iOS mode
// do stuff
      }
      break;
  }
}
// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   //debug_keyboard=true;
//   //debug_mouse=true;
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
        case SWITCH_MODE:
            if (record->event.pressed) {                
                is_orgb_mode = !is_orgb_mode;
            }
        return false;

        // case GUI_LOCK:
        //     /* win lock */
        //     if (record->event.pressed) {
        //         keymap_config.raw = eeconfig_read_keymap();
        //         keymap_config.no_gui = !keymap_config.no_gui;
        //         eeconfig_update_keymap(keymap_config.raw);
        //         clear_keyboard();
        //     }

        // return false;
    }        

    return true;
}