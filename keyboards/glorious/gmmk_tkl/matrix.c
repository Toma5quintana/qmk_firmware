/*
Copyright 2011 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Ported to QMK by Stephen Peery <https://github.com/smp4488/>
*/

#include <stdint.h>
#include <stdbool.h>
#include <SN32F260.h>
#include "ch.h"
#include "hal.h"
#include "CT16.h"

#include "wait.h"
#include "util.h"
#include "matrix.h"
#include "debounce.h"
#include "quantum.h"

static const pin_t row_pins[MATRIX_ROWS] = MATRIX_ROW_PINS;
static const pin_t col_pins[MATRIX_COLS] = MATRIX_COL_PINS;

matrix_row_t raw_matrix[MATRIX_ROWS]; //raw values
matrix_row_t matrix[MATRIX_ROWS]; //debounced values

static bool matrix_changed = false;

__attribute__((weak)) void matrix_init_kb(void) { matrix_init_user(); }

__attribute__((weak)) void matrix_scan_kb(void) { matrix_scan_user(); }

__attribute__((weak)) void matrix_init_user(void) {}

__attribute__((weak)) void matrix_scan_user(void) {}

inline matrix_row_t matrix_get_row(uint8_t row) { return matrix[row]; }

void matrix_print(void) {}

static void init_pins(void) {

    //  Unselect ROWs
    for (uint8_t x = 0; x < MATRIX_ROWS; x++) {
        setPinInputHigh(row_pins[x]);
    }

    // Unselect COLs
    for (uint8_t x = 0; x < MATRIX_COLS; x++) {
        setPinInputHigh(col_pins[x]);
    }
}

static void reset_pwm(void) {
    // setup pwm 0-12 and 16 for column pins
    SN_CT16B1->PWMCTRL  =  (mskCT16_PWM0MODE_1 \
                           |mskCT16_PWM1MODE_1 \
                           |mskCT16_PWM2MODE_1 \
                           |mskCT16_PWM3MODE_1 \
                           |mskCT16_PWM4MODE_1 \
                           |mskCT16_PWM5MODE_1 \
                           |mskCT16_PWM6MODE_1 \
                           |mskCT16_PWM7MODE_1 \
                           |mskCT16_PWM8MODE_1 \
                           |mskCT16_PWM9MODE_1 \
                           |mskCT16_PWM10MODE_1 \
                           |mskCT16_PWM11MODE_1 \
                           |mskCT16_PWM12MODE_1);
    SN_CT16B1->PWMCTRL2 =  mskCT16_PWM16MODE_1;

    SN_CT16B1->PWMENB   =   (mskCT16_PWM0EN_EN  \
                            |mskCT16_PWM1EN_EN  \
                            |mskCT16_PWM2EN_EN  \
                            |mskCT16_PWM3EN_EN  \
                            |mskCT16_PWM4EN_EN  \
                            |mskCT16_PWM5EN_EN  \
                            |mskCT16_PWM6EN_EN  \
                            |mskCT16_PWM7EN_EN  \
                            |mskCT16_PWM8EN_EN  \
                            |mskCT16_PWM9EN_EN  \
                            |mskCT16_PWM10EN_EN \
                            |mskCT16_PWM11EN_EN \
                            |mskCT16_PWM12EN_EN \
                            |mskCT16_PWM16EN_EN);

    SN_CT16B1->PWMIOENB =   (mskCT16_PWM0EN_EN  \
                            |mskCT16_PWM1EN_EN  \
                            |mskCT16_PWM2EN_EN  \
                            |mskCT16_PWM3EN_EN  \
                            |mskCT16_PWM4EN_EN  \
                            |mskCT16_PWM5EN_EN  \
                            |mskCT16_PWM6EN_EN  \
                            |mskCT16_PWM7EN_EN  \
                            |mskCT16_PWM8EN_EN  \
                            |mskCT16_PWM9EN_EN  \
                            |mskCT16_PWM10EN_EN \
                            |mskCT16_PWM11EN_EN \
                            |mskCT16_PWM12EN_EN \
                            |mskCT16_PWM16EN_EN);
}

void matrix_init(void) {
    // initialize key pins
    init_pins();

    // initialize matrix state: all keys off
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        raw_matrix[i] = 0;
        matrix[i]     = 0;
    }

    debounce_init(MATRIX_ROWS);

    matrix_init_quantum();

    // Enable Timer Clock
    SN_SYS1->AHBCLKEN_b.CT16B1CLKEN = 1;

    // Set prescale value
    // TC increases every microsecond
    SN_CT16B1->PRE = 47;

    // Set match interrupts and TC rest
    SN_CT16B1->MCTRL3 = (mskCT16_MR23IE_EN);
    SN_CT16B1->MCTRL3_b.MR23RST = 1;
    SN_CT16B1->MCTRL3_b.MR23STOP = 1;

    // COL match register
    // interrupt runs at about 3.9 kHz
    SN_CT16B1->MR23 = 0xFF;

    //Set CT16B1 as the up-counting mode.
	SN_CT16B1->TMRCTRL = (mskCT16_CRST);

    // Wait until timer reset done.
    while (SN_CT16B1->TMRCTRL & mskCT16_CRST);

    // Let TC start counting.
    SN_CT16B1->TMRCTRL |= mskCT16_CEN_EN;

    reset_pwm();

    NVIC_ClearPendingIRQ(CT16B1_IRQn);
    nvicEnableVector(CT16B1_IRQn, 4);
}

uint8_t matrix_scan(void) {

    matrix_scan_quantum();

    __disable_irq();
    bool change = matrix_changed;
    matrix_changed = false;
    __enable_irq();
    return change;
}

void scan_row(uint8_t current_row) {
    matrix_row_t current_row_value = 0;
    // Select row
    setPinOutput(row_pins[current_row]);
    writePinLow(row_pins[current_row]);

    // Scan columns
    for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
        current_row_value |= readPin(col_pins[col_index]) ? 0 : (MATRIX_ROW_SHIFTER << col_index);
    }

    // Unselect row
    setPinInputHigh(row_pins[current_row]);

    if (raw_matrix[current_row] != current_row_value) {
        raw_matrix[current_row] = current_row_value;
        matrix_changed = true;
    }
}

/**
 * @brief   CT16B1 interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(Vector84) {

    static uint8_t current_row = 0;
    static uint32_t scan_counter = 0;

    OSAL_IRQ_PROLOGUE();

    scan_counter = (scan_counter+1) % 9;


    if (scan_counter == 0) {
        // Disable PWM outputs on column pins
        SN_CT16B1->PWMIOENB = 0;

        // set columns input
        for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
            setPinInputHigh(col_pins[col_index]);
        }

        scan_row(current_row);

        // set comlumns output
        for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
            setPinOutput(col_pins[col_index]);
        }
        reset_pwm();
        debounce(raw_matrix, matrix, MATRIX_ROWS, matrix_changed);
    }

    current_row = (current_row + 1) % MATRIX_ROWS;


    // reset and enable timer
    SN_CT16B1->TC = 0;
    SN_CT16B1->TMRCTRL = CT16_CEN_EN;
    SN_CT16B1->IC = mskCT16_MR23IC; // Clear match interrupt status

    OSAL_IRQ_EPILOGUE();
}
