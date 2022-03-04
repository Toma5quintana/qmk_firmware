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
    _WINDOWS,
    _MAC,
    _FN1,
    _FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
/* _WINDOWS Base ISO layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ - │       │DEL│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │HOM│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │PUP│
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │    │ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │      │UP │PDN│
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │CTRL│WIN │ALT │                        │CTL│FN1│FN2│LFT│DWN│RGT│
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 *      Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15        */
 [_WINDOWS] = { {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     KC_DEL     },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_NO,     KC_NO,     KC_HOME    },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NUHS,   KC_ENT,    KC_NO,     KC_PGUP    },
                {   KC_LSFT,   KC_NUBS,   KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_PGDN    },
                {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RCTRL,  MO(_FN1),  MO(_FN2),  KC_LEFT,   KC_DOWN,   KC_RGHT    }
              },
/* _MAC Base ISO layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │DEL│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │PUP│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
 * │ FN1  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │PDN│
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │    │ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │      │UP │END│
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │CTRL│ALT │MAC │                        │CTL│FN2│HOM│LFT│DWN│RGT│
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 *      Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15        */
     [_MAC] = { {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     KC_DEL     },
                {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_NO,     KC_NO,     KC_HOME    },
                {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NUHS,   KC_ENT,    KC_NO,     KC_PGUP    },
                {   KC_LSFT,   KC_NUBS,   KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_PGDN    },
                {   KC_LCTL,   KC_LALT,   KC_LGUI,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RCTRL,  MO(_FN1),  MO(_FN2),  KC_LEFT,   KC_DOWN,   KC_RGHT    }
              },
/* _FN1 MOD Keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ ` │ F1│ F2│ F3│ F4│ F5│ F6│ F7│ F8│ F9│F10│F11│F12│       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │INS│DEL│END│     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
 * │      │   │   │   │   │   │   │   │   │   │   │ ` │   │    │   │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │FN2│   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 *      Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15        */
     [_FN1] = { {   KC_GRV,    KC_F1,     KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_NO,     KC_NO      },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_INS,    KC_DEL,    KC_END,    KC_NO,     KC_NO,     KC_NO      },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_GRV,    KC_NO,     KC_NO,     KC_NO,     KC_NO      },
                {   KC_TRNS,   KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      },
                {   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO      }
              },
/* _FN2 Settings
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │RGB│HUD│HUI│   │   │VAD│VAI│PRV│PLY│NXT│MTE│VL-│VL+│ RESET │MOD│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │RMD│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │SAI│
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │    │   │   │   │   │   │   │NKR│   │   │   │   │RGB_MP│SPI│SAD│
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │FN1│FN2│VAD│SPD│VAI│
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 *      Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15        */
     [_FN2] = { {   RGB_TOG,   RGB_HUD,   RGB_HUI,   KC_NO,   KC_NO,   RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   RESET,     KC_NO,     RGB_MOD    },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_END,    KC_NO,     KC_NO,     RGB_RMOD   },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_SAI    },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    NK_ON,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_M_P,   RGB_SPI,   RGB_SAD    },
                {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_VAD,   RGB_SPD,   RGB_VAI    }
              }
};

bool dip_switch_update_user(uint8_t index, bool active){
    switch(index){
        case 0: // macos/windows togggle
            if(active){ //macos
                layer_off(_WINDOWS);
                layer_on(_MAC);
            }
            else{ //windows
                layer_on(_WINDOWS);
                layer_off(_MAC);
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
