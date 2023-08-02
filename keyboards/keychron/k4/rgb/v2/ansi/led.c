// Copyright 2023 PythonDeployer (@PythonDeployer)
// SPDX-License-Identifier: GPL-2.0-or-later


#include "quantum.h"
#ifndef RGB_MATRIX_ENABLE
void matrix_output_unselect_delay(uint8_t line, bool key_pressed) {
    for (int i = 0; i < TIME_US2I(MATRIX_IO_DELAY); ++i) {
        __asm__ volatile("" ::: "memory");
    }
}
#endif
