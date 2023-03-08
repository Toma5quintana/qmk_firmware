*In compliance with the [GPL-2.0](https://opensource.org/licenses/GPL-2.0) license: I declare that this version of the program contains my modifications, which can be seen through the usual "git" mechanism.*  


2022-12  
Contributor(s):  
Stefan Kerkmann  
precondition  
Jouke Witteveen  
Joel Challis  
QMK Bot  
Joshua Diamond  
Ryan  
Pablo Martínez  
pablin.123.ra@gmail.com  
Albert Y  
Jack Humbert  
Ruslan Sayfutdinov  
jpe230  
dexter93  
lokher  
Nick Brassel  
>Moonlander: Add RGB LED layout map macro (#18745)  
>Merge remote-tracking branch 'Dexter93/matrix_lock' into sn32_develop  
>[Core] Quantum Painter - LVGL Integration (#18499)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[Core] Replace Tapping Force Hold feature with Quick Tap Term (#17007)* Replace Tapping Force Hold feature with Quick Tap Term

* Replace keyboard level TAPPING_FORCE_HOLD with QUICK_TAP_TERM 0

* Deprecate force hold in info_config.json

* Before and after quick tap term unit tests

* Quick tap unit tests iteration

* Keymap config.h correction

* Remove TAPPING_FORCE_HOLD_PER_KEY macros that were missed

* Add two more test cases for quick tap

* Replace TAPPING_FORCE_HOLD with QUICK_TAP_TERM in configs #2

* Replace TAPPING_FORCE_HOLD_PER_KEY with QUICK_TAP_TERM_PER_KEY in configs #2

* Add function declaration for get_quick_tap_term

Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>[Core] guard action related debug messages (#19348)  
>Merge remote-tracking branch 'Dexter93/matrix_common' into sn32_develop  
>Fixup build failures. (#19332)  
>Remove deprecated led_set_kb (#19273)* Remove led_set_kb maintaining existing led_set_user behaviour

* Also call led_set_user  
>[Docs] Remove broken link (#19321)  
>Fixed NKRO issue caused by HID_SET_PROTOCOL on Chibios platform (#17588)  
>UCIS: remove `qk_` prefix (#19302)  
>Detect host OS based on USB fingerprint (#18463)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Tap Dance: remove `qk_` prefix (#19313)  
>Leader: remove `qk_` prefix (#19304)  
>Remove IGNORE_MOD_TAP_INTERRUPT_PER_KEY in favour of HOLD_ON_OTHER_KEY_PRESS_PER_KEY (#15741)  
>Fix non-functional RGBLIGHT_EFFECT_TWINKLE on ARM (#19335)  
>Refactor use of led_set_user within handwired/prime_exl (#19274)  
>Return USB HID GET_REPORT requests (#14814)Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Refactor some led_set_kb instances (#19179)* Refactor some led_set_kb instances

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>Initial uk+us DD keymap_extras migration (#19031)  
>[Test] Reset timer for every unit test and provide timestamps for log messages (#17028)  
>Core: Support inverted scan logic for optical switches (#19053)  
>Fixup EFL and F4's sector selection. (#19221)  
>[CI] Format code according to conventions (#19265)  
>Revert WB32 ISO workaround (#19224)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-11  
Contributor(s):  
Klesh Wong  
zvecr  
Ryan  
Xelus22  
Pablo Martínez  
Albert Y  
Sergey Vlasov  
Drashna Jaelre  
Adam Lickel  
Eric Gebhart  
Richard Nash  
Felix Kuehling  
Wilba  
Selene ToyKeeper  
QMK Bot  
bghull  
Drashna Jael're  
Joy Lee  
Joel Challis  
Joshua Diamond  
Christopher Hoage  
Charly Delay  
Nick Brassel  
>Remove more `UNUSED_PINS` defines (#18940)  
>Avoid repeated calls to rgblight_set() in tight succession when setting lighting layers (#18338)Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>Reduce includes for sequencer header (#18946)  
>Fix some old keycodes (#19086)  
>Added analog support for WB32 MCU. (#18289)Co-authored-by: Joy <chang.li@westberrytech.com>  
>Update use of legacy keycodes (#19120)  
>fixed MOUSEKEY_INERTIA on AVR (#19096)Co-authored-by: Selene ToyKeeper <git@toykeeper.net>  
>Align audio keycode names (#18962)* Align audio keycode names

* Update docs

* Update quantum  
>Align dynamic tapping term keycode names (#18963)* Align dynamic tapping term keycode names

* regen header  
>Remove .noci functionality (#19122)  
>[Keyboard] Add Constellation Rev3 (#18868)Co-authored-by: Ryan <fauxpark@gmail.com>  
>LED config fixes (#18973)  
>Keeb.io Sinc: Enable Split LED state (#19187)  
>Remove thermal printer. (#18959)  
>Move EFL wear-leveling driver to be default for F1, F3, F4, L4, G4, WB32, GD32V. (#19020)  
>[Keyboard] EXT65 rev3 support (#18873)  
>Fix use of shifted custom keycode (#18978)  
>Fix "no matrix definition" errors for some boards (#18954)  
>Branch point for 2023q1 Breaking Change  
>Normalise Dynamic Macro keycodes (#18939)* `DYN_REC_START1` -> `QK_DYNAMIC_MACRO_RECORD_START_1`

* `DYN_REC_START2` -> `QK_DYNAMIC_MACRO_RECORD_START_2`

* `DYN_MACRO_PLAY1` -> `QK_DYNAMIC_MACRO_PLAY_1`

* `DYN_MACRO_PLAY2` -> `QK_DYNAMIC_MACRO_PLAY_2`

* `DYN_REC_STOP` -> `QK_DYNAMIC_MACRO_RECORD_STOP`

* Update docs  
>Macro keycode name refactoring (#18958)  
>Bastard Keyboards: upstream recent changes (#19083)Co-authored-by: Simian <alex@Mandelbrot>
Co-authored-by: Charly Delay <0xcharly@users.noreply.github.com>
Co-authored-by: Alex Baldwin <alexbaldwin42@gmail.com>  
>Stub next develop dates  
>Normalise MIDI keycodes (#18972)* `MI_ON`, `MI_OFF`, `MI_TOG` -> `MI_TOGG`

* `MI_CH*`, `MI_CHU` -> `MI_CHNU`, `MI_CHD` -> `MI_CHND`

* `MI_VEL_*` -> `MI_VL*`, `MI_VELU`, `MI_VELD`

* `MI_TRNS_*` -> `MI_TR*`, `MI_TRNSU` -> `MI_TRSU`, `MI_TRNSD` -> `MI_TRSD`

* `MI_OCT_*` -> `MI_OC*`, `MI_OCTU`, `MI_OCTD`

* Misc controls

* Note keycodes

* Add legacy keycodes

* Regenerate keycodes

* Typo  
>Remove hardcoded VIA keycode range (#18956)  
>[Docs] Note default value for TAP_CODE_DELAY (#19078)  
>Merge remote-tracking branch 'upstream/develop'  
>Change `RGB_MATRIX_STARTUP_*` defines to `RGB_MATRIX_DEFAULT_*` (#19079)  
>Fix syntax error introduced in #18800 (#18933)  
>[Keymap] Drashna updates for 0.19 (#19175)* Fix up bastardkb boards since blackpill support is officially added.
  * Check for blackpill version, not elite c.
  * Add checks in chibiOS config since multiple ARM controllers supported.
  * Rework rules.mk for keymaps to better handle arm vs avr support
* Start moving away from `matrix_*_*` functions.
  * `housekeeping_task_*` instead of `matrix_scan_*`
  * `keyboard_(pre|post)_init_*` instead of `matrix_init_*` 
* Add ℂℴmⅈℂ unicode input method.
* Clean up unicode code to be more compact and flexible.
* Remove/move Pro Micro LED commands to userspace and better filter them
* Fixup OLED code
  * Use newer quantum keycode functions/preprocessors rather than manual bit manipulation
  * Make unicode mode render much more compact/simple.
* Make qmk secrets more self contained
* Remove custom implementation of split watchdog  
>Digitizer feature improvements (#19034)  
>Eric Gebhart user space and keymaps (#17487)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Normalise output selection (Bluetooth) keycodes (#19004)  
>Fix DD warnings for RGBKB boards (#18944)  
>Personal keymap updates (#18763)* Latest updates

* Aligning and cleaning up planck and babyv layouts

* Added license, cleaned up errors  
>Add default limit to OLED dirty processing (#19068)  
>Reworked backlight keycodes. (#18961)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Initial DD keycode migration (#18643)* Initial DD keycode migration

* Sort magic keycodes  
>Fix oled_render to render all dirty blocks. (#18887)  
>fix: mousekey doesn't work with trackpoint (#18474)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Reduce includes for dip_switch header (#18951)  
>Merge remote-tracking branch 'origin/master' into develop  
>Fix encoder_init call order in keyboard_init (#19140)  
>Fix references to `mouse_report_t` (which doesnt exist) (#19107)  
>2022 Nov 26 changelog. (#19164)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix keycode parameter extraction to match the new DD keycodes (#18977)* Add macros to extract parameters from keycode values

Implement both encoding and decoding for keycodes like TO(layer) or
LM(layer, mod) in one place, so that the decoding won't get out of sync
with the encoding.

While at it, fix some macros for creating keycode values that did not
apply the appropriate masks to parameters (and therefore could allow the
result to be out of range if a wrong parameter was passed).

* keymap_common: Use extraction macros for keycodes

* pointing_device_auto_mouse: Use extraction macros for keycodes

Fixes #18970.

* process_autocorrect: Use extraction macros for keycodes

* process_caps_word: Use extraction macros for keycodes

(Also fix a minor bug - SH_TG was not handled properly)

* process_leader: Use extraction macros for keycodes

(Technically the code is not 100% correct, because it always assumes
that the LT() or MT() action was a tap, but it's a separate issue that
already existed before the keycode changes.)

* process_unicode: Use extraction macros for keycodes

* process_unicodemap: Use extraction macros for keycodes  
>[Bug] Fix compilation issue with WPM (#18965)  
>Reduce includes for wpm header (#18949)  
>VIA V3 - The Custom UI Update (#18222)  
>Formalise keyboard- and user-specific EEPROM blocks (#18874)* Formalise keyboard and user eeconfig datablocks.

* Add debounce helper that checks a condition and issues post-write function invocation.

* Naming.  
>Only trigger encoder callbacks on primary side (#18467)Co-authored-by: zvecr <git@zvecr.com>  
>Fix Czech sendstring LUT (#19193)  
>Revert lib/usbhost changes (#19165)  
>Don't clear keys on layer change unless STRICT_LAYER_RELEASE is enabled (#18577)* Don't clear mousekeys unless clearing keys

* Revert "Don't clear mousekeys unless clearing keys"

This reverts commit 29a0c06b547d72b80d416a8b6fab478c77fbd247.

* Just don't clear anything on layer set

* Fix lint

* Enable test?  
>Normalise Unicode keycodes (#18898)* `UC_MOD`/`UC_RMOD` -> `UC_NEXT`/`UC_PREV`

* `UNICODE_MODE_*` -> `QK_UNICODE_MODE_*`

* `UC_MAC` -> `UNICODE_MODE_MACOS`

* `UC_LNX` -> `UNICODE_MODE_LINUX`

* `UC_WIN` -> `UNICODE_MODE_WINDOWS`

* `UC_BSD` -> `UNICODE_MODE_BSD`

* `UC_WINC` -> `UNICODE_MODE_WINCOMPOSE`

* `UC_EMACS` -> `UNICODE_MODE_EMACS`

* `UC__COUNT` -> `UNICODE_MODE_COUNT`

* `UC_M_MA` -> `UC_MAC`

* `UC_M_LN` -> `UC_LINX`

* `UC_M_WI` -> `UC_WIN`

* `UC_M_BS` -> `UC_BSD`

* `UC_M_WC` -> `UC_WINC`

* `UC_M_EM` -> `UC_EMAC`

* Docs

* Update quantum/unicode/unicode.h  
>Bug17281 - Retain momentary layers until the end of tapping (#17282)* Make process_tapping more readable

Move most #ifdefs into conditionally defined macros to make the logic
easier to follow.

* Retain momentary layers until the end of tapping

This allows mod-tap and layer-tap keys on layers to behave as expected.

Bug: https://github.com/qmk/qmk_firmware/issues/17281

* Add tests for delayed mod/layer release while tapping

Mods and layer key release is delayed while tapping is in progress to
ensure that the tap is registered with the modifier state and on the
layer where the key was first pressed.

Signed-off-by: Felix Kuehling <felix.kuehling@gmail.com>  
>Joystick feature improvements (#19052)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-10  
Contributor(s):  
Less/Rikki  
Thomas Kriechbaumer  
precondition  
Ryan  
dexter93  
Sergey Vlasov  
Thomas Weißschuh  
James Young  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
fauxpark  
Jouke Witteveen  
George Rodrigues  
jpe230  
Paula Isabel  
Danny  
Wilba  
Jason Ken Adhinarta  
Reibl János Dániel  
Selene ToyKeeper  
Dimitris Mantzouranis  
QMK Bot  
Giuseppe Rota  
Alabahuy  
jack  
Joel Challis  
nezumee  
Nick Brassel  
>Merge remote-tracking branch 'upstream/master' into develop  
>Remove some assumptions on sequential keycode ranges (#18838)  
>Small un/register_code() cleanups (#18544)  
>fix core matrix linting  
>added BS_TOGG so BS_SWAP and BS_NORM can be on a single key (#18837)Co-authored-by: Selene ToyKeeper <git@toykeeper.net>  
>Remove RGBLIGHT_ANIMTION and clean up effect defines for 0-F (#18725)  
>Add Sinc Rev. 3 (#18846)* Initial work on adding Sinc Rev. 3

* Add RGB Matrix support

* Add encoder map support

* Set I2C pins

* Update LED locations for right half

* Move USB definitions to info.json

* Update RGB modes

* Replace pin mappings for right half with correct ones

* Move config.h back to rev1/rev2 due to addition of rev3

* Convert initial Rev. 3 config work to be data-driven

* Convert RGB Matrix config to DD format

* More config cleanup

* Use full-duplex PIO

* Add MCU/bootloader settings for Rev. 2

* Change ISO Enter location since it shares location with Backslash

* Adjust build settings to reduce flash/EEPROM usage  
>Update quantum/keyboard.cCo-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>Update converter/usb_usb keymaps to use LAYOUT_fullsize (#18720)  
>Various keyboard fixes (#18649)  
>[Keyboard] Add Sinc Rev 1&2 Encoder Map Support (#18861)  
>Remove legacy keycodes, part 2 (#18660)* `KC_SYSREQ` -> `KC_SYRQ`

And one `KC_ALT_ERASE` -> `KC_ERAS`

* `KC_NONUS_BSLASH` -> `KC_NUBS`

* `KC_NUMLOCK` -> `KC_NUM`

* `KC_CLCK` -> `KC_CAPS`

* `KC_SCROLLLOCK` -> `KC_SCRL`

* `KC_LBRACKET` -> `KC_LBRC`

* `KC_RBRACKET` -> `KC_RBRC`

* `KC_CAPSLOCK` -> `KC_CAPS`  
>ChibiOS USB: Add a dummy IN callback to work around LLD bugs (#18811)In #18631 some IN notification callbacks that were doing nothing were
removed, which should be a valid thing to do (ChibiOS HAL checks the
`in_cb` and `out_cb` pointers for being non-NULL before invoking those
optional callbacks).  However, it turned out that some less popular USB
LLDs (KINETIS and MIMXRT1062) have their own checks for those pointers,
and (incorrectly) skip the ChibiOS callback handling when those pointers
are NULL, which breaks the code for the `USB_USE_WAIT` configuration
option (the waiting thread never gets resumed if the corresponding
callback pointer is NULL).

Add those dummy callbacks again (but use a single function for all of
them instead of individual ones for each endpoint); this restores the
KINETIS and MIMXRT1062 boards to the working state while the LLDs are
getting fixed.  
>Remove RGBLIGHT_ANIMATION and clean up effect defines for layouts+users (#18729)  
>Remove RGBLIGHT_ANIMATION and clean up effect defines for L-Q (#18727)  
>Normalise Space Cadet keycodes (#18864)  
>onekey: Enable ADC for STM32F072 Discovery (#18592)  
>Normalise Autocorrect keycodes (#18893)  
>Mark the moonlander keyboard default music map as weak (#18715)This allows user keymaps to set a different music map.  
>Remove all `BACKLIGHT_LEVELS 0` (#18630)  
>Remove legacy sendstring keycodes (#18749)  
>Remove legacy keycodes, part 3 (#18669)* `KC__VOLDOWN` -> `KC_VOLD`

* `KC__VOLUP` -> `KC_VOLU`

* `KC__MUTE` -> `KC_MUTE`

* `KC_POWER` -> `KC_PWR`  
>Deprecate `CAPS_WORD`/`CAPSWRD` for `CW_TOGG` (#18834)  
>Add missing Space Cadet alias (#18876)  
>Fix layer switching from tap dances by redoing the keymap lookup (#17935)  
>some formatting  
>Remove RGBLIGHT_ANIMATION and clean up effect defines for R-Z (#18728)  
>LUFA: Consolidate report sending code (#18629)  
>Deprecate `VLK_TOG` for `VK_TOGG` (#18807)  
>Deprecate `ONESHOT_*` keycodes for `QK_ONE_SHOT_*` (#18844)* Deprecate `ONESHOT_*` keycodes for `QK_ONE_SHOT_*`

* Docs  
>Programmable Button API refactor and improve docs (#18641)  
>Remove legacy Grave Escape keycodes (#18787)  
>Fixup keebio/sinc (#18551)  
>core: make the default init routine weakthis allows user override without compromising the rest of matrix.c  
>Normalise Combo keycodes (#18877)  
>Fix joystick functionality for ChibiOS and OTG (Blackpill) (#18631)Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>Allow QK_MAKE to work with converters (#18637)  
>Update keyboards readme (#18714)  
>Fix Per Key LED Indicator Callbacks  (#18450)Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Polyandry: rename LAYOUT to LAYOUT_ortho_4x3 (#18815)  
>Refactor more host code (programmable button & digitizer) (#18565)  
>Fix comment of CM_QUES (Colemak question mark) (#18557)`#define CM_QUES S(CM_SLSH) // /` → `#define CM_QUES S(CM_SLSH) // ?`  
>Make MIDI output endpoint use the out direction (#18654)  
>Fix Caps Lock indicators on Wilba Tech PCBs (#18695)  
>Refactor `send_extra` (#18615)  
>Deprecate `KC_LOCK` for `QK_LOCK` (#18796)  
>ws2812: replace RGBLED_NUM with driver-owned constant to decouple driver from RGBLEDs/RGBMATRIX defines (#18036)  
>remove redundant else  
>Remove legacy international keycodes (#18588)  
>Remove rgblight_list.h (#18878)* Remove rgblight_list defines with no usage

* Remove rgblight_setrgb_*[_at] defines

* Remove rgblight_sethsv_* defines

* Remove rgblight_sethsv_noeeprom_* defines

* Delete rgblight_list.h and remove all references  
>Use get_u16_str instead of snprintf in autoshift_timer_report (#18606)  
>[Keyboard] Add Encoder map support for rart (#18851)  
>Remove `KC_DELT` (#18882)  
>Implement split comms watchdog (#18599)  
>wilba_tech: allow keymaps to override backlight_effect_indicators() (#18791)  
>Revert "core: move matrix scan in matrix_common"This reverts commit e192a5861ce7550d6f10c6c58c8e116f43058053.  
>docs: some typos (#18582)probably hacktoberism  
>Remove legacy EEPROM clear keycodes (#18782)* `EEP_RST` -> `EE_CLR`, default-ish keymaps

* `EEP_RST` -> `EE_CLR`, user keymaps

* `EEP_RST` -> `EE_CLR`, community layouts

* `EEP_RST` -> `EE_CLR`, userspace

* `EEP_RST` -> `EE_CLR`, docs & core  
>Remove RGBLIGHT_ANIMATION and clean up effect defines for G-K (#18726)  
>Remove lingering DRIVER_LED_TOTAL references (#18594)  
>[Core] ChibiOS: Fix USB bus disconnect handling (#18566)  
>[Core] PWM Backlight for RP2040 (#17706)  
>Merge remote-tracking branch 'origin/master' into develop  
>Remove quantum/audio from global VPATH (#18753)  
>core: allow locking the matrix stateintroducing flexibility on matrix tasks timing. matrix state can now be locked when we don't need a matrix scan  
>Remove legacy keycodes, part 5 (#18710)* `KC_SLCK` -> `KC_SCRL`
* `KC_NLCK` -> `KC_NUM`  
>define `oled_write_ln_P` as `oled_write_ln` for non-AVR MCUs (#18589)  
>Deprecate `KC_LEAD` for `QK_LEAD` (#18792)  
>quantum: led: split out led_update_ports() for customization of led behaviour (#14452)  
>Revert "introduce flexibility in matrix scan timing"This reverts commit d241419b1cf0b4d5b8819555d181e9da44d2c4da.  
>Prevent tap dance from wiping dynamic macros (#17880)  
>Allow overriding of dynamic keymap start address. (#18867)  
>fix typo in solenoid.h (#18635)  
>add "inertia" mode for mouse keys (#18774)Co-authored-by: Selene ToyKeeper <git@toykeeper.net>  
>onekey: enable ADC for Bluepill and Blackpill (#18545)  
>core: move matrix scan in matrix_commonstock matrix_scan function is a glorified custom function by default.Time to actually be one  
>Deprecate `SECURE_*` keycodes for `QK_SECURE_*` (#18847)* Deprecate SECURE_* keycodes for QK_SECURE_*

* Update keycode process

* Update process_secure.c

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Normalise Auto Shift keycodes (#18892)* Normalise Auto Shift keycodes

* Add keycode table to main list

* Add old keycodes to legacy header  
>fix: Remove OLED support (#18719)* fix: Remove OLED support

* redundant files

Co-authored-by: zvecr <git@zvecr.com>  
>introduce flexibility in matrix scan timing`CUSTOM_MATRIX = shared`This custom matrix alternative allows for precise timing control on the matrix scan, as needed with shared matrix keyboards.The user has to bring his own matrix_scan function, but not rewrite the whole matrix code.  
>rename to matrix_availableswap the logic, introduce prototypes & readme  
>led_update_kb -> led_update_ports where appropriate (#18716)Following #14452, less boilerplate is needed to customize indicator led
control.  
>core: move matrix init in matrix_common  
>fix lint  
>Remove legacy fauxclicky and unicode keycodes (#18800)  
>Widen the ARM Cortex-M family support. Allow USB peripheral change. (#18767)  
>Normalise Joystick and Programmable Button keycodes (#18832)  
>Fix build failures uncovered by #18753 (#18789)  
>Relocate US ANSI shifted keycode aliases (#18634)  
>Fixup handwired/kbod (#18754)  
>Remove legacy keycodes, part 4 (#18683)* `KC_PGDOWN` -> `KC_PGDN`

* `KC_PSCREEN` -> `KC_PSCR`

* `KC_SCOLON` -> `KC_SCLN`

* `KC_BSLASH` -> `KC_BSLS`

* `KC_BSPACE` -> `KC_BSPC`  
>Remove legacy keycodes, part 6 (#18740)* `KC_RSHIFT` -> `KC_RSFT`

* `KC_RCTRL` -> `KC_RCTL`

* `KC_LSHIFT` -> `KC_LSFT`

* `KC_LCTRL` -> `KC_LCTL`  
>core: make the default scan routine weakthis allows user override without compromising the rest of matrix.c  
>Remove legacy Debug keycode (#18769)* `DEBUG` -> `DB_TOGG`, default-ish keymaps

* `DEBUG` -> `DB_TOGG`, user keymaps

* `DEBUG` -> `DB_TOGG`, community layouts

* `DEBUG` -> `DB_TOGG`, userspace

* `DEBUG` -> `DB_TOGG`, docs & core  
>Deprecate `KEY_OVERRIDE_*` keycodes for `KO_*` (#18843)  
>docs: fix typos (#18671)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-09  
Contributor(s):  
Less/Rikki  
Johannes Löthberg  
Wes Lord  
Ryan  
James Young  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
izmishi  
Alabastard-64  
coliss86  
fauxpark  
Luis Carlos  
Danny  
Wilba  
Reibl János Dániel  
QMK Bot  
Drashna Jael're  
Seth Barberee  
Joel Challis  
Joshua Diamond  
Nick Brassel  
>Untangle layouts for Dimple rev3 and Infinity87 (#18462)  
>[Core] Add getreuer's Autocorrect feature to core (#15699)Co-authored-by: Albert Y <76888457+filterpaper@users.noreply.github.com>  
>Remove deprecated RESET keycode alias (#18271)  
>Enable more BDN9 RGB effects (#18420)  
>Merge remote-tracking branch 'upstream/master' into develop  
>Remove legacy USE_SERIAL define (#18292)* Remove legacy USE_SERIAL define

* tidy up missed comments  
>Move Oneshot mod callbacks to after mods are set (#18101)  
>Refactor Unicode feature (#18333)  
>Remove remaining use of terminal keys and related comment labels (#18402)  
>Further refactoring of joystick feature (#18437)  
>Remove `UNICODE_KEY_OSX` and `UC_OSX` (#18290)  
>Chromeos keycodes (#18212)  
>[Docs] Update 'Process Record' according to the code (#18209)* [doc] Update 'Process Record' according to the code

* [doc] fix link  
>Fix retain brightness when val is changed while a layer is active (#18426)* Fix retain brightness when val is changed while a layer is active

* Fix retain brightness for RGBLIGHT_MODE_STATIC_GRADIENT

* Fix formatting  
>fix: Remove TERM_ON/TERM_OFF from my keymap (#18354)  
>Add unicode mode change callbacks (#18235)  
>Resolve conflict merging master to develop  (#18297)* Discourage use of ENCODER_MAP at keyboard level (#18286)

* Discourage use of ENCODER_MAP at keyboard level

* Update docs/feature_encoders.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>

* Fungo rev1: fix QMK Configurator key sequence (#18293)

* info.json: correct JSON syntax; friendly formatting

* info.json: fix key sequence

Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Remove legacy define USE_SERIAL_PD2 (#18298)  
>[Docs] RESET -> QK_BOOT (#18365)  
>Better handle EEPROM reset keycode (#18244)  
>Simplify extrakeys sending at the host driver level (#18230)* Simplify extrakeys sending at the host driver level

* There are two arguments here

* Wrong syntax

* Adjust keyboards which use a custom host driver  
>Add caps lock and scroll lock indicators (#17725)  
>Checklist clarification. (#18440)  
>[Keymap] develop updates for Drashna Keymaps (#18472)  
>Discourage use of ENCODER_MAP at keyboard level (#18286)* Discourage use of ENCODER_MAP at keyboard level

* Update docs/feature_encoders.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Enabling Pointing Device support in register code functions (#18363)  
>[Core] remove busy waiting from rgblight functions (#18418)  
>Adjust `EXTRAKEY_ENABLE` ifdefs for `send_extra()` (#18249)  
>[Core] Pointing Device Automatic Mouse Layer (#17962)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>[docs] Improve documentation regarding info.json (#18508)* docs: raise info.json awareness

* docs: note that DD migration is WIP  
>Start moving towards introspection-based data retrieval (#18441)  
>Update feature_tap_dance.md (#18509)Fixed typo  
>[Docs] Explicitly mention kb/user callbacks as boolean (#18448)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Docs] Extract 'Layer Change Code' and EEPROM (#18174)* [Docs] Extract 'Layer Change Code' and EEPROM

* adjust wording

* Update docs/custom_quantum_functions.md

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Joel Challis <git@zvecr.com>  
>Change `DRIVER_LED_COUNT` to `{LED,RGB}_MATRIX_LED_COUNT` (#18399)  
>Start Bluetooth API (#18366)  
>[Keyboard] Convert most of sinc to data driven info.json (#18481)  
>Add encoder map to Quefrency VIA keymap (#18380)* Add encoder map to Quefrency VIA keymap

* Explicitly define which RGB animations are enabled

* Set different PID to prep for different VIA .json usage

* Add ifdefs to handle if ENCODER_ENABLE is set to NO  
>Onekey: migrate some stuff to data driven (#18502)  
>Remove more RESET keycode references (#18252)  
>Merge remote-tracking branch 'origin/master' into develop  
>GMMK2: Fix 'ISO' within product name (#18322)  
>Remove use of legacy keycode (#18281)  
>Move Bluetooth-related function calls up to host/keyboard level (#18274)* Move Bluetooth-related function calls up to host/keyboard level

* Remove pointless set_output() call

* Move bluetooth (rn42) init to end of keyboard_init()

* Enable SPI/UART for ChibiOS targets

* Some more slight tweaks  
>Handle mouse keys more consistently (#18513)  
>Grammar Fix for PR Checklist (#18540)* Grammar Fix for PR Checklist

* Update docs/pr_checklist.md

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Update docs/pr_checklist.md, take 2

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Remove legacy define SERIAL_USE_MULTI_TRANSACTION (#18299)  
>Remove orphan custom functions reference in keymap docs (#18444)  
>Change `{LED,RGB}_DISABLE_TIMEOUT` to `{LED,RGB}_MATRIX_TIMEOUT` (#18415)  
>[Keymap] Fix bootmagic compilation issue with Drashna keymaps (#18223)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-08  
Contributor(s):  
precondition  
alaviss  
mechlovin  
Ryan  
Xelus22  
Chewxy  
Sergey Vlasov  
medoix  
csc027  
James Young  
Stefan Kerkmann  
Drashna Jaelre  
Tom Barnes  
Marek Kraus  
biesigrr  
fauxpark  
Jesse  
3araht  
Erovia  
Wilba  
Jeff Epler  
Pascal Getreuer  
QMK Bot  
Drashna Jael're  
Joel Challis  
Joshua Diamond  
Nick Brassel  
>Move keyboard USB IDs and strings to data driven: R (#17885)  
>[Bug] Add key event check to `is_tap_record` and remove `is_tap_key` (#18063)  
>Merge remote-tracking branch 'upstream/master' into develop  
>2022q3 Changelog. (#18180)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>KBDfans KBD67 rev2: rename LAYOUT_65_ansi_split_bs_2_right_mods macro (#17972)  
>Move keyboard USB IDs and strings to data driven: S (#17889)  
>Move keyboard USB IDs and strings to data driven: N (#17865)  
>RESET -> QK_BOOT user keymaps (#17940)  
>Fix DV_SCLN and DV_COLN in keymap_spanish_dvorak.h (#18043)  
>Fix detection of EEPROM reset in some keyboards (#17970)  
>RESET -> QK_BOOT default keymaps (#17939)  
>Redefinition of MIN is avoided in midi.c (#18203)  
>Add deprecated check for RGBLIGHT_ANIMATIONS (#17832)  
>csc027/keymap-updates (#17881)* Reverted to most usable configuration for RDP usage.

* Added some HSV color definitions without the value portion to allow using the existing value.

* Switched to using HSV and HS color definitions.

* Added media keys to the convenience layer.

* Updated make rules to enable media keys.

* Cleaned up planck make rules.  
>Move keyboard USB IDs and strings to data driven: T (#17899)  
>Move keyboard USB IDs and strings to data driven: U (#17900)  
>Move keyboard USB IDs and strings to data driven, pass 2: F-I (#17958)  
>Fix Bépo's BP_NNBS (narrow non-breaking space) (#17999)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Use ANSI ASCII art and fix comments for LT_COLN and LT_UNDS in keymap_lithuanian_qwerty.h (#18028)  
>[Keyboard] Add Valor FRL TKL rev2.0 and 2.1 (#17992)* add valor frl tkl rev2 by xelus22  
>Move keyboard USB IDs and strings to data driven: P (#17875)  
>Move keyboard USB IDs and strings to data driven, pass 2: D-E (#17956)  
>Move keyboard USB IDs and strings to data driven: K (#17846)Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Move keyboard USB IDs and strings to data driven: V (#17901)  
>Use `TAP_CODE_DELAY` for encoder mapping by default (#18098)  
>Switch over MANUFACTURER and PRODUCT to string literals (#18183)  
>Convert yosino58 to use split common (#17861)  
>KR_DQUO S(KR_COLN) → KR_DQUO S(KR_QUOT) (#18011)  
>Update Tap Dance Example 4 (#18138)break statements are missing from the switch for both registering and unregistering key codes. Neither have a default: case either. The code as exists in the repository right now does not compile. It does with this changes.  
>[Keyboard] Kangaroo Rev2 (#18199)  
>define CZ_PERC S(CZ_PLUS) → define CZ_PERC S(CZ_EQL) (#18008)  
>Move keyboard USB IDs and strings to data driven: O (#17874)  
>Move keyboard USB IDs and strings to data driven, pass 2: M-O (#18090)  
>Merge remote-tracking branch 'upstream/develop'  
>Add texts for Discord Events to be created post-merge. (#17944)  
>Expose Moonlander split detection to user code (#18040)  
>Move keyboard USB IDs and strings to data driven: Y (#17926)  
>Remove old submodules if present (#17930)  
>Move keyboard USB IDs and strings to data driven, pass 2: J-L (#18080)  
>Branch point for 2022 Nov 26 Breaking Change  
>rgbkb/zen - Resolve CONVERT_TO_PROTON_C warnings (#17619)  
>[Keyboard] Dumbpad v1x_oled (#17058)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix LV_CCAR and LV_NCED (#18025)  
>Move keyboard USB IDs and strings to data driven, pass 2: 0-9, A (#17941)  
>Move keyboard USB IDs and strings to data driven: M (#17859)  
>[Core] Rework PS/2 driver selection (#17892)* [Core] Rework PS/2 driver selection

Enabling and selecting PS/2 driver was using old approach,
so it was reworked to current approach, inspired by Serial
and WS2812 driver selections.

* [Keyboard] Update keyboards using PS/2 to use new PS/2 driver selection

* [Docs] Update PS/2 documentation to use new PS/2 driver selection

* Fix indentation

* [Core] Add PS2 to data driver

* Fix oversight in property name

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Add PS/2 pins to data driven mappings

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>More spidey3 userspace cleanup (#18049)  
>Move keyboard USB IDs and strings to data driven, pass 2: handwired (#18079)  
>Move keyboard USB IDs and strings to data driven, pass 3 (#18111)  
>[Core] Process all changed keys in one scan loop, deprecate `QMK_KEYS_PER_SCAN` (#15292)  
>Move keyboard USB IDs and strings to data driven, pass 2: P-R (#18091)  
>Update ginkgo65hot to allow use of community layouts (#17911)  
>[Keyboard] Fix compilation issues for Mechlovin Adelais (#18019)  
>Move keyboard USB IDs and strings to data driven: L (#17849)  
>RFC: add a simple implementation of the ploopy optical encoder (#17912)  
>[Core] `STM32_USB_USE_OTG1` => `USB_ENDPOINTS_ARE_REORDERABLE` (#17647)  
>CLI: Teaching the CLI to flash binaries (#16584)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Merge remote-tracking branch 'origin/master' into develop  
>Clean-up of `#define _ADJUST 16` instances (#18182)* enum layer_names: 40percentclub/nori default keymap

* enum layer_names: ergotravel default keymap

* enum layer_names: handwired/atreus50 default keymap

* enum layer_names: handwired/ortho5x13 default keymap

* enum layer_names: keebio/levinson default keymap

* enum layer_names: keebio/nyquist default keymap

* enum layer_names: keebio/rorschach default keymap

* enum layer_names: keebio/viterbi default keymap

* enum layer_names: keebio/wavelet default keymap

* enum layer_names: lets_split default keymap

* enum layer_names: maple_computing/launchpad reference keymaps

Update `default` and `default_rgb` keymaps.

* enum layer_names: maple_computing/minidox default keymap

* enum layer_names: miniaxe reference keymaps

Update `default` and `underglow` keymaps.

* enum layer_names: omkbd/ergodash/mini default keymap

* enum layer_names: omkbd/ergodash/rev1 default keymap

* enum layer_names: orthodox default keymap

* enum layer_names: unikeyboard/divergetm2 default keymap

* enum layer_names: woodkeys/scarletbandana default keymap

* add _Static_assert to keymap_introspection.c  
>Move keyboard USB IDs and strings to data driven: Q (#17883)  
>Replace ; by : in the shifted symbols ASCII art of keymap_norman (#18029)Thanks!  
>[Docs] Suggest imgur images are edited to set size (#18031)  
>[Keymap] Drashna keymap updates for 0.18.0 (#18184)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Move keyboard USB IDs and strings to data driven, pass 2: S-Y (#18093)  
>Move keyboard USB IDs and strings to data driven, pass 2: B-C (#17945)  
>Use a macro to compute the size of arrays at compile time (#18044)* Add ARRAY_SIZE and CEILING utility macros

* Apply a coccinelle patch to use ARRAY_SIZE

* fix up some straggling items

* Fix 'make test:secure'

* Enhance ARRAY_SIZE macro to reject acting on pointers

The previous definition would not produce a diagnostic for
```
int *p;
size_t num_elem = ARRAY_SIZE(p)
```
but the new one will.

* explicitly get definition of ARRAY_SIZE

* Convert to ARRAY_SIZE when const is involved

The following spatch finds additional instances where the array is
const and the division is by the size of the type, not the size of
the first element:
```
@ rule5a using "empty.iso" @
type T;
const T[] E;
@@

- (sizeof(E)/sizeof(T))
+ ARRAY_SIZE(E)

@ rule6a using "empty.iso" @
type T;
const T[] E;
@@

- sizeof(E)/sizeof(T)
+ ARRAY_SIZE(E)
```

* New instances of ARRAY_SIZE added since initial spatch run

* Use `ARRAY_SIZE` in docs (found by grep)

* Manually use ARRAY_SIZE

hs_set is expected to be the same size as uint16_t, though it's made
of two 8-bit integers

* Just like char, sizeof(uint8_t) is guaranteed to be 1

This is at least true on any plausible system where qmk is actually used.

Per my understanding it's universally true, assuming that uint8_t exists:
https://stackoverflow.com/questions/48655310/can-i-assume-that-sizeofuint8-t-1

* Run qmk-format on core C files touched in this branch

Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>Remove `UNUSED_PINS` (#17931)  
>Migrate crkbd keymaps to oled driver (#17863)  
>Add minimal STM32F103C6 support (#17853)Unfortunately, the crippled versions of “Bluepill” boards with
STM32F103C6xx chips instead of STM32F103C8xx are now sold all over the
place, sometimes advertised in a confusing way to make the difference
not noticeable until too late.  Add minimal support for these MCUs in
the common “Bluepill with stm32duino” configuration, so that it could be
possible to make something useful from those boards (although fitting
QMK into the available 24 KiB of flash may be rather hard).

(In fact, I'm not sure whether the “STM32” part of the chip name is
actually correct for those boards of uncertain origin, so the onekey
board name is `bluepill_f103c6`; another reason for that name is to
match the existing `blackpill_f401` and `blackpill_f411`.)

The EEPROM emulation support is not included on purpose, because
enabling it without having a working firmware size check would be
irresponsible with such flash size (the chance that someone would build
a firmware where the EEPROM backing store ends up overlapping some
firmware code is really high).  Other than that, enabling the EEPROM
emulation code is mostly trivial (the `wear_leveling` driver with the
`embedded_flash` backing store even works without any custom
configuration, although its code is significantly larger than the
`vendor` driver, which may also be important for such flash size).  
>[Docs] update pr_checklist.md with info about data-driven (#18068)* update pr_checklist with info about data-driven

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Move keyboard USB IDs and strings to data driven: Z (#17927)  
>Use LT_ZCAR in place of LT_PLUS for modded kc definitions (#18000)  
>Added emacs as an "operating system" for input mode.  (#16949)  
>[Keyboard] Overhaul uzu42 (#17868)  
>Move keyboard USB IDs and strings to data driven: X (#17925)  
>Align TO() max layers with other keycodes (#17989)  
>Fix Caps Word capitalization when used with Combos + Auto Shift. (#17549)  
>Move keyboard USB IDs and strings to data driven: W (#17903)  
>change Adelais En Ciel rev. 3 from STM32F303 to APM32F103 MCU (#16964)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>RESET -> QK_BOOT keyboard readme (#18110)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-07  
Contributor(s):  
Less/Rikki  
Alex Băluț  
Bartosz Nowak  
precondition  
zvecr  
Ryan  
Albert Y  
Nick Krichevsky  
James Young  
torkel104  
Stefan Kerkmann  
mknj  
Drashna Jaelre  
Naphtaline  
Jouke Witteveen  
turbololvo  
Osamu Aoki  
Ben Fiedler  
Danny  
Wilba  
Marek Wyborski  
CoffeeIsLife  
QMK Bot  
Jens-Petter Sandvik  
JayceFayne  
Manna Harbour  
Drashna Jael're  
jack  
br  
Joel Challis  
Daniel Kao  
Joshua Diamond  
FREEWING.JP  
Nick Brassel  
>docs: fix default value of USB_SUSPEND_WAKEUP_DELAY (#17501)Documents the change made in #12081  
>Allow for RGB actions to take place on Keydown instead of Keyup (#16886)* Allow for switch on keydown

* add docs  
>[Core] Update mpaland/printf to eyalroz/printf fork (#16163)mpaland printf implementation was abandoned in ~2019 and the fork by
eyalroz is now regarded to be the goto replacement of it. So this commit
incoporates the changes needed to use this fork in QMK.

Note that pointer ptrdiff_t is always supported since commit
51c90f93a97fdaef895783ecbe24569be0db7cb8  
>Cirque trackpad features: circular scroll, inertial cursor (#17482)  
>Added Wait time to sending each Keys for Dynamic Macros function (#16800)Co-authored-by: Joel Challis <git@zvecr.com>  
>[Core] PMW33XX drivers overhaul (#17613)* PMW33XX drivers overhaul

This combines the PMW3389 and PM3360 drivers as they only differ in the
firmware blobs and CPI get and set functions. The following changes have
been made:

* PMW3389 now gets the same multi-sensor feature that is already available on the
  PMW3360.

* Introduced a shared pmw33xx_report_t struct is now directly readable via SPI
  transactions instead of individual byte-sized reads, saving multiple
  copies and bitshift operations.

* pmw33(89/60)_get_report functions had unreachable branches in their motion
  detection logic these have been simplied as much as possible.

* The fast firmware upload option has been removed as this becomes obsolete by
  the newly introduced polled waiting functions for ChibiOS polled waiting

* PMW33(60/89)_SPI_LSBFIRST and PMW33(60/89)_SPI_MODE config options
  have been removed as they don't need to be configurable.

* All PMW3389 and PMW3360 defines have been unified to a PMW33XX prefix
  to reduce code duplication and make the defines interchangeable

* Adjust keyboards to PMW33XX naming scheme  
>KBDfans KBD67 rev2 Layout Patch (#17649)  
>[Keyboard] add kinesis/kintlc (#17301)  
>Expose the time of the last change to the LED state (#17222)  
>Add support for PAW3204 Optical Sensor (#17669)Co-authored-by: gompa <gompa@h-bomb.nl>
Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>Fix keys being discarded after using the leader key (#17287)  
>Remove full bootmagic config (#17702)  
>[Core] Use polled waiting on ChibiOS platforms that support it (#17607)* Use polled waiting on platforms that support it

Due to context switching overhead waiting a very short amount of time on
a sleeping thread is often not accurate and in fact not usable for timing
critical usage i.e. in a driver. Thus we use polled waiting for ranges
in the us range on platforms that support it instead. The fallback is
the thread sleeping mechanism.

This includes:

* ARM platforms with CYCCNT register (ARMv7, ARMv8) this is
  incremented at CPU clock frequency
* GD32VF103 RISC-V port with CSR_MCYCLE register this is incremented at
  CPU clock frequency
* RP2040 ARMv6 port which uses the integrated timer peripheral which is
  incremented with a fixed 1MHz frequency

* Use wait_us() instead of chSysPolledDelayX

...as it is powered by busy waiting now.

* Add chibios waiting methods test bench  
>Move keyboard USB IDs and strings to data driven: A (#17781)  
>Move keyboard USB IDs and strings to data driven: J (#17837)  
>ChibiOS: use correct status codes in i2c_master.c (#17808)msg_t is MSG_OK in the success case and either MSG_RESET or MSG_TIMEOUT
in case of errors. So actually use them in the comparison.  
>Remove full bootmagic config (#17701)  
>Added Delay time dynamic keymap's macro feature (#16810)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Clean up dactyl manuform unused files (#15890)  
>Feature-ify Send String (#17275)  
>fix function layer to reflect cap labels (#17813)These changes correctly reflect the keycap labels on the Vortex Race 3.  
>[Keyboard] boardsource/holiday/spooky data driven (#17632)  
>[Keyboard] Add Quefrency Rev. 5 (#17503)  
>Fixup SPI. (#17534)  
>Make debounce() signal changes in the cooked matrix as return value (#17554)  
>Allow dynamic keymap to compile without via.h (#17703)  
>Move keyboard USB IDs and strings to data driven: H (#17821)  
>Fix QK_MAKE's reboot check (#17795)  
>Move keyboard USB IDs and strings to data driven: E (#17815)  
>Move Pointing Device Initialization (#17740)Move Pointing Device Initialization to after Split Post Initialization

If both pointing device and split is enabled, the pointing device init needs to be called after the split post init, otherwise the connection (serial/etc) isn't initialized yet, and any commands that need to send data over (such as calling the set cpi command) never get sent over.  
>[Keyboard] boardsource/microdox data driven (#17675)  
>Add workaround to allow Sesame to work without atomic interactions (#17034)  
>More glyph transformations for spidey3 userspace (#17854)* add bold and blackboard bold glyph transformations

* trim firmware size; cformat

* fix typo in macro

* trim firmware size a bit more  
>Move keyboard USB IDs and strings to data driven: C (#17789)  
>fix syntax error (#17732)  
>Avoid OOB in dynamic_keymap_reset (#17695)  
>Add ability to enter bootloader mode from `QK_MAKE` (#17745)  
>[Fix] Patches after printf library update (#17584)* Add missing '(' to print_bin_reverse32 declaration* Fix insufficient character buffers on satisfaction75* Remove \0 character in format string and use corrected offset math  instead on rocketboard 16* Replace snprintf_ with snprintf for djinn* Explicitly ignore format checks for tracktyl manuform that uses %b  specifier* Print properly escaped version string in command.c, as PRODUCT or  other defines can contain constructs like 'Vendor keyboard 66%' which  will be interpreted as a format specifier  
>PoC: Swap Escape and Caps (#16336)  
>implement `tap_code16_delay` (#17748)  
>Rename postprocess_steno_user → post_process_steno_user (#17823)  
>Move keyboard USB IDs and strings to data driven: B (#17782)  
>[Docs] Add Encoder requirements to PR Checklist doc (#17634)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Improve ENCODER_DEFAULT_POS to recognize lost ticks (#16932)  
>Move keyboard USB IDs and strings to data driven: F (#17816)  
>Merge remote-tracking branch 'origin/master' into develop  
>Move keyboard USB IDs and strings to data driven: handwired (#17822)  
>Add cli command to import keyboard|keymap|kbfirmware (#16668)  
>[Keymap] Update Miryoku (#16482)  
>Move keyboard USB IDs and strings to data driven: D (#17814)  
>Move keyboard USB IDs and strings to data driven: I (#17836)  
>Move keyboard USB IDs and strings to data driven: G (#17818)  
>Chibios: Stop I2C peripheral on transaction error (#17798)From the ChibiOS HAL I2C driver pages:After a timeout the driver must be stopped and restarted because the bus is inan uncertain state.This commit does that stopping explicitly on any error that occurred, not onlytimeouts. As all the i2c functions restart the peripheral if necessary it issafe to do so.Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>  
>[Keyboard] Add RP2040 config defaults for ferris/sweep and cradio (#17557)  
>Planck swap hand matrix for rev6, fixing issue #17388 (#17389)* Add correct hand_swap_config matrix for planck_rev6 and planck_rev6_drop

* Make sure indentations are consistent

* Make the rev6 hand_swap_config matrix the default, also correct for ez.

* Move hand_swap_config matrix from planck.c to revision subdirectories  
>[Keyboard] kbdfans kbd67 rev 2 : add new LAYOUT_65_iso_split_bs (#16922)* [Layout/Keymap] kbdfans kbd67 rev2 : add new LAYOUT_65_iso_split_bs and naphaline keymap as a working example

* Update keyboards/kbdfans/kbd67/rev2/keymaps/naphtaline/keymap.c

I do trust the reviewer, here goes the change :)

Co-authored-by: Ryan <fauxpark@gmail.com>

* Remove QMK custom keycodes 1/2

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Remove QMK custom keycodes 2/2

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[Keymap] Updates to drashna Keymaps and Userspace (#17543)  
>feat: encoder map, OLED & encoder kb-level config (#17809)  
>Added PLOOPY_DRAGSCROLL_H_INVERT (#17453)  
>VIA Encoder Map Support (#17734)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-06  
Contributor(s):  
Thomas Kriechbaumer  
precondition  
Ryan  
Xelus22  
Albert Y  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
yiancar  
Jouke Witteveen  
Dmitry Nosachev  
Yutong Zhou  
Markus Weimar  
Jamal Bouajjaj  
JunZuloo  
Pascal Getreuer  
QMK Bot  
Tomasz Janeczko  
Daniel Kao  
Joel Challis  
Jason Dunsmore  
Nick Brassel  
>Added global current to all other issi drivers who don't have it (#17448)  
>[Keyboard] Flip encoder pads on basketweave (#17375)  
>[Bug] Fix issue with mousekey movement getting stuck (#17493)* [Bug] Fix issue with mousekey movement getting stuck

* Lint  
>Add Encoder Map Swap Hands config for boards that support both features (#17294)  
>Fix AVR I2C master 1ms timeout (#17174)* avr i2c_master: Fix 1ms timeouti2c_start() produces a minimum time_slice of 1ms for use as timeoutvalue.The timer granularity is 1ms, it is entirely possible for timer_countto tick up immediately after the last timer read and falsely triggertimeout with a '>= 1' comparison.* avr/drivers/i2c_master: Use timer_elapsed()  
>initial 24lc32a (#16990)  
>Wasdat: move some stuff to info.json (#17327)  
>Add keymap wrappers for introspection into the keymap. (#17229)* Introspection handlers for keymaps.

* Renaming.  
>Move SPLIT_HAND_PIN setup to split_pre_init (#17271)* Move SPLIT_HAND_PIN setup to split_pre_init

* doppelganger should use old behaviour

* Add comment for future

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Joel Challis <git@zvecr.com>  
>[Bug] Fix 3 speed mousekey mode (#17500)  
>Ensure that rgb+via compiles in all cases (#17355)  
>[Keymap] Update keymap for user jasondunsmore (#17312)  
>Refactor steno and add `STENO_PROTOCOL = [all|txbolt|geminipr]` (#17065)* Refactor steno into STENO_ENABLE_[ALL|GEMINI|BOLT]* Update stenography documentation* STENO_ENABLE_TXBOLT → STENO_ENABLE_BOLTTXBOLT is a better name but BOLT is more consistent with thepre-existing TX Bolt related constants, which all drop the "TX " prefix* Comments* STENO_ENABLE_[GEMINI|BOLT|ALL] → STENO_PROTOCOL = [geminipr|txbolt|all]* Add note on lacking V-USB support* Clear chord at the end of the switch(mode){send_steno_chord} block* Return true if NOEVENT* update_chord_xxx → add_xxx_key_to_chord* Enable the defines for all the protocols if STENO_PROTOCOL = all* Mention how to use `steno_set_mode`* Set the default steno protocol to "all"This is done so that existing keymaps invoking `steno_set_mode` don'tall suddenly break* Add data driver equivalents for stenography feature* Document format of serial steno packets(Thanks dnaq)* Add missing comma  
>Move more UART-based keyboards to use timeout correctly. (#17329)Co-authored-by: Tomasz Janeczko <tomasz.j@hey.com>  
>tap-dance: Restructure code and document in more detail (#16394)  
>Add missing bracket for VIA brightness scaling (#17354)  
>[Core] Add Raspberry Pi RP2040 support (#14877)* Disable RESET keycode because of naming conflicts

* Add Pico SDK as submodule

* Add RP2040 build support to QMK

* Adjust USB endpoint structs for RP2040

* Add RP2040 bootloader and double-tap reset routine

* Add generic and pro micro RP2040 boards

* Add RP2040 onekey keyboard

* Add WS2812 PIO DMA enabled driver and documentation

Supports regular and open-drain output configuration. RP2040 GPIOs are
sadly not 5V tolerant, so this is a bit use-less or needs extra hardware
or you take the risk to fry your hardware.

* Adjust SIO Driver for RP2040

* Adjust I2C Driver for RP2040

* Adjust SPI Driver for RP2040

* Add PIO serial driver and documentation

* Add general RP2040 documentation

* Apply suggestions from code review

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Do not enable PERMISSIVE_HOLD when TAPPING_TERM exceeds 500ms (#15674)  
>Update other_vscode.md (#17317)Bracket pair colorizer has been deprecated since it is now a native feature, and VIM Keymap no longer exists, so I removed those 2 links.  
>Fix lint errors (#17293)  
>Add support for large Mouse Reports (#16371)Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Atreus: add STM32F103C8T6 based variant (#16846)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>[Core] Mouse key kinetic mode fix (#17176)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Scale brigthness for VIA (#17352)Co-authored-by: yiancar <yiancar@gmail.com>  
>Make default layer size 16-bit (#15286)Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>[Keymap] Update XD75 keymap by markus (#17417)  
>Fix and add unit tests for Caps Word to work with Unicode Map, Auto Shift, Retro Shift. (#17284)* Fix Caps Word and Unicode Map* Tests for Caps Word + Auto Shift and Unicode Map.* Fix formatting* Add additional keyboard report expectation macrosThis commit defines five test utilities, EXPECT_REPORT, EXPECT_UNICODE,EXPECT_EMPTY_REPORT, EXPECT_ANY_REPORT and EXPECT_NO_REPORT for use withTestDriver.EXPECT_REPORT sets a gmock expectation that a given keyboard report willbe sent. For instance,  EXPECT_REPORT(driver, (KC_LSFT, KC_A));is shorthand for  EXPECT_CALL(driver,      send_keyboard_mock(KeyboardReport(KC_LSFT, KC_A)));EXPECT_UNICODE sets a gmock expectation that a given Unicode code pointwill be sent using UC_LNX input mode. For instance for U+2013,  EXPECT_UNICODE(driver, 0x2013);expects the sequence of keys:  "Ctrl+Shift+U, 2, 0, 1, 3, space".EXPECT_EMPTY_REPORT sets a gmock expectation that a given keyboardreport will be sent. For instance  EXPECT_EMPTY_REPORT(driver);expects a single report without keypresses or modifiers.EXPECT_ANY_REPORT sets a gmock expectation that a arbitrary keyboardreport will be sent, without matching its contents. For instance  EXPECT_ANY_REPORT(driver).Times(1);expects a single arbitrary keyboard report will be sent.EXPECT_NO_REPORT sets a gmock expectation that no keyboard report willbe sent at all.* Add tap_key() and tap_keys() to TestFixture.This commit adds a `tap_key(key)` method to TestFixture that taps agiven KeymapKey, optionally with a specified delay between press andrelease.Similarly, the method `tap_keys(key_a, key_b, key_c)` taps a sequence ofKeymapKeys.* Use EXPECT_REPORT, tap_keys, etc. in most tests.This commit uses EXPECT_REPORT, EXPECT_UNICODE, EXPECT_EMPTY_REPORT,EXPECT_NO_REPORT, tap_key() and tap_keys() test utilities from theprevious two commits in most tests. Particularly the EXPECT_REPORTmacro is frequently useful and makes a nice reduction in boilerplateneeded to express many tests.Co-authored-by: David Kosorin <david@kosorin.net>  
>[Split] Verify Split Pointing Device config (#17481)  
>[Keyboard] Handle timeout on UART for Redox Wireless (#17203)* Handle timeout on UART for Redox Wireless receiver-to-keyboard communication.

- This fixes the issue of a keyboard deadlocking on the first matrix
  scan with Redox Wireless keyboards

* Remove an explicit cast.

Co-authored-by: Tomasz Janeczko <tomasz.j@hey.com>  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-05  
Contributor(s):  
precondition  
zvecr  
Ryan  
Andrew Dunai  
Xelus22  
Albert Y  
Thomas Preisner  
Stefan Kerkmann  
Drashna Jaelre  
Minke Zhang  
Yorick Peterse  
Pascal Getreuer  
Josh Hinnebusch  
QMK Bot  
Joy Lee  
durken1  
Joel Challis  
Takeshi ISHII  
Jay Greco  
Nick Brassel  
>Merge point for 2022-05-28 Breaking Change  
>Fixup command sequencing for master/develop. (#17227)  
>Revert "Fix kinetic mouse mode (#16951)" (#17095)  
>Rename keymap_extras headers for consistency (#16939)  
>Fix kinetic mouse mode (#16951)Co-authored-by: Jan Christoph Ebersbach <jceb@e-jc.de>  
>[Keyboard] mj64 Increase LED count (#17194)  
>[Keyboard] Update YMDK Split 64 config (#16979)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Drashna update for post Q2 merge (#17241)  
>Make bootloader_jump for dualbank STM32 respect STM32_BOOTLOADER_DUAL_BANK_DELAY (#17178)  
>Update RMKB to support SNAP (#17042)  
>[Feature] Add support for multiple switchs/solenoids to Haptic Feedback engine (#15657)  
>Use TAP_HOLD_CAPS_DELAY for KC_LOCKING_CAPS_LOCK (#17099)  
>[Core] Add Caps Word feature to core (#16588)Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard][Fix] Change default keymap tilde to grv (#17185)  
>stub changelog  
>Removes terminal from QMK. (#17258)  
>Breaking changes for 2022q2. (#17221)  
>[Keyboard] H60 updates (#16999)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Branch point after 2022-05-28 Breaking Change.  
>Update pr_checklist.md (#17122)  
>Added support for Wb32fq95 (#16871)  
>Improve PS/2 mouse performance (#17111)  
>Update mtei's keymap (helix/rev2:five_rows, helix/pico:mtei, helix/rev3_5rows:five_rows) (#16966)* add users/mtei/key_blocks.h

This change does not alter the binary of the build result.

Moved common macro definitions in the following files to users/mtei/key_blocks.h.
 * keyboards/helix/rev2/keymaps/five_rows/keymap.c
 * keyboards/helix/rev3_5rows/keymaps/five_rows/keymap.c

* remove INIT_HELIX_OLED() in helix:five_rows

This change does not alter the binary of the build result.

* update helix/pico/keymaps/mtei/keymap.c

Changed helix/pico/keymaps/mtei/keymap.c to use users/mtei/key_blocks.h.

This change does not alter the binary of the build result.

* Remove old SSD1306OLED code from users/mtei/oled_display.c

This change does not alter the binary of the build result.

* add options ENABLE_COLEMAK, ENABLE_DVORAK and ENABLE_EUCALYN into five_rows/keymap.c

* add users/mtei/{config.h,rules.mk,user_featues.mk,user_options.mk}

* move layer_names[] from users/mtei/oled_display.c to keymaps/five_rows/keymap.c

* Update keyboards/helix/pico/keymaps/mtei/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/pico/keymaps/mtei/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/pico/keymaps/mtei/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev2/keymaps/five_rows/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev2/keymaps/five_rows/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev2/keymaps/five_rows/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev3_5rows/keymaps/five_rows/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev3_5rows/keymaps/five_rows/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/helix/rev3_5rows/keymaps/five_rows/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/cpp_map.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/cpp_map.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/debug_config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/debug_config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update users/mtei/layer_number_util.h

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Disable python formatting for some files  
>Check for ongoing transfers on the OUT endpoint (#16974)...when attempting to start a receiving USB transfer. Previously, we would
check on the IN endpoint which is the transmitting part of the USB endpoint.
This is wrong and lead to two USB transfers being started immediately
after each other in case of e.g. RAW HID endpoints:

1. When finishing an OUT transfer the low level USB driver calls the out_cb
callback, which in turn initiates another OUT transfer by calling
qmkusbDataReceived.

2. When the raw hid receive channel runs empty inside the raw_hid task,
another OUT transfer is started to potentially fill the channel again. This
happens by calling ibnotify.

Both events occur directly after each other, thus triggering the bug.  
>Merge remote-tracking branch 'origin/master' into develop  
>converter/usb_usb: remove surplus commas (#17024)  
>RESET -> QK_BOOT default keymaps (#17037)  
>[Core] Add Reboot keycode to core (#15990)  
>usb-usb converter: community layout support (#16773)  
>Enhancement and fixes of "Secure" feature (#16958)  
>Keymap FAQ updates (#17130)  
>Fix platforms/avr/drivers/ws2812.c (#17043)* Fix platforms/avr/drivers/ws2812.c

`platforms/avr/drivers/ws2812.c` has been changed to use `DDRx_ADDRESS()` and `PORTx_ADDRESS()` instead of `_SFR_IO8()` in #8646.  To use them, `#include <pin_defs.h>` is required.

 ## Error Log
* create new keyboard
```shell
bash-3.2$ qmk new-keyboard
Ψ Generating a new QMK keyboard directory

Name Your Keyboard Project
For more infomation, see:
https://docs.qmk.fm/#/hardware_keyboard_guidelines?id=naming-your-keyboardproject

Keyboard Name? ws2812_test
..................................
     36. WB32F3G71
Please enter your choice:  [12]
Ψ Created a new keyboard called ws2812_test.
Ψ To start working on things, `cd` into keyboards/ws2812_test,
Ψ or open the directory in your preferred text editor.
Ψ And build with qmk compile -kb ws2812_test -km default.
```
* Enable RGBLIGHT.
```shell
bash-3.2$ echo RGBLIGHT_ENABLE=yes >> ./keyboards/ws2812_test/rules.mk
bash-3.2$ echo '#define RGB_DI_PIN B1' >> ./keyboards/ws2812_test/config.h
bash-3.2$ echo '#define RGBLED_NUM 6' >> ./keyboards/ws2812_test/config.h
```
* Compile
```shell
bash-3.2$ make ws2812_test:default

QMK Firmware 0.16.9
Making ws2812_test with keymap default

avr-gcc (Homebrew AVR GCC 8.4.0_2) 8.4.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

.....................
Compiling: quantum/process_keycode/process_rgb.c                                                    [OK]
Compiling: platforms/avr/drivers/ws2812.c                                                          platforms/avr/drivers/ws2812.c: In function 'ws2812_setleds':
platforms/avr/drivers/ws2812.c:40:5: error: implicit declaration of function 'DDRx_ADDRESS' [-Werror=implicit-function-declaration]
     DDRx_ADDRESS(RGB_DI_PIN) |= pinmask(RGB_DI_PIN);
     ^~~~~~~~~~~~
In file included from <command-line>:
./keyboards/ws2812_test/config.h:21:20: error: 'B1' undeclared (first use in this function); did you mean 'PB1'?
 #define RGB_DI_PIN B1
                    ^~
platforms/avr/drivers/ws2812.c:40:18: note: in expansion of macro 'RGB_DI_PIN'
     DDRx_ADDRESS(RGB_DI_PIN) |= pinmask(RGB_DI_PIN);
                  ^~~~~~~~~~
./keyboards/ws2812_test/config.h:21:20: note: each undeclared identifier is reported only once for each function it appears in
 #define RGB_DI_PIN B1
                    ^~
platforms/avr/drivers/ws2812.c:40:18: note: in expansion of macro 'RGB_DI_PIN'
     DDRx_ADDRESS(RGB_DI_PIN) |= pinmask(RGB_DI_PIN);
                  ^~~~~~~~~~
platforms/avr/drivers/ws2812.c:42:47: error: implicit declaration of function 'PORTx_ADDRESS' [-Werror=implicit-function-declaration]
     uint8_t masklo = ~(pinmask(RGB_DI_PIN)) & PORTx_ADDRESS(RGB_DI_PIN);
                                               ^~~~~~~~~~~~~
In file included from /usr/local/Cellar/avr-gcc@8/8.4.0_2/avr/include/avr/io.h:99,
                 from /usr/local/Cellar/avr-gcc@8/8.4.0_2/avr/include/avr/interrupt.h:38,
                 from platforms/avr/drivers/ws2812.c:24:
platforms/avr/drivers/ws2812.c: In function 'ws2812_sendarray_mask':
./keyboards/ws2812_test/config.h:21:20: error: 'B1' undeclared (first use in this function); did you mean 'PB1'?
 #define RGB_DI_PIN B1
                    ^~
platforms/avr/drivers/ws2812.c:167:69: note: in expansion of macro 'RGB_DI_PIN'
                      : "r"(curbyte), "I"(_SFR_IO_ADDR(PORTx_ADDRESS(RGB_DI_PIN))), "r"(maskhi), "r"(masklo));
                                                                     ^~~~~~~~~~
cc1: all warnings being treated as errors
 [ERRORS]
 |
 |
 |
make[1]: *** [.build/obj_ws2812_test_default/ws2812.o] Error 1
make: *** [ws2812_test:default] Error 1
Make finished with errors
```

* change include order  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-04  
Contributor(s):  
4pplet  
Michał Szczepaniak  
peepeetee  
Ryan  
dexter93  
Sascha  
mudhead  
Simon Arlott  
Drashna Jaelre  
Jouke Witteveen  
Álvaro A. Volpato  
X-Bows Tech  
QMK Bot  
customMK  
Víctor Pont  
jack  
Joel Challis  
Takeshi ISHII  
Denis Savran  
Nick Brassel  
>Remove ARM pgm_read_word workaround in rgblight (#16961)  
>Joystick: Simplify report descriptor and clean up error messages (#16926)  
>[Keyboard] Fix Pegasus Hoof (2013) layout, matrix and pin assignment (#16042)  
>Add missing dead key LUTs for sendstring headers (#16929)  
>Implement XAP 'secure' core requirements (#16843)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>Add hacky via support for RGB Matrix (#16086)  
>Sendstring keycode overhaul (#16941)  
>move amj keyboards into amjkeyboard vendor folder (#15733)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[CI] Format code according to conventions (#16914)  
>boardsource/microdox V2 (#16569)  
>rgblight: Fix rgblight_blink_layer when multiple layers are active (#16824)  
>[Keyboard] SharkPCB release Beta compatibility (#16713)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Move disable_jtag to platforms (#16960)  
>rgblight: Add functions to stop blinking one or all but one layer (#16859)  
>Fix AVR backlight breathing: low brightness limit & exceeding breathing table max index (#16770)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: David Hoelscher <infinityis@users.noreply.github.com>  
>[Keyboard] KBD67 rev1 Caps Lock LED Fix (#16790)  
>Fix one-shot locked modifiers (#16114)* Fix state updates of one-shot locked modifiers

Activating additional one-shot locked modifiers removed previously enabled locked modifiers from the state.
`get_oneshot_locked_mods` returned zero when two or more one-shot locked modifiers were enabled and then one was disabled.

* Do not delete one-shot locked modifiers on a one-shot layer toggle

Non-locked one-shot modifiers are not removed so this behavior adds inconsistency.
Also the one-shot locked modifiers state was reset without unregistering any modifiers.  
>[Keymap] Change helix:froggy_106 keymap to use split_common (#16704)  
>Fixed usb read loops not reading until timeout (#16827)* the size variable was redeclared (hiding the variable of the outside scope) and therefore the while check was always false, so the compiler just removed the do while loop, but it would be better to read all data and only exit the task, after this is done  
>[Keymap] Fix build error `helix:five_rows` (#16847)  
>Chibios USB protocol: allow overriding RAW Capacity (#16339)  
>Merge remote-tracking branch 'origin/master' into develop  
>[Keyboard] Waffling60 - minor tweak, improve default behavior of caps lock indicator. (#16836)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: 4pplet <4pplet@protonmail.com>
Co-authored-by: 4pplet <stefan.ess@gmail.com>  
>[Bug] Fix matrix scan reporting interval (#16825)  
>Change helix:froggy keymap to use split_common (#16703)* create LAYOUT_half() macro into helix/rev2/keymaps/froggy/keymap.c

* Makes QMK standerd OLED driver used by the helix:froggy keymap switchable.

* Change helix:froggy keymap to use split_common  
>Add GET_TAPPING_TERM macro to reduce duplicate code (#16681)* Add GET_TAPPING_TERM macro to reduce duplicate code

The macro gives the right tapping term depending on whether per-key
tapping terms and/or dynamic tapping terms are enabled. Unnecessary
function calls and variable resolution are avoided.

Fixes #16472.

* Use GET_TAPPING_TERM for Cirque trackpads

Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>[Keyboard] Update X-Bows Keyboard (#16765)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Shulin <mumu@x-bows.com>  
>Add customizable snake and knight animation increments (#16337)  
>rgblight: Limit max repeat times in rgblight_blink_layer_repeat (#16860)  
>usb-usb converter: fix layout macros (#16769)  
>Quantum Painter (#10174)* Install dependencies before executing unit tests.

* Split out UTF-8 decoder.

* Fixup python formatting rules.

* Add documentation for QGF/QFF and the RLE format used.

* Add CLI commands for converting images and fonts.

* Add stub rules.mk for QP.

* Add stream type.

* Add base driver and comms interfaces.

* Add support for SPI, SPI+D/C comms drivers.

* Include <qp.h> when enabled.

* Add base support for SPI+D/C+RST panels, as well as concrete implementation of ST7789.

* Add support for GC9A01.

* Add support for ILI9341.

* Add support for ILI9163.

* Add support for SSD1351.

* Implement qp_setpixel, including pixdata buffer management.

* Implement qp_line.

* Implement qp_rect.

* Implement qp_circle.

* Implement qp_ellipse.

* Implement palette interpolation.

* Allow for streams to work with either flash or RAM.

* Image loading.

* Font loading.

* QGF palette loading.

* Progressive decoder of pixel data supporting Raw+RLE, 1-,2-,4-,8-bpp monochrome and palette-based images.

* Image drawing.

* Animations.

* Font rendering.

* Check against 256 colours, dump out the loaded palette if debugging enabled.

* Fix build.

* AVR is not the intended audience.

* `qmk format-c`

* Generation fix.

* First batch of docs.

* More docs and examples.

* Review comments.

* Public API documentation.  
>Helix/rev2 move to split common (#16723)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-03  
Contributor(s):  
an_achronism  
Ryan  
PhilipMourdjis  
github-actions[bot]  
Stefan Kerkmann  
Drashna Jaelre  
Spencer Peterson  
Erovia  
Gompa  
Pascal Getreuer  
QMK Bot  
jels  
ZiTe  
Umberto Baldi  
jack  
WJH  
Joel Challis  
Takeshi ISHII  
Yakbats  
Matthew Bautista  
kiilerix  
Pear  
Nick Brassel  
>Update the AL1 Vender ID (#16660)* Add via to AL1

* Updated number of rows and columns, and applied suggestions from code review

* Update Vender ID

Change the Vender ID for Triangle Lab to comply with the via PR checklist.  
>Fixup builds. (#16596)  
>VUSB - Use correct endpoint poll for VIA (#16691)  
>[Docs] Include ASCII diagram to explain tap-hold modes (#15873)* [Docs] Include ASCII diagram to explain tap-hold modes

* [Docs]: add examples for Default mode for Tap Hold

* [Docs] fix some wrong explanation in tap_hold.md  
>[Keyboard] Change vendor ID for sick68 keyboard (#16563)  
>[ Keychron K6 ] Migrate folder structure (#245)* WiP refactor

* Make iso version work

* better default map

* Tidy up mostly for white version

* Fix white/config.h pwm hacks

* Add default folder to fix linting issues

* Fix optical compile (untested)

* Make default keymaps closer to original

* Rename dexter keymap to stdvar

* Add saiko_iso keymap

* Update saiko keymap  
>[Keyboard] Add via keymap to AL1 (#16499)  
>keebio/iris: Add ifdefs to encoder callbacks (#16642)  
>Remove `send_unicode_hex_string()` (#16518)  
>Mousekeys fix (#16640)  
>[Core] Move `has_mouse_report_changed` function to `report.c`  (#16543)* Move 'has_mouse_report_changed' checkto report.c

* change mousekeys to use memcpy

* fix linting issues  
>Some docs improvements (#15845)* docs: clarify in "Keymap Overview" what LAYOUT is and isn't

It is not strictly necessary to use LAYOUT macros in keyboard.c, but it
is a convenient abstraction of hardware internals, allowing focus on the
physical keyboard layout.

From the C source point of view LAYOUT is macro with a parameter list,
which expands to a array of rows that each is an array with a keyboard
scancode for each column. A macro parameter list is not an array, and
even less a single array.

Perhaps no big deal, but also no reason to give incorrect hints.

* docs: update "Understanding QMK's Code" to current code structure introduced in 96e2b13d1de

This part of the documentation was no longer correct. I tried updating
it, mainly copy editing and using github links to latest release.

This is not trying to fix all problems, but just trying to fix some
problems while reusing much of the old phrases and structure.

* Update docs to use "qmk format-python"  
>[Keyboard westm68 rev1 and fine tune westm boards (#16528)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix use of ISSI driver config before init (#16493)  
>analog.[ch]: remove unnecessary includes (#16471)  
>Remove `NO_ACTION_MACRO` and `NO_ACTION_FUNCTION` from keyboard config.h (#16655)  
>[Core] Add compile/make macro to core (#15959)* [Core] Add KC_MAKE keycode to core

fix linting

fix testing error

work around test idiocyncracies

fix more lint

something something stupid tests

add doc

* updates based on feedback

* Add bad names

* Fixup docs

* semantics but cleaner

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Hide oneshot checks behind preprocessors

* Move no-compile option around

* Fix formatting

* make shift optional

* Make opt in

* fix formatting

* update send string function name

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>
Co-authored-by: Joel Challis <git@zvecr.com>  
>[Keyboard] Add "Uno" rev2 (#14071)* [Keyboard] Add "Uno" rev2

Adds support for the second revision of Uno, courtesy of @Snipeye.

* Update keyboards/uno/rev2/rules.mk

* Update keyboards/uno/rev1/rules.mk

* Update keyboards/uno/uno.h

* Update keyboards/uno/rev2/rules.mk

* Update keyboards/uno/rev1/rules.mk

* Update keyboards/uno/keymaps/demo/keymap.c

* Update keyboards/uno/keymaps/demo/keymap.c

* Update keyboards/uno/keymaps/demo/keymap.c

* Update keyboards/uno/rev2/rules.mk

* Update keyboards/uno/rev1/rules.mk

* Align rules.mk comments

* Update keyboards/uno/info.json

* Update keyboards/uno/rev1/config.h

* Update keyboards/uno/rev2/config.h

* Update keyboards/uno/rev2/config.h

* Update keyboards/uno/rev2/config.h

* Update keyboards/uno/rev1/config.h  
>[Bug] fix v-usb connection enumeration, ifdef workaround (#16511)Co-authored-by: Joel Challis <git@zvecr.com>  
>Convert Wasdat Code custom matrix to SN74x138 driver (#16257)  
>Add SN74x154 driver and convert AL1 custom matrix (#16331)  
>CLI: Add 'via2json' subcommand (#16468)  
>Fix missing definition for non-encoder case. (#16593)  
>Fix flipped One Shot logic (#16617)  
>USB-USB converter cleanup (#16618)  
>Remove `matrix_key_count()` (#16603)* Remove `matrix_key_count()`

* Remove `matrix_bitpop()`  
>Change 'helix/rev2:default' setting to use split_common (#16432)* add licenses message to helix/rev2 files

* Minimize the processing of helix/rev2/local_features.mk

* Changed helix/rev2 default setting to use split_common

* fix helix/rev2:edvorakjp build error

* Remove unnecessary '#include' from keymap.c

* helix keymaps Workaround for build errors. five_rows_jis, fraanrosi, froggy, froggy_106, yshrsmz

* Revert "fix helix/rev2:edvorakjp build error"

This reverts commit 731dbbe15155b3efe2ff9f5ad61c7d0cf529e837.
Separated into a single PR #16433.

* Revert "Changed helix/rev2 default setting to use split_common"

This reverts commit e76dbd7762e06e0781ee004213878b1a5029fa98.

* add 'SPLIT_*_STATE_ENABLE' into helix/rev2/config.h

* Revert "helix keymaps Workaround for build errors. five_rows_jis, fraanrosi, froggy, froggy_106, yshrsmz"

This reverts commit 9b316c1c6a532f908f2ac430233089797ce7c794.

* change helix:default to use split_common

* change helix:five_rows to use split_common

* add comment into helix/rev2/rules.mk

* change helix:led_test to use split_common  
>yugo_m enhancement: include all available key positions (#16216)* yugo_m enhancement to include all available key positions in matrix  
>Add support for encoder mapping. (#13286)  
>Move keyboard USB IDs and strings to data driven: 0-9 (#16481)  
>MS Sculpt Mobile refactor (#16038)  
>Update pr_checklist.md (#16484)Update readme.md template link from https://github.com/qmk/qmk_firmware/blob/master/data/templates/avr/readme.md to https://github.com/qmk/qmk_firmware/blob/master/data/templates/keyboard/readme.md  
>Merge remote-tracking branch 'origin/master' into develop  
>Fix oneshot toggle logic (#16630)* Fix oneshot toggle logic

* Enable oneshots by default

* Decrement eeconfig magic number due to eeconfig changes  
>Rename TICK to TICK_EVENT to prevent naming conflicts (#16649)  
>Joystick feature updates (#16732)* Joystick feature updates

* Move new functions to joystick.h

* Docs  
>[Bug] Rename has_mouse_report_changed parameters (#16417)Fixes compilation issues when bluetooth is enabled, due to issues 
with cpp used by bluetooth code. 

Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] LFK78 VIA support and Update (#16502)  
>Merge remote-tracking branch 'origin/sn32_master' into sn32_master_openrgb  
>[Keymap] Drashna Mouse keys and oled updates (#16556)  
>Asymmetric encoders, encoder tests. (#16068)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-02  
Contributor(s):  
Joakim Tufvegren  
precondition  
zvecr  
Ryan  
dexter93  
Xelus22  
github-actions[bot]  
Thomas Weißschuh  
James Young  
yiancar  
L. K. Post  
Drashna Jaelre  
Dasky  
fauxpark  
Jouke Witteveen  
Desprez Jean-Marc  
jpe230  
Max Rumpf  
Danny  
Dimitris Mantzouranis  
QMK Bot  
Thomas Mørch  
MasterSpoon  
TerryMathews  
Drashna Jael're  
stdvar  
jack  
IskandarMa  
Joel Challis  
Takeshi ISHII  
joedinkle  
jackytrabbit  
Nick Brassel  
>Helix/pico move to split_common (#16418)  
>Remove 1k USB_POLLING_INTERVAL_MS config from keyboards and default-ish keymaps (#16448)* Remove 1k USB_POLLING_INTERVAL_MS config from keyboard level

* Remove 1k USB_POLLING_INTERVAL_MS config from default|via keymaps  
>Merge remote-tracking branch 'origin/develop'  
>Modify the output of the size checks. (#16290)  
>[ Keychron K8 ] Migrate folder structure (#205)* Add support for mac (with dipswitch)

Add mac layout for k8 ansi

Updated special keycodes to replicate official K8 firmware

* Add RGB effects, and via rgb support

* Fixing build errors

* Fix LED assignments on iso

* Different usb pid for each layout

* Moving mac / win to comon file for all layouts

* Move usb VID to main config.h

* Replace KC_TRNS in default km

* review fixes

* Reformatting tabs to spaces

* Remove defines in config

Co-authored-by: Thomas Bowman Mørch <thomas.git@bowmo.dk>  
>Merge remote-tracking branch 'upstream/master' into develop  
>Fix slashes in build_full_test.mk (#16300)  
>[Keychron K12] Add keyboard (#221)* [Keychron K12] Welcome to the family

* k12: add via json

* k12: fix info.json

* k12: if no variant specified, build ansi

* k12: update readme

* k12: move RESET to fn2

* k12: fix OS switch

* k12: more keymap fixes

* k12: fix the gpio  
>rart67m: move OLED and WPM code to default keymap (#16403)* rart67m: move OLED and WPM code to default keymap

* Apply suggestions from code review

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Joel Challis <git@zvecr.com>  
>Don't make EEPROM size assumptions with dynamic keymaps. (#16054)* Don't make EEPROM size assumptions with dynamic keymaps.

* Add support for checking against emulated flash, error out if someone attempts to build a board without specifying EEPROM size.

* Reorder defines so that MCU is considered last.

* Refactor EEPROM definitions for simplicity.

* Fix max sizing of kabedon/kabedon980.

* Fix max sizing of mechlovin/olly/jf.

* Fix unit tests.

* Review comments, add messages with values during build failures.  
>Format code according to conventions (#16419)  
>[Keychron K7] Migrate to new folder structure  
>Migrate more makefile utilities to builddefs sub-directory (#16002)  
>[Keychron K8] initial keychron k8 cleanup (#198)* initial keychron k8 cleanup

* fix rgb positioning for ansi

* fix optical matrix offset by one on first row

* fix up iso positioning

* move json files

* fix up modifiers for RGB matrix

* If no variant specified, build ansi

* Take advantage of community layouts

* Take advantage of community layouts 2

* Take advantage of community layouts 3

* Take advantage of community layouts 4

* Take advantage of community layouts 5

* Layout updates

* Layout updates 2

* Layout updates 3

* Layout updates 4

Co-authored-by: dexter93 <d3xter93@gmail.com>  
>[Bug] Re-add call to `suspend_power_down_kb()` (#16382)  
>[Keymap] Fix OLED font path in default Rhymestone keymap (#16197)  
>[ Keychron K3 ] Migrate folder structure (#225)* Migrate folder structure for the Keychron K3

* k3: remove remove nonstandard keycode in default km, remove sleep fn

Co-authored-by: Jpe230 <jp.ramangulo@gmail.com>  
>[Docs] feature_macro.md: minor formatting fix (#16205)  
>Pass in the keyrecord_t of the dual-role/tapping key when calling per-key tap hold functions (#15938)* Replace keyp by &tapping_key in the record arg of per-key tap hold funcs

* Replace NULL by &(keyrecord_t){} in 2nd arg of get_tapping_term  
>Start develop for 2022q2  
>maxr1998/pulse4k: Move Combo code to keymap level (#16301)* maxr1998/pulse4k: Move Combo code to keymap level

* Reorder code  
>KBDfans KBD19x: add LAYOUT_iso (#16240)  
>Standardise error output. (#16220)  
>[Keyboard] Added keymaps for SPRH and update encoder (#16098)  
>Various fixes for matrix _RIGHT handling (#16292)* Various fixes for matrix _RIGHT handling

* clang  
>Add RGB matrix & LED Matrix support for IS31FL3742A, IS31FL3743A, IS31FL3745, IS31FL3746A (#14989)Co-authored-by: Xelus22 <17491233+Xelus22@users.noreply.github.com>  
>[Docs] pr checklist: update doc hyperlinks to relative ones and use IDs (#16263)  
>LFKeyboards Mini1800: refactor into revisions (#16260)* fork Mini1800 into reva and revc versions

* update info.json

- apply friendly formatting
- update maintainer value

* update keymap rules.mk formatting

- align inline comments
- convert tabs to spaces

* align keymap rules.mk files to QMK template

* move common keymap rules.mk settings to revision level

* info.json: correct key sequence

* align revision rules.mk files to QMK template

* clean up revision rules.mk files

* add readme files for each revision

* correct USB Product string

* remove post_rules.mk files

The internal settings were commented out, so the files actually don't do anything.

* edit Bootloader instructions on main readme

* move non-assignment rules to post_rules.mk

* add inline comments for NKRO_ENABLE per fauxpark  
>Fixup bootloaders. (#16256)  
>Format code according to conventions (#16322)  
>Add layout change callbacks to VIA (#16087)* Add layout change callbacks to VIA

* Update worklouder example  
>[Bug] Fix layer_state restoration at end of dynamic macro feature (#16230)  
>260: switch to LED instead of RGB MATRIX (#231)* 260: use the LED MATRIX

* 260: fix the dead cols

* 260: enable the correct channels

* 260: hack around the RAM limitations

* We can't avoid the RAM issues, so hack it up

* rename the driver and cleanup

* please the linter

* move the halconfig overrides in keyboard level

not all 26x use the pwm driver

* more pretty-fu  
>Format code according to conventions (#16421)  
>[Keyboard] Add Kyria rev. 2 (#16178)  
>[keyboard] DC01 i2c timeout fix (#16392)  
>Remove default pointing device driver. (#16190)* remove custom as default

* add missing pointing_device_driver to rules.mk

* Update docs  
>Update outputselect to use platform connected state API (#16185)  
>Changelog 2022q1 (#16380)* Initial changelog pass

* update generate-develop-pr-list content

* Fix bad word-ness

* Fix generate-develop-pr-list ignores

* Update docs/ChangeLog/20220226.md

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>HACK: DIRTY: make it work with mac osthis is a wokaround. Need to fix the timer handling  
>Add encoder defaults for Keebio boards (#16398)* Add BDN9 encoder defaults

* Add DSP40 encoder default

* Add FoldKB encoder defaults

* Add Iris encoder defaults

* Update Iris Rev. 6 encoder orientation

* Add KBO-5000 encoder defaults

* Add Quefrency encoder defaults

* Add Sinc encoder defaults

* Add Stick encoder defaults

* Remove encoder settings from VIA keymaps  
>Merge remote-tracking branch 'origin/master' into develop  
>Initial migration of suspend callbacks (#16067)* Initial migration of suspend logic

* Add header  
>Update the support for lazydesigners/dimple (#14797)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add SN74x138 demultiplexer driver (#16217)  
>Fix a potential bug in encoder_init(). (#16372)After executing `setPinInputHigh(pin)`, it is necessary to wait for the charging time to read from the corresponding pin. This is the same as requiring `matrix_output_unselect_delay()` after doing `unselect_row()` in matrix.c.  
>[Docs] Address some typos (also in moonlander matrix.c) (#16248)* [Docs] Fix repeated words

* [Keyboard] Fix moonlander output

The left/right orientation differs from Ergodox EZ.  
>Merge remote-tracking branch 'origin/sn32_master' into sn32_master_openrgb  
>add 'info_config.h' into docs/hardware_keyboard_guidelines.md (#16247)Added info_config.h added in #10817 to the include order description of config.h.  
>[Keyboard] TKC Portico75 (#15114)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Drashna Jael're <drashna@live.com>  
>ChibiOS: add support for HID Programmable Buttons (#15787)* ChibiOS: add support for HID Programmable Buttons

Fixes #15596

* Enable SHARED_ENDPOINT when PROGRAMMABLE_BUTTON is enabled

The Programmable Button driver expects the shared EP to be enabled.
So enforce this invariant.  
>Align existing pca9555 driver to better match mcp23018 API (#16277)  
>Add support for driving unselected row/col. (#16278)  
>[Keyboard] Convert Maxr1998/Phoebe to use info.json where possible (#16309)  
>Initial pass at data driven new-keyboard subcommand (#12795)* Initial pass at a data driven keyboard subcommand

* format

* lint

* Handle bootloader now its mandatory  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2022-01  
Contributor(s):  
Bartosz Nowak  
Alex Grover  
mechlovin  
Will Winder  
Ryan  
dexter93  
Ga68  
Albert Y  
Mewp  
IsaacDynamo  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
Alabastard-64  
Eric Gebhart  
KraXen72  
Álvaro A. Volpato  
Tate  
uqs  
dnaq  
Ryan Hausen  
Reibl János Dániel  
QMK Bot  
Dimitris Mantzouranis  
chance  
Tuk Bredsdorff  
Alan Pocklington  
Drashna Jael're  
Pete Sevander  
IskandarMa  
Joel Challis  
Leo Batyuk  
Nick Brassel  
>Align location of some host led logic (#15954)* Align location of host led logic

* Move more

* align ifdefs

* Fix up includes

* Move callback defs

* Convert comment to build message  
>Adjust tap_code16 to account for TAP_HOLD_CAPS_DELAY (#15635)Co-authored-by: Ga68 <github.ga68.e@grxme.com>  
>Sonix SN32 series support  
>[Keyboard] Fix suspend issues on ergodox_ez. (#15300)Co-authored-by: Mewp <git@mewp.pl>  
>Combo `TAP_CODE_DELAY` and `clear_weak_mods` (#15866)  
>Keychron K*: restructure (#184)* Keychron K*: restructure

* move usb stuff to usb

* cleanup whitespaces

* bump debounce to 5 on all rgb keychron

* keychron: add via json

* cleanup via json + add missing  
>Fix BACKLIGHT_CAPS_LOCK warning (#15999)* Fix BACKLIGHT_CAPS_LOCK warning

* align defs  
>Relocate matrix_scan_quantum tasks (#15882)* Move matrix_scan_quantum tasks

* Fix tests

* Fix up missing refs  
>fixed typo in orange HSV colors decalartion (#15976)  
>Fix keymap.json macro example (#15567)  
>Unify the key up/down behaviour of RGB keycodes (#15730)  
>Default EEPROM implementation should be transient when not implemented. Removed the equivalent eeprom_teensy fallback. (#16020)  
>[Keymap] Drashna's OLED rewrite (#15981)  
>Remove `action_function()` from LFKeyboards boards (#15993)  
>update the Chinese translation based on the latest English version (#14924)Co-authored-by: peepeetee <43021794+peepeetee@users.noreply.github.com>
Co-authored-by: Joy Lee <chang.li@westberrytech.com>
Co-authored-by: LitoMore <LitoMore@users.noreply.github.com>
Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>  
>[Keyboard] Fix inverted ploopy trackball (#15790)  
>sn32 shared matrix drivers: define flags  
>[Keyboard] Switch a_dux, cradio and ferris to split_3x5_2 (#15850)  
>keyhive sofle rgb: fix configuration. (#15339)* keyhive sofle rgb: fix configuration.

* Add Colemak-DH and cycle layer keycode.

* Fix indentation.

* Add PLACEHOLDER for better readability.

* Fix breaking changes.

* Just one colemak.

* PR Cleanup

* Use NO_PIN definition instead of C7
* Define animations individually
* Remove via json file and update documentation
* Reduce LED brightness, one of the animations caused a crash

* More PR feedback.

* Better credit.
* Disable NKRO.

* Cleanup RGB configuration.

* animations defined in keymap.

* Update keyboards/sofle/keyhive/readme.md

* PR Feedback.

* Update phrasing from template.

* Disable RGBLIGHT_ENABLE in keymap for better compatibility with default keymap.

* Set a default animation.

* Use default in keyboard readme.

* Update keyboards/sofle/keyhive/info.json

* Move via specific layout into via keymap.  
>[Core] ChibiOS: shorten USB disconnect state on boot to 50ms (#15805)  
>[Keymap] Fix onekey oled keymap (#15751)  
>[Bug] Fix hack for chibiOS reset name (#15984)  
>Format code according to conventions (#16110)  
>TEMP: HACK: Fixed issue that cause Keychron C1 White github Action build to be non-functional (#192)  
>[Keymap] Adding Frosty Flake VIA keymap (#13211)* updated my personal layouts

* added Artix to install script

* setting up for PR

* added Artix to install script

* Created frosty flake via keymap.c

Created the default VIA keymap.c file for the Frosty Flake controller

* Create rules.mk

* add #define DYNAMIC_KEYMAP_LAYER_COUNT 3

* Update keymap.c

* Delete keyboards/tada68/keymaps/trashcat directory

* Create keymap.c

* Create README.md

* Create rules.mk

* Delete keyboards/whitefox/keymaps/trashcat directory

* Update qmk_install.sh

* Rename README.md to readme.md

* Update keymap.c

* Update keymap.c

* Apply suggestions from code review  
>CU65: Fix VIA keymap (#16062)  
>Rip out old macro and action_function system (#16025)* Rip out old macro and action_function system

* Update quantum/action_util.c

Co-authored-by: Joel Challis <git@zvecr.com>  
>[Keyboard] Code consistency updates for CRKBD (#15779)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] add Haus PCB (#12434)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove community-supported keyboards list from readme (#15957)  
>[Keymap] AJP10304 layout, add Colemak-DHm layer (#15582)  
>Add Sonix SN32 keyboards  
>[Bug] Fix compilation issues for led indicators (#16001)  
>Fix build failures for `mschwingen/modelm` (#15987)  
>Add some clarity regarding new board definitions (#16018)  
>Fixes for bootloader refactor build failures (#15638)  
>Rename some Quantum keycodes (#15968)* Rename some Quantum keycodes

* Tweak EEPROM clear and debug keycode short aliases  
>Slight tidy up of keyboard task loop (#15725)  
>Add PMW3389 optical sensor Support (Updated) (#15740)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keymap] ericgebhart keymap and userspace updates (#15727)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>
Co-authored-by: Drashna Jael're <drashna@live.com>  
>Relocate matrix_init_quantum content (#15953)* Relocate matrix_init_quantum content

* Update include order

* Fix cherry pick from 15722  
>[Docs] Update feature_tap_dance.md (#14931)  
>Workaround in Makefile for recursive rule matching (#15988)* Bodge for recursive rule matching

* Bodge for recursive rule matching - force python3

* Tidy up  
>[Keymap] Add media keys to default UT47.2 keymap (#15893)  
>Various Makefile optimisations (#16015)  
>Merge remote-tracking branch 'kasper/openrgb' into sn32_master_openrgb  
>CLI: Parse USB device version BCD (#14580)* CLI: Parse USB device version BCD

* Apply suggestions  
>Merge remote-tracking branch 'origin/master' into develop  
>[Keymap] Add oled improvements and cnano keymap for drashna (#16133)  
>[Keyboard] Fix compile error caused by variable exclusion on Moonlander (#15860)  
>Migrate crkbd/soundmonster to split common, fix OLED and RGB matrix (#15717)Co-authored-by: Leo B <leo.the.soundmonster@gmail.com>  
>[Docs] Note the order of enumerated custom keycodes (#15706)Co-authored-by: filterpaper <filterpaper@localhost>  
>Fixes for slovak language-specific keycodes (#16019)  
>Revert "TEMP: HACK: Fixed issue that cause Keychron C1 White github Action build to be non-functional (#192)"This reverts commit 5216c4d80c710dc3991fbe424584d13b3e44ee7f.  
>[Keymap] Misc userspace and keymap improvements (#15844)  
>[Keyboard] Add keymap and settings for dactyl_manuform 6x6_5 thumb (#15526)* Add dactyl manu 6x6 with stm32 support and 5thumb cluster

* Add review changes

* Add license to new files

* Fix enums for custom keymap

* Readme update

* Fix readme to follow one from template

* Add missing licence to files

* Update keyboards/handwired/dactyl_manuform/6x6/blackpill_f411/rules.mk

* Update keyboards/handwired/dactyl_manuform/6x6/blackpill_f411/rules.mk

* Remove readme from onekey keyboard

* Make separate macro for 5thumb  
>[Bug] Remove config.h include in dynamic_keymap.c (#15886)  
>New combo configuration options (#15083)Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>  
>eol=lf, where appropriate (#15752)  
>Enable a default task throttle for split pointing. (#15925)  
>[Keyboard] Adds Elongate Revision Delta PCB support (#15498)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Rename `AdafruitBLE` to `BluefruitLE` (#16127)  
>Update pmw3360 comments to match the datasheet better, fix delays. (#15682)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-12  
Contributor(s):  
J.Flanagan  
mechlovin  
peepeetee  
Ryan  
ILWrites  
-pacer-  
Albert Y  
WestM  
jolofsor  
IsaacDynamo  
thesecretmaster  
James Young  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
Chad Austin  
Elliot Powell  
Runheme  
fauxpark  
Álvaro A. Volpato  
devilzmods  
Domanic Calleja  
vectorstorm  
Buttenup  
sotoba  
Pekaso  
Wyatt Neal  
X-Bows Tech  
QMK Bot  
billybraga  
Fernando Rodrigues  
Evelien Dekkers  
Drashna Jael're  
Joel Challis  
Paul Scheikl  
Jay Greco  
Jonathan Rascher  
Andrew-Fahmy  
Koobaczech  
Yoichiro Tanaka  
Ibnu Daru Aji  
>Remove Deprecated USB Polling comment from vusb.c (#15420)  
>Moved matrix driver for SN32F26x to drivers/sn32. Moved SN32F260_defines.h to chibios-contrib. Updated Keychron C1 white and C2 white to use the shared driver  
>Add support for the crkbd r2g by mechboards (#15283)* r2g folder groundwork

* Default mb keymap featuring mb logos

* Migrate Oled to keyboard folder

* Move rules configs to support config better

* update readmes

* Liscnece update

* Update config and fix issues caused by redef errs

* funciton name adjusts, define specific rgb modes

* move default oled font to postconfig

* update oled in line with develop merge

* fix return value

* Add some default rgb matrix defines

* del ugfx

* remove #include <stdio.h>  
>[Keyboard] Adding Charon keyboard to Charue family (#15190)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Convert some more boards to Matrix Lite (#15489)  
>[Keyboard] Add jolofsor folder and denial75 subfolder under QMK keyboards (#15334)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Merge remote-tracking branch 'upstream/master' into develop  
>Atom47 led fix (#15272)* Define pin states for leds

* Enable backlight in rules.mk  
>[Keyboard] Add 4x4 and 5x5 40percentclub boards + Unique VIDs (#15465)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Migrate serial_uart usages to UART driver (#15479)* Migrate Thermal Printer feature to UART driver

* Migrate 40percentclub UT47 to UART driver

* Migrate Centromere to UART driver

* Migrate Chimera Ergo to UART driver

* Migrate Chimera Let's Split to UART driver

* Migrate Chimera Ortho to UART driver

* Migrate Chimera Ortho Plus to UART driver

* Migrate Comet46 to UART driver

* Migrate Palm USB converter to UART driver

* Migrate Sun USB converter to UART driver

* Migrate Dichotomy to UART driver

* Migrate Honeycomb to UART driver

* Migrate Mitosis to UART driver

* Migrate Redox W to UART driver

* Migrate Uni660 to UART driver

* Migrate Telophase to UART driver  
>Add missing define for unicode common (#15416)  
>Add Superlyra keyboard + group with Lyra under new directory (#14955)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Rename Layout Macros for TKLs with F13 keys (#15361)* dyz/dyz_tkl: rename F13 layouts

- rename LAYOUT_tkl_ansi_f13 to LAYOUT_tkl_f13_ansi
- rename LAYOUT_tkl_iso_f13 to LAYOUT_tkl_f13_iso

* kopibeng/mnk88: rename F13 layouts

- rename LAYOUT_tkl_ansi_f13 to LAYOUT_tkl_f13_ansi
- rename LAYOUT_tkl_ansi_tsangan_f13 to LAYOUT_tkl_f13_ansi_tsangan
- rename LAYOUT_tkl_iso_f13 to LAYOUT_tkl_f13_iso
- rename LAYOUT_tkl_iso_tsangan_f13 to LAYOUT_tkl_f13_iso_tsangan

* mechlovin/infinity88: rename F13 layouts

- rename LAYOUT_tkl_ansi_f13 to LAYOUT_tkl_f13_ansi
- rename LAYOUT_tkl_iso_f13 to LAYOUT_tkl_f13_iso

* mechlovin/infinity88: rename F13 layouts

- rename LAYOUT_tkl_ansi_f13 to LAYOUT_tkl_f13_ansi
- rename LAYOUT_tkl_ansi_tsangan_f13 to LAYOUT_tkl_f13_ansi_tsangan
- rename LAYOUT_tkl_iso_f13 to LAYOUT_tkl_f13_iso
- rename LAYOUT_tkl_iso_tsangan_f13 to LAYOUT_tkl_f13_iso_tsangan  
>Convert ai03/orbit to SPLIT_KEYBOARD (#15340)  
>Convert not_so_minidox to SPLIT_KEYBOARD (#15306)  
>Make (un)register code functions weak (#15285)  
>Format code according to conventions (#15588)  
>[Keyboard] Update to ZSA Keyboards (#15644)  
>[Keyboard] Add LZ erGhost (#15451)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add ginkgo65hot (#15404)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Implement MAGIC_TOGGLE_CONTROL_CAPSLOCK (#15368)  
>[Keyboard] Fix bug in Moonlander functions (#15407)  
>[Keyboard] Fixed caps lock led pin for crazy_keyboard_68 (#15539)  
>Remove unnecessary backslash-escapes in default keymaps (#15472)* Remove unnecessary backslash-escapes in default keymaps

* Remove unnecessary backslash-escapes in via keymaps

* Remove unnecessary backslash-escapes in default-ish keymaps  
>[Keyboard] Remove locking support for Sweep (#15494)Co-authored-by: filterpaper <filterpaper@localhost>  
>Fix inverted gt and lt send_string mapping in canadian multilingual (#15487)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Billy Braga <bbraga@progi.com>  
>[Keyboard] Update K type (#15405)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Gurindam (#15540)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add bm60hsrgb_poker/rev2, a continuation of #15001 (#15103)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add test filter to 'qmk pytest' (#15432)* Add test filter to 'qmk pytest'

* Bodge for some test filters not resolving qmk

* Update docs  
>[Keyboard] Add Contender (#15403)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Update Fortitude60 and add VIA support (#15265)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] support for Stack Overflow The Key from Drop - adapted from @frap129 (#15520)* support for Stack Overflow The Key from Drop - adapted from @frap129

* addressing code review comments

there's still some issues related to LEDs so i think for now the best
course of action is to remove those items until we can get better
details on the assembly of the board.

* removing this on the correct branch

* cleaning up more code review comments, moving to simpler/common formats for maps

* it is a C not a G fool

* well, looks like you can do it this way too for booting/dfu

* fixing missing newline for gcc to be quiet

* removing busted links

* formatting to match current template

* Update keyboards/massdrop/thekey/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Andy Piper <andypiper@users.noreply.github.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Tidy up existing i2c_master implementations (#15376)* Move chibios defines out of header

* Make some avr defines internal  
>Fix build failure for UT47 (#15483)  
>Iron180 LED fix (#15411)  
>[Keyboard] Fix compilation issues for Ploopy Trackball classic (#15364)  
>[Keyboard] Add WestM (#15459)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Convert ergoinu to SPLIT_KEYBOARD (#15305)  
>[Keymap] Update bcat's keymaps/userspace to share logic, add OLED functionality, and set up one of my macropads for WFH (#14702)* Add script to build all bcat keymaps at once

* Move userspace RGB to separate source file

* Move layer handling logic into userspace

* Move keycap aliases into userspace

* Add OLED userspace library and Lily58 OLED setup

* Add Luna keyboard pet, generic OLED pet framework

Luna artwork and original implementation by HellSingCoder, licensed
under GPL v2.0.

See also: https://github.com/qmk/qmk_firmware/blob/6dfe915e26d7147e6c2bed495d3b01cf5b21e6ec/keyboards/sofle/keymaps/helltm/keymap.c

* Use OLED on bcat's Crkbd

I had to turn off a few unused features to address firmware size limits.

* Remove vestigial NK_TOGG keybindings

* Add post-render hook to OLED pet API

This enables OLED pets to draw custom widgets (e.g., LED indicator
status) on top of their animation frames.

* Add Isda keyboard pet

For future use on my Unicorne keyboard. Unicorn artwork by sparrow666,
licensed under GPL v2.0.

See also: https://opengameart.org/content/unicorn-2

* Replace OLED timeout implementation with custom

The default implementation never lets the OLED turn off if a continuous
animation is in progress. The custom one does.

* Move keyboard state for OLED functions into struct

No change in firmware size, but makes keymaps read a little nicer and
enables more functionality in OLED pets.

* Enable continuously running OLED pet (for Luna)

* Sync OLED state; enable Bootmagic only when needed

The new extensible split transport for Split Common finally allows OLED
on/off status to be synced between halves of the keyboard. :)

Unfortunately, this required disabling Bootmagic Lite to keep my Crkbd
under the firmware size limit. (I now after 28 bytes free on avr-gcc
version 8.5.0.) So now I'll enable Bootmagic only on keyboards that
actually require it, i.e., ones lacking an accessible reset button.

* Update 9-Key macropad keymap for working from home

* Remove includes redundant with quantum.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Simplify BCAT_OLED_PET makefile logic

* Swap some keys on my 9-Key macropad around

* Inline spurious variable in OLED code

* Remove max brightness that's now set by default

The default max brightness is only 120 rather than 150, but that might
actually fix some weirdness I've seen with bright white LED settings.

* Enable specific RGBLIGHT modes instead of default

The general trend these days seems to be enabling only the modes you
want, so I'm manually expanding the ones currently enabled by
RGBLIGHT_ANIMATIONS.

I'd like to try out the TWINKLE mode too, but it seems not to work at
all on ARM right now, and all my usable RGBLIGHT keebs are ARM boards.

* Reenable RGB_MATRIX animations after #15018

My Crkbd still has a reasonable amount of free space with these:
27974/28672 (97%, 698 bytes free). The RGB_MATRIX_KEYPRESSES effects
would put it over the firmware size limit, but I really don't ever use
those anyway.

* Use new get_u8_str function for WPM display

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>K.O.Y and German layout for several boards (#14991)* Added accent.

* Added keymap for 5x6 dactyl manuform on KOY layout

* Added xd75 folder that is not in the main repo anymore?

* Added keymap for naked48 on KOY layout

* Added keymap for splitreus62 on KOY layout

* Added keymap for Dactyl Manuform 4x6 with RGB LEDs and K.O,Y layout

* Fixed error where handedness was not correctly determined because of combining vbus pins of both controllers.

* Replaced dynamic macros bith backspace and delete.

* Changed detecting handedness from detecting usb communication to checking a wired pin. This avoids problems when booting the PC, where VBUS is already high, but no communication is happening -> both halves think they are not master.

* Update keyboards/handwired/dactyl_manuform/4x6/keymaps/scheiklp/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/naked48/keymaps/scheiklp/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/naked48/keymaps/scheiklp/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/naked48/keymaps/scheiklp/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keymap.c

Added copyright

* Update config.h

* Update rules.mk

* Updated files according to PR requests.

* Update keyboards/xd75/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/xd75/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/xd75/keymaps/default/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/xd75/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Removed duplicate code. Updated copyright info.

* Restored readme

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Custom matrix lite support for split keyboards (#14674)* Custom matrix lite support for split keyboards

* WIP: matrix -> matrix_common refactor

* Move matrix_post_scan() to matrix_common.c  
>Update feature_macros.md (#15026)* Update feature_macros.md

Added a link to the usage of SAFE_RANGE as this wasn't clear to me when I visited this page in isolation.

* Fix typo

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Fix some wrong keycode macros in locale mapping files (#15488)  
>Tidy up `SLEEP_LED_ENABLE` rules (#15362)  
>Generalize Unicode defines (#15409)  
>Merge remote-tracking branch 'origin/master' into develop  
>[Docs] Reorder functions in Understanding QMK (#15357)  
>Refactor `bootloader_jump()` implementations (#15450)* Refactor `bootloader_jump()` implementations

* Fix tests?

* Rename `atmel-samba` to `md-boot`  
>[Keyboard] Add Viktus Smolka (#15346)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Added BareDev keyboard (#15518)* Added BareDev keyboard

* Updated readme.md to reflect handwired directory

* Simplified keycodes for basic GUI + [KEY]  
>Migrate RN42 to UART driver and refactor (#15492)  
>[Core] Split support for pointing devices. (#15304)* Draft implementation

* formatting

* fix combined buttons

* remove pimoroni throttle

* sync pointing on a throttle loop with checksum

* no longer used

* doh

Co-authored-by: Drashna Jaelre <drashna@live.com>

* switch pimoroni to a cpi equivalent

* add cpi support

* allow user modification of seperate mouse reports

* a little tidy up

* add *_RIGHT defines.

* docs

* doxygen comments

* basic changelog

* clean up pimoroni

* small doc fixes

* Update docs/feature_pointing_device.md

Co-authored-by: Drashna Jaelre <drashna@live.com>

* performance tweak if side has usb

* Don't run init funtions on wrong side

* renamed some variables for consistency

* fix pimoroni typos

* Clamp instead of OR

* Promote combined values to uint16_t

* Update pointing_device.c

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[Core] Don't send keyboard reports that propagate no changes to the host  (#14065)  
>[keyboard] Update lighting effects on XBows board (#15358)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Shulin <mumu@x-bows.com>  
>Fixes potential wpm sampling overflow, along with code comment fixes (#15277)Co-authored-by: Trevor Powell <trevor@vectorstorm.com.au>  
>Tidy up NKRO_ENABLE rules (#15382)  
>Add 'capslock backlight' feature to Iron180 (#15462)* Add 'capslock backlight' capability to Iron180

* Update readme

* Revers CAPSLOCK_BACKLIGHT back to default  
>[Keyboard] Add KPrepublic BM60hsrgb/rev2 (#15177)acting in lieu of bdtc123

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove references to Makefile in keyboard-level rules.mk (#15427)  
>[Keyboard] Add Mode Eighty M80v2 PCB support (#15486)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add sym_defer_pr debouncer type (#14948)  
>[Keymap] Unicode and Pointing Device and Autocorect for drashna keymaps (#15415)  
>[Keyboard] Add Pearlboards boards to directory (#15005)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add KPrepublic BM60hsrgb_iso/rev2, acting in lieu of @bdtc123 (#15095)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Reorganization, cleanup and readmes for drashna code (#15617)  
>Fix up build options comments (#15463)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-11  
Contributor(s):  
Zach White  
HellTM  
precondition  
mechlovin  
MechMerlin  
yulei  
peepeetee  
Ryan  
fenuks  
Josh Johnson  
Vlad K  
Albert Y  
James Young  
Markus Fritsche  
Stefan Kerkmann  
Drashna Jaelre  
Isaac Elenbaas  
Mikkel Jeppesen  
Leon Omelan  
Hai-Ninh Dang  
Henré Botha  
Álvaro A. Volpato  
Balz Guenat  
jfescobar18  
uqs  
Erovia  
vectorstorm  
donicrosby  
kb-elmo  
Karl Shea  
Moritz  
QMK Bot  
Woody  
Joy Lee  
Drashna Jael're  
Purdea Andrei  
Matthew Dias  
lalalademaxiya1  
ryjelsum  
Joel Challis  
Ramon Imbao  
wheredoesyourmindgo  
Charly Delay  
Callum Hart  
WiZ.GG  
Nick Brassel  
>Merge remote-tracking branch 'upstream/master' into develop  
>[Keyboard] Fix keycode collision in craftwalk keymap (#15055)  
>Remove deprecated KEYMAP alias (#15037)* Remove deprecated KEYMAP alias

* Remove some KEYMAP references

* Remove some KEYMAP references  
>Fix up issues shown by clang-format of vusb (#15004)  
>define to AUTO_SHIFT_DISABLED_AT_STARTUP (#14201)Co-authored-by: agodinhost <agodinhost@globo.com>  
>Reimplements WPM feature to be smaller & precise (#13902)* Reimplements WPM feature.

 - Now calculates exact WPM over the last up to three seconds of typing.
 - WPM_SMOOTHING removed, as it's no longer needed.
 - WPM_SAMPLE_SECONDS added, to specify how long a period to average WPM
   over, set to 5 seconds by default.
 - WPM_SAMPLE_PERIODS added, to specify how many sampling buffers we'll
   use.  Each one uses one extra byte of space.  Having more will lead
   to smoother decay of WPM values.  Defaults to 50 (we're saving so
   many bytes of firmware space I felt like being extravagent, and this
   change is still a big size saving overall)
 - WPM_UNFILTERED option added (defaults to unset), which disables all
   filtering within the WPM feature.  This saves some space in the
   firmware and also reduces latency between typing and the WPM
   calculation measuring it.  (saves 70 bytes in my tests)
 - WPM_LAUNCH_CONTROL added (defaults to unset).  When typing begins
   while the current displayed WPM value is zero, the WPM calculation
   only considers the time elapsed since typing began, not the whole
   WPM_SAMPLE_SECONDS buffer.  The result of this is that the displayed
   WPM value much more rapidly reaches an accurate WPM value, even when
   results are being filtered. (costs 22 bytes in my tests)
 - Updates documentation to reflect changed options.

Saves about 900 bytes, in my tests, compared against the previous implementation,
with default settings.

* Apply suggestions from code review

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

Co-authored-by: Trevor Powell <trevor@vectorstorm.org>
Co-authored-by: Nick Brassel <nick@tzarc.org>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>[Bug] Revert backlight pins on function call (#15205)  
>Fix parallel builds w/ LTO on systems where make is not GNU make. (#13955)  
>Westberrytech pr (#14422)* Added support for WB32 MCU

* Modified eeprom_wb32.c

* Remove the eeprom_wb32-related code  
>Portal 66 Layout Macro Refactor (#15255)* soldered.h: use QMK 3-character notation

* soldered.h: add matrix diagram

* portal_66/soldered: rename LAYOUT_65_ansi_split_bs to LAYOUT_65_ansi_blocker_split_bs

* portal_66/soldered: rename LAYOUT_65_ansi to LAYOUT_65_ansi_blocker

* portal_66/soldered: rename LAYOUT_65_tsangan_split_bs to LAYOUT_65_ansi_blocker_tsangan_split_bs

* portal_66/soldered: rename LAYOUT_65_iso to LAYOUT_65_iso_blocker

* portal_66/soldered: add LAYOUT_65_iso_blocker_split_bs

* portal_66/soldered: add LAYOUT_65_iso_blocker_tsangan_split_bs

* portal_66/soldered: enable Community Layout support

* hotswap.h: use QMK 3-character notation

* hotswap.h: add matrix diagram

* portal_66/hotswap: rename LAYOUT to LAYOUT_65_ansi_blocker

* portal_66/hotswap: enable Community Layout support  
>Updates to drashna keymap and minor updates to tractyl manuform (#15101)  
>Fix bit loss in cie_lightness() when doing division to resolve #15331 (#15344)* Fix bit loss in cie_lightness() when doing division.

* Use the right types

* Format

Co-authored-by: zvecr <git@zvecr.com>  
>Added cancel_key_lock function (#15321)  
>Fix Rocketboard-16 QMK Configurator Implementation (#15028)* rename LAYOUT_default to LAYOUT

Only one layout is supported.

* refactor keymaps

- use short-form keycodes  
>add wait to unicode for win (#15061)Co-authored-by: Markus Fritsche <fritsche.markus@gmail.com>  
>Revert to old init order for host driver (#15029)* Partially revert 14888  
>[Keyboard] Add Meow65 PCB (#14937)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Revert "[Tests] Increase QMK test coverage (#13789)"This reverts commit b6054c0206609f3755f71d819643644d250288b0.  
>[Core] Remove matrix_is_modified() and debounce_is_active() (#15349)  
>Remove `BOOTMAGIC_ENABLE = lite` option (#15002)* remove BOOTMAGIC_ENABLE=lite setting

* change keyboard BOOTMAGIC_ENABLE rules

Edits keyboard-level instances of `BOOTMAGIC_ENABLE = lite` to `BOOTMAGIC_ENABLE = yes`.

* change keyboard BOOTMAGIC_ENABLE inline comments

Edits keyboard-level BOOTMAGIC_ENABLE inline comments to "Enable Bootmagic Lite".

* change keymap BOOTMAGIC_ENABLE rules

Edits keymap-level instances of `BOOTMAGIC_ENABLE = lite` to `BOOTMAGIC_ENABLE = yes`.

* change keymap BOOTMAGIC_ENABLE inline comments

Edits/adds keymap-level BOOTMAGIC_ENABLE inline comments to read "Enable Bootmagic Lite".

* change layout/user BOOTMAGIC_ENABLE rules/comments

Edits instances of `BOOTMAGIC_ENABLE = lite` to `BOOTMAGIC_ENABLE = yes`.

Edits/adds keymap-level BOOTMAGIC_ENABLE inline comments to read "Enable Bootmagic Lite".

* update non-rules.mk BOOTMAGIC_ENABLE references in keyboards/

* remove docs references to Full Bootmagic

* convert data-driven Bootmagic Lite instances

* remove Bootmagic Lite bodge from data-driven generation

* Merge remote-tracking branch 'upstream/develop' into rm/bootmagic-full_q4a

* update docs/ja/config_options.md per mtei

* update docs/faq_misc.md per mtei

Remove remaining Full Bootmagic reference.  
>[Keyboard] Add Nozbe Macropad (#14803)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>haptic: Feature to disable it when usb port is not configured or suspended. (#12692)This also add support for specifying a LED pin to indicate haptic status,
and also adds support for a haptic-enable pin, which is useful to turn off
the boost converter on the solenoid driver.  
>[Keyboard] Add Ziggurat keyboard (#15008)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add uint to char functions (#15244)* Add uint to char functions

* appease the all mighty lint

* Further appease Lint

* Update functions

* Add doxygen comment

* Update quantum/quantum.c

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Apply suggestions from code review

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Add declaration for get_numeric_string

* fix formatting and bug

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>New feature: `DYNAMIC_TAPPING_TERM_ENABLE` (#11036)* New feature: `DYNAMIC_TAPPING_TERM_ENABLE`

3 new quantum keys to configure the tapping term on the fly.

* Replace sprintf call in tapping_term_report by get_u16_str

* Replace tab with 4 spaces  
>[Bug] Revert Assymmetrical Split Encoder support (#12090) (#15311)* Revert "fix broken macro in transport.h (#15239)"

This reverts commit 06f18e22d9aff0afa4dce101a6a1b2cae5511365.

* Revert "Rework encoders to enable asymmetric split keyboards (#12090)"

This reverts commit 32215d5bff52262542a2f8d2a221b0303f02c019.  
>[Keyboard] Add Keebcats Dougal PCB (#15168)  
>[Core] Change OLED task function to be boolean (#14864)* [Core] Add kb level callbacks to OLED driver

* Update keyboards and keymaps

* Update docs

* Update userspace configs

* Add fix for my keymap ...

* update lefty  
>Move tmk_core/common/<plat> (#13918)  
>gcc10 LTO - Only specify adhlns assembler options at link time (#15115)* gcc10 LTO - Only specify adhlns assembler options at link time

* Default adhlns off?  
>add matrix abelx keyboard (#10968)* add matrix abelx keyboard

* Update keyboards/matrix/abelx/abelx.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* fixed rgb led pin issue

* Apply suggestions from code review

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/matrix/abelx/aw9523b.h

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/matrix/abelx/aw9523b.c

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/matrix/abelx/abelx.h

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/matrix/abelx/abelx.c

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* fixed board name

* Apply suggestions from code review

Co-authored-by: Nick Brassel <nick@tzarc.org>

* move led update from scan_kb to hoursekeeping_kb

* move led update from scan_kb to housekeeping_kb

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Fix last merge date (#15327)  
>Change default USB Polling rate to 1kHz (#15352)  
>[Keyboard] Add miniashen40 (#14238)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Docs] Clarify "nested" and "rolling" key sequences (#14655)  
>[Docs] Codify not using code from other keyboards in PRs (#15128)* [Docs] Codify not using code from other keyboards in PRs

* add additional comments  
>Fix additional board sizes for RGB Matrix (#15170)  
>Add needed include to pointing_device.c (#15167)  
>Update noroadsleft userspace and keymaps (2021-11-09) (#15099)  
>Fix build. (#15322)  
>Remove unnecessary ENCODER_DIRECTION_FLIP at keyboard level (#15342)  
>Add Retro Shift (Auto Shift for Tap Hold via Retro Tapping) and Custom Auto Shifts (#11059)* Add Retro Shift and Custom Auto Shifts

* Fix compilation errors with no RETRO_SHIFT value  
>CLI: Add 'cd' subcommand (#12584)* CLI: Add 'cd' subcommand

Go to your qmk_firmware dir with ease.

* Fix for Windows and do not run if already under QMK Home

* Make flake8 happy

* Fix prompt for Windows

* Make flake8 happy once again

* I'll get it right eventually

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Add subcommand to __init__.py and fixup after rebase

* Update Windows code to use milc's run

* Unify the subshell starting with os.execl

* Exit with error msg when output is redirected to non-TTY.

* Revert Windows-specific code

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add 40percent.club's 'polypad' PCB (#15158)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add Noxary Valhalla support (#15197)  
>Fixup #15029 (#15031)  
>[Keymap] Unicode and cursor sync - drashna keymap (#15328)  
>`qmk docs`: Run `docsify serve` if available (#15056)  
>Format code according to conventions (#15195)  
>[Keyboard] Sweep swap hand feature and pin documentation (#15264)Co-authored-by: filterpaper <filterpaper@localhost>  
>Add support for ISSI drivers on both sides of a split keyboard (#13842)* Gets RGB working on a split keyboard with IS31FL3733. Currently needs small tweak to re-enable WS2812

* Added helper function

* Trying to integrate the function

* Moved functionality into a macro

* Swapped conditional for a macro everywhere

* Tidying up

* More code cleanup

* Documentation updates

* Fixed formatting via linter

* Switching to a function from a macro

* Fixed compile error

* Fixing WS2812 behavior. UNTESTED.

* Updated documentation about the driver addresses.

* Fixed code for WS2812

* Trying to add in LED_MATRIX support

* Updated effects for LED matrix

* Updated third-party effect defines.

* Ran format-c on modified files

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Move to static inline. Avoids issues with gcc v8+

* Move helper function for LED_matrix to static inline to avoid issues with gcc v8+

Co-authored-by: Vlad Kvitnevskiy <vladkvit@outlook.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add support for deferred executors. (#14859)* Add support for deferred executors.

* More docs.

* Include from quantum.h

* Cleanup.

* Parameter checks

* Comments.

* qmk format-c

* I accidentally a few words.

* API name change.

* Apply suggestions from code review

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Review comments.

* qmk format-c

* Review comments.

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>[Keyboard] Teleport numpad (#14905)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Refactor new-keyboard to be python3.7 compatible (#14707)* Use copy_tree from distutils for python 3.7 support

* Bump python version in docs

* Changed new-keyboard to use printf-style format strings

* Use username for manunfacturer / maintainer

* Update lib/python/qmk/cli/new/keyboard.py

Co-authored-by: Zach White <skullydazed@drpepper.org>

Co-authored-by: Zach White <skullydazed@drpepper.org>  
>[Keyboard] Ploopy improvements (#15348)  
>Changelog 2021q4 (#15325)* Changelog.

* Remove the asymmetric encoder PR from listing due to revert.

* More docs

* More docs

* More docs

* Links to changelog, updated schedule, slotted in 2 weeks of testing at the end so that there's no ambiguity with PR merge dates.

* Clarify keyboard moves.

* Fix dates

* Sidebar

* Fixup dates.

* Fixup dates.

* Wording.  
>More headroom. (#15302)  
>[Keyboard] Add Chalice Support (#15106)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add layout options, hotswap version to portal 66 (#14719)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Require explicit enabling of RGB Matrix modes (#15018)  
>Format code according to conventions (#15193)  
>Update to ChibiOS 20.3.4, support builds against trunk (#14208)* Add support for building against ChibiOS svn/trunk.

* Swap to 21.6.x

* Update to latest branch revision as released version is broken.

* Updated configs.

* Conf updates.

* Updated ChibiOS

* Convert STM32L422 to actual L422 ChibiOS platform.

* Downgrade to 20.3.4 as ChibiOS 21.6.x is being aborted.

* Rollback L422-based boards.  
>Mechlovin Pisces Refactor (#15080)  
>Manually format develop (#15003)  
>[Bug] Fix missing variable for Backlight Breathing (#15199)* [Bug] Fix missing varaible for Backlight Breathing

* Better fix

* formatting  
>Rework encoders to enable asymmetric split keyboards (#12090)Co-authored-by: Balz Guenat <balz.guenat@siemens.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Merge remote-tracking branch 'origin/master' into develop  
>[Keyboard] Add Wete R2 (#14873)Co-authored-by: Ryan <fauxpark@gmail.com>  
>New Keyboard: TGR Jane CE (#14713)* move ce and v2ce into their own directories

* update copyright notices

* change LAYOUT macro names

* remove community layout support for the original layouts

* fix LAYOUT macro names

* change info.json for the common layouts

* fix tsangan LAYOUT

* fix layout all

* Update keyboards/tgr/jane/v2ce/keymaps/via/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/tgr/jane/v2ce/v2ce.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/tgr/jane/v2ce/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* remove unneeded file

* one more time for good measure

* Update keyboards/tgr/jane/v2ce/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/tgr/jane/v2ce/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Tests] Increase QMK test coverage (#13789)* Add per-test keymaps

* Add better trace and info logs for failed unit-tests

* Add layer state assertion with tracing message

* Use individual test binaries configuration options

* Add basic qmk functionality tests

* Add tap hold configurations tests

* Add auto shift tests

* `qmk format-c

* Fix tests

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Tidy up adjustable ws2812 timing (#15299)  
>Remove complex `fn_actions` macros (#14662)* Remove complex `fn_actions` macros

* Remove additional `KC_FN*` instances  
>[Keyboard] Lime by HellTM (#14710)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Made AVR backlight pwm resolution configurable (#7521)* Made static backlight pwm resolution configurable

* Made breathing backlighting configurable too

* Finished my ifdef

* Ran clang-format

* Added missing semi-colon

* Solved weird behaviour by right-shifting the right amount

* Made breathing period scaled on actual pwm frequency

* Made the low end deadzone scaled on the top value

* Moved 'pwm_frequency' declaration outside ifdef

* Fixed 'never used' error

* Fixed 'never used' error

* Fixed breathing ISR to 120Hz

* Removed pwm_frequency constant
Constant is no longer needed since running the breathing ISR at a fixed 120Hz

* Re-add brightness limiting

* re-introduce scaling  
>Update UART driver API (#14839)* Add uart_puts() and uart_gets()

* Add some docs

* Rework API

* Formatting

* Update docs/uart_driver.md

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Simplify a uart_write() loop

* Update platforms/avr/drivers/uart.c

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Joel Challis <git@zvecr.com>  
>[Keyboard] Fix call to `pointing_device_handle_buttons` (#15313)  
>[Keyboard] Adapt downsteam Ghost Squid support to latest QMK (#14607)Co-authored-by: fenuks <fenuks>  
>Fix issues with Oneshot disabling (#14934)  
>Format code according to conventions (#15196)  
>Enable de-ghosting for RGB/LED matrix on all ISSI LED drivers (#14508)* Initial work for de-ghost enable

* Dumb mistake with the redefine

* Added Copywrite stuff on source files

* Fixed whitespace errors

* Added support for all ISSI LED drivers

* Updated docs for support for ISSI LED driver pull-up pull-down

* Applied clang format

* Added 'boolean' flag to enable de-ghosting for the is31fl3731 IC

* Fixed some of the grammer in the docs

* Fixed comment placement and grammer of comment

* Fixed whitespace errors from lint

Co-authored-by: donicrosby <donicrosby1995@gmail.com>  
>Mechlovin Infinity88 Layout Extension (#15058)  
>[Tests] Increase QMK test coverage take 2 (#15269)* Add per-test keymaps

* Add better trace and info logs for failed unit-tests

* Add layer state assertion with tracing message

* Use individual test binaries configuration options

* Add basic qmk functionality tests

* Add tap hold configurations tests

* Add auto shift tests

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Add a new led driver for Keychron's keyboards. (#14872)* Add a new led driver for Keychron's keyboards.

* Update ckled2001.c/ckled2001.h.

* Update ckled2001.c/ckled2001.h.

* Update ckled2001.c/ckled2001.h.

* Update ckled2001.c

* Add a new led driver

* Update ckled2001.c

* Update ckled2001.c

* Update ckled2001.c

* Update ckled2001.c

* Delete ckled2001.c

* Create ckled2001.c

* Update ckled2001.c

* Update chibios-contrib

Co-authored-by: keychron-dev <85598583+keychron-dev@users.noreply.github.com>
Co-authored-by: lokher <lokher@gmail.com>  
>Macros in JSON keymaps (#14374)* macros in json keymaps

* add advanced macro support to json

* add a note about escaping macro strings

* add simple examples

* format json

* add support for language specific keymap extras

* switch to dictionaries instead of inline text for macros

* use SS_TAP on the innermost tap keycode

* add the new macro format to the schema

* document the macro limit

* add the json keyword for syntax highlighting

* fix format that vscode screwed up

* Update feature_macros.md

* add tests for macros

* change ding to beep

* add json support for SENDSTRING_BELL

* update doc based on feedback from sigprof

* document host_layout

* remove unused var

* improve carriage return handling

* support tab characters as well

* Update docs/feature_macros.md

Co-authored-by: Nick Brassel <nick@tzarc.org>

* escape backslash characters

* format

* flake8

* Update quantum/quantum_keycodes.h

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Xelus Dawn60 Layout Macro Additions (#15049)* add matrix diagrams to keyboard header files

* rename LAYOUT_60_all to LAYOUT_all

* add LAYOUT_60_ansi_arrow

* add LAYOUT_60_tsangan_hhkb  
>Remove use of __flash due to LTO issues (#15268)  
>Add missing virtser_init() to ChibiOS code (#15356)  
>[Keyboard] Add JadooKB JKB2 (#15036)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>overnumpad controller: Add support for turning off solenoid enable in low power. (#15021)  
>Add support to persist MD LED framework settings (#14980)* Add support to persist MD LED framework settings

* avoid out-of-bounds errors when SmartEEPROM is not enabled

* Update brightness defaults

* clang  
>Start `develop` for 2022q1.  
>[Keyboard] Update Infinity87 rev. 2 (#14820)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] updates for oled, and diablo 2 layer - Drashna (#15194)  
>Basic keycode overhaul (#14726)  
>rename kprepublic bm keyboards to have a standardized naming format (#15047)* change missed kprepublic readmes

* fix xiudi readmes

* initial change, see pr description

* change readmes

* changes names in readmes and device descriptors  
>Rework and expand Pointing Device support (#14343)Co-authored-by: Dasky <32983009+daskygit@users.noreply.github.com>  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-10  
Contributor(s):  
Zach White  
Joris Wachsmuth  
precondition  
mechlovin  
Wolf Van Herreweghe  
MechMerlin  
rus  
Ryan  
dexter93  
remanifest  
Sergey Vlasov  
Albert Y  
just-another-jxliu  
moyi4681  
hadi  
James Young  
Stefan Kerkmann  
Dasky  
Drashna Jaelre  
Chad Austin  
Glory  
Álvaro A. Volpato  
Dao Tak Isaac  
MakotoKurauchi  
Reibl János Dániel  
Quinn Mikelson  
kb-elmo  
leonardusdipa  
tiltowait  
QMK Bot  
​Andrzej Ressel  
Peter Park  
JayceFayne  
Manna Harbour  
Kyrre Havik  
Alan Pocklington  
binepad  
Drashna Jael're  
stdvar  
Alabahuy  
ForsakenRei  
Joel Challis  
SmollChungus  
Jay Greco  
ai03  
Lucas Rodrigues  
Nick Brassel  
Sergi Meseguer  
>Relocate PS2 code (#14895)* Relocate ps2 protocol code

* clang

* Move makefile logic  
>[Keyboard] Convert ZSA's Moonlander keyboard to matrix lite (#14667)  
>Fix ccache default (#14906)  
>Use restart_usb_driver redefined in board chibios board file (#123)for history see:
https://github.com/SonixQMK/qmk_firmware/pull/28
https://github.com/qmk/qmk_firmware/pull/12870
https://github.com/SonixQMK/ChibiOS-Contrib/pull/24

Co-authored-by: stdvar <stdvar@xyz.com>  
>[Keymap] Simplify unicode input mode change and CTRL and GUI swapping (#14874)  
>Improve Adafruit BLE configuration defines (#14749)* Improve Adafruit BLE configuration defines

* Formatting  
>[Keymap] Some updates to mechmerlin userspace and keymaps (#14711)  
>[Keymap] ajp10304: add mouse scroll keys (#14953)  
>[Keyboard] Add bootmagic lite keys to both halve of Sweep (#14732)Co-authored-by: filterpaper <filterpaper@localhost>  
>[Keyboard] Update encoder callback on Evolv75 (#14757)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Docs] Add default case to tap dance example 5. (#14893)  
>[Keymap] Drashna Keymap Updates (#14842)* Fix issues with user split transport code
* Improve OLED (More font stuff, improved keylogger, etc)
* Add `KEYLOCK` macro to disable USB, borrowed from command feature.
* Convert Kyria fully to proton C (no more AVR kyria)
* Add Work Louder Work Board keymap  
>[Keyboard] Add ZSA Moonlander VIA support (#14603)Co-authored-by: Quinn Mikelson <quinn.mikelson@tyvak.com>
Co-authored-by: Drashna Jael're <drashna@live.com>  
>[Keyboard] Add JP60 keyboard (#14219)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Stop-gap forward-port Drop LED features for CTRL and ALT (#14967)  
>[Keyboard] Add firmware for the TS60 (#14157)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Wolf Van Herreweghe <wolfvh@getupgamesofficial.com>  
>[Keymap] Update Miryoku (#14827)  
>[Core] Add support for RISC-V builds and GD32VF103 MCU (#12508)* Add support for RISC-V builds and GD32VF103 MCU

* Add toolchain selection in chibios.mk based on the mcu selected in
mcu_selection.mk
* Reorder and added comments to chibios.mk to have a streamlined makefile
* Add GD32VF103 mcu to possible targets for QMK.
* Add STM32 compatibility for GD32VF103 MCU, this is hacky but more efficent
  then rewriting every driver.
* Add GigaDevice DFU bootloader as flash target, please note that
  dfu-util of at least version 0.10 is needed.
* Add analog driver compatibility
* Add apa102 bitbang driver compatibility
* Add ws2812 bitbang driver compatibility
* Add eeprom in flash emulation compatibility
* Allow faster re-builds with ccache

* Add SiPeed Longan Nano to platform files

* Add SiPeed Longan Nano Onekeys

* Make quine compatible with other bootloaders

* Support builds with picolibc

* Add risc-v toolchain to arch and debian/ubuntu scripts  
>[Keyboard] add dztech duo_s keyboard (#14625)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Migrate makefile utilities to sub-directory (#14917)  
>[Keymap] Add via keymap for meishi2 (#14892)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix link from feature_tap_dance.md to tapping term settings (#14741)  
>[Keyboard] Add anti-ghosting support to Model M Converter (#14049)  
>Split out HAPTIC_ENABLE to have separate DRIVER option (#14854)* DRIVER -> ENABLE

* Update generic_features.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update common_features.mk

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Relocate protocol files within tmk_core/common/ (#14972)* Relocate non platform files within tmk_core/common/

* clang  
>i2c_master: Add support for reading/writing to 16-bit registers (#14289)  
>Make the MAGIC_TOGGLE_GUI keycode work (#14886)  
>Split out arm_atsam shift register logic (#14848)  
>Add clarification for licensing. (#14704)* Add clarification for licensing.

* Errr, v2.  
>Remove QWIIC_DRIVERS (#14174)  
>[Keymap] zigotica userspace (#14670)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove legacy Makefile functionality (#14858)  
>Allow community layouts to be specified in info.json (#14682)* move the community layout detection to python

* fixup tests  
>[Keyboard] Add minimon/Index tab 13x6 ortho (#14765)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Check usb transmit status in send_extra() (#14643)  
>[Keyboard] Enable Proton C defaults for SplitKB Kyria (#14490)Co-authored-by: Ryan <fauxpark@gmail.com>  
>More platform/protocol alignment (#14976)  
>[Keyboard] Add basic Keyhive Sofle support (#14296)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>Move converter specific tmk_core protocols (#14743)  
>Move Audio drivers from quantum to platform drivers folder (#14308)* Move Audio drivers from quantum to platform drivers folder

* fix path for audio drivers

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>gmmk: support MCU 48MHz for rev2 (#121)* save 7-byte RAM

* Support MCU 48MHz for rev2

* fix rev2 i2c non-ack issue

* Update backlight.c

increase delay for user report  
>Migrate satisfaction75 away from QWIIC_DRIVERS (#14747)* stash

* refactor old draw

* refactor old draw - tidy

* refactor old draw - tidy

* refactor old draw - reorder for diffs

* refactor old draw - reorder for diffs  
>Begin to carve out platform/protocol API - Migrate keyboard_* calls (#14888)  
>Document `MAGIC` feature (#14301)  
>contra, fractal: Remove wrongly copypasted pin E6 manipulation code (#14818)Apparently the default keymaps for `contra` and `fractal` were derived
from some `planck` keymap which contained code to control the status LED
in the implementation of the `BACKLIT` custom keycode.  Unfortunately,
the code to control the LED manipulated the `E6` pin directly, and it
was copied without changes, but the `contra` and `fractal` boards use
the `E6` pin in the matrix, therefore pressing the key mapped to
`BACKLIT` resulted in phantom keypresses for all keys in the
corresponding column.  
>[Keyboard] temporary fix for SpiderIsland 78 (#14935) (#14941)  
>Infer more when building features (#13890)  
>[Keymap] Display default layer name (#14819)  
>[Keymap] Add logo to riblee userspace (#14875)  
>Fix develop after recent changes (#14975)* Fix sleep led issues

* Fix tests  
>[Keyboard] Add SpiderIsland 25 key keyboard (#14793)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Added semicolons to rules.mk to allow symlinks from /bin/sh to /bin/zsh to complete the filesize check without error. (#14718)Co-authored-by: John Beard <jbeard@pipelinerx.com>  
>Purge uGFX. (#14720)* Purge uGFX.

* Remove remnants of visualizer.

* Remove remnants of uGFX.  
>[Keyboard] Add Jay60 PCB (#14676)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Split65 to keyboards/handwired (#13264)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Joris Wachsmuth <jwachsmuth@techfak.uni-bielefeld.de>  
>Merge remote-tracking branch 'origin/master' into develop  
>Optimize matrix scanning by removing variable shifts (#14947)  
>Further tidy up of STM32 eeprom emulation (#14591)  
>Move LTO logic from common.mk (#14973)  
>cannonkeys/satisfaction75: Add empty layers to the via keymap (#14782)  
>[Keyboard] nullbitsco keyboards: common file cleanup (#14358)  
>More PR checklist updates (#14705)* Wording, clarification.

* Apply suggestions from code review

Co-authored-by: Mikkel Jeppesen <2756925+Duckle29@users.noreply.github.com>

Co-authored-by: Mikkel Jeppesen <2756925+Duckle29@users.noreply.github.com>  
>Remove sysex API (#14723)  
>[Keyboard] Add cg108 keyboard and fix keymap Dosa40rgb (#14753)* Add cg108 keyboard and fix keymap Dosa40rgb

* Update keyboards/dtisaac/cg108/readme.md

* Update keyboards/dtisaac/dosa40rgb/rules.mk

* Update keyboards/dtisaac/cg108/info.json

* Update keyboards/dtisaac/cg108/keymaps/default/keymap.c

* Update keyboards/dtisaac/cg108/rules.mk

* Update keyboards/dtisaac/cg108/rules.mk  
>Remove SERIAL_MOUSE (#14969)  
>Align PS/2 GPIO defines (#14745)* Align PS/2 GPIO

* Align PS/2 GPIO

* refactor more keyboards

* Remove more defines

* Put back avr/chibios split

* format  
>Use restart_usb_driver redefined in board chibios board filefor history see:https://github.com/SonixQMK/qmk_firmware/pull/28https://github.com/qmk/qmk_firmware/pull/12870https://github.com/SonixQMK/ChibiOS-Contrib/pull/24  
>Correct the Turkish F '?' keycode (TR_QUES) (#14740)define TR_QUES S(TR_ASTR) // ? → define TR_QUES S(TR_SLSH) // ?  
>[Keyboard] Update Support for The Uni (#14569)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: ridingqwerty <george.g.koenig@gmail.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Peter Park <peter@Peters-MacBook-Air.local>  
>[Keyboard] Adding CK60 and CK65 (#14737)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[sn32] eeprom emulation (#95)* sn32 eeprom go brrrr

* sn32: kickstart eeprom

* sn32 flash: nuke and inherit the chibios driver

* eeprom: attemp to offset

* eeprom: 260 support

* flash: remove the buffer.
@gloryhzw did this.

* eeprom: set a more realistic ~1.5kb size  
>Enable eeprom with F401xE ld (#14752)  
>Initial USB2422 driver (#14835)  
>Clean up LED/RGB Matrix driver config (#14760)  
>Move USE_CCACHE logic to common location (#14899)  
>[Keyboard] Add BIOI F60 (#14763)  
>maxr1998/pulse4k: use layout macros in keymaps (#14808)  
>Enable CLI flashing via mdloader (#14729)* Enable CLI flashing via mdloader

* remove flag

* Update qmk flash help  
>[Keyboard] Add Rart67M and support via (#14630)  
>Fix OLED timeout on recent qwiic migrations (#14775)  
>[Keyboad] Add VIA support for Atreus promicro (#13169)  
>[Keyboard] binepad bn009 (#14881)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix type of Tap Dance max index variable (#14887)  
>[Keyboard] add Lefty keyboard (#14898)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove SERIAL_LINK feature (#14727)* Remove SERIAL_LINK

* more stale paths in doxygen-todo

* Fix

* More refs

* Update testing docs

* Update doxygen-todo

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Add workman layout (#14792)  
>Fix i2c_readReg16 (#14730)  
>Tidy up LCD_ENABLE/visualizer references (#14855)* Tidy up LCD_ENABLE/visualizer references

* Fix up my (333fred) ergodox keymap with new LCD driver

Co-authored-by: Fredric Silberberg <fred@silberberg.xyz>  
>Fix OLED timeout on satisfaction75 after migration from QWIIC (#14780)The custom OLED_OFF mode implemented on satisfaction75 is incompatible
with the OLED_TIMEOUT feature (the OLED_TIMEOUT code assumes that any
key or encoder action should turn the OLED display on, and does not
provide any way to disable that behavior).  To keep the OLED_OFF mode
functioning as before while still having a working OLED idle timeout, a
custom implementation of the OLED idle timeout code is added.  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-09  
Contributor(s):  
Joakim Tufvegren  
shiftux  
umi  
zhouqiong19840119  
bt66tech  
mechlovin  
owlab-git  
yulei  
Ryan  
Casey Webster  
Albert Y  
jhauh  
clickclackwho  
nachie  
Adam Honse  
James Young  
Thomas Weißschuh  
Uy Bui  
Drashna Jaelre  
Marcus van Houdt  
bomb  
fauxpark  
Dao Tak Isaac  
John Mueller  
Brandon Claveria  
Felix Jen  
Caleb Lightfoot  
MakotoKurauchi  
Sebastian Laube  
Seth  
X-Bows Tech  
QMK Bot  
Ethan Yates  
JayceFayne  
Drashna Jael're  
Purdea Andrei  
kopibeng  
r-pufky  
Monksoffunk  
hvp  
Joel Challis  
Takeshi ISHII  
qieq  
AKiwi92  
Salicylic-acid3  
Bao  
Carlos Martins  
Nick Abe  
Stan Gurenkov  
Ibnu Daru Aji  
Matt  
>Fix typos from 14248 (#14261)  
>Align ChibiOS I2C defs with other drivers (#14399)* Align ChibiOS I2C defs with other drivers

* Update keyboards/xelus/valor_frl_tkl/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove width, height and key_count from info.json (#14274)  
>[Keyboard] Addition of VIA keymap and a few fixes for naked48 (#14177)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Merge remote-tracking branch 'upstream/master' into develop  
>Change keyboard level include guards to `pragma once` (#14248)* Change keyboard level include guards to `pragma once`

And clean up a lot of layout macros

* Oops

* Remove dangling endif  
>New CLI subcommand to create clang-compatible compilation database (`compile_commands.json`) (#14370)* pulled source from dev branch

* missed a file from origin

* formatting

* revised argument names. relaxed matching rules to work for avr too

* add docstrings

* added docs. tightened up regex

* remove unused imports

* cleaning up command file. use existing qmk dir constant

* rename parser library file

* move lib functions into command file. there are only 2 and they aren't large

* currently debugging...

* more robustly find config

* updated docs

* remove unused imports

* reuse make executable from the main make command

* pulled source from dev branch

* missed a file from origin

* formatting

* revised argument names. relaxed matching rules to work for avr too

* add docstrings

* added docs. tightened up regex

* remove unused imports

* cleaning up command file. use existing qmk dir constant

* rename parser library file

* move lib functions into command file. there are only 2 and they aren't large

* currently debugging...

* more robustly find config

* updated docs

* remove unused imports

* reuse make executable from the main make command

* remove MAKEFLAGS from environment for better control over process management

* Update .gitignore

Co-authored-by: Michael Forster <forster@google.com>

* add a usage line to docs

* doc change as suggested

Co-authored-by: Nick Brassel <nick@tzarc.org>

* rename command

* remove debug print statements

* generate-compilation-database: fix arg handling

* generate-comilation-db: improve error handling

* use cli.run() instead of Popen()

Co-authored-by: Xton <cdewan@apple.com>
Co-authored-by: Christon DeWan <cmdpix@mac.com>
Co-authored-by: Michael Forster <forster@google.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Change USBasp and bootloadHID bootloaders to lowercase (#14354)  
>Remove Arduino-style `analogRead()` (#14348)  
>Move "firmware size check skipped" note to message.mk (#14632)  
>[Keymap] Fix Drashna Keymap issues missed before Develop merge (#14271)  
>Relocate Adafruit BLE code (#14530)  
>[Keyboard] Add Dango40 (#14437)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Swiftrax <swiftrax@gmail.com>
Co-authored-by: Swiftrax <swiftrax@github.com>  
>Mechlovin Delphine: add LAYOUT_numpad_6x4 (#14635)* add LAYOUT_numpad_6x4

* tidy-up info.json data

* use GitHub account name for maintainer field
* remove meta key

* add matrix diagram to delphine.h

* update Community Layout support  
>Remove keyboard-level `COMBO_ENABLE` rules (#14550)  
>[Keyboard] Fix double comment in config files (#14615)  
>[Keyboard] Add 61Key (#14259)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Mechlovin Adelais: add support for full-length Right Shift (#14622)* add layout variants with 2.75u Right Shift

* move layout alias to info.json

* match info.json labels to matrix positions

Edits the label keys in info.json to match the matrix position identifiers in adelais.h.

* info.json: add line breaks between keyboard rows

* info.json: use GitHub username in maintainer field  
>[Keyboard] added KPs BM43 RGB board (#13888)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Adelais PCB. Adelais RGB rev.3, Adelais rev. 4 APM32F103, Adelais AVR rev. 1 (#14252)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove empty override functions (#14312)* Remove empty override functions, 0-9

* Remove empty override functions, A-D

* Remove empty override functions, E-H

* Remove empty override functions, handwired

* Remove empty override functions, I-L

* Remove empty override functions, M-P

* Remove empty override functions, Q-T

* Remove empty override functions, U-Z  
>Added power tracking api (#12691)* Add power tracking API to lufa and chibios targets

* power.c: Pass through power state to the notify function

* power: added notify_power_state_change_user too.

* making it pass the PR linter

* Add a POWER_STATE_NO_INIT state, that we start in before calling power_init();

* Rename *power* to *usb_power*

* removing stray newline

* Rename usb_power* to usb_device_state*

* Update quantum/usb_device_state.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Fix comment

* usb_device_state.h: Don't include quantum.h, only the necessary headers.

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] add Matrix Me (#14331)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Rotor Keyboard (#14407)* rotor keyboard

* readme image

* info.json update

* Update readme.md

* Update keyboards/rotor/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/rotor/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>MatchstickWorks SouthPad: correct Configurator key sequence (#14255)* matchstickworks/southpad: correct Configurator key sequence

* replace tabs with spaces; apply four-space indent  
>[Keyboard] Add support for MNK88  (#14435)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Make RAW_IN/OUT_CAPACITY configurable in chconf.h, set them to 1 for GMMK due to RAM limitations  
>[Docs] Update path to keycode.h (#14263)  
>Remove redundant `UNICODE_ENABLE = no` in keyboard-level rules.mk (#14633)  
>RN42 Bluetooth typo fix (#14421)  
>[Bug] Fix descriptor for USB Programmable Buttons (#14455)  
>[Core] Fix "6kro enable" and clarify naming (#14563)* Fix USB_6KRO_ENABLE compilation errors

* Add info to docs

* Rename define to be more accurate

* Remove unused rule

* Refixe docs  
>[Keymap] Update to Drashna Code (#14644)  
>Make ChibiOS PAL interactions less STM32 specific - Round 2 (#14456)  
>[Keymap] cwebster2 Keymap and userspace updates (#14258)  
>[Keyboard] Add Mach80 for Melgeek (#14076)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] refactor signum30 (#14527)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Stan Gurenkov <stan.gurenkov@docusign.com>  
>[Keyboard] Add 3keyecosystem and 2key2 keyboard (#14023)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] KiwiKeebs Macro V2 (QMK/VIA) and update to V1 (#13499)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Ash <ash@splitpixel.co.uk>  
>[Bug] fix logical minimum in Programmable Button rdesc (#14464)  
>fix link error for helix/rev3_5rows:five_rows (#14466)This is a tentative quick fix.
I was adding the same functions for both #14426 and #14427 and they were in conflict.  
>Implement F4 eeprom (#14195)  
>Apply `TAP_CODE_DELAY` to Tap Dance key sequences (#14412)* Add  support to tap dances

* Move default tap code defines to header file  
>Refactor use of _STM32_ defines (#14439)  
>[Keyboard] Add Dosa40RGB + dtisaac01 (#14476)  
>[Keyboard] Fix Redox Media compilation errors (#14345)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Saka68 Solder Refactor (#14596)* rename LAYOUT to LAYOUT_68_ansi

* tidy-up keymaps

Adjusts indenting for readability/aesthetics.

* add LAYOUT_68_iso macro

* enable Community Layout support

* add Split Backspace layout variants

* remove KBFirmware Parser references

* correct keyboard metadata  
>[Keyboard] smallkeyboard support (#12817)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] add via keymap support for bt66tech/bt66tech60 (#13818)Co-authored-by: root <crkndevops@gmail.com>  
>Remove references to KBFirmware JSON Parser (#14608)* remove refs: exclusive/e85/soldered

* remove refs: handwired/bigmac

* remove refs: handwired/boss566y/redragon_vara

* remove refs: handwired/marauder

* remove refs: id67

* remove refs: kprepublic/bm60rgb

* remove refs: playkbtw/helen80

* remove refs: sam/sg81m

* remove refs: sawnsprojects/satxri6key

* remove refs: yncognito/batpad  
>Remove BLUETOOTH_ENABLE from defaultish keymaps (#14375)  
>[Keymap] hvp keymap for Cornelius, updated ut47.2 and userspace (#14187)  
>Bugfix for Joystick and JSON schema (#14295)  
>`ST7565_TIMEOUT 0` and `ST7565_DISABLE_TIMEOUT` should behave the same (#14315)  
>Initial pass of F405 support (#14584)* Initial pass of F405 support

* remove some conf files

* docs

* clang  
>handwired/dactyl - Refactor use of legacy i2c implementation (#14344)  
>Improvements to handling of disconnected split keyboards. (#14033)* Use memcmp and memcpy to compare and copy slave matrix.

...and memset to initialize `matrix` and `raw_matrix`.

Increased my scan rate (while connected) by ~100 (on Ergodox Infinity).
Effect on AVR is unknown.

Co-authored-by: Stefan Kerkmann <karlk90@pm.me>

* Fix `matrix_post_scan` signalling change on every scan while disconnected.

* Undo removal of initialization of `slave_matrix`.

This has the effect of increasing my Ergodox Infinity firmware size by 8
bytes instead of decreasing by 8 bytes, and lowers the scan rate while
connected back to the initial value before these changes, but _might_
solve some issues on AVR.

Co-authored-by: Stefan Kerkmann <karlk90@pm.me>  
>Fix Space Cadet md link (#14300)  
>[Keyboard] Replaced Maker Keyboards & FJLabs Legacy Code (#14393)  
>[Docs] update Japanese translation of pr_checklist.md (#13693)* update pr_checklist.md translation

* update file based on comments

* add id on feature_led_indicators.md and update text based on comments

* update file based on comments

* update file based on comment  
>[Keyboard] Update default keymaps for OLKB boards (#14565)  
>Add Support for USB programmable buttons (#12950)  
>Meira Refactor (#14566)* clean up keyboard header files

* use #pragma once include guard
* convert tabs to spaces
* remove redundant #include statements
* update revision references to main header (`../meira.h` -> `meira.h`)

* refactor default keymap

* use LAYOUT as layout macro reference
* use enum statement for layer indexes; make layers contiguous
* use four-space indent
* update keycode grid alignment

* update layout macro aliases

* move layout macro aliases to info.json
  * alias KEYMAP to LAYOUT_ortho_4x12 so the user keymaps don't have to be edited

* touch up meira.h

There's no Planck MIT layout reference here.

* add copyright headers

* workaround patch for grahampheath keymap

The `matrix_init_kb()` function in `meira.c` calls `backlight_set()`, but the grahampheath keymap disables Backlight to make space for Audio, causing the firmware to fail to compile.

This commit wraps the `backlight_set()` call in an ifdef statement, so the call is excluded if Backlight is disabled.

* clean up rules.mk inline comments

* re-order rules.mk settings

* clean up readme.md

* correct link to keyboard image
* change metadata section to unordered list
* spelling corrections
* update make instructions and Docs links  
>Merge remote-tracking branch 'origin/master' into develop  
>[Keyboard] VIA support with top facing LEDs and underglow (#12814)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Core] Add `is_oled_scrolling` (#14305)  
>Migrate boston_meetup/2019 away from QWIIC_DRIVERS (#14413)  
>[Keyboard] Add support for PaladinPad, Arya pcb and move keyboards by KapCave into their own directory (#14194)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Nachiket Kulkarni <nachiket_kulkarni@apple.com>  
>[Keyboard] Updates for Tractyl Manuform config (#14641)  
>Mechlovin Hannah60RGB touch-up (#14646)* use XXX for KC_NO in rev1.h

* add matrix diagram to rev1.h

* remove reference to KBFirmware JSON Parser from rev1.h

* use XXX for KC_NO in rev2.h

* add matrix diagram to rev2.h

* add LAYOUT_60_ansi and LAYOUT_60_iso

* enable Community Layout support

* update info.json metadata

- specify keyboard revision in keyboard_name
- use GitHub username in maintainer field

* remove reference to KBFirmware JSON Parser from main rules.mk  
>core: fix compilation issues with USB programmable buttons (#14454)Reported here:
https://github.com/qmk/qmk_firmware/pull/12950#issuecomment-920329569  
>Remove redundant `MIDI_ENABLE = no` in keyboard-level rules.mk (#14649)  
>Backport F_CPU/F_USB hack from system76 (#14286)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Docs] Broken FAQ hyperlink (#14578)  
>Remove audio pin references in rules.mk (#14532)  
>[Keyboard] Fix pin spacing alignmnent (#14592)Co-authored-by: filterpaper <filterpaper@localhost>  
>Add ability to use numpad digits for unicode mode UC_WIN (#14496)Co-authored-by: Konstantin Đorđević <vomindoraan@gmail.com>  
>Move Bluetooth config to common_features.mk (#14404)* Move Bluetooth config to common_features.mk

* Update common_features.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Bug] Fix IS31fl3741 driver to accept 1 or 2 addresses (#14451)Co-authored-by: Joel Challis <git@zvecr.com>  
>AMJ96 Refactor (#14571)* clean up amj96.h

- use #pragma once include guard
- remove extra comments
- update matrix position alignment (easier readability)

* info.json: apply human-friendly formatting

* rename LAYOUT to LAYOUT_all

* clean up rules.mk

Align to QMK's AVR template.

* clean up default keymap

- use four-space indent
- add RESET keycode (Fn+R)
- remove unnecessary functions

* clean up config.h

- use #pragma once include guard
- move lighting settings to the middle of the file (QMK template conformance)
- remove Magic and MIDI configuration blocks

* update readme.md file

- update keyboard info list
- add flashing instructions
- update Docs links
- remove trailing spaces

* remove "empty" config.h and readme.md from default keymap  
>[Keyboard] Update rocketboard_16 with *most* of its final features (#12537)  
>Migrate hadron away from QWIIC_DRIVERS (#14415)  
>[Keymap] Adding personal keymap (#14326)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Update lighting effects for xbows keyboard (#14432)  
>fix typo in backlight code from #14439 (#14442)  
>[Keymap] Update iris fluffactually keymap (#14265)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Remove unused `IS_COMMAND()` instances and Magic Key definitions (#14610)* Remove unused IS_COMMAND() instances from keyboard-level config.h, 0-9

* Remove unused IS_COMMAND() instances from keyboard-level config.h, A-B

* Remove unused IS_COMMAND() instances from keyboard-level config.h, C-D

* Remove unused IS_COMMAND() instances from keyboard-level config.h, E-G

* Remove unused IS_COMMAND() instances from keyboard-level config.h, handwired

* Remove unused IS_COMMAND() instances from keyboard-level config.h, H-M

* Remove unused IS_COMMAND() instances from keyboard-level config.h, N-R

* Remove unused IS_COMMAND() instances from keyboard-level config.h, S-Z

* Remove unused Magic Key definitions from keyboard-level config.h, 0-9

* Remove unused Magic Key definitions from keyboard-level config.h, A

* Remove unused Magic Key definitions from keyboard-level config.h, B

* Remove unused Magic Key definitions from keyboard-level config.h, C

* Remove unused Magic Key definitions from keyboard-level config.h, D-E

* Remove unused Magic Key definitions from keyboard-level config.h, F-H

* Remove unused Magic Key definitions from keyboard-level config.h, handwired

* Remove unused Magic Key definitions from keyboard-level config.h, I-K

* Remove unused Magic Key definitions from keyboard-level config.h, L-M

* Remove unused Magic Key definitions from keyboard-level config.h, N-R

* Remove unused Magic Key definitions from keyboard-level config.h, S-V

* Remove unused Magic Key definitions from keyboard-level config.h, W-Z

* Merge remote-tracking branch 'upstream/master' into clean/command_and_magic

* Remove remaining unused IS_COMMAND() instances from keyboard-level config.h  
>[Bug] Fix compile issues for boards with custom matrix (#14323)  
>Tidy up defines within STM EEPROM emulation (#14275)* Tidy up defines within stm eeprom emulation

* Fix tests

* Resolve todo

* Still use page notion in clear

* Remove more f4 refs  
>[Keyboard] Add 5 boards by the OverNumpad Controller (#14382)* Add initial implementation of 5 keyboards supported by the OverNumpad Controller.

* Apply suggestions from code review

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Apply changes similar to other code review suggestions.

* Apply suggestions from code review

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Apply changes similar to other code review suggestions.

* overnumpad controller info.jsons: update maintainer and url.

* classic_ultracl_pre_2013: added support for the default 'fullsize_ansi' layout

* classic_ultracl_pre_2013: moved the order of the iso enter key in the layout macro to be considered to be on the bottom row, like in the default fullsize_iso layout. Rename the iso layout to fullsize_iso, and enable it in rules.mk

* Removed QMKBEST and QMKURL

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Deleting empty files

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add OwLab Suit80 (#14362)* add suit80 files

* first add suit80 files

* modified suit80 files

* layout change

* modified again

* changed png url  
>[Keyboard] Fix typo in mechloving adelais header files (#14590)  
>[Keyboard] Add Free Willy Keyboard (#14394)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Add gaming toggle layer & layer colors to r-pufky keymap. (#14251)  
>[Keyboard] Add custom pcb for Polaris (#14347)* [Keyboard] pcb for Polaris

* [Keyboard] pcb for Polaris: update  layout

* Update keyboards/wekey/polaris/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove more cruft in keyboard files (#14288)  
>[Keymap] reflects current rick's keymap (#14169)  
>[Keyboard] Add new keyboard quick17 (#13703)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: keyaki-namiki <28521374+keyaki-namiki@users.noreply.github.com>  
>[Keyboard] Increase the way to add oled code for helix/rev3. (#14426)* move rev3_Xrows/oled_display.c to rev3_Xrows/keymaps/default/oled_display.c

* add dummy rev3_Xrows/oled_display.c

* Add default minimum oled_task_user() to helix/rev3_Xrows/rev3_Xrows.c

* remove unnecessary comment in rev3_Xrows/keymaps/default/oled_display.c

* copy rev3_Xrows/keymaps/default/oled_display.c to rev3_Xrows/keymaps/via/oled_display.c  
>[Keymap] Update Helix:five_rows OLED code (#14427)* Stop using snprintf() in keymaps/five_rows/oled_display.c.

The binary size becomes 1350 bytes smaller.

make HELIX=verbose,core-oled helix/rev2/sc:five_rows
(104 bytes over) -> (95%, 1256 bytes free)

make helix/rev3_5rows:five_rows
(528 bytes over) -> (97%, 830 bytes free)

* add matrix scan rate display to OLED for keymaps/five_rows

* add matrix_output_unselect_delay.c to helix keymaps/five_rows

* add GPLv2 header

* apply review comment  
>[Docs] Clean up some code block languages (#14434)  
>Refactor use of legacy i2c implementation (#14341)  
>[Keyboard] Redox media (#13084)* adding a new revision 'media' to the redox keyboard

* readme update

* encoder fix

* video link

* drashna change requests

* removing SPLIT_USB_TIMEOUT

* intermediate rename

* lowercase

* drashna comments

* include if defined KEYBOARD_redox_media

* lowercase readme, tmp step

* lowercase readme

* drashna changes

* more drashna comments

* readme update

* readme update

* fauxpark and drashna comments

* fauxpark comments

* Update keyboards/redox/media/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Zinc: fix RGBLED_NUM bug (#13287)  
>FLX Virgo: metadata clean-up (#14605)* correct maintainer field in info.json

* remove KBFirmware Parser references  
>Patch for develop branch merge conflictsFixes bugs introduced by 675c5a5e12f5c5efe59a0d0b30b17a41a398c74e.  
>Migrate STM32_EEPROM_ENABLE to use EEPROM_DRIVER (#14433)  
>`OLED TIMEOUT 0` and `OLED_DISABLE_TIMEOUT` should behave the same (#14302)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-08  
Contributor(s):  
Zach White  
Joakim Tufvegren  
fire-h0und  
J.Flanagan  
Rifaa Subekti  
mechlovin  
a_p_u_r_o  
yulei  
peepeetee  
Ryan  
Donald Kjer  
Xelus22  
npspears  
Sergey Vlasov  
Alin Marin Elena  
moyi4681  
James Young  
NightlyBoards  
Dasky  
Drashna Jaelre  
Spaceman  
jpuerto96  
rate  
fauxpark  
Luis Godinez  
Alex Ong  
ruro  
Hugues Morisset  
a-chol  
jfescobar18  
Danny  
Pierre Chevalier  
Felix Jen  
arnstadm  
kb-elmo  
Joshua T  
Simon  
Evelien-Lillian Dekkers  
Stick  
Weirdo  
XScorpion2  
freqmod  
tiltowait  
QMK Bot  
David Hoelscher  
Michele Ferri  
Dimitris Mantzouranis  
Moritz  
Vincent Vorholter  
tucvbif  
Alan Pocklington  
Drashna Jael're  
stdvar  
MechMaster48  
Pete Sevander  
Changsu Park  
weteor  
Charles  
Joel Challis  
Takeshi ISHII  
Ramon Imbao  
50an6xy06r6n  
Salicylic-acid3  
SneakboxKB  
Jarrett Drouillard  
Jonathan Rascher  
Logan Butler  
Yoichiro Tanaka  
jackytrabbit  
Nick Brassel  
DonutCables  
>Move print/debug files to quantum (#12069)* move print/debug files to quantum

* Update comments  
>Merge remote-tracking branch 'upstream/master' into develop  
>Add a lot more data to info.json (#13366)* add some split data to info.json

* add tags

* add half of config_options.md to info.json

* add support for designating master split

* sort out split transport and primary

* fix bad data in UNUSED_PINS

* fixup custom transport

* wip

* allow for setting split right half keyboard matrix

* add SPLIT_USB_DETECT

* minor cleanup

* fix an erroneous message

* rework split.usb_detect

* adding missing rgblight vars to info.json

* add mouse_key to info.json

* add all remaining options from docs/config_options.md

* fix audio voices

* qmk info: Change text output to use dotted notation

* tweak layout output

* resolve alias names

* break out some functions to make flake8 happy

* add a field for bootloader instructions

* qmk generate-info-json: add a write-to-file argument

Adds an argument that instructs qmk generate-info-json to write the output to a file instead of just to the terminal.

* -arg_only, +action

Because it was never my intention that one would have to specify a value for the argument that enables writing the file.

* Bring qmk generate-info-json inline with other generate commands

* pytest fixup

* fix esca/getawayvan

* fix data driven errors for bpiphany converters

* features.force_nkro -> usb.force_nkro

* split.primary->split.main

* fix esca/getawayvan_f042

* fix the bpiphany converters for real

* fix bpiphany/tiger_lily

* Apply suggestions from code review

Co-authored-by: Nick Brassel <nick@tzarc.org>

* fix generate-api errors

* fix matrix pin extraction for split boards

* fix ploopyco/trackball_nano/rev1_001

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Migrate platform independent code from tmk_core -> quantum (#13673)* Migrate action|keyboard|keycode|eeconfig from tmk_core -> quantum  
>add 'include keyboard_features.mk' into build_keyboard.mk (#8422)* add 'include keyboard_features.mk' into build_keyboard.mk

keyboard_features.mk is a keyboard-local version of the functions performed by common_features.mk.

* add comment into build_keyboard.mk

* added description of keyboard_features.mk in hardware_keyboard_guidelines.md.

* rename `keyboard_features.mk` to `post_rules.mk`  
>Improve pmw3360 sensor and make it more hardware agnostic (#14097)  
>Add mechlovin9 rev2 PCB (#12767)* Add mechlovin9 rev2 PCB

Move mechlovin9 PCB from mechlovin/hannah65/mechlovin9 to mechlovin/mechlovin9
And add mechlovin9 rev.2

* update

* change bootloader and  bootmagic button

* Add mechlovin9 rev2 PCB

Move mechlovin9 PCB from mechlovin/hannah65/mechlovin9 to mechlovin/mechlovin9
And add mechlovin9 rev.2  
>[Keyboard] add support for alternate ortho UD40 PCB (#13491)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Ready100 Keyboard (#13158)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Remove Full Bootmagic (#13846)* disambiguate Bootmagic rules in keymaps

The files edited by this commit were added at a point in time where `BOOTMAGIC_ENABLE = yes` enabled full Bootmagic.

This commit edits the files to specify that full Bootmagic is intended.

* remove BOOTMAGIC_ENABLE=full setting

* unify commented BOOTMAGIC_ENABLE rules in keyboards

Explicitly sets `BOOTMAGIC_ENABLE = no` in keyboards where the rule was commented out.

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;#[ \t]*\(BOOTMAGIC_ENABLE\)[ \t=]\+\([a-zA-Z]\+\).*;\1 = no       # Virtual DIP switch configuration;g' {} +
```

* remove commented Bootmagic rules from keymap/user level

Command:

```
find keyboards/ layouts/ users/ -type f -name 'rules.mk' -exec sed -i -e '/#.*\(BOOTMAGIC_ENABLE\)[ \t=]\+\([a-z]\+\).*/d' {} +
```

* update keyboard BOOTMAGIC_ENABLE rule formatting

Sets the formatting of BOOTMAGIC_ENABLE rules to `BOOTMAGIC_ENABLE = [value]`, without the inline comments (which will be replaced later).

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE\)[ \t=]\+\([a-z]\+\).*;\1 = \2;g' '{}' +
```

* update keyboards' BOOTMAGIC_ENABLE settings

Updates keyboard `rules.mk` files to use `BOOTMAGIC_ENABLE = lite` where `BOOTMAGIC_ENABLE = full` was being used.

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE = \)full;\1lite;g' '{}' +
```

* update keymap/user BOOTMAGIC_ENABLE settings

Updates keymap/user `rules.mk` files to use `BOOTMAGIC_ENABLE = lite` where `BOOTMAGIC_ENABLE = full` was being used.

Commands:

```
find keyboards/ -type f -name 'rules.mk' -and -path '*/keymaps/*' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE[ \t=]\+\)full;\1lite;g' '{}' +
find layouts/community/ users/ -type f -name 'rules.mk' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE[ \t=]\+\)full;\1lite;g' '{}' +
```

* remove and replace inline comments in keyboards and keymap/user files

Removes and replaces the inline comments, which have been updated to read `Enable Bootmagic Lite`.

Commands:

```
find keyboards/ -type f -name 'rules.mk' -and -path '*/keymaps/*' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE\)[ \t=]\+\([a-z]\+\).*;\1 = \2;g' '{}' +
find layouts/community/ users/ -type f -name 'rules.mk' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE\)[ \t=]\+\([a-z]\+\).*;\1 = \2;g' '{}' +
find keyboards/ layouts/community/ users/ -type f -name 'rules.mk' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE = lite\);\1     # Enable Bootmagic Lite;g' '{}' +
find keyboards/ layouts/community/ users/ -type f -name 'rules.mk' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE = yes\);\1      # Enable Bootmagic Lite;g' '{}' +
find keyboards/ layouts/community/ users/ -type f -name 'rules.mk' -exec sed -i -e 's;\(BOOTMAGIC_ENABLE = no\);\1       # Enable Bootmagic Lite;g' '{}' +
```

* rename improperly named makefiles

Some files intended to be used as makefiles had improper names causing them to not be used as intended when building.

This commit corrects the filenames of the affected files.

* update renamed file with new rule formatting

* update QMK's template files

Updates QMK's `rules.mk` templates to use the new inline comment.

* update QMK Docs

- remove documentation of full Bootmagic
- update links to Bootmagic Lite doc
- add doc for Magic Keycodes

* rules.mk patch for coarse/ixora and coarse/vinta  
>Fix compile issues due to LED changes (#13821)  
>[Keyboard] Update to customMK Genesis (#12511)Co-authored-by: Ray <ray@custommk.com>  
>[Keyboard] Add cest73/tkm keyboard (#13939)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: cest <cest@localhost>  
>`--parallel` improvements (#13800)* improve make parallel jobs support

* document the --parallel option

* disable the output-sync for interactive targets  
>Fix up builds after #8591 (#13900)  
>add support for m65 and simple 5x13 ortholinear (#12315)* add support for m65 and simple 5x13 ortholinear

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* Update keyboards/m65/keymaps/default/keymap.c

Co-authored-by: Sergey Vlasov <sigprof@gmail.com>

* updates as per @sigprof review plus reformat

* pins all now are defined at microcontroller level

* profuct id defined at microcontroller level

* put leds on when _ADJ is on

* add danish keymap

* make default uk centric iso as per readme

* default is now iso generic, uk is its own business

* add license

* update imgur links to reflect the layout

* leds for _ADJ layer now do not prevent the other layers leds to get on

* Update keyboards/m65/keymaps/uk/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/m65/keymaps/dk/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/m65/keymaps/uk/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/m65/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* add support for gd32f303cct6 by we act in rev2

* Revert "add support for gd32f303cct6 by we act in rev2"

This reverts commit 4ad3834925508b79f2ff9fd5526dfc39f07fa3bc.

* Update keyboards/m65/rev1/rules.mk

Co-authored-by: Joel Challis <git@zvecr.com>

* Update keyboards/m65/keymaps/dk/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/m65/keymaps/uk/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/m65/keymaps/default/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* remove empty hal

* add capslock

* Update keyboards/m65/readme.md

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/m65/config.h

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

Co-authored-by: Alin M Elena <alin-marin.elena@stfc.ac.uk>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Merge remote-tracking branch 'upstream/master' into developFixes merge conflicts in:- keyboards/bm40hsrgb/config.h  - Conflict from PR 13132:    - RGB_DISABLE_WHEN_USB_SUSPENDED signature updated in develop branch, unmodified in master branch    - updated file with changes from master branch- keyboards/keebio/iris/keymaps/nstickney/keymap.c  - Conflict from PR 11456:    - layer_state_set_user() updated in develop branch, removed in master branch    - updated file with changes from master branch  
>[Keyboard] Add IBM Model M SSK configuration (#14050)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add kelownaRGB64 (#14141)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Launch Pad keymaps (#12490)Co-authored-by: Ryan <fauxpark@gmail.com>  
>cKeys Handwire 101 Refactor (#13879)* update info.json

- use human-friendly formatting
- remove `key_count` key

* rename LAYOUT to LAYOUT_ortho_4x4

* refactor default keymap

- add license header
- qmk cformat pass
- keycode grid alignment

* remove empty config.h file from default keymap

* update Manufacturer and Product strings

* tidy up handwire_101.c

- add license header
- remove boilerplate functions

* tidy up handwire_101.h

- add license header
- remove instructive comment

* minor rules.mk tidy-up

- remove Bootloader selection sample comments

* rewrite SEND_STRING() statements per fauxpark

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Quark AJP10304 layout (#13290)  
>Fixes for clang not being able to run unit tests (#13546)  
>Merge remote-tracking branch 'upstream/master' into developFixes merge conflicts in:- keyboards/poker87c/rules.mk and keyboards/poker87d/rules.mk  - Conflicts from PR 13961- keyboards/tronguylabs/m122_3270/keymaps/default/keymap.c  - Conflict from PR 13947  
>[Keyboard] Add Fave87 (#13873)Co-authored-by: Joel Challis <git@zvecr.com>  
>Revert "[Keyboard] Dumbpad VIA support added (#13512)"  
>[Core] Refactor OLED to allow easy addition of other types  (#13454)* add docs

* core changes

* update keyboards to new OLED

* updated users to new OLED

* update layouts to new OLED

* fixup docs

* drashna's suggestion

* fix up docs

* new keyboards with oled

* core split changes

* remaining keyboard files

* Fix The Helix keyboards oled options

* reflect develop

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: mtei <2170248+mtei@users.noreply.github.com>  
>add falcon keyboard (#13674)* added falcon keyboard

* Update keyboards/matrix/falcon/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/matrix/falcon/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Apply suggestions from code review

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* added description for the bootloader

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Fix matrix_output_unselect_delay for handwired/xealousbrown (#13913)  
>Fix Indicator LED issues (#12097)  
>[Keymap] Drashna's Improve OLEDs and custom Split code (#14063)* Fill the oleds with right mods

* Enable double mods on x32 oleds

* Disable forced NKRO

* Make oleds fancy only on good MCUs

* Overhaul oled display

* Further enhance oled, with kitty!

* Final oled form

* Not working transport

* Transport id of woring

* Add acceleration

* fix button placement for accel macro

* Fix accelartion location and behavior

* Remove OLED sync code

* Fix alignment issue

* Remove audio hack

* Fix up zima keymap

* Add matrix slave scan function and cleanup drashna.h

* Clean up user space

* Allow userspace sync to be disable-able

* Fix weird issue with audio

* Fix alignment issue with user split sync

* Disable second rgb matrix task

* Disable additional animations

* Change dynamic keymap settings

* Hacky fix for borked corne

* Add Blackpill (F411) support to tractyl manuform

* remove manual via eeprom reset

* Remove all references to rgblight twinkle

* Fix issues with config processing  
>Added right vs left specific pin assignments for dip switch (#13074)* Added right vs left specific pin assignments for dip switch

* Update feature_dip_switch.md

* Ran formatting tools  
>Fix overflows in WPM calculations (#13128)* Fix overflow in WPM calculations.

First, the "fresh" WPM calculation could end up being up to 12000 (with
default `WPM_ESTIMATED_WORD_SIZE`) if keys were pressed more or less
simultaneously. This value has now been clamped down to 255, in effect
clamping WPM to its max value of 255.

Second, with `WPM_ALLOW_COUNT_REGRESSION` enabled, it was possible to
regress the WPM below 0 (i.e. to 255) by just repeatedly pressing
backspace.

* Fix WPM being limited to 235 due to float/int logic.  
>[Keyboard] Add Viktus SP Mini (#14069)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Refactor atom47 and add rev4 and rev5 (#13201)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Unconditionally call led_init_ports (#12116)* Unconditionally call led_init_ports

* Another call to led_init_ports  
>Fix typo (#14118)  
>Remove the #10088 hotfix for Teensy 3.1-like Input:Club keyboards (#12870)* Remove the #10088 hotfix for K20x MCU:s.

It seems to _cause_ the issue it intended to solve there.

* Cleaner way of removing #10088 hotfix.

Now only affects Ergodox Infinity, Whitefox and K-type, though.

Switches over Ergodox Infinity to the `IC_TEENSY_3_1` board, since that
was a nice place to implement the `restart_usb_driver` override.
However, I would guess this issue is present for other K20x/Teensy 3.1
boards as well...

* Fix comment regarding `IC_TEENSY_3_1` for all keyboards using it.  
>Add support for lazydesigners/cassette8 (#14145)* Add support for lazydesigners/cassette8

Add support for lazydesigners/cassette8

* Update keyboards/lazydesigners/cassette8/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/lazydesigners/cassette8/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/lazydesigners/cassette8/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/lazydesigners/cassette8/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/lazydesigners/cassette8/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/lazydesigners/cassette8/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/lazydesigners/cassette8/info.json

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Joel Challis <git@zvecr.com>  
>[Keyboard] Add TouhouPad (#13915)* Touhoupad rev 2

* cleanup for PR

* fixes after review  
>40percentclub/nori: fix matrix reference in LAYOUT_ortho_4x8 (#13866)* 40percentclub/nori: fix matrix reference in LAYOUT_ortho_4x8

* remove ortho_4x8 from Community Layouts rule

ortho_4x8 isn't a valid option here.  
>Various fixes from reorg of files (#14051)  
>Fixup atsam builds. (#14052)  
>[Keymap] clean up userspace, add XD75 / Keyboardio Atreus (#13121)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Avoid name conflicts with usb_hid Arduino code (#13870)* Avoid name conflicts with usb_hid Arduino code

* Fix tests  
>[Keyboard] Added 67mk_E PCB (#13869)* added 67mk_E PCB

* add layouts  
>sn32f240b: common RGB matrix integration in QMK  
>Remove backwards compatibility of debounce names (#13877)* Remove backwards compatibility of debounce names

* Update docs

* Update keyboards/keymaps  
>Begin to carve out platform/protocol API - Single main loop (#13843)* Begin to carve out platform/protocol API

* Fix up after rebase  
>Organize KPrepublic, K.T.E.C, xiudi boards into directories (#12159)* reset; redoing my steps; and recommit

* include xd002/.noci  
>2021Q3 pre-merge `develop` changelog, keyboard aliases (#14198)* Initial changelog.

* Data driven.

* Submodule update.

* Updated breaking changes docs.

* Aliases.

* Aliases.  
>Add support to restart kb in bootloader mode by sending USB command  
>[Keyboard] Add Edda Keyboard (#13953)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Move chibios board files to allow tmk_core platform migration (#13777)* Move board files

* fix up after rebase  
>[Keymap] add kuatsure planck keymap (#10625)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Dumbpad VIA support added (#13512)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add n9 macropad (#13168)  
>[Keyboard] Add OwLab Jelly Epoch (#14190)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Minor cleanup of bcat keymaps and userspace (#13224)  
>Add a toggle key for GUI On/Off in Magic feature (#13830)  
>Remove bin/qmk (#14231)* Remove the bin/qmk script

* remove bin/qmk from workflows  
>[User] changes to nstickney's keymaps (#11456)0) Built a Bastyl, gave away the ErgoDoxEZ
1) UNICODEMAP
2) Iris left is now Elite-C
3) New QMK flashing instructions  
>Fix issues with VIA EEPROM init and bring in line with eeconfig functionality (#13243)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Added pistachio_pro (#13466)* Added pistachio_pro

* Apply suggestions from code review

* Apply suggestions from code review  
>Revert 14083 && 14144 (#14150)* Revert "Short term bodge for firmware size bloat (#14144)"

This reverts commit a8d65473461c337fb1e168d907bfb8c3ac8fdbd0.

* Revert "Tidy up quantum.c now some of tmk_core has been merged (#14083)"

This reverts commit c4dbf4bf0118dd785802861beb247433b5b7411d.  
>[Keyboard] Add Southpad Keyboard (#13964)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Updated settings.json file to fit VSC's docs (#13829)This change fixes the warning caused by deprecated way of configuring terminal profiles.

The warning caused by old settings.json is the following:
This is deprecated, the new recommended way to configure your default shell is by creating a terminal profile in `#terminal.integrated.profiles.windows#` and setting its profile name as the default in `#terminal.integrated.defaultProfile.windows#`. This will currently take priority over the new profiles settings but that will change in the future.

Refer to the link below for more information:
https://code.visualstudio.com/docs/editor/integrated-terminal#_configuration  
>Rework as per 9824 (#13898)  
>Fix up compilation issues. (#14095)  
>[Keyboard] Add Gud70 (#12575)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Trigger a wakeup after USB Reset on ChibiOS. (#12831)After a USB Reset event the device must, according to the spec wake up
from any suspend state, so the Configured event that arrives afterwards
should be interpreted as an implicit wakeup.  
>New Keyboard - V4n4g0rth0n (#14152)* General: Initial commit for v4n4g0rth0n

* Remove unecessary things|

* General: Fix info.json

* Finalize changes

* Update keyboards/v4n4g0rth0n/config.h

Co-authored-by: Joel Challis <git@zvecr.com>

* Update keyboards/v4n4g0rth0n/v1/rules.mk

Co-authored-by: Joel Challis <git@zvecr.com>

* Update keyboards/v4n4g0rth0n/v4n4g0rth0n.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/v4n4g0rth0n/v4n4g0rth0n.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/v4n4g0rth0n/v2/keymaps/default/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/v4n4g0rth0n/v1/keymaps/default/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>remove qmk console, which is now part of the global cli (#14206)  
>Short term bodge for firmware size bloat (#14144)  
>Update USB Device strings for VIA identification (#13962)  
>move everything from qmkfm/base_container to qmkfm/qmk_cli (#14230)  
>Process combos earlier & overlapping combos (#8591)* Combo processing improvements.

Now it is possible to use ModTap and LayerTap keys as part of combos.
Overlapping combos also don't trigger all the combos, just exactly the
one that you press.

New settings:
- COMBO_MUST_HOLD_MODS
- COMBO_MOD_TERM
- COMBO_TERM_PER_COMBO
- COMBO_MUST_HOLD_PER_COMBO
- COMBO_STRICT_TIMER
- COMBO_NO_TIMER

* Remove the size flags from combo_t struct boolean members.

This in the end actually saves space as the members are accessed so many
times. The amount of operations needed to access the bits uses more
memory than setting the size saves.

* Fix `process_combo_key_release` not called correctly with tap-only combos

* Fix not passing a pointer when NO_ACTION_TAPPING is defined.

* Docs for `COMBO_ONLY_FROM_LAYER`

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update quantum/process_keycode/process_combo.c

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Add `EXTRA_SHORT_COMBOS` option.

Stuff combo's `disabled` and `active` flags into `state`. Possibly can
save some space.

* Add more examples and clarify things with dict management system.

- Simple examples now has a combo that has modifiers included.
- The slightly more advanced examples now are actually more advanced
  instead of just `tap_code16(<modded-keycode>)`.
- Added a note that `COMBO_ACTION`s are not needed anymore as you can
  just use custom keycodes.
- Added a note that the `g/keymap_combo.h` macros use the
  `process_combo_event` function and that it is not usable in one's
  keymap afterwards.

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Change "the" combo action example to "email" example.

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Fix sneaky infinite loop with `combo_disable()`

No need to call `dump_key_buffer` when disabling combos because the
buffer is either being dumped if a combo-key was pressed, or the buffer is empty
if a non-combo-key is pressed.

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

* Update docs/feature_combo.md

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>

Co-authored-by: precondition <57645186+precondition@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Add HOLD_ON_OTHER_KEY_PRESS option for dual-role keys (#9404)* Add HOLD_ON_OTHER_KEY_PRESS option for dual-role keys

Implement an additional option for dual-role keys which converts the
dual-role key press into a hold action immediately when another key is
pressed (this is different from the existing PERMISSIVE_HOLD option,
which selects the hold action when another key is tapped (pressed and
then released) while the dual-role key is pressed).  The Mod-Tap keys
already behave in a similar way, unless the IGNORE_MOD_TAP_INTERRUPT
option is enabled (but with some additional delays); the added option
makes this behavior available for all other kinds of dual-role keys.

* [Docs] Update tap-hold docs for HOLD_ON_OTHER_KEY_PRESS

Document the newly added HOLD_ON_OTHER_KEY_PRESS option and update the
documentation for closely related options (PERMISSIVE_HOLD and
IGNORE_MOD_TAP_INTERRUPT).

Use Layer Tap instead of Mod Tap in examples for PERMISSIVE_HOLD and
HOLD_ON_OTHER_KEY_PRESS, because the effect of using these options with
Mod Tap keys is mostly invisible without IGNORE_MOD_TAP_INTERRUPT.

Add comments before return statements in sample implementations of
`get_ignore_mod_tap_interrupt()`, `get_hold_on_other_key_press()` and
`get_permissive_hold()`.

Thanks to @Erovia and @precondition for comments and suggestions to
improve the documentation.  
>move volcano660 to ilumkb folder (#13550)* move volcano660 to ilumkb folder

* Update rules.mk

* Fix up readme

Co-authored-by: zvecr <git@zvecr.com>  
>[Keyboard] Add Irene Keyboard (#13991)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Updates to ScrabblePad (#13177)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Align some quantum sub-directories (#14134)* Misc folder tidy

* Review comments

* Remove redundant entry  
>Align DIP_SWITCH_PINS_RIGHT implementation with encoders (#14079)  
>Allow for removal of hysteresis on 4x encoders (#13698)* Remove hysteresis on 4x encoders

Sometimes, controller skips encoder pulses and when it returns to default position, the encoder_pulses variable isn't equals 0. And when I turn encoder in opposite direciton, it skips first click becase of encoder_pulses crosses zero. To prevent this, I add the ENCODER_DEFAULT_POS constant, and reset encoder_pulses into 0 when the state variable equals ENCODER_DEFAULT_POS.

* Documentation for ENCODER_DEFAULT_POS  
>[Keyboard] Changed ProductID on basketweav keyboards (#14162)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Vince Vorholter <vince@28east.co.za>  
>[Keyboard] Added Frooastboard (#13970)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove MIDI Configuration boilerplate (#11151)* remove keyboard-level instances of `MIDI_ENABLE = no`

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e  '/^[ #]*MIDI_ENABLE[ \t]*=[ \t]*no/d' {} +
```

Co-Authored-By: Nick Brassel <nick@tzarc.org>

* fix case-sensitivity issues on MIDI_ENABLE

Change instances of `MIDI_ENABLE = YES` to `MIDI_ENABLE = yes`.

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;MIDI_ENABLE[ \t]*=[ \t]*[Yy][Ee][Ss];MIDI_ENABLE = yes;g' {} +
```

* replace `# MIDI controls` with `# MIDI support`

Replace `# MIDI controls` with `# MIDI support` in keyboard-level `rules.mk` files.

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;#[ \t]*MIDI[ \t]*\(controls\|support\).*;# MIDI support;g' {} +
```

* align inline comments

Aligns the inline comments to the length used by the QMK AVR rules.mk template.

Command:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;MIDI_ENABLE *= *yes.*;MIDI_ENABLE = yes           # MIDI support;g'  {} +
```

* remove commented instances of `MIDI_ENABLE` from keyboard `rules.mk` files

Commands:

```
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;#\([ \t]*MIDI_ENABLE\) = yes; \1 = no ;' {} +
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e 's;^\([ \t]*\)\(MIDI_ENABLE = no\);\2\1;' {} +
find keyboards/ -type f -name 'rules.mk' -and -not -path '*/keymaps/*' -exec sed -i -e '/^[ #]\+MIDI_ENABLE *= *no/d' {} +
```

* remove MIDI configuration boilerplate from keyboard config.h files

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Merge remote-tracking branch 'upstream/master' into developConflicts:	keyboards/gmmk/pro/ansi/keymaps/jonavin/rules.mk	keyboards/space_space/rules.mk  
>Merro60 Layout Macro Refactor (#13827)  
>[Keybord] Add LS_60 keyboard (#13851)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Core] [Docs] Remove travis-ci references (#13916)  
>[Keyboard] add Stealth macropad (#13986)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>[keyboard] Add 0x3E (#14088)* Add 0x3E - default config

* Apply suggestions from code review

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Apply suggestions from code review 2

Firmware size optimization

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Rename files as per project guidelines + remove empty

* Update link in readme.md

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Relocate platform specific drivers (#13894)* Relocate platform specific drivers

* Move stm eeprom

* Tidy up slightly  
>[Keyboard] Use new matrix_output_select_delay api (#13861)* Use new matrix_output_select_delay api

* Updated delay to 15 after more spamming  
>Make solo half of split keyboards (more) usable. (#13523)* Make solo half of split keyboards (more) usable.

Using only one half of a split keyboard (that's using the split_common
framework to communicate) is not a great experience, since several read
timeouts per scan cycle cause an unusably slow scan rate.

This change blocks all split communication attempts for 500 ms
(configurable) after an error occurs, causing the scan rate to become at
least _more_ usable, but might need some tweaking to work fully on most
keyboards. One read timeout still needs to occur after the 500 ms has
passed, and if that timeout isn't low enough, some scan cycles may still
be too slow.

* Fix lint complaint.

* Require 25 consecutive comm errors to see comms as disconnected.

The number of max errors can be overridden by defining
`SPLIT_MAX_CONNECTION_ERRORS`.

* Add comments to new defines, and ability to disable disconnection check.

Also increase `SPLIT_MAX_CONNECTION_ERRORS` to 40, since it's divisible
by most relevant numbers for the description.

* Make lint happy ...again

* Only update `connection_check_timer` when needed.

* Add new defines to split keyboard documentation.

* Move connection timeout logic to transport.c, add `is_transport_connected`.

* Use split_common disconnection logic in matrix.c.

Instead of doing more or less the same thing twice.

* Move disconnection logic to `transport_master`.

Is a cleaner implementation, and causes the scan rate while disconnected
to increase instead of decrease.

* Lint fixes.

* Lower default `SERIAL_USART_TIMEOUT` to 20 ms.

The read timeout must be low enough to not cause exessively long scan
cycles when using a solo split half. 10 ms was determined from testing
to work fine even with the slowest defined baudrate of 19200 (5 ms was
too low for that case), so 20 ms should be fine for most cases.

* Remove `SERIAL_USART_TIMEOUT` from ergodox_infinity/config.h

Was somewhat mistakenly included in an earlier PR.

* Fix building with `USE_I2C`.

* Reduce built firmware size.

Not really sure why this works, the idea was taken from tzarc's work on
split disconnection.

* Tweak and improve opt-out for split disconnection logic.

There are now two ways to opt out from this feature:
* Set `SPLIT_MAX_CONNECTION_ERRORS` to 0. This will completely disable
  the connection status checks (also affects the slave matrix reset logic in
  matrix.c, though).
* Set `SPLIT_CONNECTION_CHECK_TIMEOUT` to 0. This will only disable the
  communication throttling while disconnected. Will make the firmware
  smaller.

* Make split disconnection logic work with custom transports.

Includes a fallback implementation for keyboards using a custom
split_util.c but not a custom matrix.c (currently no such keyboard seems
to be merged, though).

* Remove unnecessary include of timer.h

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Joel Challis <git@zvecr.com>  
>Support all the 0.2 Ferris variants (#12653)* Support all the 0.2 Ferris variants

For the Compact, the High and the Mini, create a new directory so each
keyboard may have the correct USB descriptor and a readme with more
specific information about it.

For the Bling, also add support for the underglow functionality.

Change the "MANUFACTURER" string to "Cuddly Keyboards Ltd.", the
name of the company I incorporated to sell keyboards, and change the
default descriptor from "Ferris the keeb" to "Ferris 0.2" which is more
descriptive.
I didn't update the 0.1 variants as I don't intend to sell these kits
with "Cuddly Keyboards". The firmware is mostly there to support
existing users.

Update the "hardware availability" to point to my new website:
cuddlykeyboards.com.

* Add RGB mode toggle to my keymap and to the default keymap

* Improve wording in the readme  
>[Keyboard] fixes for KBD67 rev2 (#13906)  
>AL1 refactor (#13679)  
>[Keyboard] Add Iris Rev. 5 (#13934)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Digitizer HID interface : absolute coordinates for mouse cursor (#12851)* Add digitizer HID interface for setting the mouse cursor position at
absolute screen coordinates. Tested on Pro Micro, Proton C and
Blackpill.

* Update docs/feature_digitizer.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update tmk_core/protocol/usb_descriptor.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Add missing copyrights
Add V-USB support

* Add support for digitizer dedicated endpoint for lufa and chibios.
Fix formatting issues
Move digitizer_task definition to the feature's base implementation file

* Run cformat on modified files

* Change digitizer report usage to Digitizer instead of Pen to avoid
pointer disappearing on Windows.

* Update tmk_core/protocol/vusb/vusb.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Run cformat from docker image

* Remove send_digitizer from host_driver_t and instead rely on the
declaration being the interface to the implementation in each
HW-specific usb implementation.

* Fix build : send_digitizer shouldn't be static in vusb and add
weak-linkage implementation for tests without usb implementation

* Change digitizer user interface to match pointing device's

* Update documentation with new API

Co-authored-by: a-chol <nothing@none.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>kb-elmo Noah AVR Community Layout support and Configurator fix (#14078)* noah_avr.h: use QMK 3-character notation for matrix positions

* Community Layout support, Stage 1

- rename LAYOUT_ansi to LAYOUT_65_ansi_blocker
- rename LAYOUT_ansi_splitbs to LAYOUT_65_ansi_blocker_split_bs
- enable Community Layout support

* info.json: add line breaks between rows

* info.json: correct LAYOUT_iso data

- unsplit the Backspace
- change ANSI Enter to ISO Enter
- split the left Shift

* Community Layout support, Stage 2

- rename LAYOUT_iso to LAYOUT_65_iso_blocker
- update Community Layout support

* Community Layout support, Stage 3

- add LAYOUT_65_iso_blocker_split_bs
- update Community Layout support

* noah_avr.h: add matrix diagram  
>[Keyboard] Fixup Ungodly Launch Pad config (#13992)  
>[Keyboard] ez_maker/directpins for easy one-offs in qmk_configurator (#13321)* new keyboard: handwired/directpins

* fix promicro keyboard_name

* add teensy2 and teensy2++ support

* align with handwired/onekey

* tweak pids

* add teensy 3.2 and teensy lc to directpins

* move directpins from handwired to ez_maker

* add docs for easy maker  
>[Keyboard] Add Pancake v2 (#13839)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>eeprom_stm32: implement high density wear leveling (#12567)* eeprom_stm32: implement wear leveling
Update EECONFIG_MAGIC_NUMBER
eeprom_stm32: check emulated eeprom size is large enough
* eeprom_stm32: Increasing simulated EEPROM density on stm32
* Adding utility script to decode emulated eeprom
* Adding unit tests
* Applying qmk cformat changes
* cleaned up flash mocking
* Fix for stm32eeprom_parser.py checking via signature with wrong base
* Fix for nk65 keyboard

Co-authored-by: Ilya Zhuravlev <whatever@xyz.is>
Co-authored-by: zvecr <git@zvecr.com>  
>[Keyboard] Interlace matrix scan for performance on Moonlander (#13625)  
>Fix alignment of USB out report buffer 2 -> 4 (#13838)  
>[Keyboard] Ava initial commit (#13845)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: SneakboxKB <64090325+mujimanic@users.noreply.github.com>  
>[Keyboard] Add yoichiro/lunakey_macro (#13849)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>LFKeyboards: Replace `KC_FNx` with `F(x)` (#13999)  
>[Keymap] Drashna keymap fixups (#14140)  
>Steno combinedkeys (#12538)* Add support for steno keys that press adjacent keys simultaniously

* Add some docs for steno combined keys  
>[Keyboard] Addition of VIA keymap and a few fixes for naked60 (#14225)Co-authored-by: Joel Challis <git@zvecr.com>  
>Tidy up quantum.c now some of tmk_core has been merged (#14083)  
>Breaking changes develop merge to master, 2021Q3 edition. (#14196)  
>[Keyboard] add 3w6 (#13746)  
>[Keymap] mechmaster48 keymap  for OLKB Preonic rev3 (#14137)  
>Fix `combo_disable` (#13988)- Dump key buffer when combos are disabled.
- Recursive calls to `dump_key_buffer` need to start dumping the buffer
  from index i+1 to avoid possible infinite loops.
- Handle combo key releases even though combo processing is disabled.  
>Duck Eagle/Viper V2 Refactor (#13828)  
>[Keyboard] Disable Console on Keebio Quefrency (#14108)  
>Added VIA keymap for pistachio_mp (#14015)* Added VIA keymap for pistachio_mp

* Fixed typos  
>Fixup Audio startup and add to documents (#13606)* Fixup Audio startup and add to documents

* fix doc descriptions  
>[Keymap] Drashna split transport improvement (#13905)* Fix up split stuff

* Fix Split perf issues

* Allow LTO to be disabled

* Fixup WPM and encoders

* Fixup qmk keys per scan

* Add bootloader info

* Change encoder pins

* Fixup corne oled code

* Expand transport sync

* Improve user transport

* Cleanup mouse processing at keymap level

* Improve layer checking for mouse layering  
>Fix Mouse Shared EP functionality (#14136)Specifically, if you enable the shared endpoint for mouse reports (or keyboard, which force enables it for mouse), and you don't have mousekeys enabled, it does not properly enable shared mouse EP for pointing device (which uses mouse reports).   This cause it to error out in compiling.  This fixes up some of the logic to ensure that all use cases are supported, and consolidates some of the code.  
>Enable sync of OLED/ST7565 display on/off state on Splits (#13542)* Enable sync of OLED/ST7565 display on/off state on Splits

* Only send if states are not matched

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Rgb matrix/enable modes explicitly (#13758)* Change animations to require explicet activation

* Add support for legacy config

* Make default for now

* Add LED Matrix support

* change LED Matrix docs  
>Move feature suspend logic out of platform specific code (#14210)  
>Fix wait_us overflow in matrix for dactyl based boards (#14039)  
>Move USB Host Shield and Arduino core to `lib/` (#13973)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-07  
Contributor(s):  
Zach White  
Joakim Tufvegren  
Daegara  
mechlovin  
Rafael Yumagulov  
Marc Tamsky  
Ryan  
Donald Kjer  
Xelus22  
Md. Mashur Shalehin Sakib  
Albert Y  
npspears  
sekigon-gonnoc  
Thomas Weißschuh  
James Young  
Adrian L Lange  
SergioPoverony  
8bits4ever  
Drashna Jaelre  
Dasky  
farfalleflickan  
yiancar  
bomb  
rate  
DA  
fauxpark  
Ian Klug  
Álvaro A. Volpato  
Nic Lake  
gtips  
Kwabena Aduse-Poku  
team0110  
drhigsby  
Patrick Stadler  
Erovia  
Andrew Kannan  
MakotoKurauchi  
Jonas Gessner  
Suschman  
kb-elmo  
Rys Sommefeldt  
GG  
Weirdo  
Blake  
Michael  
XScorpion2  
yfuku  
X-Bows Tech  
QMK Bot  
Manassarn "Noom" Manoonchai  
Kuba Tyszko  
William Ehman  
TerryMathews  
Manna Harbour  
Chris Cullin  
AlisGraveNil  
AquaCylinder  
Shandon Anderson  
Matthew Dias  
ForsakenRei  
Joel Challis  
Ramon Imbao  
Takeshi ISHII  
Koichi Katano  
ぺらねこ  
joedinkle  
Nick Brassel  
Oliver Granlund  
>Cleanup junk chars, part 4 (#13345)  
>`keymap_extras`: Remove deprecated defines (#12949)  
>/bin/bash to /usr/bin/env bash (#13422)  
>Merge remote-tracking branch 'upstream/master' into develop  
>Update LUFA (18-07-2021) and add QMK-HID Bootloader support (#13588)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove deprecated callbacks for encoders and dip switches (#13404)  
>Revert "Add rgblight to RGB Matrix VPATH" (#13559)  
>Switch Ergodox Infinity over to split_common (#13481)  
>[Keyboard] Update ZSA Keyboard Readmes and keymaps (#13041)* [Keyboard] Update ZSA Keyboard Readmes and keymaps

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Remove custom rgb code for RGB_M_P

* Fix inevitable typo

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/planck/ez/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Fix RGBKB Pan Rev1 Encoder RGB handling (#13781)  
>[Keyboard] Repaired melgeek/mj63/ RGB lamp driver problem (#13579)  
>Unify matrix for split common and regular matrix (#13330)  
>Remove `API_SYSEX_ENABLE`s from rules.mk (#13389)  
>[Bug] Include gpio.h in solenoid driver for GPIO Control functions (#13716)  
>Move some led drivers to common folder (#13749)* Move some led drivers to common folder  
>[Keyboard] Add Mojo68 for Melgeek (#13578)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add ianklug grooveboard (#13536)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Neito + my DZ60 keymap tweaks (#11773)  
>[Keyboard] Add Emi20  (#13603)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Txuu keyboard (#13650)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add new Elise, 65% Keyboard ANSI / ISO  (#12782)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Move `SENDSTRING_BELL` code to `send_string.h` (#13566)  
>Fix two out of bounds accesses from #13330. (#13525)Two occurrences of `MATRIX_ROWS` weren't properly changed to
`ROWS_PER_HAND` in #13330, causing a crash during boot on at least my
Ergodox Infinity (including #13481).  
>Reduce firmware size in prep for #12670 (#13724)* Reduce firmware size in pre for #12670

* Also disable pixel mode, just in case  
>Migrate SHIFT_ESC and RGB `fn_actions` to Grave Escape and RGB keycodes (#13360)  
>[Keyboard] Added flygone60 rev3 (#13280)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Sergey Vlasov <sigprof@gmail.com>  
>Remove legacy BACKLIGHT_CUSTOM_DRIVER option (#13731)  
>[Keyboard] fix LED issue BOCC keyboard (#13175)Co-authored-by: Michael Wamsley <wamsl@Michaels-MacBook-Pro.local>  
>Minor tidy up of key overrides (#13747)* Minor tidy up of key overrides

* Update quantum/quantum.c

* Update quantum/quantum.c  
>Implement GPIO abstraction for atsam (#13567)* Implement GPIO abstraction for atsam

* Convert Drop boards to normal matrix config

* Work round pin conflicts and matrix delay  
>[Keyboard] Fix compile size for the Vitamins Included via keymap (#13696)  
>[Keymap] niclake - Keymap updates - Boardwalk updates & DZ60 create (#13245)  
>Convert Dip Switch callbacks to boolean functions (#13399)  
>[Keyboard] Added Compound keyboard support (#12942)* [Keyboard] Added Compound keyboard support

* Small fixes for Compound keyboard

* Fixed readme and header file for Compound keyboard

* Update keyboards/compound/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Changed info.json and readme.md for Compound Keyboard

info.json - removed key_count
readme.md - changed PCB picture url to low-resolution

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Clean up remaining RGB_DISABLE_WHEN_USB_SUSPENDED defines (#13689)  
>[Keyboard] Add tone (#13337)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Takeshi ISHII <2170248+mtei@users.noreply.github.com>
Co-authored-by: kakunpc <15257475+kakunpc@users.noreply.github.com>  
>[Keyboard] add SPRH keyboard (#12999)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Use string literals for `SERIAL_NUMBER` (#13403)  
>[Keyboard] Added another layer for VIA on the AEK II (#13100)  
>Drashna's split updates (#13350)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Retain brightness with lighting layers (#13025)Add guard `RGBLIGHT_LAYERS_RETAIN_VAL` to retain the currently used val
when applying lighting layers.  
>first pass: matrix consistency improvements (#13471)  
>[Keyboard][Bug] Add timer_avr to includes for broken builds (#13641)  
>[Keyboard] Fix Compile size on ungodly Launch Pad (#13692)  
>[Keyboard] add cherryb studio cb1800 keyboard (#13639)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] CapsUnlocked CU7 (#13429)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] GameBuddy v1.M (#12637)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Six Pack and ortho_ layout updates (#13587)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Suschman <suschman@gmail.com>  
>[Keyboard] Fix up SplitKB keyboards (#13511)  
>matrix_scan_x -> x_task (#13748)  
>Onekey cleanup (#13786)  
>[Docs] Add `default` case in Tap Dance Example 6 (#13727)Added a `default` case in `switch(ql_tap_state.state)` at line 493 and 494.
Without it compile firmware with Example 6 code will encounter 2 errors:
`enumeration value 'TD_NONE' not handled in switch`
`enumeration value 'TD_UNKNOWN' not handled in switch`  
>Avoid LTO conficts on arm_atsam (#13676)  
>Change the prototype of matrix_output_unselect_delay() (#13045)The prototype of matrix_output_unselect_delay() has been changed as follows.

```c
void matrix_output_unselect_delay(uint8_t line, bool key_pressed);
```

Currently, no keyboard seems to be redefining `matrix_output_unselect_delay()`, so there is no change in the system behavior.

With this change, the keyboard level code can get some optimization hints, for example, the following.

```c
 void matrix_output_unselect_delay(uint8_t line, bool key_pressed) {
     /* If none of the keys are pressed,
      *  there is no need to wait for time for the next line. */
     if (key_pressed) {
 #ifdef MATRIX_IO_DELAY
 #  if MATRIX_IO_DELAY > 0
         wait_us(MATRIX_IO_DELAY);
 #  endif
 #else
         wait_us(30);
 #endif
     }
}
```  
>`qmk docs`: Add flag to open in browser (#13788)* `qmk docs`: Add flag to open in browser

* Add docs  
>[Update] Change Original TAGs of Japanese translations (#13473)* Updated docs/ja/proton_c_conversion.md original tag.

* Updated docs/ja/other_vscode.md original tag.

* Updated docs/ja/feature_swap_hands.md original tag.

* Updated docs/ja/faq_general.md original tag.

* Updated docs/ja/feature_userspace.md original tag.

* Updated git co docs/ja/config_options.md original tag.  
>[Keyboard] Fix dc01/left so that it doesn't throw a warning (#13653)  
>[Keyboard] Updated keyboard & keymaps (#12667)Co-authored-by: pastapojken <6597735+pastapojken@users.noreply.github.com>  
>add support for Axon40 and G_IDB60 (#13075)* add support for Axon40

* add support for G_IDB60

* added bootloader reset instructions

* added bootloader reset instructions  
>[Keyboard] Add keyboard reviung5 (#13375)  
>[Keyboard] Set reasonable defaults for Corne keyboard (#13440)* [Keyboard] Set reasonable defaults for Corne keyboard

* Add note about bootmagic

* Make bootmagic config super weak

* cleanup

* Apply suggestions from code review

* Update keyboards/crkbd/readme.md  
>CLI/Docs: Fix the format commands' name (#13668)PR #13296 changed the name of the `cformat` and `pyformat` commands to
`format-c` and `format-py` respectively. This PR updates the documentation
and some parts of the CLI to use the new names.
Also add documentation for the new `format-text` subcommand, introduced
in the same PR.  
>[Keyboard] Add Durgod Taurus K310 keyboard (#12314)Co-authored-by: Tyler Tidman <tyler.tidman@draak.ca>
Co-authored-by: Simon Arlott <sa.me.uk>  
>[Keyboard] Add h0oni hotduck keyboard (#13609)  
>[Keyboard] add ogurec (#13242)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Atomic Refactor (#13761)* info.json: human-friendly formatting

- one key per line
- line breaks between physical rows
- four-space indent

* info.json: add data for LAYOUT_grid

* fix keymap paths

This commit corrects the paths for three keymaps that were in the wrong directory.

* refactor and bugfix abienz keymap

- remove extra commas
- use QMK-native aliases for KC_TRNS and KC_NO
- add include for Colemak keycode support
- use four-space indent

* refactor and bugfix michelle keymap

- remove inline comments for keymap layout
- remove extra commas
- use QMK-native aliases for KC_TRNS and KC_NO
- use four-space indent

* refactor and bugfix twolayer keymap

- remove extra commas
- refactor action_get_macro() keycode to QMK-native keycode
- use QMK-native aliases for KC_TRNS
- use four-space indent
- adjust grid alignment

* rename LAYOUT_grid to LAYOUT_ortho_5x15

* refactor config.h file

- use #pragma once include guard
- update MANUFACTURER and PRODUCT strings to be consistent with other OLKB boards
- remove Magic config (all settings are default)

* refactor atomic.c

- add license header
- use GPIO control functions

* refactor atomic.h

- add license header
- use #pragma once include guard
- remove redundant file includes

* refactor rules.mk

- remove Bootloader selection comments
- unify Build Option header comment to QMK template
- unify Build Option rules and inline comments

* alias LAYOUT_grid to LAYOUT_ortho_5x15  
>[Keyboard] Reduce compile size for dz60rgb v2.1 (#13680)  
>[Keyboard] Add Commodore Amiga 1200 Membrane Converter (#13705)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Update "make format" message (#13741)* Update "make format" message

* Add examples for `qmk` command as well  
>[Keyboard] Add wings42 keyboard (#12734)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add Creator Pro by SergioPoverony (#13154)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>1UP Keyboards 1UP60HTE layout macro touch-up (#13529)* rename LAYOUT_tsangan to LAYOUT_60_tsangan_hhkb

... and enable Community Layout support.

* use four-space indent and QMK-native keycode aliases

* rules.mk touch-up

- remove Bootloader selection header comments
- unify Build Options comment header to QMK template
- align inline comments

* readme.md touch-up

- convert metadata to list
- add Flashing command

* move layout macro alias to info.json

* apply friendly formatting to info.json

* restore badger keymap to previous (don't edit user keymap)  
>[Keyboard] Fix compile size for the Lets Split Sockets via keymap (#13691)  
>Enable g_is31_leds PROGMEM for RGB Matrix IS31FL3737 driver (#13480)  
>[Keyboard] Add Bloop65 (#13388)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Fix matrix issues with Promethium (#13648)  
>[Keyboard] Add Bakeneko65 V3 and revision folders (#13228)  
>Add support for NO_PIN to all matrix types (#12238)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Add rgblight to RGB Matrix VPATH (#13371)  
>Haptic: driver-> feature (#13713)  
>remove `#include "rgblight.h"` when `defined(RGB_MATRIX_ENABLE)` from quantum.h (#13555)  
>[Keyboard] Add keyboard GRS-70EC (#11296)  
>Dactyl Manuform cleanup (#13686)  
>[Keymap] Add narze lily58 keymap & update my other keymaps (#13110)Co-authored-by: Ryan <fauxpark@gmail.com>  
>LazyDesigners Bolt: move via keymap to keymaps directory (#13581)  
>[Keyboard] Initial Noxary 378 support (#13156)Co-authored-by: Gondolindrim <alvaro.augusto.volpato@gmail.com>  
>Merge remote-tracking branch 'origin/master' into developResolved Conflicts:	keyboards/checkerboards/nop60/info.json  
>Explicitly state that VIA should not be enabled in the default keymap. (#13803)  
>Improve layer mask handling (#13065)  
>[Keyboard] Aella Keyboard PCB (#13372)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Drashna's Defaults cleanup (#13722)  
>Use the new ST7565 driver on Ergodox Infinity (#13165)  
>Merge remote-tracking branch 'origin/master' into develop  
>mousekey: expose current report to users (#13069)  
>docs/cli_commands: fix typo (#13697)  
>Refactor some platform dependent logic (#13675)  
>__flash? (#13799)  
>Port new_keyboard.sh to CLI (#13706)Co-authored-by: Erovia <Erovia@users.noreply.github.com>  
>Discipline layout macro/Configurator fixes (#13574)* use human-friendly formatting in info.json

* move layout macro aliases to info.json

* correct and complete layout data

Corrects the layout data for a few layouts, adds the missing data, and renames some of the layout macros.

- rename LAYOUT_wkl_ansi_2_right_mods to LAYOUT_65_ansi_wkl
- rename LAYOUT_wkl_ansi_3_right_mods to LAYOUT_65_ansi_lwkl
- rename LAYOUT_wkl_iso_2_right_mods to LAYOUT_65_iso_wkl
- rename LAYOUT_wkl_iso_3_right_mods to LAYOUT_65_iso_lwkl  
>[Keymap] Update Miryoku (#13307)Fix reddit link

Duplicate open parenthesis next to close parenthesis on NSSL

Add customisation instructions

Add lily58

Add gergo
Co-authored-by: Jonathan Dayton <jonathandayton23@gmail.com>

Clean up LAYOUT macro formatting

Add alternative vi-style navigation layout

Add kyria

Add minidox

Change order of keyboards

Add iris

Expand TOC

Re-order userspace subheadings

Add atreus

Add customisation section

Add split_3x5_3 and split_3x6_3 layouts

Add for_science

Fix wrong paths in keyboard config.h and keymap.c headings

Fix keyboard ordering

Fix blank lines around headings

Add compatibility with new org-mode version.

Remove keyboards/crkbd now covered by layouts/split_3x6_3

Add Halmak

Alphabetise alternative alpha arrangements

Move build options out of base layer alphas headings

Add list of keyboards supporting split_3x5_3 layout

Enable Auto Shift and Retro Shift

Add Retro Shift (Auto Shift for Tap Hold via Retro Tapping)

Change kyria thumb key mapping

Add planck_mit layout

Remove alternative bottom row support from ortho_4x12

Remove minidox
 - Covered by split_3x5_3 layout

Add moonlander

Remove KC_ macros

Add 60_ansi layout

Add ortho_5x15 layout
Closes manna-harbour/qmk_firmware#5
Co-authored-by: Rob <rob@debank.tv>

Fix typo (manna-harbour/qmk_firmware#7)
Author: sonnius <sonnius@users.noreply.github.com>

Add redox_w (manna-harbour/qmk_firmware#8)
Author: Brian Romanko <hello@bromanko.com>
Co-authored-by: Manna Harbour <51143715+manna-harbour@users.noreply.github.com>

Add AUTO_SHIFT_NO_SETUP to reduce firmware size

Update image paths

Add instructions to checkout development branch

Add kyria extended thumbs option, change default, add KLE

Change clipboard keys
 - Change order to be mirror of windows bindings
 - Change default to use CUA bindings for Cut, Copy, and Paste, and Fun Cluster
bindings for Undo and Redo
 - Add alternative bindings
   - Fun Cluster (original miryoku bindings)
   - Mac
   - Windows
 - Change prefix for local macros from X_ to U_

Disable Retro Shift, enable Auto Shift for non-alphas

Revert "Add Retro Shift (Auto Shift for Tap Hold via Retro Tapping)"

Add Experimental Features section

Update miryoku image link

Update cover image link

Add dactyl_manuform/4x5

Add cutomisation examples

Add https to remote example

Fix dactyl_manuform/4x5 subset mapping

Add extended thumbs to ortho_4x12

Update Colemak Mod-DH naming
Closes manna-harbour/qmk_firmware#13

Add dactyl_manuform/5x6
Resolves manna-harbour/qmk_firmware#14
Co-authored-by: Sebastian Morales <sebastian.moralesd@gmail.com>

Add note on FORCE_LAYOUT
 - Needed to use EXTENDED_THUMBS on planck

Add parent directories to keyboard headings and re-order

Add keyboardio/atreus
Resolves manna-harbour/qmk_firmware#15

Add torn
Resolves manna-harbour/qmk_firmware#16
Author: Brian Romanko <hello@bromanko.com>
Co-authored-by: Manna Harbour <51143715+manna-harbour@users.noreply.github.com>

Change map to zip
 - Adds support for python3, still compatible with python2.
Resolves manna-harbour/qmk_firmware#10
Resolves manna-harbour/qmk_firmware#19
Co-authored-by: Ori <ori@oribarbut.com>

Add python-version

Add sofle

Add ergotravel

Add ortho_5x12

Add ortho_4x10

Add :main no header argument to C code blocks
resolves manna-harbour/qmk_firmware#11
resolves manna-harbour/qmk_firmware#12
Co-authored-by: RubioJr9 <u0893472@utah.edu>

Add flipped layers and inverted-T nav alternative layouts
 - Separate tap_table into alphas_table and thumbs_table
 - Add mode argument to table-layout-half
 - Remove layer_name
 - Rename layers
 - Add mods and clipboard to MBO and mirror
 - Add MIRYOKU_LAYERS=FLIP
 - Add MIRYOKU_NAV=INVERTEDT

Add layer diagrams

Update contact section

Update links for Bilateral Combinations and Retro Shift

Add description and no reverse angle option to 60_ansi layout

Update list of keyboards supporting community layouts
 - and example build command lines

Change moonlander thumb keys

Update list of keyboards supporting split_3x5_3

Add license to tangled C source files  
>[Keyboard] Add MelGeek MJ6xy which is a 60% keyboard that support mul… (#13494)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Update bface p3lim keymap (#13582)  
>[Keyboard] Add Vicious40 to QMK (#12981)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Relocalize and Update p1800fl (#12425)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: marhalloweenvt <marhalloweenvt@gmail.com>
Co-authored-by: Drashna Jael're <drashna@live.com>  
>[Keyboard] Add X-Bows Knight_Plus Keyboard (#13221)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[keyboard] Clueboard 2x1800 2021 Support (#13220)* 2x1800 2021

* add support for writing a whole frame at a time

* improvements

* wip

* fix scrolling

* small tweak

* add a buffer that's larger than the display

* add the start of a font

* working upper and lower case letters

* add qmk animation

* integrate the message sign into the qmk task system

* add encoder defaults

* add MAX7219_LED_CUSTOM to config.h

* tweaks

* remove unneeded keymaps

* add a keymap showing how to control the signboard

* cleanup

* cleanup

* add a way to disable the startup test

* make it easier to define options at the keymap level

* Fix define names

Co-authored-by: Greg Cochard <gcochard@users.noreply.github.com>

* Apply suggestions from gcochard

Co-authored-by: Greg Cochard <gcochard@users.noreply.github.com>

* feedback from noroads

* format info.json

Co-authored-by: Greg Cochard <gcochard@users.noreply.github.com>  
>[Keyboard] add new firewave ikki68_aurora (#13364)Co-authored-by: Ryan <fauxpark@gmail.com>  
>DP60 layout macro renames (#13811)* info.json: apply human-friendly formatting

* rename LAYOUT_60_wkl to LAYOUT_60_ansi_tsangan_split_rshift

* rename LAYOUT_60_wkl_split_bs to LAYOUT_60_tsangan_hhkb

* info.json: remove `key_count` keys  
>Improve driver installation docs (#13562)  
>Traveller cleanup (#13441)* Traveller cleanup

* Update keyboards/handwired/traveller/info.json

Co-authored-by: Joel Challis <git@zvecr.com>

Co-authored-by: Joel Challis <git@zvecr.com>  
>[Bug] Develop - DC01 left (#13597)  
>Mechmini V1 Refactor (#13498)  
>Clawsome Hatchback & SUV: fix improperly named keymap directories (#13508)  
>Allow for higher USB Polling rate on ATSAM boards (#13755)  
>[Keyboard] Add Serratus PCB (#13281)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Keyboards/sol rev2 fix (#13533)* Fixed a recent develop error

* minor fix cause I am tired  
>Alu84 Refactor (#13760)* info.json: human-friendly formatting

* use QMK 3-character notation for layout macro/data

* alu84.h: use #pragma once include guard

* clean up alu84.c

Remove unnecessary includes and functions.

* refactor config.h

- use #pragma once include guard
- enable Backlight Breathing
- align comments to QMK AVR template

* refactor default keymap

- add license header
- use layer_names enum
- refactor keymap to be more generic
- remove unnecessary and empty functions

* refactor turbomech keymap.c

- edit license header
- refactor keymap for readability (use QMK-native keycode aliases)
- remove unnecessary and empty functions

* refactor turbomech config.h

- use #pragma once include guard
- align to QMK template

* refactor turbomech rules.mk

Edit the file to make it conform to QMK template.

* align rules.mk to QMK template

* touch-up default keymap

* touch-up alu84.h

* rename LAYOUT to LAYOUT_75_ansi

Also enables Community Layout Support

* modernize readme.md

- update description
- convert keyboard data to list
- add flashing and bootloader instructions
- update Docs links

* alias LAYOUT to LAYOUT_75_ansi

* change readme image URL per fauxpark

* touch up turbomech keymap rules.mk per fauxpark

* rules.mk: convert tab to spaces  
>change DIP_SWITCH_ENABLE to off (#13815)  
>[Keyboard] Add Tiger910 (#12605)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Valor Rev 2 (#13551)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Ares refactor (#13730)  
>Nack: rename layout macro to LAYOUT_ortho_4x13 (#13784)  
>Include lib8tion.c into RGB/LED matrix build list (#12699)Co-authored-by: filterpaper <filterpaper@localhost>  
>Migrate arm_atsam print logic to use common framework (#13554)  
>Migrate more `fn_actions` stuff (#13502)  
>AMJ60 Refactor (#13530)* rename LAYOUT to LAYOUT_all

* refactor default keymap

- add license header
- use layer_names enum
- use LAYOUT_all macro
- update keymap to be more generic
- use QMK-native keycode aliases

* info.json: human-friendly formatting

* convert LAYOUT_iso into a proper LAYOUT_60_iso

* LAYOUT_all bugfix

In the physical sense, position k3d is to the left of k3c.

* rework LAYOUT_max into LAYOUT_60_ansi_split_bs_rshift

* remove LAYOUT_iso_splitrshift and iso_split_rshift keymap

* rework LAYOUT_hhkb into LAYOUT_60_hhkb

* amj60.h cleanup

- add license header
- use #pragma once include guard
- concatenate layout block comments
- remove unnecessary function headers

* add license header to amj60.c

* align config.h to QMK template

* align rules.mk to QMK template

* enable Community Layout support

* modernize readme.md

- add PCB image
- convert keyboard data to list
- add flashing and bootloader instructions
- update Docs links  
>[Keyboard] CU65 layout update (#13589)  
>[Keyboard] Quick hack to fix Astro65 board (#13665)* [Keyboard] Quick hack to fix Astro65 board

* Use proper pins  
>[Feature] Key Overrides (#11422)  
>[Keyboard] Add Mona v1.1 (#13721)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>dirty fix (#13695)  
>[Bug] Develop - Change uint32_t to layer_state_t  (#13596)* fix sat75

* update uint32_t to layer_state  
>[Keyboard] manyboard macro (#11896)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Added pistachio rev2 (#13248)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] PORTICO: add support for wt_rgb (#13241)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Clawsome Luggage Rack: correct keymap directory name (#13780)Rename `keyboards/clawsome/luggage_rack/keymap/` to `keyboards/clawsome/luggage_rack/keymaps/`.  
>[Keyboard] mnk1800s initial commit (#13444)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-06  
Contributor(s):  
Zach White  
Joakim Tufvegren  
umi  
Gigahawk  
obosob  
John Graham  
Ryan  
Xelus22  
Albert Y  
Sergey Vlasov  
Ignaz Kevenaar  
Jumail Mundekkat  
Simon Arlott  
Andy Freeland  
Stefan Kerkmann  
Dasky  
yiancar  
Drashna Jaelre  
nopjmp  
rate  
Gvalch-ca  
fauxpark  
Kasper  
gtips  
kb-elmo  
xyzz  
Fidel Coria  
Michael Stapelberg  
QMK Bot  
talsu  
AlisGraveNil  
Purdea Andrei  
shela  
T.Shinohara  
HalfHeuslerAlloy  
Joel Challis  
18438880  
Jonathan Rascher  
Nick Abe  
Nick Brassel  
>Add oled_invert (#13172)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>GMMK Pro RGB Support (#13147)* Enable SPI1 for GMMK pro

* Setup initial boilerplate for new LED driver

* RGB matrix minimally functional

* Map full LED matrix

* Return keymap to default

* Fix printscreen LED mapping

* Reduce max brightness

* Default values for AW20216

* Add documentation for AW20216

* Disable console and warnings

* Run cformat

* Update drivers/awinic/aw20216.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* make aw struct match issi struct

Co-authored-by: Drashna Jaelre <drashna@live.com>

* add led location defines

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Use led pin definitions in keyboard.c

* Add driver indices to led map

* Fix elif typo

* Run cformat

* Update docs

* Fix typo in docs

* Document global brightness limits

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Update ChibiOS, ChibiOS-Contrib. (#13056)* Update ChibiOS, ChibiOS-Contrib.

* Add instructions.

* Wrong remote name

* Explicit version tag.

* Add link to procedure on the breaking changes page.  
>Fix CRC for AVR and enable again. (#13253)  
>Move LED/RGB Matrix code into their own directories (#13257)  
>Merge remote-tracking branch 'upstream/master' into develop  
>Migrate preonic/rev3 to pwm ws2812 driver (#13142)  
>Fixed ISO keyboard layout for the Mysterium rev1.1 board (#12531)  
>CLI: Add subcommand to generate version.h (#13151)  
>[Keymap] fix key code. numpad to numkey (#12808)* add keyboard new macro pad "Kuro"

* change main readme.md

* remove not used code from default/keymap.c

* Remove unnecessary code

* Supports info.json

* removed back slash and not used functions.

* update at product link. add japanese messages.

* Merge All

* [Shiro]Add MacKeymap

* Change key code. Numpad→Numkey  
>[Keyboard] Add via support for the Leopold FC980C (#12860)  
>Update Japanese newbs.md document. (#12835)  
>[Docs] Update Japanese getting started documents. (#12806)* Update Japanese getting started documents.

* Update faq_build.md

* fix typo  
>[Keyboard] Bugfixes and Readme additions for PloopyCo devices (#13043)  
>Extensible split data sync (#11930)* Extensible split data sync capability through transactions.

- Split common transport has been split up between the transport layer
  and data layer.
- Split "transactions" model used, with convergence between I2C and
  serial data definitions.
- Slave matrix "generation count" is used to determine if the full slave
  matrix needs to be retrieved.
- Encoders get the same "generation count" treatment.
- All other blocks of data are synchronised when a change is detected.
- All transmissions have a globally-configurable deadline before a
  transmission is forced (`FORCED_SYNC_THROTTLE_MS`, default 100ms).
- Added atomicity for all core-synced data, preventing partial updates
- Added retries to AVR i2c_master's i2c_start, to minimise the number of
  failed transactions when interrupts are disabled on the slave due to
  atomicity checks.
- Some keyboards have had slight modifications made in order to ensure
  that they still build due to firmware size restrictions.

* Fixup LED_MATRIX compile.

* Parameterise ERROR_DISCONNECT_COUNT.  
>[Keymap] add new keymap for pteron (#12474)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap]Add Keymap reviung34rgb (#12656)* [Keyboard] Add keyboard Reviung41

* Modified files

* deleted keyboards/reviung41/keymaps/default/config.h

* modified keyboards/rebiung41/keymaps/default/keymap.c

* modified keyboards/reviung41/readme.md

* modified keyboards/reviung41/readme.md

* modified keyboards/reviung41/readme.md

* Update readme.md

Change the image photo of readme.md.

* [Keyboard] Add reviung61

* Update readme.md

* fix keyboards/reviung61/ and add keymap default_rgb

* fix keyboards/reviung61/info.json

* fix keyboards/reviung61/info.json

* remove keyboards/reviung61/keymaps/default/config.h

* [keyboard] Fixed readme.md for reviung39 and 61.

* add keymap keyboards/reviung34/keymaps/default_rgb/ ,default_rgb2u  
>Add asym_eager_defer_pk debounce type (#12689)  
>[Keyboard Update] Trinity XT TKL fix license and add forgotten indicators (#13202)  
>[Keyboard] Add KMAC PAD (#13104)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>OLED driver tweaks (#13215)  
>Fix firmware size check with avr-libc 1:2.0.0+Atmel3.6.2-1.1 (Debian bullseye) (#12951)Debian bullseye (testing at the moment, but seems close to release) has
avr-libc 1:2.0.0+Atmel3.6.2-1.1 with some changes taken from the
Atmel-distributed toolchain.  In particular, the <avr/io.h> header for
ATmega32A (avr/iom32a.h) now defines the FLASHEND constant as `0x7FFFU`,
and that `U` suffix breaks the firmware size check code, because the
shell arithmetic expansion that is used to calculate `MAX_SIZE` does not
support those C-specific suffixes.

As a workaround, add `-D__ASSEMBLER__` to the C preprocessor invocation
that is used to expand those macros; in this case avr/iom32a.h defines
`FLASHEND` without the `U` suffix, and everything works as it did before
with older avr-libc versions.

The exact same code is present in two places; they are both changed,
even though the code in `tmk_core/avr.mk` is actually never used for
ATmega32A (and the header for ATmega32U4 does not add that `U` suffix to
`FLASHEND` for some reason).  
>Telophase cleanup (#13225)  
>Add ST7565 LCD driver (#13089)Co-authored-by: Joakim Tufvegren <jocke@barbanet.com>  
>Migrate keyboards using uGFX to LED_MATRIX (#9657)  
>Fix up WS2812 SPI driver on F072. (#13022)  
>[Keymap] Update bcat's split_3x6_3 for Crkbd legacy removal (#13097)  
>Temporary disable of CRC (#13252)  
>Update merge sequence to reflect no-ff, no-squash. (#13038)  
>Add weak refs on reading rows/cols. (#13062)  
>Add Matrix 8XV1.2 OG rev1 PCB (#11614)* add v1 12og pcb

* update

* matrix changes for testing

* Update matrix.c

* finalized files

* rename board versions

* update readmes

* typo in readme

* fix board filenames

* Update keyboards/matrix/m12og/rev1/rev1.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* change function

* update halconf and chconf

* merge master

* Update readme.md

* Update readme.md

* Update readme.md

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Docs] pr_checklist: fix capitalization of Vial (#13301)  
>[Docs] update Japanese translation of hardware_keyboard_guidelines.md (#12769)* update hardware_keyboard_guidelines.md translation

* update based on comment  
>Move RGBLight code into its own folder (#13312)  
>Add CRC8 calculation subsystem to quantum (#12641)* Intended usage is data validation in split transport code.
* Default space efficient algorithm.
* Opt-in fast table based algorithmn with #define CRC8_USE_TABLE switch.
* Define switches for size and speed optimized versions, the default is size
  optimized by using uint_least8_t as datatype for calculations.
  * #define CRC8_OPTIMIZE_SPEED uses uint_fast8_t as datatype for
    calculations, this only affects 32-bit Archs like ARM and RISC-V.
* Placeholder crc_init() function for hardware backed crc calculation,
  not implemented yet.  
>Fix linker error when rgblight and RGB Matrix are both enabled (#13304)  
>[Keyboard] Add PLX Keyboard (#12954)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Avoid 8-bit timer overflows in debounce algorithms (#12240)* Add fast_timer_t that is 16-bit or 32-bit based on architecture

A 16-bit timer will overflow sooner but be faster to compare on AVR.

* Avoid 8-bit timer overflows in debounce algorithms

Count down remaining elapsed time instead of trying to do 8-bit timer
comparisons.

Add a "none" implementation that is automatically used if DEBOUNCE is
0 otherwise it will break the _pk/_pr count down.

* Avoid unnecessary polling of the entire matrix in sym_eager_pk

The matrix only needs to be updated when a debounce timer expires.

* Avoid unnecessary polling of the entire matrix in sym_eager_pr

The matrix only needs to be updated when a debounce timer expires.

The use of the "needed_update" variable is trying to do what
"matrix_need_update" was added to fix but didn't work because it only
applied when all keys finished debouncing.

* Fix sym_defer_g timing inconsistency compared to other debounce algorithms

DEBOUNCE=5 should process the key after 5ms, not 6ms

* Add debounce tests  
>eeprom_i2c driver: added EXTERNAL_EEPROM_WP_PIN configuration option. (#12617)  
>Cleanup junk chars, part 2 (#13284)  
>Changes requested by Drashna Jaelre <drashna@live.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>Latin6rgb use IS31FL3731 IC (#11819)* Create config.h

* Add files via upload

* Create keymap.c

* Create keymap.c

* Create rules.mk

* Update readme.md

* Update keyboards/latin6rgb/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/latin6rgb/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keymap.c

* Update keymap.c

* Update config.h

* Update config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add NK1 (#13212)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: yiancar <yiancar@gmail.com>  
>Remove rgblight stubs (#13302)  
>[Keymap] adding keymap for pistachio (#12996)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] suv (#12957)  
>[Core] ChibiOS fix O3 and LTO breakage of extra keys and joystick (#12819)  
>[Keyboard] Add Gvalchca GA15.0 (#13114)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Exent cleanup (#13353)  
>Cleanup junk chars, part 3 (#13332)  
>[Keyboard] Add Constellation Rev2 (#13103)  
>[Keyboard] Add Switchplate 910 keyboard (#13235)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Use single memcmp to determine if matrix changed. (#13064)* Use memcmp to determine if matrix changed.

* Firmware size issues.

* Add documentation for the lack of need of MATRIX_ROW_PINS/MATRIX_COL_PINS, when overriding low-level matrix functions.  
>Set `BOOTLOADER = stm32-dfu` for all applicable STM32 boards (#12956)* Set bootloader to stm32-dfu for STM32F303

* Set bootloader to stm32-dfu for STM32F0x2

* Set bootloader to stm32-dfu for STM32F4x1

* Set bootloader to stm32duino for sowbug

* Delete redundant bootloader_defs headers

* Add some missing MCU name comments

* Move APM32 dfu-suffix overrides underneath bootloader

* Remove redundant STM32_BOOTLOADER_ADDRESS defines/rules  
>Cleanup junk characters, part 1 (#13282)  
>core: bump USB spec version in device descriptor to 2.0 (#13078)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add Mac centric Shift and Alt + GUI Macros (#13107)Co-authored-by: filterpaper <filterpaper@localhost>  
>Error log cleanup (#13349)* error log cleanup: 40percentclub/25

40percentclub/25: Claims to support a community layout that does not exist: ortho_5x5

* error log cleanup: 40percentclub/4x4

☒ 40percentclub/4x4: Claims to support a community layout that does not exist: ortho_4x8
☒ 40percentclub/4x4: Claims to support a community layout that does not exist: ortho_4x16

* error log cleanup: 40percentclub/5x5

☒ 40percentclub/5x5: Claims to support a community layout that does not exist: ortho_5x5

* error log cleanup: 40percentclub/nori

☒ 40percentclub/nori: Claims to support a community layout that does not exist: ortho_4x8

* error log cleanup: barracuda

☒ barracuda: Claims to support a community layout that does not exist: ortho_3x11

* error log cleanup: bpiphany/frosty_flake

☒ keyboards/bpiphany/frosty_flake/frosty_flake.h: LAYOUT_tkl_ansi: Nested layout macro detected. Matrix data not available!

* error log cleanup: bpiphany/pegasushoof/2013

☒ keyboards/bpiphany/pegasushoof/2013/2013.h: LAYOUT_tkl_ansi: Nested layout macro detected. Matrix data not available!

* error cleanup: bpiphany/pegasushoof/2015

☒ keyboards/bpiphany/pegasushoof/2015/2015.h: LAYOUT_tkl_ansi: Nested layout macro detected. Matrix data not available!
☒ keyboards/bpiphany/pegasushoof/2015/2015.h: LAYOUT_tkl_iso: Nested layout macro detected. Matrix data not available!

* error log cleanup: 40percentclub

☒ 40percentclub/25: Claims to support a community layout that does not exist: ortho_5x10
☒ 40percentclub/5x5: Claims to support a community layout that does not exist: ortho_5x10

* error cleanup: converter/usb_usb

☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_ansi: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_iso: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_jis: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_ansi: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_iso: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_jis: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_ansi: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_iso: Nested layout macro detected. Matrix data not available!
☒ keyboards/converter/usb_usb/usb_usb.h: LAYOUT_jis: Nested layout macro detected. Matrix data not available!

* error cleanup: ergo42

☒ ergo42/rev1: Claims to support a community layout that does not exist: ortho_4x14

* error cleanup: handwired/412_64

☒ handwired/412_64: Claims to support a community layout that does not exist: ortho_4x16

* error log cleanup: handwired/tritium_numpad
☒ handwired/tritium_numpad: Claims to support a community layout that does not exist: nontra_6x4

* error log cleanup: handwired/xealous/rev1
☒ handwired/xealous/rev1: Claims to support a community layout that does not exist: split60

* error log cleanup: kbdfans/kbd67/rev2

⚠ kbdfans/kbd67/rev2: info.json uses alias name LAYOUT_65_ansi_blocker_splitbs instead of LAYOUT_65_ansi_blocker_split_bs

* error cleanup: keebio/nyquist

☒ keyboards/keebio/nyquist/nyquist.h: LAYOUT_ortho_4x12: Nested layout macro detected. Matrix data not available!
☒ keyboards/keebio/nyquist/nyquist.h: LAYOUT_ortho_4x12: Nested layout macro detected. Matrix data not available!
☒ keyboards/keebio/nyquist/nyquist.h: LAYOUT_ortho_4x12: Nested layout macro detected. Matrix data not available!

* error cleanup: kindakeyboards/conone65

☒ kindakeyboards/conone65: Claims to support a community layout that does not exist: 65_iso_split_bs

* error cleanup: latinpadble

☒ latinpadble: Claims to support a community layout that does not exist: pad

* error cleanup: masterworks/classy_tkl/rev_a

☒ masterworks/classy_tkl/rev_a: Claims to support a community layout that does not exist: tkl_ansi_wkl

* error cleanup: meira

⚠ meira/featherble: info.json uses alias name LAYOUT_ortho_4x12 instead of LAYOUT
⚠ meira/promicro: info.json uses alias name LAYOUT_ortho_4x12 instead of LAYOUT

* error cleanup: nopunin10did/jabberwocky

⚠ nopunin10did/jabberwocky: MANUFACTURER in config.h is overwriting manufacturer in info.json

* error cleanup: ok60

☒ ok60: Claims to support a community layout that does not exist: 60_ansi_split_bksp_rshift

* error cleanup: ok60

☒ ok60: Claims to support a community layout that does not exist: 60_ansi_split_bksp_rshift

* error cleanup: planck

☒ keyboards/planck/ez/ez.h: LAYOUT_ortho_4x12: Nested layout macro detected. Matrix data not available!
☒ keyboards/planck/ez/ez.h: LAYOUT_ortho_4x12: Nested layout macro detected. Matrix data not available!
⚠ planck/thk: DEBOUNCE in config.h is overwriting debounce in info.json
⚠ planck/thk: DEVICE_VER in config.h is overwriting usb.device_ver in info.json
⚠ planck/thk: DIODE_DIRECTION in config.h is overwriting diode_direction in info.json
⚠ planck/thk: MANUFACTURER in config.h is overwriting manufacturer in info.json
⚠ planck/thk: PRODUCT_ID in config.h is overwriting usb.pid in info.json
⚠ planck/thk: VENDOR_ID in config.h is overwriting usb.vid in info.json
⚠ planck/thk: QMK_ESC_OUTPUT in config.h is overwriting qmk_lufa_bootloader.esc_output in info.json
⚠ planck/thk: QMK_ESC_INPUT in config.h is overwriting qmk_lufa_bootloader.esc_input in info.json
⚠ planck/thk: QMK_LED in config.h is overwriting qmk_lufa_bootloader.led in info.json
⚠ planck/thk: QMK_SPEAKER in config.h is overwriting qmk_lufa_bootloader.speaker in info.json
⚠ planck/thk: Matrix pins are specified in both info.json and config.h, the config.h values win.
⚠ planck/thk: LAYOUTS in rules.mk is overwriting community_layouts in info.json
⚠ planck/thk: Feature mousekey is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature extrakey is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature console is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature command is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature sleep_led is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature nkro is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature backlight is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature rgblight is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature bluetooth is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature audio is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature encoder is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature dip_switch is specified in both info.json and rules.mk, the rules.mk value wins.
⚠ planck/thk: Feature bootmagic_lite is specified in both info.json and rules.mk, the rules.mk value wins.

* error cleanup: primekb/prime_m

☒ primekb/prime_m: Claims to support a community layout that does not exist: ortho_5x6

* error cleanup: rgbkb/sol/rev2

⚠ rgbkb/sol/rev2: RGBLED_NUM->rgblight.led_count: invalid literal for int() with base 10: '(BACKLIGHT_LEDS + FULLHAND_LEDS)'

* error log cleanup: shk9

☒ shk9: Claims to support a community layout that does not exist: ortho_3x3

* error log cleanup: sowbug

⚠ sowbug/68keys: RGBLED_NUM->rgblight.led_count: invalid literal for int() with base 10: 'DRIVER_LED_TOTAL'
⚠ sowbug/ansi_tkl: RGBLED_NUM->rgblight.led_count: invalid literal for int() with base 10: '(DRIVER_LED_TOTAL)'

* error log cleanup: torn

☒ torn: Claims to support a community layout that does not exist: split_3x6_4

* error cleanup: ymdk/np24/u4rgb6

☒ ymdk/np24/u4rgb6: Claims to support a community layout that does not exist: ortho_4x6

* error cleanup: masterworks/classy_tkl/rev_a

☒ masterworks/classy_tkl/rev_a: Claims to support a community layout that does not exist: tkl_iso_wkl  
>Add "steal this keyboard" keybaord (#12898)  
>Fix RGB/LED Suspend defines (#13146)  
>[Keyboard] Add 'LAYOUT_65_ansi_split_bs_2_right_mods' support to KBDfans KBD67 rev2 (#12053)  
>Move optical sensor code to drivers folder (#13044)  
>[Keymap] Fix Preonic rev3 default keymap (#12698)The rev3 boards use RGBLIGHT_ENABLE now instead of BACKLIGHT_ENABLE.

This resolves the issue of flashing and losing functionality with the default keymap.  
>Relocate RGB/HSV color defs to a more fitting place (#13377)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-05  
Contributor(s):  
Zach White  
Barabas  
Ben  
Jeremy Herve  
Sleepdealer  
Sife-ops  
Christian Sandven  
Sean Browning  
Ryan  
thompson-ele  
Xelus22  
Albert Y  
csc027  
James Young  
Flexerm  
yiancar  
Drashna Jaelre  
George Wietor  
fauxpark  
chalex  
Dmitry Mikhirev  
Wilba  
Erovia  
Andrew Kannan  
nopunin10did  
Brandon Claveria  
Hilary B. Brenum  
Gun Pinyo  
Kyle McCreery  
Love Lagerkvist  
Michael Stapelberg  
David Fryer  
QMK Bot  
noclew  
cccywj  
shela  
Seth Barberee  
Ramon Imbao  
wxyangf  
Joel Challis  
Cosmin  
Matrix Zou  
Callum Hart  
knaruo  
coarse  
Brandon Lee  
Sendy Aditya Suryana  
spooknik  
Nick Brassel  
>[Keyboard] VIA support for Preonic Rev3 (#11344)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Jack Humbert <jack.humb@gmail.com>  
>Restore standard readme  
>Do not hard set config in CPTC files (#11864)  
>Add changelog for 2021-05-29 Breaking Changes merge (#12939)* Add ChangeLog for 2021-05-29 Breaking Changes Merge: initial version

* Add recent develop changes

* Sort recent develop changes

* Remove sections for ChibiOS changes per tzarc

No ChibiOS changes this round.

* Add and sort recent develop changes

* add notes about keyboard moves/deletions

* import changelog for PR 12172

Documents the change to BOOTMAGIC_ENABLE.

* update section headings

* re-sort changelog

* add additional note regarding Bootmagic changes

* remove changelog timestamp

* update dates in main Breaking Changes docs

* fix broken section anchors in previous changelogs

* add link to backlight/eeprom patch to changelog

* highlight some more changes

* link PRs from section headers

Co-authored-by: Zach White <skullydazed@gmail.com>  
>Merge remote-tracking branch 'upstream/master' into develop  
>[Keyboard] Fix Terrazzo build failure (#12977)  
>[Keyboard] Add SiddersKB Majbritt Rev2 (#12598)  
>[Keyboard] Titan60 LED and keymap updates (#12558)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Added OLED fade out support (#12086)  
>[Keyboard] Add Prototypist J01 rev 1 support (#12825)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Some fixes for the Bakeneko variant DB60s (#12662)* Some fixes for the Bakeneko variant DB60s

* Add copyright to header

* Add .python-version to gitignore for people who use pyenv or similar

* update readme

* Add more readmes

* Add more readmes

* Update the versions to have different product IDs

* Update readme

* Add missing rules.mk

* Fix matrix on hotswap

* remove iso from hotswap

* Fix hotswap spacebar

* Revert gitignore changes

* Fix layouts

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Add split configs

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Add license to config

* or equivalent

Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add support for alfredslab 65 (#12334)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] New Keyboard - Murphpad (#12885)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] x-bows nature: fix led order and colors (#12871)  
>[Keyboard] Corgi keyboard (#12311)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Updated NK87 GPIO (#12865)  
>Resolve a number of warnings in `qmk generate-api` (#12833)  
>[Keyboard] updated a vendor name / fixed minor keymap issues (#12881)  
>matrix: wait for row signal to go HIGH for every row (#12945)I noticed this discrepancy (last row of the matrix treated differently than the
others) when optimizing the input latency of my keyboard controller, see also
https://michael.stapelberg.ch/posts/2021-05-08-keyboard-input-latency-qmk-kinesis/

Before this commit, when tuning the delays I noticed ghost key presses when
pressing the F2 key, which is on the last row of the keyboard matrix: the
dead_grave key, which is on the first row of the keyboard matrix, would be
incorrectly detected as pressed.

After this commit, all keyboard matrix rows are interpreted correctly.

I suspect that my setup is more susceptible to this nuance than others because I
use GPIO_INPUT_PIN_DELAY=0 and hence don’t have another delay that might mask
the problem.  
>2021 May 29 Breaking Changes Update (#13034)* Add Per Key functionality for AutoShift (#11536)

* LED Matrix: Reactive effect buffers & advanced indicators (#12588)

* [Keyboard] kint36: switch to sym_eager_pk debouncing (#12626)

* [Keyboard] kint2pp: reduce input latency by ≈10ms (#12625)

* LED Matrix: Split (#12633)

* [CI] Format code according to conventions (#12650)

* feat: infinite timeout for leader key (#6580)

* feat: implement leader_no_timeout logic

* docs(leader_key): infinite leader timeout docs

* Format code according to conventions (#12680)

* Update ADC driver for STM32F1xx, STM32F3xx, STM32F4xx (#12403)

* Fix default ADC_RESOLUTION for ADCv3 (and ADCv4)

Recent ChibiOS update removed ADC_CFGR1_RES_10BIT from the ADCv3 headers
(that macro should not have been there, because ADCv3 has CFGR instead of
CFGR1).  Fix the default value for ADC_RESOLUTION to use ADC_CFGR_RES_10BITS
if it is defined (that name is used for ADCv3 and ADCv4).

* Update ADC docs to match the actually used resolution

ADC driver for ChibiOS actually uses the 10-bit resolution by default
(probably to match AVR); fix the documentation accordingly.  Also add
both ADC_CFGR_RES_10BITS and ADC_CFGR1_RES_10BIT constants (these names
differ according to the ADC implementation in the particular MCU).

* Fix pinToMux() for B12 and B13 on STM32F3xx

Testing on STM32F303CCT6 revealed that the ADC mux values for B12 and
B13 pins were wrong.

* Add support for all possible analog pins on STM32F1xx

Added ADC mux values for pins A0...A7, B0, B1, C0...C5 on STM32F1xx
(they are the same at least for STM32F103x8 and larger F103 devices, and
also F102, F105, F107 families).  Actually tested on STM32F103C8T6
(therefore pins C0...C5 were not tested).

Pins F6...F10, which are present on STM32F103x[C-G] in 144-pin packages,
cannot be supported at the moment, because those pins are connected only
to ADC3, but the ChibiOS ADC driver for STM32F1xx supports only ADC1.

* Add support for all possible analog pins on STM32F4xx

Added ADC mux values for pins A0...A7, B0, B1, C0...C5 and optionally
F3...F10 (if STM32_ADC_USE_ADC3 is enabled).  These mux values are
apparently the same for all F4xx devices, except some smaller devices may
not have ADC3.

Actually tested on STM32F401CCU6, STM32F401CEU6, STM32F411CEU6 (using
various WeAct “Blackpill” boards); only pins A0...A7, B0, B1 were tested.

Pins F3...F10 are inside `#if STM32_ADC_USE_ADC3` because some devices
which don't have ADC3 also don't have the GPIOF port, therefore the code
which refers to Fx pins does not compile.

* Fix STM32F3xx ADC mux table in documentation

The ADC driver documentation had some errors in the mux table for STM32F3xx.
Fix this table to match the datasheet and the actual code (mux settings for
B12 and B13 were also tested on a real STM32F303CCT6 chip).

* Add STM32F1xx ADC pins to the documentation

* Add STM32F4xx ADC pins to the documentation

* Add initial support for tinyuf2 bootloader (when hosted on F411 blackpill) (#12600)

* Add support for jumping to tinyuf2 bootloader. Adds blackpill UF2 example.

* Update flashing.md

* Update chconf.h

* Update config.h

* Update halconf.h

* Update mcuconf.h

* eeprom driver: Refactor where eeprom driver initialisation (and EEPROM emulation initialisation) occurs to make it non-target-specific. (#12671)

* Add support for MCU = STM32F446 (#12619)

* Add support for MCU = STM32F446

* Update platforms/chibios/GENERIC_STM32_F446XE/configs/config.h

* Restore mcuconf.h to the one used by RT-STM32F446RE-NUCLEO64

* stm32f446: update mcuconf.h and board.h for 16MHz operation, with USB enabled, and other peripherals disabled.

* Format code according to conventions (#12682)

* Format code according to conventions (#12687)

* Add STM32L433 and L443 support (#12063)

* initial L433 commit

* change to XC

* fix L433

* disable all peripherals

* update system and peripheral clocks

* 433 change

* use its own board  files

* revert its own board files

* l433 specific change

* fix stm32l432xx define

* remove duplicate #define

* fix bootloader jump

* move to L443xx and add i2c2, spi2, usart3 to mcuconf.h

* move to L443

* move to L443

* fix sdmmc in mcuconf.h

* include STM32L443

* add L443

* Include L443 in compatible microcontrollers

* Include L443 in compatible microcontrollers

* Update config bootloader jump description

* Update ChibiOS define reasoning

* Update quantum/mcu_selection.mk

* fix git conflict

* Updated Function96 with V2 files and removed chconf.h and halconf.h (#12613)

* Fix bad PR merge for #6580. (#12721)

* Change RGB/LED Matrix to use a simple define for USB suspend (#12697)

* [CI] Format code according to conventions (#12731)

* Fixing transport's led/rgb matrix suspend state logic (#12770)

* [CI] Format code according to conventions (#12772)

* Fix comment parsing (#12750)

* Added OLED fade out support (#12086)

* fix some references to bin/qmk that slipped in (#12832)

* Resolve a number of warnings in `qmk generate-api` (#12833)

* New command: qmk console (#12828)

* stash poc

* stash

* tidy up implementation

* Tidy up slightly for review

* Tidy up slightly for review

* Bodge environment to make tests pass

* Refactor away from asyncio due to windows issues

* Filter devices

* align vid/pid printing

* Add hidapi to the installers

* start preparing for multiple hid_listeners

* udev rules for hid_listen

* refactor to move closer to end state

* very basic implementation of the threaded model

* refactor how vid/pid/index are supplied and parsed

* windows improvements

* read the report directly when usage page isn't available

* add per-device colors, the choice to show names or numbers, and refactor

* add timestamps

* Add support for showing bootloaders

* tweak the color for bootloaders

* Align bootloader disconnect with connect color

* add support for showing all bootloaders

* fix the pyusb check

* tweaks

* fix exception

* hide a stack trace behind -v

* add --no-bootloaders option

* add documentation for qmk console

* Apply suggestions from code review

* pyformat

* clean up and flesh out KNOWN_BOOTLOADERS

* Remove pointless SERIAL_LINK_ENABLE rules (#12846)

* Make Swap Hands use PROGMEM (#12284)

This converts the array that the Swap Hands feature uses to use PROGMEM,
and to read from that array, as such. Since this array never changes at
runtime, there is no reason to keep it in memory. Especially for AVR
boards, as memory is a precious resource.

* Fix another bin/qmk reference (#12856)

* [Keymap] Turn OLED off on suspend in soundmonster keymap (#10419)

* Fixup build errors on `develop` branch. (#12723)

* LED Matrix: Effects! (#12651)

* Fix syntax error when compiling for ARM (#12866)

* Remove KEYMAP and LAYOUT_kc (#12160)

* alias KEYMAP to LAYOUT

* remove KEYMAP and LAYOUT_kc

* Add setup, clone, and env to the list of commands we allow even with broken modules (#12868)

* Rename `point_t` -> `led_point_t` (#12864)

* [Keyboard] updated a vendor name / fixed minor keymap issues (#12881)

* Add missing LED Matrix suspend code to suspend.c (#12878)

* LED Matrix: Documentation (#12685)

* Deprecate `send_unicode_hex_string()` (#12602)

* Fix spelling mistake regarding LED Matrix in split_common. (#12888)

* [Keymap] Fix QWERTY/DVORAK status output for kzar keymap (#12895)

* Use milc.subcommand.config instead of qmk.cli.config (#12915)

* Use milc.subcommand.config instead

* pyformat

* remove the config test

* Add function to allow repeated blinking of one layer (#12237)

* Implement function rgblight_blink_layer_repeat to allow repeated blinking of one layer at a time

* Update doc

* Rework rgblight blinking according to requested change

* optimize storage

* Fixup housekeeping from being invoked twice per loop. (#12933)

* matrix: wait for row signal to go HIGH for every row (#12945)

I noticed this discrepancy (last row of the matrix treated differently than the
others) when optimizing the input latency of my keyboard controller, see also
https://michael.stapelberg.ch/posts/2021-05-08-keyboard-input-latency-qmk-kinesis/

Before this commit, when tuning the delays I noticed ghost key presses when
pressing the F2 key, which is on the last row of the keyboard matrix: the
dead_grave key, which is on the first row of the keyboard matrix, would be
incorrectly detected as pressed.

After this commit, all keyboard matrix rows are interpreted correctly.

I suspect that my setup is more susceptible to this nuance than others because I
use GPIO_INPUT_PIN_DELAY=0 and hence don’t have another delay that might mask
the problem.

* ensure we do not conflict with existing keymap aliases (#12976)

* Add support for up to 4 IS31FL3733 drivers (#12342)

* Convert Encoder callbacks to be boolean functions (#12805)

* [Keyboard] Fix Terrazzo build failure (#12977)

* Do not hard set config in CPTC files (#11864)

* [Keyboard] Corne - Remove legacy revision support (#12226)

* [Keymap] Update to Drashna keymap and user code (based on develop) (#12936)

* Add Full-duplex serial driver for ARM boards (#9842)

* Document LED_MATRIX_FRAMEBUFFER_EFFECTS (#12987)

* Backlight: add defines for default level and breathing state (#12560)

* Add dire message about LUFA mass storage bootloader (#13014)

* [Keyboard] Remove redundant legacy and common headers for crkbd (#13023)

Was causing compiler errors on some systems.

* Fix keyboards/keymaps for boolean encoder callback changes (#12985)

* `backlight.c`: include `eeprom.h` (#13024)

* Add changelog for 2021-05-29 Breaking Changes merge (#12939)

* Add ChangeLog for 2021-05-29 Breaking Changes Merge: initial version

* Add recent develop changes

* Sort recent develop changes

* Remove sections for ChibiOS changes per tzarc

No ChibiOS changes this round.

* Add and sort recent develop changes

* add notes about keyboard moves/deletions

* import changelog for PR 12172

Documents the change to BOOTMAGIC_ENABLE.

* update section headings

* re-sort changelog

* add additional note regarding Bootmagic changes

* remove changelog timestamp

* update dates in main Breaking Changes docs

* fix broken section anchors in previous changelogs

* add link to backlight/eeprom patch to changelog

* highlight some more changes

* link PRs from section headers

* Restore standard readme

* run: qmk cformat --core-only  
>Fix Marauder and add readme (#12906)  
>Convert Encoder callbacks to be boolean functions (#12805)Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Deprecate `send_unicode_hex_string()` (#12602)  
>[Keyboard] Add 75 Pixels Ortholinear Keyboard (#12220)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Sendy Aditya Suryana <sendy.suryana@go-jek.com>  
>[Keymap] update gunp layout for Planck (#12926)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Added bradpad support (#12912)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Improve EEPROM defaults for Dynamic Keymaps (#12853)  
>[Keyboard] Add fluxlab zplit keyboard (#12396)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>`backlight.c`: include `eeprom.h` (#13024)  
>Fix Cordillera LED states config (#12646)  
>Make Swap Hands use PROGMEM (#12284)This converts the array that the Swap Hands feature uses to use PROGMEM,
and to read from that array, as such. Since this array never changes at
runtime, there is no reason to keep it in memory. Especially for AVR
boards, as memory is a precious resource.  
>[Keymap] Update to Drashna keymap and user code (based on develop) (#12936)  
>Hbbisenieks keymap update to remove kc_ keymaps (#12391)* hbbisenieks keymap

* change from kc_ keymap

* Apply suggestions from code review

Co-authored-by: Takeshi ISHII <2170248+mtei@users.noreply.github.com>

Co-authored-by: Hilary Brenum <hilary.brenum@tanium.com>
Co-authored-by: Zach White <skullydazed@drpepper.org>
Co-authored-by: Takeshi ISHII <2170248+mtei@users.noreply.github.com>  
>[Keyboard] Add Marauder (#12550)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>revert error introduced in PR #12871 (#12891)  
>[Keyboard] Fix Clawsome/Sedan matrix and default keymap (#13007)  
>Redox custom keymap (jeherve): updates to deprecated code and bugfixes (#12738)Co-authored-by: Drashna Jael're <drashna@live.com>  
>[Keyboard] Giant macro pad (#12905)  
>[Docs] Fix typos in audio config in main config page (#12928)  
>[Keyboard] Add pisces keyboard (#12287)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[Keyboard] Corne - Remove legacy revision support (#12226)  
>[Keyboard] AkiS  (#12910)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add merro60 (#12527)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: chalex <alejandrelee+magbogbro@gmail.com>  
>Update sethBarberee Userspace (#12620)* update for LTO and guard RGBLED_SPLIT

* Revert "update for LTO and guard RGBLED_SPLIT"

This reverts commit ce81177cbe330ae3e1e14c264dc0cb0946f08d70.

* Revert "Revert "update for LTO and guard RGBLED_SPLIT""

This reverts commit 67da0ce9f38777064ad094c1ecba7ce17a40994f.

* update iris keymap for keymap_kc removal and overhaul userspace

* add licenses

* fix tap_dance error when rgblight is disabled and update/clean iris/sinc maps  
>[Keyboard] added Time 80 Reforged by Fox Lab (#11996)* [Keyboard] added Time 80 Reforged by Fox Lab

* added Time 80 Reforged by Fox Lab
* split to two sub directories for universal and hotswap pcb
* Apply suggestions from code review

* Modified codes as suggested

* update code as suggested

* rgb log light keymaps added

* update code as suggested

* enable rgblight right to TIME logo, and add keymaps for it's control
* Apply suggestions from code review

* enable built-in switch LED support
* Apply suggestions from code review

* Apply suggestions from code review

* Apply suggestions from code review

* Apply suggestions from code review  
>Shim cli to new keyboard script (#12780)* Shim cli to new keyboard script

* Shim cli to new keyboard script

* Add docs  
>New command: qmk console (#12828)* stash poc

* stash

* tidy up implementation

* Tidy up slightly for review

* Tidy up slightly for review

* Bodge environment to make tests pass

* Refactor away from asyncio due to windows issues

* Filter devices

* align vid/pid printing

* Add hidapi to the installers

* start preparing for multiple hid_listeners

* udev rules for hid_listen

* refactor to move closer to end state

* very basic implementation of the threaded model

* refactor how vid/pid/index are supplied and parsed

* windows improvements

* read the report directly when usage page isn't available

* add per-device colors, the choice to show names or numbers, and refactor

* add timestamps

* Add support for showing bootloaders

* tweak the color for bootloaders

* Align bootloader disconnect with connect color

* add support for showing all bootloaders

* fix the pyusb check

* tweaks

* fix exception

* hide a stack trace behind -v

* add --no-bootloaders option

* add documentation for qmk console

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* pyformat

* clean up and flesh out KNOWN_BOOTLOADERS

Co-authored-by: zvecr <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Chevron (#12762)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Update noroadsleft userspace and keymaps (2021-05-03) (#12796)* Set Dvorak as the standard base layer

* Remove unneeded includes

* Remove custom handling for Quake 2

Have now rewritten my in-game configuration to use Dvorak mapping instead of QWERTY, which means I don't need any of this stuff.

* Clean up comments in KC60 keymap  
>[Keymap] simplify layout in motform keymap (#12927)  
>Fix syntax error when compiling for ARM (#12866)  
>[Keyboard] Add Charue Design's Sunsetter (#12547)  
>Add breeze variants (#12596)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Adrian <42110361+xSteins@users.noreply.github.com>  
>[Keyboard] Add Jabberwocky Keyboard (#12500)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Rossman360 <rmontsinger@gmail.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>Keyboard: Planck THK (#12597)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Jack Humbert <jack.humb@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add Rosa (#12884)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add Plaid-Pad Rev3 and oled keymap (#12464)Co-authored-by: Erovia <Erovia@users.noreply.github.com>  
>[Keymap] csc027/keymap-updates (#12694)  
>Remove KEYMAP and LAYOUT_kc (#12160)* alias KEYMAP to LAYOUT

* remove KEYMAP and LAYOUT_kc  
>Added RAMA WORKS M50-AX (#12458)  
>[Keyboard] Seigaiha (#12791)Co-authored-by: Ryan <fauxpark@gmail.com>  
>run: qmk cformat --core-only  
>add handwired/swiftrax/walter (#12428)* init commit of walter

* finalize keyboard

* fix walter.h

* fix config.h

* fix rgblight animations

* fix config.h

Co-authored-by: Swiftrax <swiftrax@gmail.com>  
>Fixup housekeeping from being invoked twice per loop. (#12933)  
>[Keyboard] Remove redundant legacy and common headers for crkbd (#13023)Was causing compiler errors on some systems.

Co-authored-by: filterpaper <filterpaper@localhost>  
>[Keyboard] Added Perixx Periboard-512 Converter (#12324)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Backlight: add defines for default level and breathing state (#12560)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-04  
Contributor(s):  
mechlovin  
obosob  
MechMerlin  
peepeetee  
Ryan  
Xelus22  
Sergey Vlasov  
Albert Y  
Angel Rojas  
Jaehee  
github-actions[bot]  
MCKeebs  
James Young  
Eric Wood  
JTM  
Paul Ewing  
Richard Dawe  
littleferris  
hadi  
yiancar  
Drashna Jaelre  
Mikkel Jeppesen  
Adrian  
George Wietor  
Jan Christoph Ebersbach  
Christian Fehmer  
Kasper  
Steve Purcell  
Danny  
Pierre Chevalier  
Wilba  
Felix Jen  
RinoSolutions  
yynmt  
kb-elmo  
jrdsgl  
Duong Anh  
Michael Stapelberg  
QMK Bot  
MelGeek  
Daniel Rodríguez Rivero  
AlisGraveNil  
Purdea Andrei  
Matthew Dias  
Sanctified-git  
Takeshi ISHII  
Joshua Diamond  
Joshua Coffey  
Nick Brassel  
>Implement the OpenRGB protocolCommits from Kasper and jath03 squashed by Adam Honse <calcprogrammer1@gmail.com>  
>peepeetee's *very janky* hub16 keymap (#12506)* peepeetee's bodged hub16 keymap

* add layer 3 lighting

* actually adds layer 3 lighting

* fixes layer 0; behavior is that layor 0 is unaltered from base pattern, while other states have distinct solid colors  
>ChibiOS USB driver: prevent deadlock with CONSOLE_ENABLE = yes (#12472)Before this commit, attaching an ARM-based (i.e. ChibiOS-based) keyboard that
uses CONSOLE_ENABLE = yes and produces debug messages would deadlock the
keyboard unless one was running hid_listen.

With this commit, dead-locking writes to the queue are detected and prevented.

fixes #5631  
>Add additional info to PR Checklist (#12630)Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[CI] Format code according to conventions (#12623)Co-authored-by: QMK Bot <hello@qmk.fm>  
>[Keyboard] Added RAMA WORKS KARA (#12346)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Added senselessclay had60 (#12093)Co-authored-by: Ryan <fauxpark@gmail.com>  
>LED Matrix: Implement CIE1931 curve (#12417)  
>Fix F13 LED issue for WT75-B, WT75-C (#12729)  
>[Keyboard] Add wilba.tech WT60-G2 (#12395)  
>[Keyboard] Added BKS65 Solder PCB (#12451)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Dactyl manuform 5x6 2 5 keymap (#11353)* feat(keymap): add DactylManuform w/ 2 extra keys and 5 thumb keys

* fix(keymap): add missing readme

* chore: add gpl2 license header

* chore: add gpl2 license header

* docs[dactyl_manuform_5x6_2_5]: reformat readme

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Update for the dodger keymap for the Planck (#12456)  
>Add Per Key functionality for AutoShift (#11536)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add G1_65 keyboard (#12140)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Add  jkdlab/binary_monkey (#12374)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Carbo65 (#12406)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[nix] Use niv and poetry2nix to more easily manage dependencies (#11181)* [nix] Update nixpkgs to avoid issues with Big Sur

The older nixpkgs snapshot did not contain nix changes to the
compiler/linker hooks that are necessary for compatibility with MacOS
Big Sur. The fix is simply to update to a newer snapshot.

* [nix] Add a poetry manifest and use poetry to build the Python env

* [nix] Use niv to manage upstream sources like nixpkgs

* [nix] Update to newer nixpkgs snapshot

* [nix] Bump python package versions  
>Add support for producing UF2-format binaries. (#12435)* First stab at enabling builds of UF2-format binaries.

* Add description on producing a UF2 file.  
>Add TH1800 PCB, Hex6C PCB, Rogue87 PCB, Rouge87 PCB, Infinity87 series (#11977)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Erovia <Erovia@users.noreply.github.com>
Co-authored-by: vuhopkep <boy9x0@gmail.com>  
>[Keyboard] Add CherryB Studio Keyboards (#11475)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>[Keyboard] Add Dystopia keyboard (#11997)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Erovia <Erovia@users.noreply.github.com>
Co-authored-by: Sanctified <Sanctified@users.noreply.github.com>  
>Fixup Satisfaction75 bootprocess. (#12621)- Use normal ChibiOS I2C driver.
- Move drawing code to housekeeping -- previously it was during matrix
  scan, which gets executed during bootmagic checks. However, bootmagic
  is invoked before QWIIC subsystem is enabled, which means I2C isn't
  configured yet. All I2C calls to the OLED fail with timeouts while
  bootmagic is being checked. Housekeeping ensures this is executed once
  the system has initialised and settled.
- QWIIC OLED driver: properly clear out OLED buffer when clearing screen.  
>feat: infinite timeout for leader key (#6580)* feat: implement leader_no_timeout logic

* docs(leader_key): infinite leader timeout docs  
>Format code according to conventions (#12681)Co-authored-by: QMK Bot <hello@qmk.fm>  
>Add new handwired keyboard (Ergocheap) (#11857)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>VIA support for Planck Rev6 (#9144)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: George Wietor <george@LIGHT-GRAY.local>
Co-authored-by: Jack Humbert <jack.humb@gmail.com>  
>[Keymap] cleanup keyboards/helix/{rev2|rev3_5rows}/keymaps/five_rows (#12259)* cleanup keyboards/helix/{rev2|rev3_5rows}/keymaps/five_rows

* Made the layout data easier to read.
  * helix/rev2/keymaps/five_rows/keymap.c
  * helix/rev3_5rows/keymaps/five_rows/keymap.c

* The following two were made the same.
  * keymaps/five_rows/config.h
  * keymaps/five_rows/oled_display.c

The binary of the compilation result has not changed.

* update keyboards/helix/rev2/keymaps/five_rows/rules.mk

KEYBOARD_LOCAL_FEATURES_MK was moved to the end.

* add '#define DISABLE_SYNC_TIMER' into helix/rev3_5rows/keymaps/five_rows/config.h

The sync timer features worsen the matrix scan rate of the Helix keyboard. I'm not sure if it makes sense to have sync timer features enabled on the Helix keyboard. So in my keymap I disable this.  
>[Keyboard] Ninjin (#12496)* ninjin init

* put in gpl thing

* underglow

* update to latest chibios

* fix gpl headers

* remove other files

* fix header

* Update keyboards/xelus/ninjin/readme.md

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Update keyboards/xelus/ninjin/mcuconf.h

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Update keyboards/xelus/ninjin/halconf.h

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Add firmware for CozyKeys Bloomer keyboard (#12639)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Erovia <Erovia@users.noreply.github.com>  
>Enhancement of WPM feature (#11727)  
>Change `BOOTMAGIC_ENABLE=yes` to use Bootmagic Lite (#12172)  
>Big quantum_keycodes cleanup (#12249)  
>[Keyboard] Add FoldKB (#12255)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Added Epoch80 (#12307)  
>Format code according to conventions (#12680)Co-authored-by: QMK Bot <hello@qmk.fm>  
>Add m3n3van rev2 (#12405)* Add m3n3van rev2

* Add via support  
>[Keyboard] Set OLED_DISPLAY_128X64 for Arch-36 (#12609)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Update sixkeyboard VID/PID (#12345)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add missing RGB_MODE_TWINKLE / RGB_M_TW keycodes (#11935)* Add missing RGB_MODE_TWINKLE / RGB_M_TW keycodes

* Better comment

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add VIA support for Filco Majestouch 2 /w The Tiger Lily (#12401)  
>[Keyboard] KBD67 Hotswap VIA Support (#12351)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Fix Breaking Change date (#12272)  
>Format code according to conventions (#12540)Co-authored-by: QMK Bot <hello@qmk.fm>  
>[Keyboard] doodle macropad - 03/14 (#12243)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] ergosaurus - add VIA support, enabled RGB (#12126)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Do not leak weak mods from tap dance to the interrupting keypress (#12471)Tap dance callbacks may register weak mods; one case when it happens
is when a tap dance registers a key with modifiers.  When the tap
dance is interrupted by pressing another key, these weak mods could
affect the interrupting key (normally any stale weak mods are cleared
at the start of action_exec() when handling a keypress event, but the
tap dance interrupt check code is called later, and the weak mods left
by that code were not cleared).  Add another clear_weak_mods() call to
preprocess_tap_dance() to make sure that the interrupting keypress is
not affected by unrelated weak mods from the previous tap dance.

Fixes #12445.  
>Fix audio on WT60-XT (#12526)  
>`qmk chibios-confmigrate`: Make `-i` and `-r` required (#12515)  
>[Keyboard] Add pkb65 keyboard (#12230)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Update noroadsleft userspace and keymaps (2021-04-26) (#12711)* Update noroadsleft userspace and keymaps (2021-04-26)

- add Discipline keymap
- move Emulated Non-US Backslash, Numeric Keypad and F13-F24 code fully to userspace
- re-add some custom keycode handling I accidentally deleted
- update VRSN keycode
- update KC60 and userspace readmes

* remove Git readme from kc60 keymap

* update kc60:noroadsleft readme

Concatenates this readme into one file, and updates the image links.  
>[Keyboard] Adding of Monarch keyboard (#11769)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Ramon Imbao <ramonimbao@gmail.com>  
>Merge remote-tracking branch 'origin/master' into develop  
>Updated Function96 with V2 files and removed chconf.h and halconf.h (#12613)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: JuanTapMan <68515848+JuanTapMan@users.noreply.github.com>  
>[Keyboard] Add handwired/frankie_macropad (#12349)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Update MJ61 architecture to support multi version (#11787)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Implement the OpenRGB protocolUse the correct defineAdd const before declarationFix compile errorwhoopsAdd const before declarationFormattingFormating and remove unused macros  
>Add RGB controls to picture; label Layer 3 correctly (#12337)  
>Terrazzo: Fix wrong LED Matrix function names (#12561)  
>kingly_keys/ave: move RGBLight config to keyboard level (#12457)QMK Configurator's API can't use the RGBLight configurator when it's defined at keymap level.  
>Add ferris 0.2 (#12133)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Format code according to conventions (#12467)Co-authored-by: QMK Bot <hello@qmk.fm>  
>[Keyboard] Added support for the older no_led revision (#12563)  
>[Keyboard] Add Acperience12 macropad (#12573)Co-authored-by: yynmt <yynmt@yynmt.com>  
>Add RGB matrix suspend wake function for Planck/rev6 (#12290)* Add RGB matrix suspend wake function for Planck/rev6

* Update suggested definition to allow user override.

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: filterpaper <filterpaper@localhost>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>[Keyboard] Update RAMA WORKS M50-A (#12459)  
>Fix how USB queue overflow is handled in chibios. (#12576)* Fix how USB queue overflow is handled in chibios.

This commit reverts PR 12472 (commit c823fe2d3f23ed090e36ce39beed4c448298bd2f),
and it implements the original intent of the commit in a better way.
The original intent of the above mentioned commit was to not deadlock the
keyboard when console is enabled, and hid_listen is not started.

The above mentioned commit had a few drawbacks:
1) When a lot of data was printed to the console, the queue would get full,
and drop data, even if hid_listen was running. (For example having matrix debug
enabled just didn't work right at all)
2) I believe the function in which this was implemented is used by all other
USB endpoints, so with the above change, overflow, and data loss could
happen in other important functions of QMK as well.

This commit implements deadlock prevention in a slightly similar way to how
it's done on AVR. There is an additional static local variable, that memorizes
whether the console has timeouted before. If we are in the timeouted=false
state, then we send the character normally with a 5ms timeout. If it does
time out, then hid_listen is likely not running, and future characters should
not be sent with a timeout, but those characters should still be sent if there
is space in the queue. The difference between the AVR implementation and this
one is that the AVR implementation checks the queue state directly, but this
implementation instead attempts to write the character with a zero timeout.
If it fails, then we remain in the timeouted=true state, if it succeeds, then
hid_listen started removing data from the queue, so we can go out of the
timeouted=true state.

* Added comment explaining the timeouted logic to console flow control.

* Console flow control: refactor chibios flowcontrol code to make it more readable, and rename the timeouted variable to timed_out on both chibios and lufa. Changed comments to says timed_out is an approximation of listener_disconnected, to make it clear that it's not the same thing

* fix typo  
>Fix bad PR merge for #6580. (#12721)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-03  
Contributor(s):  
Zach White  
somepin  
imchipwood  
Ryan  
Xelus22  
Albert Y  
stanrc85  
github-actions[bot]  
Sendy YK  
Gavin Austin  
James Young  
NightlyBoards  
Simon Arlott  
Dan Carroll  
Drashna Jaelre  
Fabián González Martín  
sbuller  
jakobkg  
Ryan Roden-Corrent  
Danny  
drhigsby  
Wilba  
Brandon Claveria  
ploopyco  
kb-elmo  
klausweiss  
Matteo Montemarani  
xyzz  
Quentin  
Michael Stapelberg  
XScorpion2  
vattern  
QMK Bot  
icesoup  
TerryMathews  
Mojitas  
즈눅  
Purdea Andrei  
Matthew Dias  
milestogo  
Joel Challis  
Andrew-Fahmy  
labahuy  
joedinkle  
Sendy Aditya Suryana  
Nick Brassel  
>Fix handling multiples of the same MIDI note (fixes bug brought up in issue #10199) (#11639)* Fix handling multiples of the same MIDI note

* Extend MIDI note status to fix note releases  
>Bastardkb added keyboard and renaming (#11887)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Add Nix Studio OXALYS80 Keyboard (#12118)* Initial commit of OXALYS80 firmware

* Remove comments

* Add new return in info.json

* Fix pin output init for scroll lock indicator

* Update keyboards/nix_studio/oxalys80/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/oxalys80.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/keymaps/default/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/nix_studio/oxalys80/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Delete keymaps config.h

* Update keyboards/nix_studio/oxalys80/config.h

Co-authored-by: Sendy Aditya Suryana <sendy.suryana@go-jek.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Move gpio wait logic to wait.h (#12067)  
>Add ability to toggle One Shot functionality (#4198)Co-authored-by: Nick Brassel <nick@tzarc.org>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>LED Matrix: Clean up includes (#12197)  
>[Keyboard] Added Adellein Keyboard/PCB (#11547)  
>[Keyboard] Enable RGB Matrix for Corne (#12091)  
>Fix keycode mappings for via and ensure they don't change within protocol (#12130)* Fix keycode mappings for via and ensure they don't change within protocol

* Update keycodes

* Fix broken keyboards

* added the missing keycodes found in via

* Remove invalid keycodes

Co-authored-by: David Hoelscher <infinityis@users.noreply.github.com>  
>TKC GodSpeed75: add RGB LED support (#12278)* GodSpeed75: add RGB support

* GodSpeed75: minor updates

* GodSpeed75: minor updates

* GodSpeed75: restore chconf.h

* GodSpeed75: restore chconf.h

* GodSpeed75: restore chconf.h  
>M10-A refactor (#12242)  
>Improve upon the 'Caveats' section of the Layers and Mod-Tap documentation (#12306)* Improve upon the 'Caveats' section of the Layers and Mod-Tap documentation

* Update docs/mod_tap.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update docs/feature_layers.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update docs/mod_tap.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Added a line saying that remote desktop problems may also be mitigated by defining TAP_CODE_DELAY

* Update docs/mod_tap.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Add a `qmk format-json` command that will format JSON files (#12372)* Add a command to format json files

* change to work after rebase

* add test for qmk format-json

* add documentation for qmk format-json

* Update lib/python/qmk/cli/format/json.py  
>Modified tmk_core/rules.mk to avoid linking errors (#10728)* Modified tmk_core/rules.mk to avoid linking errors

Added -fcommon flag to avoid linking errors due to multiple variable definitions. Though this is neither a definitive nor good solution, proper changes and use of extern  keyword to avoid those multiple definitions must be made

* Comment updated  
>Fix issues when manually shifting characters and Auto Shift (#12083)Specifically, when using the Auto-Shift feature, if you hold and roll shift, it would not actually shift the character that you hit after the shift  
>Format code according to conventions (#12076)Co-authored-by: QMK Bot <hello@qmk.fm>  
>Extract sendstring into its own compilation unit (#12060)* Extract sendstring into its own compilation unit

* License headers?

* Put this include in the header  
>[Keyboard] Preserve signedness from opt_encoder_handler for scroll data on ploopy devices (#12223)  
>[Keyboard] Add Keyboard Rartlite (#11866)  
>dumbpad refactor - adding support for various PCB revisions (#9259)* Placeholder commit - Refactored to support different PCB revisions

Individual revision folders still need:
-  info.json
-  readme.md

all v0x folders support up to two LEDs for layer indication

all v1x folders support up to two LEDs for layer indication
plus one extra LED for numlock indication

v0x - supports single-encoder v0.x PCB revisions

v0x_right - supports reversible, single-encoder v0.x PCB revisions

v0x_dualencoder - supports dual-encoder v0.x PCB revisions

v1x - supports single-encoder v1.x PCB revisiions

v1x_right - supports reversible, single-encoder v1.x PCB revisions

* Added info.json and readme.md files for all dumbpad revisions

* More refactoring, adding shared config.h and rules.mk

Removed config.h from default keymap folders - defining TAPPING_TOGGLE in config.h

* Minor formatting fix

* MATRIX_COL_PINS for v1x_right was not reversed - changed to match v0x_right

* adding support for v1x dual encoder PCB

* adding alt-f2 tapdance routine for personal keymaps

* adding dumbpad build using teensy 2.0 instead of Pro Micro

* matched v1x dumbpad encoder and led pins to latest PCB revisions

* updated readme, removed v1x_teensy until someone requests it

* changed device name to match tmk udev rules, removed unnecessary ifdef

* removed user keymaps and folders

* missed hotdox keymap - removing

* fixing info.json keyboard_names for all versions

* Changed biton32 to get_highest_layer in keyboards/dumbpad/v0x/v0x.c

* keyboards/dumbpad/v0x/v0x.c - remove matrix_scan_kb, process_record_kb

* /dumbpad/v0x/keymaps/default/keymap.c - remove empty functions

* /dumbpad/v0x/keymaps/default/keymap.c - changed biton32 to get_highest_layer

* keyboards/dumbpad/v0x_dualencoder/keymaps/default/keymap.c - remove empty functions

* keyboards/dumbpad/v0x_right/readme.md - smaller board layout image

* keyboards/dumbpad/v1x_dualencoder/readme.md - smaller board image

* keyboards/dumbpad/v1x/readme.md - smaller board image

* keyboards/dumbpad/v1x_right/readme.md - smaller board image

* Update keyboards/dumbpad/rules.mk

* Apply suggestions from code review

Batch applying suggestions from review

* fixed removal of led_set_kb

* Implementing requested changes from old pull request 9259

* removing unused rules

* removed rules.mk from dumbpad base folder

* adding templates for each layout

* testing default keymap json

* Testing applying default keymap for dumbpad

* Layout correction: v1.x are 17 position pcb's

* Update keyboards/dumbpad/v0x/rules.mk

* Update keyboards/dumbpad/v0x/rules.mk

* Update keyboards/dumbpad/v0x_dualencoder/keymaps/default/keymap.c

* Update keyboards/dumbpad/v0x_dualencoder/rules.mk

* Update keyboards/dumbpad/v0x_dualencoder/rules.mk

* Update keyboards/dumbpad/v1x_dualencoder/rules.mk

* Update keyboards/dumbpad/v1x_dualencoder/templates/keymap.c

* Update keyboards/dumbpad/v1x_right/rules.mk

* Update keyboards/dumbpad/v1x_right/rules.mk

* Update keyboards/dumbpad/rules.mk

* Update keyboards/dumbpad/v0x_dualencoder/templates/keymap.c

* Update keyboards/dumbpad/v0x_right/rules.mk

* Update keyboards/dumbpad/v1x/rules.mk

* Update keyboards/dumbpad/v1x/rules.mk

* Update keyboards/dumbpad/v1x_dualencoder/keymaps/default/keymap.c

* Update keyboards/dumbpad/v1x_dualencoder/rules.mk

* Update keyboards/dumbpad/v0x_right/rules.mk

* Removing binary files  
>(Re)Fixing K-type RGB lighting (#12084)* initial rgb driver fix

* added underglow LEDs and fixed typo in RGB locations

* removed test code

* added my key maps

* updated rgb keymap to work with changes

* refactored my code to make it more maintainable and updated keymaps.

* added GPL licence

* Turned off matrix scan rate debug info

* added checks if RGB matrix is enabled to fix errors when building keymaps without RGB matrix enabled

* Apply suggestions from code review by fauxpark

Co-authored-by: Ryan <fauxpark@gmail.com>

* Renamed led driver file to be less ambiguous

* Renamed is31fl3733 driver files to is31fl3733-dual

Co-authored-by: Ryan <fauxpark@gmail.com>  
>add equator (#12369)Co-authored-by: Swiftrax <swiftrax@gmail.com>  
>LED Matrix: Additional common_features.mk tweaks (#12187)  
>Set default OLED Update Interval for Split Keyboards (#12107)Because the matrix scanning is slower for splits, in general,
the frequent updating of the OLEDs can slow down the matrix scanning.
To help prevent that, set the update interval for the OLEDs to not
update as frequently.  
>Refactor to use led config - Part 6 (#12115)* Convert to config

* Convert to config

* Convert to config

* Convert to config

* Convert to config

* Convert to config

* Convert to config

* Convert to config

* revert changes  
>Fix Kinetic speed condition (#12139)  
>add support for Noah AVR PCB (#11563)* add support for Noah AVR PCB

* Update info.json

* Update readme.md

* Update keyboards/kb_elmo/noah_avr/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keymap.c

* Apply suggestions from code review

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Dubba175 (#12077)* dubba175 initial

* Following checklist

* Update readme.md

* Update keyboards/dubba175/keymaps/default/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/dubba175/keymaps/default/keymap.c

Co-authored-by: ridingqwerty <george.g.koenig@gmail.com>

* Update keyboards/dubba175/keymaps/default/keymap.c

Co-authored-by: ridingqwerty <george.g.koenig@gmail.com>

* Update keyboards/dubba175/rules.mk

Co-authored-by: ridingqwerty <george.g.koenig@gmail.com>

* Update config.h

* Update keyboards/dubba175/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/dubba175/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/dubba175/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: ridingqwerty <george.g.koenig@gmail.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>TKC M0lly refactor (#12227)  
>[Keymap] Add 60_ansi_arrow_split_bs_7u_spc layout & keymap (#11329)* Add 60_ansi_arrow_split_bs_7u_spc layout & keymap

* Update readme.md

* Minor updates

* Update dz60.h

* Update keymap.c

* Update readme.md

* Update keymap.c

* Update readme.md

* Update readme.md

* Update keymap.c

* Update layouts/default/60_ansi_arrow_split_bs_7u_spc/layout.json

* Update keymap.c

* Update readme.md  
>[Keyboard] Add handwired/bolek keyboard (#12234)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove hex_to_keycode and move tap_random_base64 to send_string.c (#12079)  
>handwired/rs60: use LAYOUT_ortho_5x12 directly (#12397)This commit renames the macro LAYOUT to LAYOUT_ortho_5x12, and removes the alias.  
>Add Sinc Rev. 2 (#12138)  
>Fixed keymap names of Noah AVR (#12265)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Pizza Keyboards Pizza65 addition (#11604)* Added Pizza65 from Pizza Keyboards

Addition of Pizza65

* Update pizza65.h

* Update info.json

* Update mcuconf.h

* Update rules.mk

* Updated makefile

* Update keyboards/pizzakeyboards/pizza65/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/pizzakeyboards/pizza65/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/config.h

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/ansi_blocker_doublebs/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/iso_blocker_doublebs/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/default/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/iso_blocker/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/via/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/pizzakeyboards/pizza65/info.json

Co-authored-by: Ryan <fauxpark@gmail.com>

* Chibios Config migration

* Update keyboards/pizzakeyboards/pizza65/readme.md

Co-authored-by: Jonas Gessner <JonasGessner@users.noreply.github.com>

* Update keyboards/pizzakeyboards/pizza65/readme.md

Co-authored-by: Jonas Gessner <JonasGessner@users.noreply.github.com>

* Update keyboards/pizzakeyboards/pizza65/pizza65.h

Co-authored-by: Jonas Gessner <JonasGessner@users.noreply.github.com>

* Update rules.mk

nk rollover activation

* conf updates

* Update keyboards/pizzakeyboards/pizza65/keymaps/iso_blocker/keymap.c

Co-authored-by: Davide Riccardo Caliendo <drc0@users.noreply.github.com>

* Update keyboards/pizzakeyboards/pizza65/keymaps/iso_blocker_doublebs/keymap.c

Co-authored-by: Davide Riccardo Caliendo <drc0@users.noreply.github.com>

* Update keymap.c

thanks to Acaban

* Update pizza65.h

update to the iso_blocker_doublebs layout macro

* Delete chconf.h

Deleting after the ChibiOS-conf migration.

* Delete config.h

Deleting after the ChibiOS-conf migration.

* Revert "Delete config.h"

This reverts commit 16d64619e68578382aca3b1475968563b662d07f.

* Delete mcuconf.h

Deleting after ChibiOS-conf migration.

* Delete halconf.h

Deleting after ChibiOS-conf migrations.

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Jonas Gessner <JonasGessner@users.noreply.github.com>
Co-authored-by: Davide Riccardo Caliendo <drc0@users.noreply.github.com>  
>[Keymap] miles2go userspace  update, add functions for babblepaste library, add prime_e keybard keymap (#9196)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Remove leftover old implementations of the lily58 split code. (#12442)  
>Remove a few more ifdefs from quantum_keycodes (#12129)  
>[Keyboard] Add barleycorn smd keyboard (#12200)  
>[Keyboard] Added Roses Lite Support (#12173)Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add YMDK NP24 (ATmega32U4 with 6 RGB LEDs) (#12120)  
>Document LED physical location index for Planck and Preonic (#12147)Co-authored-by: filterpaper <filterpaper@localhost>  
>minor change to trigger api update  
>XT converter cleanup (#12264)  
>More Tap Dance docs improvements (#12358)  
>Consistently use bin/qmk when that script is called (#12286)* Pass QMK_BIN down to build_keyboard.mk

* choose the correct qmk script  
>Added wilba.tech WT60-H3 (#12354)* Added wilba.tech WT60-H2

* fix typo  
>Remove ifdefs for Swap Hands keycodes (#12095)  
>Revert "Fixing K-type RGB lighting (#11551)" (#12065)This reverts commit e6f7da403676b491ac278d5b793d18a0d114477e.  
>add kinesis/kint36 (#10171)This moves the config_common.h into the files that include ../config.h,
so that the kint36/config.h does not include it (which would cause
compilation errors).  
>Add new Keyboard: SENDYYeah Bevi (#12011)* Add bevi Keyboard

* Update readme

* Change image embed

* Update instructions to compile

* beVi initial

* Enable NKRO

* Update README

* Revert Lily58 rules.mk

* Revert h87a info.json

* Add URL and maintainer in info.json

* Update year

* Add layer 1

* Tidying up

* Fix keymap

* Add one line at end of file

* Replicate default keymap to via

* Update keyboards/sendyyeah/bevi/bevi.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Remove comment on layout macro definition

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Sendy Aditya Suryana <sendy.suryana@go-jek.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Added wilba.tech WT65-G2 (#12360)  
>Format code according to conventions (#12244)Co-authored-by: QMK Bot <hello@qmk.fm>  
>ADNS-5050 / Ploopy Nano / Ploopy Mini Trackballs (#11994)* added adns5050 sensor code, as well as implementations for the Ploopy Mini and the Ploopy Nano

* fixed spurious scrolling issue

* recommended fixes for pr linting and cleanup  
>Fix Kira80 license headers (#12303)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Add VIA support to doodboard/duckboard_r2 (#12028)* Update R1 keymap and config

* Add duckboard R2

* Add VIA support for duckboard R2

* Set bootmagic lite row and column

* Update config.h

* Update keyboards/doodboard/duckboard/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Fix a small typo in cli_commands.md (#12379)  
>Merge remote-tracking branch 'origin/master' into develop  
>Move `API_SYSEX_MAX_SIZE` out of `config_common.h` (#12302)  
>Keyboard/grandiceps (#11933)* Add Grandiceps keyboard

* Fix info.json

* Fix typo

* Fix typo

* cleanup format

* move mcu files to root

* Updated with PR changes

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

* PR issues for chibios confmigrate

* PR Changes

Co-authored-by: Thys de Wet <thys@vectorphoto.co.uk>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Sirius UniGo66 touch-up (#12280)* un-nest layout macros

* use #pragma once include guard in unigo66.h

* unify rules.mk to QMK AVR template

- remove Bootloader selection comment block
- unify Build Option header comment
- align Build Option rules and inline comments

* remove unused LAYOUT_all macro

* update readme.md to match QMK template  
>[Keyboard] add Soup10 support (#11921)Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keymap] Mojito - removed layer macros (#12201)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Remove ifdefs for UC and X/XP too (#12131)  
>[Keyboard] Add Pachi (#12132)Co-authored-by: Ryan <fauxpark@gmail.com>  
>trivial change to trigger api update  
>Remove `FUNC()` (#12161)  
>[Keyboard] Split RGB Matrix Zygomorph support (#11083)  
>[Keymap] stanrc85 keymap updates (#12184)  
>Remove more cruft from Lily58 default keymap (#12078)* Remove more cruft from lily58 default keymap

* Update keyboards/lily58/keymaps/default/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update config.h

Remove extra newline

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Pull Request for babyV keyboard (#12112)* Add files via upload

* Add files via upload

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update Readme.md

* Update Readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Create CaseFiles

* Delete CaseFiles

* Create Readme.md

* Add files via upload

* Add files via upload

* Add files via upload

* Create Readme.md

* Create Readme.md

* Create Readme.md

* Delete S50-Top.dxf

* Delete S50-Top.svg

* Add files via upload

* Update Readme.md

* Update Readme.md

* Update Readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* Updating encoder code.

* Update encoder code.

* Case files and encoder update.

* Update encoder code.

* Updates to encoder code.

* Syntax fixes.

* Create readme.md

* Add files via upload

* Create readme.md

* Add files via upload

* Removed case files from s50 branch

* Format changes.

* Add case files to Master branch

* Syntax fixes

* Recommended code changes for pull request into QMK.

* Recommended change for pull request.

* Delete config.h

* Delete config.h

* Delete config.h

* Delete config.h

* Delete config.h

* Delete config.h

* Add config.h and rules.mk files to the joedinkle layout for autoshift.

* Delete S50-Top-New.dxf

* Delete S50-Top-New.svg

* New case files

Revision to S50 top file.

* Added 3D printed case STL and DXF files.

* Create readme.md

* Update readme.md

* Added babyV firmware

* Update readme.md

* QMK PR preperations.

* Delete config.h

* Delete keymap.c

* Delete readme.md

* Delete rules.mk

* Delete config.h

* Delete keymap.c

* Delete readme.md

* Changes for QMK formatting.

* Removed excess files

Removed case files and schematics from the joedinkle branch. The joedinkle branch is primarily for QMK PRs. These files will remain in the master branch of this fork.

* Add SPRH keyboard

* Formatting and cleanup.

* Edits to default Layout

* Readme Update

* Formatting changes.

* Deleted obsolete code.

* Formatting changes and file removal for QMK PR

* Deleted S50

S50 is a completed keyboard and is located in the Master Branch. S50 removed from the in progress branch.

* Delete Read Me

* Replaced S50 files accidentally deleted in merge.

* Added split layout for SPRH

* Added Files for Blvd PCB

* Add PCB files for Blvd

* Added compressed kicad projects

* Removed obsolete PCB files

* Added PCB files

* Added personal babyV keymap.

* Update readme.md

* Update readme.md

* Update readme.md

* Update readme.md

* babyV-added info.json and updated default keymap

* Added case files for babyV

* Update readme.md

* Update readme.md

* Update readme.md

* Updated default keymap.

* Cleaned up keymap folder.

* Added info.json for babyV

* babyV updates

* PR preps

* PR preps

* Update .gitignore

* Delete Backlight.png

* Delete MCU.png

* Delete Matrix.png

* Delete readme.md

* Rename Readme.md to readme.md

* Requested PR changes.

* Update rules.mk

* Update rules.mk

* readme and rules.mk updates

* Update keyboards/eyeohdesigns/babyv/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/eyeohdesigns/babyv/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/eyeohdesigns/babyv/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/eyeohdesigns/babyv/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/eyeohdesigns/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/eyeohdesigns/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update readme.md

* Update keyboards/eyeohdesigns/babyv/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>LED Matrix: decouple from Backlight (#12054)  
>Begin the process of deprecating bin/qmk in favor of the global cli (#12109)* Begin the process of deprecating bin/qmk in favor of the global cli

* Correctly set the qmk bin  
>Workaround for recent changes to mouse keycodes (#12367)  
>added twelvekey (#12281)* added twelvekey

* rename layout  
>Added wilba.tech WT60-H2 (#12348)* Added wilba.tech WT60-H2

* fix typo

* Fix error in keymap  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-02  
Contributor(s):  
Zach White  
mkdl  
Aeonstrife  
precondition  
MechMerlin  
Josh Johnson  
Ryan  
Xelus22  
npspears  
Albert Y  
github-actions[bot]  
James Young  
Steven Nguyen  
Andy Freeland  
Drashna Jaelre  
unrelentingtech  
fauxpark  
Mario Medina  
Anomalocaridid  
MRAAGH  
Dominic Gan  
yynmt  
Rys Sommefeldt  
Ross Montsinger  
XScorpion2  
QMK Bot  
James Skeen  
James  
MelGeek  
Ikta  
Drashna Jael're  
Joel Challis  
CMMS-Freather  
Joshua Diamond  
SneakboxKB  
Andrew-Fahmy  
knaruo  
Nick Brassel  
Kosuke Adachi  
>[Keyboard] change to saka68 solder firmware config. add sam's s80 firmware (#11834)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Joshua Diamond <josh@windowoffire.com>  
>2021 February 27 Breaking Changes Changelog (#11975)* restore main readme.md

* add ChangeLog entry for 2021-02-27 develop branch - initial version

* update Docs; consolidate sidebar entries to new Breaking Changes History doc

* Changelog update

- concatenate similar changes as one list item
- unify change formatting (remove [bracketed] headings and trailing periods)
- item sorting improvement

* update Changes Requiring User Action section

Detail the changes regarding keyboard relocations/additions/deletions.

* add entry for fauxpark's user keymap cleanup for config.h/rules.mk

* add link to Jacky Studio bugfix PR

* add link for "ChibiOS conf migrations... take 15"

* add links for "Make LAYOUT parsing more robust" and "Massdrop develop rgb fix"

* remove sort sequence numbers

* rename Breaking Changes History page

Renames the Breaking Changes History page to "Past Breaking Changes".

* update schedule in Breaking Changes Overview

* suggestions/changes per tzarc

* skully's changes

* add entry for "Fix develop" (PR 12039)

Co-authored-by: Nick Brassel <nick@tzarc.org>
Co-authored-by: Zach White <skullydazed@gmail.com>  
>Fix develop (#12039)Fixes file encoding errors on Windows, and layouts not correctly merging into info.json.

* force utf8 encoding

* correctly merge layouts and layout aliases

* show what aliases point to  
>Stop sounds when suspended (#11553)* fix stopping audio on suspend vs. startup sound

* trim firmware size

* fix stuck audio on startup (ARM)  
>Added support for barracuda keyboard (#11888)- Added default and via keymaps  
>[Keyboard] Add 'LAYOUT_65_ansi_split_bs' support to KBDfans KBD67 rev2  (#11739)* [Keyboard] Add 'LAYOUT_65_ansi_split_bs' support to KBDfans KBD67 rev2

This is already supported by VIA.

* [Keymap] Fix kbd67 catrielmuller_camilad keymap

* [Keyboard] Add my keymap for KBDfans KBD67 rev2 using 'LAYOUT_65_ansi_split_bs'  
>Merge remote-tracking branch 'upstream/master' into develop  
>Budget96 VIA (#11737)* add budget96 via keymap and adjust vid and pids

* update dates

* Update keyboards/donutcables/budget96/keymaps/default/keymap.c

Co-authored-by: Joshua Diamond <josh@windowoffire.com>

Co-authored-by: Joshua Diamond <josh@windowoffire.com>  
>[Keyboard] Add new keyboard Cornelius (#11719)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Add swap-hands array for CRKBD (Corne) (#11915)Co-authored-by: filterpaper <filterpaper@localhost>  
>Audio system overhaul (#11820)* Redo Arm DAC implementation for additive, wavetable synthesis, sample playback

changes by Jack Humbert on an implementation for DAC audio on arm/chibios platforms
this commits bundles the changes from the arm-dac-work branch focused on audio/audio_arm.* into one commit (leaving out the test-keyboard)

f52faeb5d (origin/arm-dac-work) add sample and wavetable examples, parsers for both
  -> only the changes on audio_arm_.*, the keyboard related parts are split off to a separate commit
bfe468ef1 start morphing wavetable
474d100b5 refined a bit
208bee10f play_notes working
3e6478b0b start in-place documentation of dac settings
3e1826a33 fixed blip (rounding error), other waves, added key selection (left/right)
73853d651 5 voices at 44.1khz
dfb401b95 limit voices to working number
9632b3379 configuration for the ez
6241f3f3b notes working in a new way

* Redo Arm DAC implementation for additive, wavetable synthesis, sample playback

changes by Jack Humbert on an implementation for DAC audio on arm/chibios platforms

this commit splits off the plank example keymap from commit
    f52faeb5d (origin/arm-dac-work) add sample and wavetable examples, parsers for both

* refactoring: rename audio_ to reflect their supported hardware-platform and audio-generation method: avr vs arm, and pwm vs dac

* refactoring: deducplicate ISR code to update the pwm duty-cycle and period in the avr-pwm-implementation

pulls three copies of the same code into one function
which should improve readability and maintainability :-)

* refactoring: move common code of arm and avr implementation into a separate/new file

* refactoring: audio_avr_pwm, renaming defines to decouple them from actually used timers, registers and ISRs

* refactoring: audio_avr_pwm - replacing function defines with plain register defines

aligns better with other existing qmk code (and the new audio_arm_pwm) doing similar pwm thing

* add audio-arm-pwm

since not all STM32 have a DAC onboard (STM32F2xx and STM32F3xx), pwm-audio is an alternative (STM32F1xx)
this code works on a "BluePill" clone, with an STM32F103C8B

* clang-format changes on quantum/audio/* only

* audio_arm_dac: stopping the notes caused screeching when using the DAC audio paths

* audio_arm_pwm: use pushpull on the pin; so that a piezzo can be hooked up direclty without additional components (opendrain would require an external pullup)

* refactoring: remove unused file from/for atmel-avr chips

* refactoring: remove unused (avr) wavetable file

* audio_arm_dac: adapt dac_end callback to changed chibios DAC api

the previous chibios (17.6.0) passed along a pointer into the buffer plus a sample_count (which are/already where included in the DACDrivre object) - the current chibios (19.1.0) only passes the driver object.
this patch ports more or less exactly what the previous chibios ISR code did: either have the user-callback work the first or second half of the buffer (dacsample_t pointer, with half the DAC_BUFFER_SIZE samples) by adjusting the pointer and sample count

* audio-arm-dac: show a compile-warning on undefined audio-pins

Co-Authored-By: Drashna Jaelre <drashna@live.com>

* audio_arm_dac: switch from exemplary wavetable generation to sine only

sine+triangle+squrare is exemplary, and not realy fit for "production" use
'stairs' are usefull for debugging (hardware, with an oscilloscope)

* audio_arm_dac: enable output buffers in the STM32

to drive external loads without any additional ciruitry - external opamps and such

* audio: prevent out-of-bounds array access

* audio_arm_dac: add output-frequency correcting factor

* audio_arm_pwm: get both the alternate-function and pm-callback variants back into working condition

and do some code-cleanup, refine documentation, ...

* audio_arm_pwm: increase pwm frequency for "higher fidelity"

on the previous .frequency=100000 higher frequency musical notes came out wrong
(frequency measured on a Tektronix TDS2014B)
note | freq | arm-pwm
C2 | 65.4 | 65.491
C5 | 523.25 | 523.93
C6 | 1046.5 | 1053.38
C7 | 2093 | 2129
C8 | 4186 | 4350.91

with .frequency = 500000
C8 | 4186 | 4204.6

* audio refactoring: remove unused variables

* audio_arm_dac: calibrate note tempo: with a tempo of 60beats-per-second a whole-note should last for exactly one second

* audio: allow feature selection in rules.mk

so the user can switch the audio driver between DAC and PWM on STM32 boards which support both (STM32F2 and up)
or select the "pin alternate" pwm mode, for example on STM32F103

* audio-refactoring: move codeblocks in audio.[ch] into more coherent groups

and add some inline documentation

* audio-refactoring: cleanup and streamline common code between audio_arm_[dac|pwm]

untangeling the relation between audio.c and the two drivers
and adding more documenting comments :-)

* audio_avr_pwm: getting it back into working condition, and cleanup+refactor

* audio-refactoring: documentation and typo fixes

Co-Authored-By: Nick Brassel <nick@tzarc.org>

* audio-refactoring: cleanup defines, inludes and remove debug-prints

* audio_chibios_dac: define&use a minimal sampling rate, based on the available tone-range

to ease up on the cpu-load, while still rendering the higher notes/tones sufficiently
also reenable the lower tones, since with the new implementation there is no evidence of them still beeing 'bugged'

* audio-refactoring: one common AUDIO_MAX_VOICES define for all audio-drivers

* audio-chibios-pwm: pwm-pin-allternate: make the the timer, timer-channel and alternate function user-#definable

* audio_chibios_dac: math.h has fmod for this

* Redo Arm DAC implementation for additive, wavetable synthesis, sample playback

update Jack Humberts dac-example keymaps for the slight changes in the audio-dac interface

* audio-refactoring: use a common AUDIO_PIN configuration switch instead of defines

have the user select a pin by configuration in rules.mk instead of a define in config.h
has the advantage of beeing in a common form/pattern across all audio-driver implementations

* audio-refactoring: switch backlight_avr.c to the new AUDIO_PIN defines

* audio-common: have advance_note return a boolean if the note changed, to the next one in the melody beeing played

* audio-chibios-pwm: fix issue with ~130ms silence between note/frequency changes while playing a SONG

through trial,error and a scope/logic analyzer figured out Chibios-PWMDriver (at least in the current version) misbehaves if the initial period is set to zero (or one; two seems to work); when thats the case subsequent calls to 'pwmChhangePeriod' + pwmEnableChannel took ~135ms of silence, before the PWM continued with the new frequency...

* audio-refactoring: get 'play_note' working again

with a limited number of available voices (say AUDIO_VOICES_MAX=1) allow new frequencies to be played, by discarding the oldest one in the 'frequencies' queue

* audio: set the fallback driver to DAC for chibios and PWM for all others (==avr at the moment)

* audio-refactoring: moore documentation

and some cleanup

* audio-avr-pwm: no fallback on unset AUDIO_PIN

this seems to be the expected behaviour by some keyboards (looking at ckeys/handwire_101:default) which otherwise fail to build because the firmware-image ends up beeing too large for the atmega... so we fail silently instead to keep travis happy

* audio-refactoring: untangling terminology: voice->tone

the code actually was working on tones (combination of pitch/frequency, duration, timbre, intensity/volume) and not voices (characteristic sound of an instrument; think piano vs guitar, which can be played together, each having its own "track" = voice on a music sheet)

* audio-pwm: allow freq=0 aka a pause/rest in a SONG

continue processing, but do not enable pwm units, since freq=0 wouldn't produce any sound anyway (and lead to division by zero on that occasion)

* audio-refactoring: audio_advance_note -> audio_advance_state

since it does not only affect 'one note', but the internally kept state as a whole

* audio-refactoring: untangling terminology: polyphony

the feature om the "inherited" avr code has little to do with polyphony (see wikipedia), but is more a time-multiplexing feature, to work around hardware limitations - like only having one pwm channel, that could on its own only reproduce one voice/instrument at a time

* audio-chibios-dac: add zero-crossing feature

have tones only change/stop when the waveform approaches zero - to avoid audible clicks
note that this also requires the samples to start at zero, since the internally kept index into the samples is reset to zero too

* audio-refactoring: feature: time-multiplexing of tones on a single output channel

this feature was in the original avr-pwm implementation misnomed as "polyphony"
with polyphony_rate and so on; did the same thing though: time-multiplexing multiple active notes so that a single output channel could reproduce more than one note at a time (which is not the same as a polyphony - see wikipedia :-) )

* audio-avr-pwm: get music-mode working (again) on AVRs

with both pwm channels, or either one of the two :-)
play_notes worked already - but music_mode uses play_note

* audio-refactoring: split define MAX_SIMULTANEOUS_TONES -> TONE_STACKSIZE

since the two cases are independant from one another, the hardware might impose limitations on the number of simultaneously reproducable tones, but the audio state should be able to track an unrelated number of notes recently started by play_note

* audio-arm-dac: per define selectable sample-luts

plus generation script in ./util

* audio-refactoring: heh, avr has a MIN...

* audio-refactoring: add basic dac audio-driver based on the current/master implementation

whereas current=d96380e65496912e0f68e6531565f4b45efd1623
which is the state of things before this whole audio-refactoring branch

boiled down to interface with the refactored audio system = removing all
redundant state-managing and frequency calculation

* audio-refactoring: rename audio-drivers to driver_$PLATFORM_$DRIVER

* audio-arm-pwm: split the software/hardware implementations into separate files

which saves us partially from a 'define hell', with the tradeoff that now two somewhat similar chibios_pwm implementations have to be maintained

* audio-refactoring: update documentation

* audio-arm-dac: apply AUDIO_PIN defines to driver_chibios_dac_basic

* audio-arm-dac: dac_additive: stop the hardware when the last sample completed

the audio system calls for a driver_stop, which is delayed until the current sample conversion finishes

* audio-refactoring: make function-namespace consistent

- all (public) audio functions start with audio_
- also refactoring play*_notes/tones to play*_melody, to visually distance it a bit from play*_tone/_note

* audio-refactoring: consistent define namespace: DAC_ -> AUDIO_DAC_

* audio-arm-dac: update (inline) documentation regarding MAX for sample values

* audio-chibios-dac: remove zero-crossing feature

didn't quite work as intended anyway, and stopping the hardware on close-to-zero seems to be enought anyway

* audio-arm-dac: dac_basic: respect the configured sample-rate

* audio-arm-pwm: have 'note_timbre' influence the pwm-duty cycle

like it already does in the avr implementation

* audio-refactoring: get VIBRATO working (again)

with all drivers (verified with chibios_[dac|pwm])

* audio-arm-dac: zero-crossing feature (Mk II)

wait for the generated waveform to approach 'zero' before either turning off the output+timer or switching to the current set of active_tones

* audio-refactoring: re-add note-resting -> introduce short_rest inbetween

- introduce a short pause/rest between two notes of the same frequency, to separate them audibly
- also updating the refactoring comments

* audio-refactoring: cleanup refactoring remnants

remove the former avr-isr code block - since all its features are now refactored into the different parts of the current system

also updates the TODOS

* audio-refactoring: reserve negative numbers as unitialized frequencies

to allow the valid tone/frequency f=0Hz == rest/pause

* audio-refactoring: FIX: first note of melody was missing

the first note was missing because 'goto_next_note'=false overrode a state_change=true of the initial play_tone
and some code-indentations/cleanup of related parts

* audio-arm-dac: fix hardware init-click

due to wron .init= value

* audio-refactoring: new conveniance function: audio_play_click

which can be used to further refactor/remove fauxclicky (avr only) and/or the 'clicky' features

* audio-refactoring: clang-format on quantum/audio/*

* audio-avr-pwm: consecutive notes of the same frequency get a pause inserted inbetween by audio.c

* audio-refactoring: use milliseconds instead of seconds for 'click' parameters

clicks are supposed to be short, seconds make little sense

* audio-refactoring: use timer ticks instead of counters

local counters were used in the original (avr)ISR to advance an index into the lookup tables (for vibrato), and something similar was used for the tone-multiplexing feature
decoupling these from the (possibly irregular) calls to advance_state made sesne, since those counters/lookups need to be in relation to a wall-time anyway

* audio-refactoring: voices.c: drop 'envelope_index' counter in favour of timer ticks

* audio-refactoring: move vibrato and timbre related parts from audio.c to voices.c

also drops the now (globally) unused AUDIO_VIBRATO/AUDIO_ENABLE_VIBRATO defines

* audio.c: use system-ticks instead of counters the drivers have to take care of for the internal state posision

since there already is a system-tick with ms resolution, keeping count separatly with each driver implementation makes little sense; especially since they had to take special care to call audio_advance_state with the correct step/end parameters for the audio state to advance regularly and with the correct pace

* audio.c: stop notes after new ones have been started

avoids brief states of with no notes playing that would otherwise stop the hardware and might lead to clicks

* audio.c: bugfix: actually play a pause

instead of just idling/stopping which lead the pwm drivers to stop entirely...

* audio-arm-pwm: pwm-software: add inverted output

new define AUDIO_PIN_ALT_AS_NEGATIVE will generate an inverted signal on the alternate pin, which boosts the volume if a piezo is connected to both AUDIO_PIN and AUDIO_PIN_ALT

* audio-arm-dac: basic: handle piezo configured&wired to both audio pins

* audio-refactoring: docs: update for AUDIO_PIN_ALT_AS_NEGATIVE and piezo wiring

* audio.c: bugfix: use timer_elapsed32 instad of keeping timestamps

avoids running into issues when the uint32 of the timer overflows

* audio-refactoring: add 'pragma once' and remove deprecated NOTE_REST

* audio_arm_dac: basic: add missing bracket

* audio.c: fix delta calculation

was in the wrong place, needs to use the 'last_timestamp' before it was reset

* audio-refactoring: buildfix: wrong legacy macro for set_timbre

* audio.c: 16bit timerstamps suffice

* audio-refactoring: separate includes for AVR and chibios

* audio-refactoring: timbre: use uint8 instead of float

* audio-refactoring: duration: use uint16 for internal per-tone/note state

* audio-refactoring: tonemultiplexing: use uint16 instead of float

* audio-arm-dac: additive: set second pin output-low

used when a piezo is connected to AUDIO_PIN and AUDIO_PIN_ALT, with PIN_ALT_AS_NEGATIVE

* audio-refactoring: move AUDIO_PIN selection from rules.mk to config.h

to be consistent with how other features are handled in QMK

* audio-refactoring: buildfix: wrong legacy macro for set_tempo

* audio-arm-dac: additive: set second pin output-low -- FIXUP

* audio.c: do duration<>ms conversion in uint instead of float

on AVR, to save a couple of bytes in the firmware size

* audio-refactoring: cleanup eeprom defines/usage

for ARM, avr is handled automagically through the avr libc and common_features.mk

Co-Authored-By: Drashna Jaelre <drashna@live.com>

* audio.h: throw an error if OFF is larger than MAX

* audio-arm-dac: basic: actually stop the dac-conversion on a audio_driver_stop

to put the output pin in a known state == AUDIO_DAC_OFF_VALUE, instead of just leaving them where the last conversion was... with AUDIO_PIN_ALT_AS_NEGATIVE this meant one output was left HIGH while the other was left LOW

one CAVEAT: due to this change the opposing squarewave when using both A4 and A5 with AUDIO_PIN_ALT_AS_NEGATIVE
show extra pulses at the beginning/end on one of the outputs, the two waveforms are in sync otherwise.
the extra pusles probably matter little, since this is no high-fidelity sound generation :P

* audio-arm-dac: additive: move zero-crossing code out of dac_value_generate

which is/should be user-overridable == simple, and doing one thing: providing sample values
state-transitions necessary for the zero crossing are better handled in the surrounding loop in the dac_end callback

* audio-arm-dac: dac-additive: zero-crossing: ramping up or down

after a start trigger ramp up: generate values until zero=OFF_VALUE is reached, then continue normally
same in reverse for strop trigger: output values until zero is reached/crossed, then keep OFF_VALUE on the output

* audio-arm-dac: dac-additive: BUGFIX: return OFF_VALUE when a pause is playing

fixes a bug during SONG playback, which suddenly stopped when it encoutnered a pause

* audio-arm-dac: set a sensible default for AUDIO_DAC_VALUE_OFF

1/2 MAX was probably exemplary, can't think of  a setup where that would make sense :-P

* audio-arm-dac: update synth_sample/_wavetable for new pin-defines

* audio-arm-dac:  default for AUDIO_DAC_VALUE_OFF

turned out that zero or max are bad default choices:
when multiple tones are played (>>5) and released at the same time (!), due to the complex waveform never reaching 'zero' the output can take quite a while to reach zero, and hence the zero-crossing code only "releases" the output waaay to late

* audio-arm-dac: additive: use DAC for negative pin

instead of PAL, which only allows the pin to be configured as output; LOW or HIGH

* audio-arm-dac: more compile-time configuration checks

* audio-refactoring: typo fixed

* audio-refactoring: clang-format on quantum/audio/*

* audio-avr-pwm: add defines for B-pin as primary/only speaker

also updates documentation.

* audio-refactoring: update documentation with proton-c config.h example

* audio-refactoring: move glissando (TODO) to voices.c

refactored/saved from the original glissando implementation in then upstream-master:audio_avr.c

still needs some work though, as it is now the calculation *should* work, but the start-frequency needs to be tracked somewhere/somehow; not only during a SONG playback but also with user input?

* audio-refactoring: cleanup: one round of aspell -c

* audio-avr-pwm: back to AUDIO_PIN

since config_common.h expands them to plain integers, the AUDIO_PIN define can directly be compared to e.g. B5
so there is no need to deal with separate defines like AUDIO_PIN_B5

* audio-refactoring: add technical documentation audio_driver.md

which moves some in-code documentation there

* audio-arm-dac: move AUDIO_PIN checks into c-code

instead of doing everything with the preprocessor, since A4/A5 do not expand to simple integers, preprocessor int-comparison is not possible. but necessary to get a consistent configuration scheme going throughout the audio-code... solution: let c-code handle the different AUDIO_PIN configurations instead (and leave code/size optimizations to the compiler)

* audio-arm-dac: compile-fix: set AUDIO_PIN if unset

workaround to get the build going again, and be backwarts compatible to arm-keyboards which not yet set the AUDIO_PIN define. until the define is enforced through an '#error"

* audio-refactoring: document tone-multiplexing feature

* audio-refactoring: Apply suggestions from documentation review

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* audio-refactoring: Update docs/audio_driver.md

* audio-refactoring: docs: fix markdown newlines

Terminating a line in Markdown with <space>-<space>-<linebreak> creates an HTML single-line break (<br>).

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* audio-arm-dac: additive: fix AUDIO_PIN_ALT handling

* audio-arm-pwm: align define naming with other drivers

Co-authored-by: Joel Challis <git@zvecr.com>

* audio-refactoring: set detault tempo to 120

and add documentation for the override

* audio-refactoring: update backlight define checks to new AUDIO_PIN names

* audio-refactoring: reworking PWM related defines

to be more consistent with other QMK code

Co-authored-by: Joel Challis <git@zvecr.com>

* audio-arm: have the state-update-timer user configurable

defaulting to GPTD6 or GPTD8 for stm32f2+ (=proton-c)
stm32f1 might need to set this to GPTD4, since 6 and 8 are not available

* audio-refactoring: PLAY_NOTE_ARRAY was already removed in master

* Add prototype for startup

* Update chibiOS dac basic to disable pins on stop

* Add defaults for Proton C

* avoid hanging audio if note is completely missed

* Don't redefine pins if they're already defined

* Define A4 and A5 for CTPC support

* Add license headers to keymap files

* Remove figlet? comments

* Add DAC config to audio driver docs

* Apply suggestions from code review

Co-authored-by: Jack Humbert <jack.humb@gmail.com>

* Add license header to py files

* correct license header

* Add JohSchneider's name to modified files

AKA credit where credit's due

* Set executable permission and change interpeter

* Add 'wave' to pip requirements

* Improve documentation

* Add some settings I missed

* Strip AUDIO_DRIVER to parse the name correctly

* fix depreciated

* Update util/audio_generate_dac_lut.py

Co-authored-by: Jack Humbert <jack.humb@gmail.com>

* Fix type in clueboard config

* Apply suggestions from tzarc

Co-authored-by: Nick Brassel <nick@tzarc.org>

Co-authored-by: Johannes <you@example.com>
Co-authored-by: JohSchneider <JohSchneider@googlemail.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Joel Challis <git@zvecr.com>
Co-authored-by: Joshua Diamond <josh@windowoffire.com>
Co-authored-by: Jack Humbert <jack.humb@gmail.com>  
>Overhaul bootmagic logic to have single entrypoint (#8532)* Relocate bootmagic logic to have single entrypoint

* Align init of layer state  
>Remove legacy print backward compatiblitly (#11805)* Remove legacy print backward compatiblitly

* Remove legacy print backward compatiblitly - core

* revert comment changes  
>Fixing K-type RGB lighting (#11551)* initial rgb driver fix

* added underglow LEDs and fixed typo in RGB locations

* removed test code

* added my key maps

* updated rgb keymap to work with changes

* refactored my code to make it more maintainable and updated keymaps.

* added GPL licence  
>[Keyboard] Add DimplePlus 7u Layout (#11816)Co-authored-by: James Skeen <skeen@macbook.attlocal.net>  
>Add `tap_code_delay(code, delay)` (#11913)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Output selection: Remove "USB and BT" option (#11940)  
>Hub16 QMK configurator support + various bugfixes (#11496)* qmk configurator support + various bugfixes

* Update keyboards/hub16/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Implement PLOOPY_DRAGSCROLL_INVERT option, which inverts the ploopy trackball's DRAG_SCROLL's vertical scroll direction. (#12032)  
>[Keyboard] Disarray (#11583)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: mujimanic <64090325+mujimanic@users.noreply.github.com>  
>Banana Split VIA Support (#11944)* add VIA keymap for bananasplit

* refactor code to new standards  
>Decouple USB events from the USB interrupt handler. (#10437)  
>Add RGB Matrix support for Preonic rev3 (#12008)* Add g_led_config for RGB Matrix support

* Corrected indentation

* Undo indentation on existing rev3.c code

Co-authored-by: filterpaper <filterpaper@localhost>  
>Add keyboard: 7c8/Framework (#11593)* Add 7c8/framework keyboard

* Update VIA framework.json definition

* Code cleanup and styling to conform to QMK style guide

* Code cleanup and moving some keymap definitions to a 'steven' keymap in order to create a cleaner default keymap for other users

* Update keyboards/7c8/framework/config.h

Remove #define DESCRIPTION

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/7c8/framework/config.h

remove #define UNUSED_PINS

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/7c8/framework/framework.h

Change layout name to existing layout name.

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/7c8/framework/framework.h

Change layout name to existing layout name.

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/7c8/framework/framework.h

Change layout name to existing layout name.

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/7c8/framework/keymaps/via/keymap.c

change biton32 to get_highest_layer

Co-authored-by: Drashna Jaelre <drashna@live.com>

* change vendor ID from 0x07c8 to 0x77c8, which is unused

* delete VIA .json definition from via keymap folder

* Change framework_grid to LAYOUT_ortho_5x12 in default keymap.c

* remove framework.json from 'steven' keymap folder

* cleanup

* Update keyboards/7c8/framework/config.h

0x77c8 -> 0x77C8

Co-authored-by: Drashna Jaelre <drashna@live.com>

Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Remove FAUXCLICKY feature (deprecated) (#11829)  
>Refactor platform logic within print.h (#11863)* Remove GCC check from debug

* Remove platform logic from common.mk

* Refactor platform logic within print.h

* restore debug.c format

* headers

* Rename function pointer type

* review comments

* Update tmk_core/common/printf.c

Co-authored-by: Nick Brassel <nick@tzarc.org>

* Format

Co-authored-by: Nick Brassel <nick@tzarc.org>  
>Add suggestion for indirect unicode input on Linux (#10854)* Add suggestion for indirect unicode input on Linux

I have used this approach myself with great success, and it seems to be the only good solution that doesn't involve IBus.

* Elaborate on keyboard layout on Linux

This should be enough to allow people to figure out how to add custom characters to a Linux keyboard layout.  
>[Keyboard] Rebound: change vendor and product ID for VIA (#11965)  
>[Keyboard] Graystudio COD67 VIA support (#11961)Co-authored-by: Drashna Jaelre <drashna@live.com>  
>[Keyboard] Atlas alps/mx PCB addition (#11884)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>Clean up some user keymaps specifying MCU (#11966)  
>Move transport.c to QUANTUM_LIB_SRC (#11751)  
>[Keyboard] Pill60: fix default keymap shift key, fix info.json to default keymap (#11919)  
>Refactor of USB code within split_common (#11890)* Initial refactor of usb code within split_common

* Add headers

* Correct disable condition

* Format

* Align func name  
>2021 February 27 Breaking Changes Update (#12040)  
>Branch point for 2021 May 29 Breaking Change  
>added unix60, moved togehter with southpaw75 into fr4 folder (#11195)Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>[Keyboard] Dawn60 Rev1 RGB matrix port (#11970)* refactor

* layout update

* fix mods config

* lto enable

* add eeprom

* refactor

* final refactor  
>[Keymap] Drashna Updates - Split+OLED edition (#11968)  
>Migrate mousekey to quantum (#11804)  
>[Keyboard] Update spiderisland/split78 (#11990)* [Keyboard] spiderisland/split78: add MCP23018 reset code

Now, communication with the right side gets re-established
after unplugging it and plugging it back in.

* [Keyboard] spiderisland/split78: configure debouncing

I've been experiencing particularly bad bounce on the 'A' key.

Also, update maintainer github username  
>Add UTD80 PCB (#11799)* Create readme.md

* Add files via upload

* Create readme.md

* Add files via upload

* Update utd80.h

* Update utd80.c

* Update keymap.c

Change 6 length underscore to 7.

* Update keyboards/utd80/readme.md

Co-Authored-By: Drashna Jaelre <drashna@live.com>

* Update keyboards/utd80/readme.md

Co-Authored-By: Drashna Jaelre <drashna@live.com>

* Update keyboards/utd80/readme.md

Co-Authored-By: Drashna Jaelre <drashna@live.com>

* Update keyboards/utd80/readme.md

Co-Authored-By: fauxpark <fauxpark@gmail.com>

* Update keyboards/utd80/readme.md

Co-Authored-By: fauxpark <fauxpark@gmail.com>

* Update utd80.c

* Update utd80.c

* Update keymap.c

* Apply #7701 PR review suggestions

* Add GPL license headers

* Replace led implementation with definition

* Add VIA keymap for UTD80

* Update attributions

Co-authored-by: UTDKeyboard <59077857+utdkeyboard@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: fauxpark <fauxpark@gmail.com>  
>[Keymap] Revamp spidey3 userspace and keymaps (#11768)* Don't block keys during startup animation

* More refinements related to startup and debug state

* restore key logging

* some cleanup on scan rate reporting

* trim some fat

* better lighting to indicate jumped to bootloader

* use eeprom for state restoration

* a little reorganization

* report version immediately when turn on debug

* hold-to-adjust for hue, sat, val

* cformat

* reorg rules.mk settings, fix compile with CONSOLE_ENABLE=no

* simplify spidey3 userspace

* NULL in layer list caused buggy behavior

* more bugfix

* update numpad layout to match matt30 MT3 /dev/tty keycaps

* swap emdash and endash

* map shift+backspace to delete

* removing NO_ACTION_ONSHOT makes the firmware SMALLER ?!

* cformat

* improve spi_glow

* disable shift-backspace = delete by default  
>Split transport mirror (#11046)* Split transport mirror support

* Updated RGB Matrix to respond to electrical events instead of key events

* split matrix slave fix  
>Merge remote-tracking branch 'origin/master' into develop  
>Format code according to conventions (#12024)Co-authored-by: QMK Bot <hello@qmk.fm>  
>ARM - Refactor SLEEP_LED to support more platforms (#8403)* Initial refactor of ARM SLEEP_LED to enable more platforms

* fix build issues

* Disable SLEEP_LED for boards with no caps lock code

* Enable GPT14 for boards with caps lock code and SLEEP_LED enabled

* Enable GPT for boards with caps lock code and SLEEP_LED enabled  
>[Docs] New section to modifier docs: Checking Modifier State (#10550)* Added new section to docs: Checking Modifier State

* Added id anchors to all headers in modifiers docs

* Added a Wikipedia link to bitwise operators and...

crosslinked to the QMK macro docs.

* Added an explanation on the format of mod bitmask

* Added .md extension to hyperlinks to macros docs

* Corrected mod mask order and changed notation

* Documented add_oneshot_mods and del_oneshot_mods

* Mentioned modifier checks in the macro docs

* Explained strict modifier checking

i.e. using `get_mods() & MOD_MASK == MOD_MASK` instead of simply
`get_mods() & MOD_MASK`

* Added (un)register_mods to the docs

* Put left term of comparison in parens  
>V-USB suspend refactor (#11891)  
>[Keyboard] reduce confusion for kbdfans/kbd75 rounds/revisions (#11972)  
>Add Potato65 PCB (#11956)* Make initial set of files

* Update readme.md  
>Add via support to Dozen0 (#11932)* Change VID and PID

* Add via kyemap

* Update keymap.c

* Update keymap.c

Co-authored-by: yynmt <yynmt@yynmt.com>  
>[BUG] Massdrop develop rgb fix (#12022)* Allow for disabling RGB_MATRIX on Massdrop boards.

* Fixup init sequence.

* Make some functions static as they've got very generic names.  
>[Keyboard] Tokyo Keyboard alix40 initial commit (#11918)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: QuadCube <quadcube@QuadCube-Mac-mini.local>  
>Address wake from sleep instability (#11450)* resolve race condition between suspend and wake in LUFA

* avoid multiple calls to suspend_power_down() / suspend_wakeup_init()

* Remove duplicate suspend_power_down_kb() call

* pause on wakeup to wait for USB state to settle

* need the repeated suspend_power_down() (that's where the sleep is)

* more efficient implementation

* fine tune the pause after sending wakeup

* speculative chibios version of pause-after-wake

* make wakeup delay configurable, and adjust value

* better location for wakeup delay  
>Format code according to conventions (#11905)Co-authored-by: QMK Bot <hello@qmk.fm>  
>[Keyboard] Update MJ63 architecture to support multi version (#11788)Co-authored-by: Ryan <fauxpark@gmail.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>  
>Add support for analog USBPD on STM32G4xx. (#11824)* Add support for analog USBPD on STM32G4xx.

* Split up to a list of driver types, allow for custom.  
>Remove `MIDI_ENABLE_STRICT` from user keymaps (#11750)  
>Iron180: layout macro and Configurator rework (#11948)  
>Satisfaction 75 turn off backlight on suspend, restore config on wakeup (#11774)* Satisfaction 75 turn off backlight on suspend, restore config on wakeup

* Disable SLEEP_LED_ENABLE because it has no effect  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2021-01  
Contributor(s):  
Zach White  
Dasky  
Drashna Jaelre  
Gentoli  
fauxpark  
Joel Challis  
Takeshi ISHII  
QMK Bot  
Ryan  
Joshua Diamond  
Kasper  
Aplyard  
Nick Brassel  
>Keep track of encoder activity (#11595)* Keep track of encoder activity, provide API for either matrix/encoder.

* Fixup build when no RGBLIGHT or Backlight enabled.  
>Remove QMK_KEYBOARD_CONFIG_H (#11576)  
>Merge remote-tracking branch 'upstream/master' into develop  
>Remove duplicated housekeeping in arm_atsam (#11672)  
>use a custom name for custom pins  
>comment out a non-standard DIODE_DIRECTION  
>Fix up comments showing how to execute config migration. (#11621)  
>Enforce memory allocator for ChibiOS builds with allocating debounce algorithms (#11630)  
>ChibiOS conf migrations... take 11 (#11646)* Allow forcing re-migration.

* ChibiOS conf upgrade for acheron/arctic

 acheron/arctic - 2aedbe9103fff6c37e596c33c9ed337957647368

* ChibiOS conf upgrade for acheron/austin

 acheron/austin - c2f4e3b7fc9f1c3d64f47d139bc58367afeca1b7

* ChibiOS conf upgrade for acheron/keebspcb

 acheron/keebspcb - 1ba976e409732bfa5c0487dd33e20bec06852ce4

* ChibiOS conf upgrade for acheron/lasgweloth

 acheron/lasgweloth - 01a2e70d0d86de0ff05d0b898a6e3b4428ee1581

* ChibiOS conf upgrade for aeboards/ext65/rev2

 aeboards/ext65/rev2 - 3c9a45cafb4ed6d9672aaff4548b105193633a87

* ChibiOS conf upgrade for ai03/vega

 ai03/vega - 1bd0dfccb99baa69bacd2d55f2bfa72019b8bf80

* ChibiOS conf upgrade for akegata_denki/device_one

 akegata_denki/device_one - a013823188660f5fca37c5763f160f8646aed7a7

* ChibiOS conf upgrade for at_at/660m

 at_at/660m - 9999583e8bec2772046132a22818482d24e18c84

* ChibiOS conf upgrade for box75

 box75 - 1126206109a942237eea96f3a9608e3c9ed55f8e

* ChibiOS conf upgrade for bt66tech/bt66tech60

 bt66tech/bt66tech60 - b69120638a8b2c86c008fd0592be918383d8a454

* ChibiOS conf upgrade for cannonkeys/an_c

 cannonkeys/an_c - c755f6caaccbe2b30d95661a3d441b836534c29f

* ChibiOS conf upgrade for cannonkeys/atlas

 cannonkeys/atlas - 1a18c55492a834b82715516ea4cd4d3d94508743

* ChibiOS conf upgrade for cannonkeys/chimera65

 cannonkeys/chimera65 - 6bf226ef353da9106c381a8ac95a9b90529327e5

* ChibiOS conf upgrade for cannonkeys/db60

 cannonkeys/db60 - 07e3246f8e3adc5b6918809e6a5aa1ad064b9a09

* ChibiOS conf upgrade for cannonkeys/devastatingtkl

 cannonkeys/devastatingtkl - 907d258e29eb7e35b1f868c1ea6148bfd1e3a3f2

* ChibiOS conf upgrade for cannonkeys/instant60

 cannonkeys/instant60 - ac876ff6746b08839a3936dd4126b52683b763f4

* ChibiOS conf upgrade for cannonkeys/instant65

 cannonkeys/instant65 - 3b8c89ec5fecbdb35cccb00c45e64a798528dbda

* ChibiOS conf upgrade for cannonkeys/iron165

 cannonkeys/iron165 - 0814ec4067d9857b0134e38384f272cf7172fb03

* ChibiOS conf upgrade for cannonkeys/obliterated75

 cannonkeys/obliterated75 - 0f376e5d9a232c62e9c60f8fdc81d12732352ddc

* ChibiOS conf upgrade for cannonkeys/onyx

 cannonkeys/onyx - d35134ebe09046b91ab176035d3742d80b23ed8e

* ChibiOS conf upgrade for cannonkeys/ortho48

 cannonkeys/ortho48 - 828dbfbb013ff4fefe75044b3c9fd31fec5e95a1

* ChibiOS conf upgrade for cannonkeys/ortho60

 cannonkeys/ortho60 - 2aca4dd4234e0dac828f5fa15ae5b3bc3c0605dc

* ChibiOS conf upgrade for cannonkeys/ortho75

 cannonkeys/ortho75 - 4af8aaaded0ff53e9c01473f5968cc169f268647

* ChibiOS conf upgrade for cannonkeys/practice60

 cannonkeys/practice60 - e01df551d9483eeb3f825fcc453317fe65f674b5

* ChibiOS conf upgrade for cannonkeys/practice65

 cannonkeys/practice65 - 156163789d4c96cdd4787895788c1d02a2367f5c

* ChibiOS conf upgrade for cannonkeys/rekt1800

 cannonkeys/rekt1800 - 15882afb6373dea3e5f7ed13c19744ee2463f3bf

* ChibiOS conf upgrade for cannonkeys/sagittarius

 cannonkeys/sagittarius - f49fee611ffcc02cb3dc7f249fc8c83f136907b9

* ChibiOS conf upgrade for cannonkeys/satisfaction75

 cannonkeys/satisfaction75 - 2c9fbbea3a38820774f6ff436ef51017b545475a

* ChibiOS conf upgrade for cannonkeys/savage65

 cannonkeys/savage65 - ddd764be363c46f3e9b1a16151bd02d8f66b2dd4

* ChibiOS conf upgrade for cannonkeys/tmov2

 cannonkeys/tmov2 - 7af36cd2a42015838b77697624e90008ffa72778

* ChibiOS conf upgrade for cannonkeys/tsukuyomi

 cannonkeys/tsukuyomi - a120bea5dacb2cd6f143458cece46d2860ea196d

* ChibiOS conf upgrade for cheshire/curiosity

 cheshire/curiosity - 93d8fe3b7a8e028d4b015941ee71b50afe86bc8a

* ChibiOS conf upgrade for coarse/cordillera

 coarse/cordillera - 7d986d3f534786f302cbf74a5e6b7e51ffe60093

* ChibiOS conf upgrade for converter/siemens_tastatur

 converter/siemens_tastatur - 3f79f1467bbc56f284aceafd76ab5c6a1cbb68f4

* ChibiOS conf upgrade for cutie_club/borsdorf

 cutie_club/borsdorf - f8c6015b7aacfd5edef4f22f719eea30660005e7

* ChibiOS conf upgrade for dekunukem/duckypad

 dekunukem/duckypad - d9c162d0867d3925cca2e653a3a3870eac2d23d2

* ChibiOS conf upgrade for ebastler/isometria_75/rev1

 ebastler/isometria_75/rev1 - 2ecdd00b8c6cc794a7014747185b88374d5766c0

* ChibiOS conf upgrade for ergodox_infinity

 ergodox_infinity - 76736c701db22e890764481c25bd38badf32a1cf

* ChibiOS conf upgrade for ergodox_stm32

 ergodox_stm32 - a7bdb0b7822617ca0f9d316a082874ac0fef5964

* ChibiOS conf upgrade for function96

 function96 - 1b9e394a86dab24b85d160afe9281b5e7652afe2

* ChibiOS conf upgrade for geekboards/macropad_v2

 geekboards/macropad_v2 - de261e46a42cc7b7ff793e26200669f94b1dbb18

* ChibiOS conf upgrade for generic_panda/panda65_01

 generic_panda/panda65_01 - 592d2443033875e0309506aa8cb5212389054458

* ChibiOS conf upgrade for handwired/ck4x4

 handwired/ck4x4 - 9d7d4af7f2d787afd638e976334cd37c490040d7

* ChibiOS conf upgrade for handwired/onekey/blackpill_f401

 handwired/onekey/blackpill_f401 - c9257a30203b3a0e5aa18b35e07281fcd043ab5d

* ChibiOS conf upgrade for handwired/onekey/blackpill_f411

 handwired/onekey/blackpill_f411 - dfccc2c6b245cfb561faba60c9f3fc7af8c3db30

* ChibiOS conf upgrade for handwired/onekey/bluepill

 handwired/onekey/bluepill - 393f4b94e9a0fbc9cd00de1acde346ad72250b4a

* ChibiOS conf upgrade for handwired/onekey/stm32f0_disco

 handwired/onekey/stm32f0_disco - d827881f9bed09fd41c7c4e9d066e96b6643a099

* ChibiOS conf upgrade for handwired/onekey/teensy_32

 handwired/onekey/teensy_32 - dd90f6c823da80ba43afa41249a2bdbbab98b04c

* ChibiOS conf upgrade for handwired/onekey/teensy_lc

 handwired/onekey/teensy_lc - 34596f2eeb62403cce532d20cf893ebd77fe2d05

* ChibiOS conf upgrade for handwired/pill60/blackpill_f401

 handwired/pill60/blackpill_f401 - 20bbccb5058085076357f4fa956eede2c0af86e8

* ChibiOS conf upgrade for handwired/pill60/blackpill_f411

 handwired/pill60/blackpill_f411 - e03a4c3ec3b9ba65b8067126a039a8eb2cd10e51

* ChibiOS conf upgrade for handwired/pill60/bluepill

 handwired/pill60/bluepill - 2fb721fb4376cde2067eed1c0c8acbf3bf5851c3

* ChibiOS conf upgrade for handwired/riblee_f401

 handwired/riblee_f401 - 2823cd98d64c91b146dae343a32176d51772952b

* ChibiOS conf upgrade for handwired/riblee_f411

 handwired/riblee_f411 - 5cf7589c9a11c4ed14e7d28676ac836fbb07d013

* ChibiOS conf upgrade for handwired/sono1

 handwired/sono1 - d972acee03efb4917fc42f7d72c0a416b67ebd4a

* ChibiOS conf upgrade for handwired/t111

 handwired/t111 - f947c1d59025fe04e7d7b999d80e20277be4366c

* ChibiOS conf upgrade for handwired/twadlee/tp69

 handwired/twadlee/tp69 - 48ab62464ba1f2651f4468cbec7c6058e3b8c158

* ChibiOS conf upgrade for handwired/z150

 handwired/z150 - 35e85696845e965d7f2dcdb372ed20c17d42c2bb

* ChibiOS conf upgrade for hub20

 hub20 - f094036a182169b5a73f89f09f2ccaa3e5fc9e7e

* ChibiOS conf upgrade for iron180

 iron180 - 5efb6f21c848b3c964795d9debddceac7628933d

* ChibiOS conf upgrade for jm60

 jm60 - dbbdbe8b27b3c1d0a25981b2f75728d163d5d299

* ChibiOS conf upgrade for keebio/bdn9/rev2

 keebio/bdn9/rev2 - 0031632523dddfc8f7b3a02cf9c5990ebbb3856d

* ChibiOS conf upgrade for keebio/choconum

 keebio/choconum - 4484ef6936a497610ca5ae4d378bc07b2bc1b1c7

* ChibiOS conf upgrade for matrix/m20add

 matrix/m20add - 6068aeff5b14c26de8838180f4397800abe9f1aa

* ChibiOS conf upgrade for matrix/noah

 matrix/noah - fcde175fb1d3f5bf0716ac5a880c2cc9ab4bbf7f

* ChibiOS conf upgrade for misterknife/knife66

 misterknife/knife66 - e7f3ceffb94fb8e680da2af27fa7cb1a0a52b699

* ChibiOS conf upgrade for misterknife/knife66_iso

 misterknife/knife66_iso - ee027db939c098f908f70f02ffa9cc3952139f70

* ChibiOS conf upgrade for nebula12

 nebula12 - 2f3a25b6675dcd0fabe75e7bb63038d3cac19610

* ChibiOS conf upgrade for nemui

 nemui - 4030faa372512f766fd747876cb28176302453f9

* ChibiOS conf upgrade for nibiria/stream15

 nibiria/stream15 - fd7b09affa208403099ef9bff1b756fac0d4f918

* ChibiOS conf upgrade for nightingale_studios/hailey

 nightingale_studios/hailey - 496a44b2f789cc59a6110c7c1c41d57e59c722be

* ChibiOS conf upgrade for planck/rev6

 planck/rev6 - 6fb8f0bc21b4ab774ce3d339fdf6f25d96059f10

* ChibiOS conf upgrade for primekb/meridian

 primekb/meridian - 8021ed99e8bdf92faab806780186cc924dd59e50

* ChibiOS conf upgrade for projectkb/alice

 projectkb/alice - ad7678d475a14c54f28b62d1c1b15f5b4c4448bc

* ChibiOS conf upgrade for projectkb/signature87

 projectkb/signature87 - de61338b0a5c477f39c000df8117dd3017c2643d

* ChibiOS conf upgrade for ramonimbao/squishy65

 ramonimbao/squishy65 - 2ea1a8b18c39d0e193bbbf5836191874d3aafc53

* ChibiOS conf upgrade for ramonimbao/wete

 ramonimbao/wete - a80b3b309f06566adcdf20234d81c1d5aa599b00

* ChibiOS conf upgrade for rart/rartlice

 rart/rartlice - c8c80c302428d62bb8b08e3185509a233a94f5f0

* ChibiOS conf upgrade for retro_75

 retro_75 - 7434e266bba43ded8ca1ff75d77faa506473ca91

* ChibiOS conf upgrade for rocketboard_16

 rocketboard_16 - 1182a8730a84b58eba5a470286b6db6134d36f54

* ChibiOS conf upgrade for satt/vision

 satt/vision - c85a28a8d7e321511a17a7e7084d0a7876d1779a

* ChibiOS conf upgrade for technika

 technika - 7c59de348f0ec5f6ac9e260806a87aaf16fbafa2

* ChibiOS conf upgrade for tkc/godspeed75

 tkc/godspeed75 - e447b39dca393736fbf289049699d5b4748bb8c6

* ChibiOS conf upgrade for tkw/stoutgat/v2/f411

 tkw/stoutgat/v2/f411 - 58e9b909379ad107affbff0508e3923264b75426

* ChibiOS conf upgrade for viktus/styrka

 viktus/styrka - 36bf0921be79a8b037fdc25343584574a312be60

* ChibiOS conf upgrade for westfoxtrot/prophet

 westfoxtrot/prophet - 80036c8f986c8d3261d6b0748d2057eccab6430b

* ChibiOS conf upgrade for whitefox

 whitefox - c9eccac0196c3e2e2ea6c90d3036283a3eabff2c

* ChibiOS conf upgrade for wolfmarkclub/wm1

 wolfmarkclub/wm1 - 0d22a426255b829a7805bd6a3ff927198b1e31b4

* ChibiOS conf upgrade for xelus/kangaroo

 xelus/kangaroo - fdb1ffb66f4841f662e968929f058d4fd403c97e

* ChibiOS conf upgrade for xelus/trinityxttkl

 xelus/trinityxttkl - a9641e5b39b7bb38351b9109f0f381837b2e8e79

* ChibiOS conf upgrade for xelus/valor_frl_tkl

 xelus/valor_frl_tkl - 6c3b577852736a68727ec319c30712b3088e65cd

* ChibiOS conf upgrade for xiaomi/mk02

 xiaomi/mk02 - 4c1406ebfee73551a844ef7ab29fc5788d7e875c

* ChibiOS conf upgrade for zoo/wampus

 zoo/wampus - 930c903e85478e220a235f45593c03512c66bc2a

* ChibiOS conf upgrade for zvecr/split_blackpill

 zvecr/split_blackpill - c0e3e1583262e4cb0ebfe2efa6356ed6c5c957ca  
>ChibiOS conf migrations... take 9 (#11598)* ChibiOS conf upgrade for akegata_denki/device_one

 akegata_denki/device_one - 0d9f891416decbbb533c6c1147632ef7c55a2d9f

* ChibiOS conf upgrade for ergodox_stm32

 ergodox_stm32 - 72aeab1612ef73555a73dd60d005e671a90d7e2f

* ChibiOS conf upgrade for jm60

 jm60 - cc75e97727fadd939be4bdf7fa3714320465d3ef

* ChibiOS conf upgrade for matrix/m20add

 matrix/m20add - b0dee0b4e8c0a94d55fea51c8699972f15483209

* ChibiOS conf upgrade for matrix/noah

 matrix/noah - 57a1c09cd24716863ce862e0b9cbca2a9c6fcebf

* ChibiOS conf upgrade for nibiria/stream15

 nibiria/stream15 - 610b151b02f5cac681c65fbd3f94a12312f99b82

* ChibiOS conf upgrade for xiaomi/mk02

 xiaomi/mk02 - f92fcee777acc159c0af268e88b751fd1e33f74f  
>[Keyboard] Added rev2 & move rev1+rev2 to parent folder (#10973)* rev2 and move parent folder

Moved aplx6 to parent folder, renamed it to rev1 and added rev2

* Update keyboards/aplx/aplx6/rev1/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/aplx/aplx6/rev2/config.h

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/aplx/aplx6/rev2/rev2.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/aplx/aplx6/rev2/rules.mk

Co-authored-by: Drashna Jaelre <drashna@live.com>

* license

* Update keyboards/aplx/aplx6/rev2/keymaps/default/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/aplx/aplx6/rev2/keymaps/default/keymap.c

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Update keyboards/aplx/aplx6/rev2/keymaps/default/keymap.c

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/aplx/aplx6/rev2/keymaps/default/keymap.c

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/aplx/aplx6/rev2/rules.mk

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/aplx/aplx6/rev2/rules.mk

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* Update keyboards/aplx/aplx6/rev2/readme.md

Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>

* layer definition

* parent folder rename after suggestion

* build instructions

* update Hardware Availability links

Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: James Young <18669334+noroadsleft@users.noreply.github.com>  
>Disable subsystems repo-wide. (#11449)  
>Implement OpenRGB with a clean history  
>Add support for 8 buttons to mouse report (#10807)* Add support for 8 buttons to mouse report

This includes support for 8 buttons in mousekeys.  However, this does move the keys around due to the fact that the last mousekey keycode is already 0xFF, so any past that would not work with register_code and the like, breaking them for tap hold keys, encoders, and other features.

* Update mouse key docs

* Add changes based on feedback

* Fix VUSB report size comment

Because drashna red gud

* Fix typo in action.c

* Fix IS_MOUSE_BUTTON check

* Change start range for mousekeys so that the end is 0xFF properly

* condense mousekeys check  
>Improved Language Specific Keycodes for US International and Extended Layouts (#11307)Co-authored-by: Ryan <fauxpark@gmail.com>  
>Leftover early initialisation conversions (#11615)* jm60

* ergodox_stm32

* F042 bootloader jumps.

* xiaomi/mk02 custom bootloader, no early-init bootloader jump for F072.

* matrix/m20add, matrix/noah  
>ChibiOS enable memory allocations (#11620)  
>change LAYOUT_planck_grid to LAYOUT_ortho_4x12  
>Fix up build dependencies. (#11435)  
>Fix broken keyboards (#11412)* Fix a couple errors

* add a dependency for the generated headers  
>Adds AT90USB162 support (#11570)* at90usb162 support

* fix missing bracket

* Apply suggestions from code review

Co-authored-by: Ryan <fauxpark@gmail.com>

Co-authored-by: Ryan <fauxpark@gmail.com>  
>fix matrix_io_delay() timing in quantum/matrix.c (#9603)* fix matrix_io_delay() timing in quantum/matrix.c

* Updated comments explaining the need for matrix_io_delay() in quantum/matrix.c

* fix matrix_io_delay() timing in quantum/split_common/matrix.c

* Update quantum/matrix.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update quantum/split_common/matrix.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update quantum/matrix.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update quantum/split_common/matrix.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* add waitOutputPinValid() and wait_cpuclock() into quantum/quantum.h and tmk_core/common/wait.h

* add matrix_output_select_delay() and matrix_output_unselect_delay()

* fix quantum/matrix_common.c, tmk_core/common/matrix.h

* fix tmk_core/common/wait.h

* fix quantum/quantum.h, tmk_core/common/wait.h

* waitOutputPinValid() rename to waitInputPinDelay() in quantum/quantum.h.

* waitOutputPinValid() rename to waitInputPinDelay() in quantum/matrix_common.c

* update tmk_core/common/wait.h

* update comment in quantum/matrix.c, quantum/split_common/matrix.c

* update quantum/quantum.h: Make more margin in the GPIO_INPUT_PIN_DELAY default value.

Co-authored-by: Ryan <fauxpark@gmail.com>  
>Backport ChibiOS Audio changes from ZSA (#11687)  
>Merge remote-tracking branch 'origin/master' into develop  
>`qmk cformat`  
>Update common_features.mkCo-authored-by: Nick Brassel <nick@tzarc.org>  
>add missing _MACRO to users/brandonschlack/brandonschlack.h  
>Remove unused `action_get_macro()` usages in user files (#11165)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-12  
Contributor(s):  
Zach White  
fauxpark  
George Mao  
XScorpion2  
QMK Bot  
Aldehir Rojas  
Jesper Jensen  
Sendy Aditya Suryana  
Nick Brassel  
>clean up generate-api errors  
>Merge remote-tracking branch 'upstream/master' into develop  
>ChibiOS upgrade: keyboard conf migrations (phase 1) (#10418)* ChibiOS conf upgrade for acheron/arctic

 acheron/arctic - 8d3d233f15bf5d396e29abb94f943a89b0b828d1

* ChibiOS conf upgrade for acheron/austin

 acheron/austin - beabc6204533de80704684de9ff7790895f319e1

* ChibiOS conf upgrade for acheron/keebspcb

 acheron/keebspcb - e14a96e99aab54aefebc1d3d24d64b0082db7842

* ChibiOS conf upgrade for aeboards/ext65/rev2

 aeboards/ext65/rev2 - 0b97daef994903585be2768b6aaffc4da97ec617

* ChibiOS conf upgrade for ai03/vega

 ai03/vega - 7e5f208278309681fd1db8b2629890b813fdf938

* ChibiOS conf upgrade for at_at/660m

 at_at/660m - e30393b6546454f9939c1187aa9c6539f1ef76c1

* ChibiOS conf upgrade for bt66tech/bt66tech60

 bt66tech/bt66tech60 - a7f4e8a224132830447d12c92d146997f9b56b7d

* ChibiOS conf upgrade for cannonkeys/an_c

 cannonkeys/an_c - e7320dc09377fdad749e382b3986f2241633214b

* ChibiOS conf upgrade for cannonkeys/atlas

 cannonkeys/atlas - 063a8eaea7e68607b725ad06777c49d34686b433

* ChibiOS conf upgrade for cannonkeys/chimera65

 cannonkeys/chimera65 - 01ce66c862a5cd98183b10e992939a55038779bc

* ChibiOS conf upgrade for cannonkeys/db60

 cannonkeys/db60 - 45636d0b3cf951cef51a5b19678e2da549efd14f

* ChibiOS conf upgrade for cannonkeys/devastatingtkl

 cannonkeys/devastatingtkl - 709e0155c421991fad283d38c28f850320ed4730

* ChibiOS conf upgrade for cannonkeys/instant60

 cannonkeys/instant60 - 7e530e10794183d684a328f01b9b0743907440c7

* ChibiOS conf upgrade for cannonkeys/instant65

 cannonkeys/instant65 - c8de288708d0586337cb7137ae54d97e1ddc90a6

* ChibiOS conf upgrade for cannonkeys/iron165

 cannonkeys/iron165 - 3a3c0273e227fd15ab3527e4aa557b94d0b69248

* ChibiOS conf upgrade for cannonkeys/obliterated75

 cannonkeys/obliterated75 - cdf834802ae77b1bbd4876eb8c34c19a83ad95cd

* ChibiOS conf upgrade for cannonkeys/ortho48

 cannonkeys/ortho48 - 3432ff13c83a6358eca44b37f72b18882eeda699

* ChibiOS conf upgrade for cannonkeys/ortho60

 cannonkeys/ortho60 - 95be42a23798cc8f9b04175d4892b712d871a52d

* ChibiOS conf upgrade for cannonkeys/ortho75

 cannonkeys/ortho75 - e1149893fd01e853124808b45d521b61a7638eb9

* ChibiOS conf upgrade for cannonkeys/practice60

 cannonkeys/practice60 - 6e4da87f0a766cf2665e9b4aa8e3ab33017cf745

* ChibiOS conf upgrade for cannonkeys/practice65

 cannonkeys/practice65 - c436c06829123503073b3a9c5a1c0acfc2dbe2e5

* ChibiOS conf upgrade for cannonkeys/rekt1800

 cannonkeys/rekt1800 - 43e8e21b62531534afeaa241f4c683fbdb60a8e0

* ChibiOS conf upgrade for cannonkeys/satisfaction75

 cannonkeys/satisfaction75 - 28ff9a8a11ad1de9d09ec85fab2af906b7c27d6a

* ChibiOS conf upgrade for cannonkeys/savage65

 cannonkeys/savage65 - 53eaefae56020b536d4934686506d5d1fe51b6e0

* ChibiOS conf upgrade for cannonkeys/tmov2

 cannonkeys/tmov2 - 8b1ced8ff7dc368afa268104cd5192bb1bfc8a1c

* ChibiOS conf upgrade for chavdai40

 chavdai40/rev1 - b166af66b084077764b705c9428725cde0b0ce51
 chavdai40/rev2 - 0048c8ec8c28f1dfa5d1a37348524899595d8325

* ChibiOS conf upgrade for cheshire/curiosity

 cheshire/curiosity - f1636e53638ce2e798070e6e622fd88a08982d5a

* ChibiOS conf upgrade for clueboard/60

 clueboard/60 - bb5057d4a2976b6530fe2e345a4153de2f7c042d

* ChibiOS conf upgrade for clueboard/66_hotswap/gen1

 clueboard/66_hotswap/gen1 - 03fe10f4de7b67e5f1cf0a7d576f82676adf4261

* ChibiOS conf upgrade for clueboard/66/rev4

 clueboard/66/rev4 - 878e38a34f97b32d9d109a6d98f98bc385d84864

* ChibiOS conf upgrade for coarse/cordillera

 coarse/cordillera - 5cae5c643e96d03bddcbb73e76e225ea5f82fef3

* ChibiOS conf upgrade for converter/siemens_tastatur

 converter/siemens_tastatur - 48f82cd227836878967dfa0fe0411f7d877a124c

* ChibiOS conf upgrade for ergodox_infinity

 ergodox_infinity - 8df21d6129eef47d7a5ced92715e5bdbfb0151e5

* ChibiOS conf upgrade for function96

 function96 - deecdcdca34c88058f820f0e2bc9f112458c85c5

* ChibiOS conf upgrade for generic_panda/panda65_01

 generic_panda/panda65_01 - 8522d8107edcf71758f3be7298c0bc18fa7f6706

* ChibiOS conf upgrade for hadron/ver3

 hadron/ver3 - 632af7727b767720c699abdff770edc9682928ee

* ChibiOS conf upgrade for handwired/ck4x4

 handwired/ck4x4 - a4cb9b5b8c3a162083677b14b105edbc1bca2baf

* ChibiOS conf upgrade for handwired/co60/rev6

 handwired/co60/rev6 - be1688eeabd83a7f576d9e4e23e24d56b8dc251b

* ChibiOS conf upgrade for handwired/co60/rev7

 handwired/co60/rev7 - d196c5772859ddee695bda5b0e9f0944a0f350f8

* ChibiOS conf upgrade for handwired/onekey/blackpill_f401

 handwired/onekey/blackpill_f401 - 8387bfd56888fc1605d293dc0071b4ec94b23991

* ChibiOS conf upgrade for handwired/onekey/blackpill_f411

 handwired/onekey/blackpill_f411 - 855efdb2f60c384edf64773c0f4ff4b7ea8ae4c9

* ChibiOS conf upgrade for handwired/onekey/bluepill

 handwired/onekey/bluepill - 60d8555b174dbdabae196a4cc5eccfee4bdd9529

* ChibiOS conf upgrade for handwired/onekey/stm32f0_disco

 handwired/onekey/stm32f0_disco - 9bc12e29f5a4e4b9ec0f34987559e5e11de4bb48

* ChibiOS conf upgrade for handwired/onekey/teensy_32

 handwired/onekey/teensy_32 - 17459dd8e71b3a33270037878bdbd04151af196b

* ChibiOS conf upgrade for handwired/onekey/teensy_lc

 handwired/onekey/teensy_lc - 3a9aed4681c287176efe31c988340ca43ad27a9d

* ChibiOS conf upgrade for handwired/pill60/blackpill_f401

 handwired/pill60/blackpill_f401 - 5b652354ae957e86e211dcef29f8f27320b31180

* ChibiOS conf upgrade for handwired/pill60/blackpill_f411

 handwired/pill60/blackpill_f411 - 580255c171e95b5bca53b14a13ae018a73d18414

* ChibiOS conf upgrade for handwired/pill60/bluepill

 handwired/pill60/bluepill - 29109b54137ea94ac266c604991cff87516689ff

* ChibiOS conf upgrade for handwired/riblee_f401

 handwired/riblee_f401 - dc68c31d7ca8ae0fad7e7ad8bdd63406155ff363

* ChibiOS conf upgrade for handwired/riblee_f411

 handwired/riblee_f411 - cf0fadff4c98d41cf9bdddbe1ead15c79be941b9

* ChibiOS conf upgrade for handwired/steamvan/rev1

 handwired/steamvan/rev1 - 743b395ac87b918b6be4614c9e120e80a9f049d4

* ChibiOS conf upgrade for handwired/t111

 handwired/t111 - 99b61ae5692ee4b2101673d1a896cd7a5831bcfa

* ChibiOS conf upgrade for handwired/twadlee/tp69

 handwired/twadlee/tp69 - 3ab2753c40e947a726ece6c825493ebc87ecf20e

* ChibiOS conf upgrade for handwired/z150

 handwired/z150 - 78808b0c8671e2386b9ba65dbd647d613d92f253

* ChibiOS conf upgrade for hs60/v2

 hs60/v2/ansi - 7bcd152c269803de8f96416ba26e939c0420ceae
 hs60/v2/hhkb - d77f393d2811bd104b05c4530bf1083d75856b7a
 hs60/v2/iso - 5d3d20de919fca3b64cb7548cad46e8d35d7cc04

* ChibiOS conf upgrade for infinity60

 infinity60 - dbcbb2f58ee499252b0879d68d9beec08a8433bc

* ChibiOS conf upgrade for k_type

 k_type - 492f476177da95495442d1e173391e3c17324a70

* ChibiOS conf upgrade for keebio/bdn9/rev2

 keebio/bdn9/rev2 - 4dbb5d606b3d9060ad01a437978220fe0f1fc5b2

* ChibiOS conf upgrade for keebio/choconum

 keebio/choconum - 1521e634088a30114cd12b7b6bbd2cca5331c822

* ChibiOS conf upgrade for keebwerk/mega

 keebwerk/mega/ansi - 10e32718c7bfff2f6bd8dd2159a15bef0f4acbf9

* ChibiOS conf upgrade for misterknife/knife66

 misterknife/knife66 - cf2f3d26103036d79bf7fcec204e13899e33fbe3

* ChibiOS conf upgrade for nack

 nack - ba7f421d5670e672c5c14fd5f80c0f86447c1468

* ChibiOS conf upgrade for nebula12

 nebula12 - aedb11fa894dc19513462f054a9fa00f5c195adc

* ChibiOS conf upgrade for nebula68

 nebula68 - 6bed6afb2fd84ef9069b757f1d1e87fc1cbe290c

* ChibiOS conf upgrade for nemui

 nemui - 86ed80ea8565d7d0f39512a9032cc5e1b306fcff

* ChibiOS conf upgrade for nk65

 nk65 - 75b2484741a96dcbff14e94c44443bb33ad73dce

* ChibiOS conf upgrade for nk87

 nk87 - f719a739a3d2c0969c79c1ace5fe9a7d6f05cc22

* ChibiOS conf upgrade for peiorisboards/ixora

 peiorisboards/ixora - b5adf1090fb4c6278d8990ce9132727a13ca3cd7

* ChibiOS conf upgrade for phoenix

 phoenix - 21bfb14c52451899dadf545b78a8e88b22a420f0

* ChibiOS conf upgrade for polilla

 polilla - 3ba5f326b268362c9aba570b1510e1c61009ba96

* ChibiOS conf upgrade for primekb/meridian

 primekb/meridian - df266e25c682a8ed3318faa186805683014ccec4

* ChibiOS conf upgrade for projectkb/alice

 projectkb/alice - eee7210f618588b2c5c6367c8a0318427d09da52

* ChibiOS conf upgrade for projectkb/signature87

 projectkb/signature87 - 617430e601981f0bb5fbcce42eee53107d5161b8

* ChibiOS conf upgrade for ramonimbao/squishy65

 ramonimbao/squishy65 - 88e4cd3db8db61ccf9daed5405cf5eeb32f8043e

* ChibiOS conf upgrade for ramonimbao/wete

 ramonimbao/wete - f0e90d943d8749e802b6bba619ce943b568a7f65

* ChibiOS conf upgrade for rart/rartlice

 rart/rartlice - f7a6b58e6cadd4102fcf5f89d054d1fbdc5809d0

* ChibiOS conf upgrade for retro_75

 retro_75 - 34c7b291fb2443bf8cb69fb9ee676190c736bf00

* ChibiOS conf upgrade for rocketboard_16

 rocketboard_16 - 24e6503a7a5259934a80dd96dd37d3281b4240d3

* ChibiOS conf upgrade for satt/vision

 satt/vision - c926d6433d8b2dc1d74623184255016bdd36ae22

* ChibiOS conf upgrade for tkc/candybar

 tkc/candybar/lefty - 2f269cbed5dcec61bb0c7904a46436f110dc0ae1
 tkc/candybar/righty - 9b1448b2ccbcf8a4d1e5ad74d8ad5933003ee9a2

* ChibiOS conf upgrade for tkc/godspeed75

 tkc/godspeed75 - 2cfed58d44a7eef8f341ff24e0136511e03aa78d

* ChibiOS conf upgrade for tkw/stoutgat/v2/f411

 tkw/stoutgat/v2/f411 - b094651ec61c79099de3e6e4991319816ac464c1

* ChibiOS conf upgrade for viktus/styrka

 viktus/styrka - f3f678ea55126c9965f24da6fffc9bbbd8b24aa9

* ChibiOS conf upgrade for vinta

 vinta - e5403dc6bbf47f35a53cf43b1b1d130f05552f16

* ChibiOS conf upgrade for westfoxtrot/prophet

 westfoxtrot/prophet - 0e4d6987ffa6430720804e7bc1502ab6c3dcb879

* ChibiOS conf upgrade for whitefox

 whitefox - 5ca6de6fb09d8c2cfa996b65732fcd55391053ff

* ChibiOS conf upgrade for wolfmarkclub/wm1

 wolfmarkclub/wm1 - 2d8294e29b08f5af5406988a284483d1694ed36c

* ChibiOS conf upgrade for xelus/kangaroo

 xelus/kangaroo - f9697ba27d4e6c36a1cfd9e2657eac35dfa3be99

* ChibiOS conf upgrade for xelus/trinityxttkl

 xelus/trinityxttkl - a457601b446ea9b4e9e28d2ba304a4bcdb934257

* ChibiOS conf upgrade for xelus/valor_frl_tkl

 xelus/valor_frl_tkl - 27ec14b9ee0e5cb2d026af500d16b17d4c2885e2

* ChibiOS conf upgrade for zoo/wampus

 zoo/wampus - 926487c1f50c1c5eb0608ca7dc1184881d54d35e

* ChibiOS conf upgrade for zvecr/split_blackpill

 zvecr/split_blackpill - 02f4393d01e0a70c94af48fa979ff0229732e8ca

* ChibiOS conf upgrade for zvecr/zv48/f401

 zvecr/zv48/f401 - 8b1766a24f943b9b0ba756c6fe340ba69d5e14e3

* ChibiOS conf upgrade for zvecr/zv48/f411

 zvecr/zv48/f411 - 09ba645092eb7f3d41da0d5e6727f2f4f97033c0  
>Rewrite APA102 support (#10894)* Rewrite APA102 support

The APA102 source was broken by commit 16a15c1cfcbfd0feb2c2cf1383676747e2f97d73 as it did not include the
quantum header. This commit addresses that, as well as other issues with
transferring bytes over the SPI interface, i.e. it was not setting the
clock pin back to low after sending a bit.

The deviation when sending the end frame is kept, but updated to the
latest from the referenced project.

Finally, these changes expose the global LED brightness parameter
of the APA102. Brightness values are configurable through
`APA102_DEFAULT_BRIGHTNESS` and `APA102_MAX_BRIGHTNESS`.

* Fix typo in led brightness extern

* Move driver out of AVR directory and add delay for ARM

* Experimental APA102 support on AVR and ARM

Co-authored-by: Alde Rojas <hello@alde.io>

* Refactor apa102_send_byte() calls to a loop

* Implement io_wait function for ARM

* Move APA102 drivers to own directory, fix copyright notice

* Add APA102 keymap to handwired/onekey

* Simplify RGBLIGHT_ENABLE/DRIVER option handling

Co-authored-by: Mikkel Jeppesen <2756925+Duckle29@users.noreply.github.com>  
>gcc 10 compatibility for Drop alt (#9485)* Split dmac_desc declaration and definition

According to the official documentation[1] gcc 10 is more strict about
correct extern usage.

I've had to move the definition of dmac_desc and dmac_desc_wb from
i2c_master.h to the corresponding .c file. This could be an issue if
anyone includes the i2c_master.h file without liking with the object
file.

[1]: https://gcc.gnu.org/gcc-10/porting_to.html

* Remove the keymap_config definition from keymaps

The keymap_config def was conflicting with the one found in
tmk_core/common/magic.c. Declaring it extern in magic.c breaks a bunch
of keyboard that rely on that declaration (like the ergodox). Instead
I've removed the one found in the keymap.c of the massdrop alt.

The same change will have to be made to other keyboards.  
>Configure keyboard matrix from info.json (#10817)* Make parameters from info.json available to the build system

* move all clueboard settings to info.json

* code formatting

* make flake8 happy

* make flake8 happy

* make qmk lint happy

* Add support for specifying led indicators in json

* move led indicators to the clueboard info.json

* Apply suggestions from code review

Co-authored-by: Erovia <Erovia@users.noreply.github.com>

* add missing docstring

Co-authored-by: Erovia <Erovia@users.noreply.github.com>  
>ChibiOS conf migration: dekunukem/duckypad (#11123)  
>[Keyboard] Add Pix (#11154)* Add nakal4x keyboard firmware

* Fix VIA config

* Setup OLED

* Rename to pix

* Rename via.json to info.json

* Update keyboards/sendyyeah/pix/config.h

remove obsolete value as suggested by drashna

Co-authored-by: Drashna Jaelre <drashna@live.com>

* Add GPL Like license header

* Remove unused bootloader list

* Change URL

* Update readme

* Delete via info.json

* Add GPL2+ license header on via keymap

* Update keyboards/sendyyeah/pix/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/sendyyeah/pix/keymaps/default/glcdfont.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Add GPL2+ license header on via keymap

* Add image

* Remove local drivers

* Remove unused method on keymap files

* Change project name on keymap readme files

* Update keyboards/sendyyeah/pix/rules.mk

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/sendyyeah/pix/readme.md

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/sendyyeah/pix/keymaps/default/glcdfont.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/sendyyeah/pix/keymaps/default/keymap.c

Co-authored-by: Ryan <fauxpark@gmail.com>

* Update keyboards/sendyyeah/pix/keymaps/via/keymap.c

Co-authored-by: Sendy Aditya Suryana <sendy.suryana@go-jek.com>
Co-authored-by: Drashna Jaelre <drashna@live.com>
Co-authored-by: Ryan <fauxpark@gmail.com>  
>[Keyboard] Refactor Jacky's boards (Bear65 and S7 Elephant) (#10528)  
>[Split] Sync Timer feature (#10997)A timer that is kept in sync between the halves of a split keyboard  
>Merge remote-tracking branch 'origin/master' into develop  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-11  
Contributor(s):  
Adam Honse  
James Young  
>Sonix SN32 series support (SN32F248, SN32F260)Squashes commits by:smp4488 <smp4488@aol.com>Ilya Zhuravlev <whatever@xyz.is>Adam Honse <calcprogrammer1@gmail.com>  
>Branch point for 2021 Feb 27 Breaking Change  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 


2020-07  
Contributor(s):  
Adam Honse  
>[Keyboard] Redragon K556 Devarajas (Sonix SN32F248B)  
- - - - - - - - - - - - - - - - - - - - - - - - - - - 

