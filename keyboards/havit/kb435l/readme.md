# Havit KB435L TKL ISO

_Havit KB435L TKL ISO_, but rainbow LEDs not supported here.

* Keyboard Maintainer: [humanplayer2](https://github.com/humanplayer2)

**This is an SN32F268 board, so it requires jumploader**
The generic Sonix bootloader works, but does not support entering the bootloader by presing a key while pluging in. [This pull request](https://github.com/SonixQMK/sonix-keyboard-bootloader/pull/28) provides a jumploader for the board specifically. With it installed, the bootloader may be entered by holding _Escape_ while pluging in the board.

To compile: `qmk compile -kb havit/kb435l/ -km default`

TODO:
- add ANSI support
- add LED support
- add CapsLock indicator LED support

* * *
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
