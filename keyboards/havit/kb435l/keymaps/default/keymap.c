// Copyright 2020 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layer_names {
  BASE = 0,
  GAME = 1,
  FN = 2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  +--------------------------------------------------------------------------+----------------+
  | ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|SCLK|PAUS|
  +--------------------------------------------------------------------------+------|----|----|
  |  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
  +--------------------------------------------------------------------------+------|----|----|
  |  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |      | |DEL |END |PGDN|
  +--------------------------------------------------------------------  RET | +--------------+
  | CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  # |     |                |
  +--------------------------------------------------------------------------+      |----|    |
  | LSHIFT | < |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
  +--------------------------------------------------------------------------+------|----|----|
  |LCTRL| LGUI| LALT |            SPACE            | RALT| FN  | MENU| RCTRL | |LFT |DWN |RGT |
  +--------------------------------------------------------------------------+----------------+
  */
    [BASE] = LAYOUT_tkl_iso(
      KC_ESC,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   KC_F7,  KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    KC_PSCR, KC_SCRL, KC_PAUS,
      KC_GRV,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_HOME, KC_INS,  KC_PGUP,
      KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,     KC_LBRC,  KC_RBRC,             KC_END,  KC_DEL,  KC_PGDN,
      KC_CAPS,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
      KC_LSFT,  KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                      KC_UP,
      KC_LCTL,  KC_LGUI,  KC_LALT,                       KC_SPC,                                 KC_RALT,  MO(FN),   KC_APP,   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [GAME] = LAYOUT_tkl_iso(
      KC_ESC,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   KC_F7,  KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    KC_PSCR, KC_SCRL, KC_PAUS,
      KC_GRV,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_HOME, KC_INS,  KC_PGUP,
      KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,     KC_LBRC,  KC_RBRC,             KC_END,  KC_DEL,  KC_PGDN,
      KC_CAPS,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
      KC_LSFT,  KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                      KC_UP,
      KC_LCTL,  KC_NO,    KC_LALT,                       KC_SPC,                                 KC_RALT,  MO(FN),   KC_APP,   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [FN] = LAYOUT_tkl_iso(
      KC_ESC,             KC_STOP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MYCM, KC_WHOM,KC_MAIL,KC_CALC,  KC_MSEL,  KC_VOLD,  KC_VOLU,  KC_MUTE,   KC_PSCR, KC_SCRL, KC_PAUS,
      KC_GRV,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_HOME, KC_INS,  KC_PGUP,
      KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,     KC_LBRC,  KC_RBRC,             KC_END,  KC_DEL,  KC_PGDN,
      KC_CAPS,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
      KC_LSFT,  KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                      KC_UP,
      KC_LCTL,  TG(GAME), KC_LALT,                       KC_SPC,                                 KC_RALT,  _______,  KC_APP,   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
    )
};
