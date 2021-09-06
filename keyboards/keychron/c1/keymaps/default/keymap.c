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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    MAC_BASE = 0,
    MAC_FN = 1,
    WIN_BASE = 2,
    WIN_FN = 3,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)
#define KC_CRTN LGUI(KC_C)
#define KC_MSSN LGUI(KC_F3)
#define KC_FIND LALT(LGUI(KC_SPC))
#define KC_SIRI LGUI(KC_SPC)
#define KC_MSCR LSFT(LGUI(KC_3))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*				+--------------------------------------------------------------------------+----------------+
				| ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|SCRL|PAUS|
				+--------------------------------------------------------------------------+------|----|----|
 				|  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
 				+--------------------------------------------------------------------------+------|----|----|
 				|  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
 				+--------------------------------------------------------------------------+------|----|----|
 				| CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |                |
 				+--------------------------------------------------------------------------+      |----|    |
 				| LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
 				+--------------------------------------------------------------------------+------|----|----|
 				|LCTRL| LALT| LGUI |            SPACE            | RGUI| RALT | FN | RCTRL | |LFT |DWN |RGT |
 				+--------------------------------------------------------------------------+----------------+

				+--------------------------------------------------------------------------+----------------+
				| ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|SCRL|PAUS|
				+--------------------------------------------------------------------------+------|----|----|
 				|  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
 				+--------------------------------------------------------------------------+------|----|----|
 				|  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
 				+--------------------------------------------------------------------------+------|----|----|
 				| CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |                |
 				+--------------------------------------------------------------------------+      |----|    |
 				| LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
 				+--------------------------------------------------------------------------+------|----|----|
 				|LCTRL| LGUI| LALT |            SPACE            | RALT| RGUI | FN | RCTRL | |LFT |DWN |RGT |
 				+--------------------------------------------------------------------------+----------------+
*/
    /*  Row:        0          1          2          3          4          5          6          7          8          9          10         11         12         13         14         15         16    */
    [0] = {     {   KC_ESC,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_MSCR,   KC_SIRI,   RGB_MOD  },
                {   KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_INS,    KC_HOME,   KC_PGUP },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_DEL,    KC_END,    KC_PGDN },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_NO,     KC_NO   },
                {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_NO,     KC_UP,     KC_NO   },
                {   KC_LCTL,   KC_LALT,   KC_LGUI,   KC_NO,     KC_NO,     KC_NO,     KC_SPC,    KC_NO,     KC_NO,     KC_NO,     KC_RGUI,   KC_RALT,   MO(1),     KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT }
            },

    /*  Row:        0          1          2          3          4          5          6          7          8          9          10         11         12         13         14         15         16   */
    [1] = {     {   RESET,     KC_BRID,   KC_BRIU,   KC_MSSN,   KC_FIND,   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO,     KC_TRNS,   KC_TRNS,   RGB_TOG },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_TRNS,   KC_NO,     KC_NO,     KC_NO   },
                {   KC_TRNS,   KC_NO,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_TRNS,   KC_NO,     RGB_SPI,   KC_NO   },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_SAI,   RGB_SPD,   RGB_SAD }
            },
    /*  Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16    */
    [2] = {     {   KC_ESC,    KC_F1,     KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_PSCR,   KC_CRTN,   RGB_MOD  },
                {   KC_GRV,    KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_INS,    KC_HOME,   KC_PGUP },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_DEL,    KC_END,    KC_PGDN },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_NO,     KC_NO   },
                {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_NO,     KC_UP,     KC_NO   },
                {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RALT,   KC_RGUI,   MO(3),     KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT }
            },

    /*  Row:        0          1          2          3          4          5          6          7          8          9          10         11         12         13         14         15         16   */
    [3] = {     {   RESET,     KC_BRID,   KC_BRIU,   KC_TASK,   KC_FLXP,   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO,     KC_TRNS,   KC_TRNS,   RGB_TOG },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_TRNS,   KC_NO,     KC_NO,     KC_NO   },
                {   KC_TRNS,   KC_NO,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_TRNS,   KC_NO,     RGB_SPI,   KC_NO   },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_SAI,   RGB_SPD,   RGB_SAD }
            }
};
void dip_switch_update_user(uint8_t index, bool active){
  index = 1;
 if(active){ //Mac mode
writePin(LED_NUM_LOCK_PIN, 0);
writePin(LED_SCROLL_LOCK_PIN, 1);
layer_move(0);
      }
      else{ //Windows mode
writePin(LED_NUM_LOCK_PIN, 1);
writePin(LED_SCROLL_LOCK_PIN, 0);
layer_move(2);
      }
  }

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
