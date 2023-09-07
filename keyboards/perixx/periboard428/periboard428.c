// Copyright 2023 karliss (@karliss)
// SPDX-License-Identifier: GPL-2.0-or-laters

#include "quantum.h"

#if defined(BOOTMAGIC_LITE) && defined(RGB_MATRIX_ENABLE)
void bootmagic_lite(void) {
    /* Shared input/RGB matrix isn't fully running at this point.
    And even when it's running it runs at own pace and scan_matrix only
    copies buffered values, that is not suitable for early bootmagic check.
     */
    const pin_t row_pins[MATRIX_ROWS] = MATRIX_ROW_PINS;
    const pin_t col_pins[MATRIX_COLS] = MATRIX_COL_PINS;
    writePinLow(col_pins[BOOTMAGIC_LITE_COLUMN]);
    wait_ms(1);
    if (readPin(row_pins[BOOTMAGIC_LITE_ROW]) == 0) {
        bootloader_jump();
    }
    writePinHigh(col_pins[BOOTMAGIC_LITE_COLUMN]);
}
#endif
