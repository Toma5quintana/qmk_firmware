# periboard428

![periboard428](https://perixx.com/cdn/shop/products/PB-428US-11543-01.png?v=1614947897&width=900)

65% gaming keyboard from Perixx. This is unofficial support for QMK.

* Keyboard Maintainer: [karliss](https://github.com/karliss)
* Hardware Supported: PERIBOARD-428 
* Hardware Availability: [Perixx official website](https://perixx.com/products/mechanical-usb-gaming-65-keyboard-customizable-rgb-backlit-n-key-rollover-anti-ghosting)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb perixx/periboard428 -km default

Flashing must be done using external tool - [SonixFlasher](https://github.com/SonixQMK/SonixFlasherC).
Flashing example without jump loader (note using ROM bootloader vid/pid not the vid/pid of keyboard firmware):

    sonixflasher --vidpid 0c45/7040 --file fw.bin 

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold Del while plugging in USB.
* **Physical reset pad**: Short the BOOT pin to ground and plug in the keyboard.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available. In the default keymap Fn+Del.
