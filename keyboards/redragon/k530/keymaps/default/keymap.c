/*
Copyright 2021 Adam Honse

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

// @see https://docs.qmk.fm/#/feature_tap_dance

// Tap Dance keycodes
enum td_keycodes {
    APP  // FN2 key: `APP` when held, `DOWN` when tapped.
};

// Define a type containing as many tapdance states as you need
typedef enum { TD_NONE, TD_UNKNOWN, TD_SINGLE_TAP, TD_SINGLE_HOLD, TD_DOUBLE_SINGLE_TAP } td_state_t;

// Create a global instance of the tapdance state type
static td_state_t td_state;

// Declare your tapdance functions:

// Function to determine the current tapdance state
td_state_t cur_dance(qk_tap_dance_state_t *state);

// `finished` and `reset` functions for each tapdance keycode
void app_finished(qk_tap_dance_state_t *state, void *user_data);
void app_reset(qk_tap_dance_state_t *state, void *user_data);

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN,
    _GAME,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*  Row:        0                1           2           3         4           5        6        7           8           9           10          11          12          13       */
    [_BASE] = { {   KC_ESC,          KC_1,       KC_2,       KC_3,     KC_4,       KC_5,    KC_6,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC, },
                {   KC_TAB,          KC_Q,       KC_W,       KC_E,     KC_R,       KC_T,    KC_Y,    KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS, },
                {   LT(_FN,KC_CAPS), KC_A,       KC_S,       KC_D,     KC_F,       KC_G,    KC_H,    KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_NO,      KC_ENT,  },
                {   KC_LSFT,         KC_NO,      KC_Z,       KC_X,     KC_C,       KC_V,    KC_B,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NO,      RSFT_T(KC_UP), },
                {   KC_LCTL,         KC_LGUI,    KC_LALT,    KC_NO,    KC_NO,      KC_NO,   KC_SPC,  KC_NO,      KC_NO,      KC_RALT,    LT(_FN,KC_LEFT),KC_NO,  TD(APP),    RCTL_T(KC_RGHT), },
              },
    [_FN]   = { {   KC_GRV,          KC_F1,      KC_F2,      KC_F3,    KC_F4,      KC_F5,   KC_F6,   KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______ },
                {   _______,         KC_HOME,    KC_UP,      KC_END,   RGB_HUI,    RGB_SAI, RGB_VAI, KC_HOME,    KC_UP,      KC_END,     KC_PSCR,    KC_HOME,    KC_END,     RGB_TOG },
                {   _______,         KC_LEFT,    KC_DOWN,    KC_RGHT,  RGB_SPD,    RGB_M_P, RGB_MOD, KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGUP,    KC_PGDN,    KC_NO,      _______ },
                {   _______,         KC_NO,      _______,    _______,  _______,    _______, _______, _______,    DF(_GAME),  DF(_BASE),  KC_INS,     KC_DEL,     KC_NO,      _______ },
                {   _______,         _______,    _______,    KC_NO,    KC_NO,      KC_NO,   _______, KC_NO,      KC_NO,      _______,    _______,    KC_NO,      _______,    RESET   },
             },
    [_GAME] = { {   KC_GRV,          KC_1,       KC_2,       KC_3,     KC_4,       KC_5,    KC_6,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC },
                {   KC_TAB,          KC_Q,       KC_W,       KC_E,     KC_R,       KC_T,    KC_Y,    KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS },
                {   KC_CAPS,         KC_A,       KC_S,       KC_D,     KC_F,       KC_G,    KC_H,    KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_NO,      KC_ENT  },
                {   KC_LSFT,         KC_NO,      KC_Z,       KC_X,     KC_C,       KC_V,    KC_B,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NO,      KC_RSFT },
                {   KC_LCTL,         XXXXXXX,    KC_LALT,    KC_NO,    KC_NO,      KC_NO,   KC_SPC,  KC_NO,      KC_NO,      KC_RALT,    TO(_FN),    KC_NO,      KC_APP,     KC_RCTL },
              },
};
// clang-format on

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_FN, KC_CAPS):
            return 2000;  // 2 seconds, same as stock firmware
        default:
            return TAPPING_TERM;
    }
}

// Determine the tapdance state to return
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return TD_SINGLE_TAP;
        else
            return TD_SINGLE_HOLD;
    }

    if (state->count == 2)
        return TD_DOUBLE_SINGLE_TAP;
    else
        return TD_UNKNOWN;  // Any number higher than the maximum state value you return above
}

// Handle the possible states for each tapdance keycode you define:

void app_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_NONE:
        case TD_UNKNOWN:
            break;
        case TD_SINGLE_TAP:
            register_code16(KC_DOWN);
            break;
        case TD_SINGLE_HOLD:
            register_code16(KC_APP);  // For a layer-tap key, use `layer_on(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP:  // Allow nesting of 2 `DOWN` `DOWN` within tapping term
            tap_code16(KC_DOWN);
            register_code16(KC_DOWN);
            break;
    }
}

void app_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_NONE:
        case TD_UNKNOWN:
            break;
        case TD_SINGLE_TAP:
            unregister_code16(KC_DOWN);
            break;
        case TD_SINGLE_HOLD:
            unregister_code16(KC_APP);  // For a layer-tap key, use `layer_off(_MY_LAYER)` here
            break;
        case TD_DOUBLE_SINGLE_TAP:
            unregister_code16(KC_DOWN);
            break;
    }
}

// Define `ACTION_TAP_DANCE_FN_ADVANCED()` for each tapdance keycode, passing in `finished` and `reset` functions
qk_tap_dance_action_t tap_dance_actions[] = {
    [APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, app_finished, app_reset)
};
