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
    WIN_BASE    = 0,
    WIN_FN      = 1,
    MAC_BASE    = 2,
    MAC_FN      = 3,
};

enum custom_keycodes {
  RST_KB = SAFE_RANGE,
  BAR
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RST_KB:
            NVIC_SystemReset();
    }
    return true;
};

#define KC_TASK LGUI(KC_TAB)        // Task viewer
#define KC_FLXP LGUI(KC_E)          // Windows file explorer
#define KC_CRTN LGUI(KC_C)          // Cortana
#define KC_SNIP LGUI(LSFT(KC_S))    // Windows snip tool

#define KC_MSSN LGUI(KC_F3)         // Mission Control
#define KC_FIND LALT(LGUI(KC_SPC))  // Finder
#define KC_SIRI LGUI(KC_SPC)        // Siri
#define KC_MSCR LSFT(LGUI(KC_3))    // Mac screenshot
#define KC_MSNP LSFT(LGUI(KC_4))    // Mac snip tool

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*  Windows layout
    +-------------------------------------------------------------------------------------------+
    | ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|CORT| BL |
    +--------------------------------------------------------------------------+ +--------------+
    |  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
    +--------------------------------------------------------------------------+ +--------------+
    |  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
    +--------------------------------------------------------------------------+ +--------------+
    | CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |                |
    +--------------------------------------------------------------------------+      +----+    |
    | LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
    +--------------------------------------------------------------------------+ +--------------+
    |LCTRL| LGUI| LALT |            SPACE            | RALT| RGUI | FN | RCTRL | |LFT |DWN |RGT |
    +-------------------------------------------------------------------------------------------+
    */

    [0] = { // Windows base layout
        /*  0         1         2         3         4         5         6         7         8         9         10        11        12        13        14        15        16     */
        {   KC_ESC,   KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_CRTN,  BL_TOGG },
        {   KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP },
        {   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN },
        {   KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,   KC_NO,    KC_NO,    KC_NO   },
        {   KC_LSFT,  KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_NO,    KC_RSFT,  KC_NO,    KC_UP,    KC_NO   },
        {   KC_LCTL,  KC_LGUI,  KC_LALT,  KC_NO,    KC_NO,    KC_NO,    KC_SPC,   KC_NO,    KC_NO,    KC_NO,    KC_RALT,  KC_RGUI,  MO(1),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT }
    },

    [1] = { // Windows Fn overlay
        /*  0         1         2         3         4         5         6         7         8         9         10        11        12        13        14        15        16     */
        {   RESET,    KC_NO,    KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  BL_DEC,   BL_INC,   KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNIP,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_NO,    _______,  KC_NO,    KC_NO,    KC_NO   },
        {   _______,  KC_NO,    _______,  _______,  _______,  _______,  RST_KB,   _______,  _______,  _______,  _______,  _______,  KC_NO,    _______,  KC_NO,    _______,  KC_NO   },
        {   _______,  _______,  _______,  KC_NO,    KC_NO,    KC_NO,    _______,  KC_NO,    KC_NO,    KC_NO,    _______,  _______,  _______,  _______,  _______,  _______,  _______ }
    },

    /*  Mac layout
    +-------------------------------------------------------------------------------------------+
    | ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|SIRI| BL |
    +--------------------------------------------------------------------------+ +--------------+
    |  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
    +--------------------------------------------------------------------------+ +--------------+
    |  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
    +--------------------------------------------------------------------------+ +--------------+
    | CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |                |
    +--------------------------------------------------------------------------+      +----+    |
    | LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
    +--------------------------------------------------------------------------+ +--------------+
    |LCTRL| LALT| LGUI |            SPACE            | RGUI| RALT | FN | RCTRL | |LFT |DWN |RGT |
    +-------------------------------------------------------------------------------------------+
    */

    [2] = { // Mac base layout
        /*  0         1         2         3         4         5         6         7         8         9         10        11        12        13        14        15        16     */
        {   KC_ESC,   KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_MSCR,  KC_SIRI,  BL_TOGG },
        {   KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP },
        {   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN },
        {   KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,   KC_NO,    KC_NO,    KC_NO   },
        {   KC_LSFT,  KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_NO,    KC_RSFT,  KC_NO,    KC_UP,    KC_NO   },
        {   KC_LCTL,  KC_LALT,  KC_LGUI,  KC_NO,    KC_NO,    KC_NO,    KC_SPC,   KC_NO,    KC_NO,    KC_NO,    KC_RGUI,  KC_RALT,  MO(3),    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT }
    },

    [3] = { // Mac Fn overlay
        /*  0         1         2         3         4         5         6         7         8         9         10        11        12        13        14        15        16     */
        {   RESET,    KC_NO,    KC_BRID,  KC_BRIU,  KC_MSSN,  KC_FIND,  BL_DEC,   BL_INC,   KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MSNP,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______ },
        {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_NO,    _______,  KC_NO,    KC_NO,    KC_NO   },
        {   _______,  KC_NO,    _______,  _______,  _______,  _______,  RST_KB,   _______,  _______,  _______,  _______,  _______,  KC_NO,    _______,  KC_NO,    _______,  KC_NO   },
        {   _______,  _______,  _______,  KC_NO,    KC_NO,    KC_NO,    _______,  KC_NO,    KC_NO,    KC_NO,    _______,  _______,  _______,  _______,  _______,  _______,  _______ }
    }
};

// Manage Windows and Mac LEDs
// - Show status of mode switch
// - Turn LEDs off durring USB suspend
bool mode_leds_show = true;
bool mode_leds_windows;

static void mode_leds_update(void){
    writePin(LED_WIN_PIN, mode_leds_show && mode_leds_windows);
    writePin(LED_MAC_PIN, mode_leds_show && !mode_leds_windows);
}

void dip_switch_update_user(uint8_t index, bool active){
    if(index == 0) {
        if(active) { // Mac mode
            layer_move(2);
        } else { // Windows mode
            layer_move(0);
        }

        // Update mode and update leds
        mode_leds_windows = !active;
        mode_leds_update();
    }
}

void keyboard_pre_init_user(void) {
    // Setup Win & Mac LED Pins as output
    setPinOutput(LED_WIN_PIN);
    setPinOutput(LED_MAC_PIN);
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
