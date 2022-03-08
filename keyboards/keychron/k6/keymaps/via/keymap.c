/*
Copyright 2020 Dimitris Mantzouranis
Copyright 2022 Philip Mourdjis

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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _WINDOWS,
    _MAC,
    _FNW,
    _FNM,
    _FN2,
};

enum custom_keycodes {
    KC_MISSION_CONTROL = USER00,
    KC_LAUNCHPAD
};

#define KC_TASK LGUI(KC_TAB)        // Task viewer
#define KC_FLXP LGUI(KC_E)          // Windows file explorer
#define KC_MCTL KC_MISSION_CONTROL  // Mission Control
#define KC_LPAD KC_LAUNCHPAD        // Launchpad

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /*      Row:         0          1          2          3          4           5          6          7          8          9          10         11          12         13          14          15        */
   [_WINDOWS] = { {   KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,       KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,    KC_EQL,    KC_BSPC,    XXXXXXX,    RGB_MOD   },
                  {   KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,       KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,    KC_RBRC,   KC_BSLASH,  XXXXXXX,    KC_HOME   },
                  {   KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,       KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,    XXXXXXX,   KC_ENT,     XXXXXXX,    KC_PGUP   },
                  {   KC_LSFT,   XXXXXXX,   KC_Z,      KC_X,      KC_C,       KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,    XXXXXXX,   KC_RSFT,    KC_UP,      KC_PGDOWN },
                  {   KC_LCTL,   KC_LGUI,   KC_LALT,   XXXXXXX,   XXXXXXX,    XXXXXXX,   KC_SPC,    XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_RCTRL,  MO(_FNW),   MO(_FN2),  KC_LEFT,    KC_DOWN,    KC_RGHT   }
                },
       [_MAC] = { {   _______,   _______,   _______,   _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______,   _______,    XXXXXXX,    _______   },
                  {   _______,   _______,   _______,   _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______,   _______,    XXXXXXX,    _______   },
                  {   _______,   _______,   _______,   _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,    XXXXXXX,   _______,    XXXXXXX,    _______   },
                  {   _______,   XXXXXXX,   _______,   _______,   _______,    _______,   _______,   _______,   _______,   _______,   _______,   _______,    XXXXXXX,   _______,    _______,    _______   },
                  {   _______,   KC_LALT,   KC_LGUI,   XXXXXXX,   XXXXXXX,    XXXXXXX,   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,   MO(_FNM),   _______,   _______,    _______,    _______   }
                },
       [_FNW] = { {   KC_GRV,    KC_BRIU,   KC_BRID,   KC_TASK,   KC_FLXP,    RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,    KC_VOLU,   XXXXXXX,    XXXXXXX,    RGB_TOG   },
                  {   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_INS,    KC_DEL,     KC_END,    XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   _______,   _______,   _______,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_RALT,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   }
               },
       [_FNM] = { {   KC_GRV,    KC_BRIU,   KC_BRID,   KC_MCTL,   KC_LPAD,    RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,    KC_VOLU,   XXXXXXX,    XXXXXXX,    RGB_TOG   },
                  {   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_INS,    KC_DEL,     KC_END,    XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   },
                  {   _______,   _______,   _______,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX   }
               },
       [_FN2] = { {   KC_TILD,   KC_F1,     KC_F2,     KC_F3,     KC_F4,      KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,     KC_F12,    RESET,      XXXXXXX,    RGB_MOD   },
                  {   XXXXXXX,   RGB_M_P,   RGB_M_B,   RGB_M_R,   RGB_M_SW,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    RGB_RMOD  },
                  {   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,    RGB_SPI   },
                  {   _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,    RGB_SAI,    RGB_SPD   },
                  {   _______,   _______,   _______,   XXXXXXX,   XXXXXXX,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,   RGB_HUD,    RGB_SAD,    RGB_HUI   }
               }
};

bool dip_switch_update_user(uint8_t index, bool active){
    switch(index){
        case 0: // macos/windows togggle
            if(active){ //macos
                layer_move(_MAC);
            }
            else{ //windows
                layer_move(_WINDOWS);
            }
        break;
    }
    return true;
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LAUNCHPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
}