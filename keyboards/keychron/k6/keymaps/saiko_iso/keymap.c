/*
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

enum layer_names {
    WIN_BASE,
    MAC_BASE,
    WIN_FN1,
    MAC_FN1,
    FN2,
};

#define KC_MXHX LM(MAC_FN1, MOD_LCTL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [WIN_BASE] = LAYOUT_65_iso(
    KC_ESC,      KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6,   KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_GRV,
    KC_TAB,      KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,   KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC,                   KC_DEL,
    MO(WIN_FN1), KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,   KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,           KC_PGUP,
    KC_LSFT,     KC_NUBS, KC_Z,    KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN,
    KC_LCTL,     KC_LGUI, KC_LALT,                   KC_SPC,                      KC_HOME, KC_END,  MO(FN2), KC_LEFT, KC_DOWN, KC_RGHT
 ),
 [MAC_BASE] = LAYOUT_65_iso(
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    MO(MAC_FN1), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
    KC_MXHX,     _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
 ),
 [WIN_FN1] = LAYOUT_65_iso(
    KC_GRV,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,          KC_PSCR,
    KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_PAUS,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_GRV,  _______, _______,          _______,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
    _______,     _______, _______,                            _______,                            _______, _______, _______, KC_HOME, _______, KC_END
 ),
 [MAC_FN1] = LAYOUT_65_iso(
    KC_GRV,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,          KC_PSCR,
    KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_PAUS,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_GRV,  _______, _______,          _______,
    _______,     _______, _______, KC_CUT,  KC_COPY, KC_PSTE, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
    _______,     _______, _______,                            _______,                            _______, _______, _______, KC_HOME, _______, KC_END
 ),
 [FN2] = LAYOUT_65_iso(
    KC_GRV,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  RESET,            RGB_TOG,
    KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   RGB_MOD,
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_GRV,  _______, _______,          RGB_VAI,
    _______,     _______, _______, _______, _______, _______, _______, NK_ON,   _______, _______, _______, _______,          _______, RGB_SPI, RGB_VAD,
    _______,     _______, _______,                            _______,                            RGB_HUD, RGB_HUI, _______, RGB_SAD, RGB_SPD, RGB_SAI
 )
};

bool dip_switch_update_user(uint8_t index, bool active){
    switch(index){
        case 0: // macos/windows togggle
            if(active){ //macos
                layer_move(MAC_BASE);
            }
            else{ //windows
                layer_move(WIN_BASE);
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
