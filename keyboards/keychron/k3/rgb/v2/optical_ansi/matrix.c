
#include "matrix.h"
#include "quantum.h"
//#include <stdint.h>

/*#include <stdint.h>
#include <stdbool.h>
#include "ch.h"
#include "hal.h"

#include "wait.h"
#include "util.h"
#include "matrix.h"
#include "debounce.h"
#include "quantum.h"
//#include "rgb_matrix_sn32f24xx.h"

#if defined(OPTICAL_MATRIX)
#ifndef PRESSED_KEY_PIN_STATE
#    define PRESSED_KEY_PIN_STATE 1
#endif
#ifndef MATRIX_KEY_SAMPLE_DELAY
#    define MATRIX_KEY_SAMPLE_DELAY 2000
#endif
#endif

#ifndef PRESSED_KEY_PIN_STATE
#    define PRESSED_KEY_PIN_STATE 0
#endif

#ifndef MATRIX_KEY_SAMPLE_DELAY
#    define MATRIX_KEY_SAMPLE_DELAY 100
#endif

#if defined(MATRIX_KEY_SAMPLE_DELAY)
void sample_delay(void){
    //should give 2000/48000000Mhz = 42us delay
    //we want 42 micro thus to get value
    for (int i = 0; i < MATRIX_KEY_SAMPLE_DELAY; ++i) {
        __asm__ volatile("" ::: "memory");
    }
    //wait_us(73); //does not work
}
#endif

static const pin_t row_pins[MATRIX_ROWS] = MATRIX_ROW_PINS;
static const pin_t col_pins[MATRIX_COLS] = MATRIX_COL_PINS;
matrix_row_t raw_matrix[MATRIX_ROWS]; //raw values
matrix_row_t last_matrix[MATRIX_ROWS] = {0};  // raw values
matrix_row_t matrix[MATRIX_ROWS]; //debounced values

static bool matrix_changed = false;

 matrix_init_kb(void) { matrix_init_user(); }

 matrix_scan_kb(void) { matrix_scan_user(); }

 matrix_init_user(void) {}

 matrix_scan_user(void) {}

inline matrix_row_t matrix_get_row(uint8_t row) { return matrix[row]; }

void matrix_print(void) {}

static void init_pins(void) {
#if(DIODE_DIRECTION == ROW2COL)
    //  Unselect ROWs
    for (uint8_t x = 0; x < MATRIX_ROWS; x++) {
        setPinInputHigh(row_pins[x]);
    }
#elif(DIODE_DIRECTION == COL2ROW)
    // Unselect COLs
    for (uint8_t x = 0; x < MATRIX_COLS; x++) {
        setPinInputHigh(col_pins[x]);
    }
#else
#error DIODE_DIRECTION must be one of COL2ROW or ROW2COL!
#endif
}

void matrix_scan_select(uint8_t current){
#if(DIODE_DIRECTION == ROW2COL)
    // Select COL
    setPinOutput(col_pins[current]);
    writePinLow(col_pins[current]);
#elif(DIODE_DIRECTION == COL2ROW)
    // Select ROW
    setPinOutput(row_pins[current]);
    writePinLow(row_pins[current]);
#endif
}

void matrix_scan_unselect(uint8_t current) {
#if(DIODE_DIRECTION == ROW2COL)
    // Select COL
    setPinInputHigh(col_pins[current]);
#elif(DIODE_DIRECTION == COL2ROW)
    // Select ROW
    setPinInputHigh(row_pins[current]);
#endif
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
}

uint8_t matrix_scan(void) {
    matrix_changed = false;
    for (uint8_t current_col = 0; current_col < MATRIX_COLS; current_col++) {
        for (uint8_t row_index = 0; row_index < MATRIX_ROWS; row_index++) {
            // Determine if the matrix changed state
            if ((last_matrix[row_index] != raw_matrix[row_index])) {
                matrix_changed         = true;
                last_matrix[row_index] = raw_matrix[row_index];
            }
        }
    }

    debounce(raw_matrix, matrix, MATRIX_ROWS, matrix_changed);

    matrix_scan_quantum();

    return matrix_changed;
}

void matrix_scan_keys(matrix_row_t raw_matrix[], uint8_t current){
        #if(DIODE_DIRECTION == ROW2COL)
            // Read the key matrix rows on col
            uint8_t col_index = current;
            // Enable the column
            matrix_scan_select(col_index);
            sample_delay();
            for (uint8_t row_index = 0; row_index < MATRIX_ROWS; row_index++) {
                // Check row pin state
                if (readPin(row_pins[row_index]) == PRESSED_KEY_PIN_STATE) {
                    // Pin LO, set col bit
                    raw_matrix[row_index] |= (MATRIX_ROW_SHIFTER << col_index);
                } else {
                    // Pin HI, clear col bit
                    raw_matrix[row_index] &= ~(MATRIX_ROW_SHIFTER << col_index);
                }
            }
            // Disable the column
            matrix_scan_unselect(col_index);
            //see https://github.com/SonixQMK/qmk_firmware/issues/157
            sample_delay();
        #elif(DIODE_DIRECTION == COL2ROW)
            // Read the key matrix cols on row
            uint8_t row_index = current;
            // Enable the row
            matrix_scan_select(row_index);
            sample_delay();
            for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
                // Check row pin state
                if (readPin(col_pins[col_index]) == PRESSED_KEY_PIN_STATE) {
                    // Pin LO, set col bit
                    raw_matrix[row_index] |= (MATRIX_ROW_SHIFTER << col_index);
                } else {
                    // Pin HI, clear col bit
                    raw_matrix[row_index] &= ~(MATRIX_ROW_SHIFTER << col_index);
                }
            }
            // Disable the row
            matrix_scan_unselect(row_index);
            //see https://github.com/SonixQMK/qmk_firmware/issues/157
            sample_delay();
        #endif
}
*/


/* matrix_read_rows_on_col(matrix_row_t current_matrix[], uint8_t current_col, matrix_row_t row_shifter) {
    bool key_pressed = false;

    // Select col
    if (!select_col(current_col)) { // select col
        return;                     // skip NO_PIN col
    }
    custom_matrix_output_select_delay();

    // For each row...
    for (uint8_t row_index = 0; row_index < ROWS_PER_HAND; row_index++) {
        // Check row pin state
        if (readMatrixPin(row_pins[row_index]) == 0) {
            // Pin LO, set col bit
            current_matrix[row_index] |= row_shifter;
            key_pressed = true;
        } else {
            // Pin HI, clear col bit
            current_matrix[row_index] &= ~row_shifter;
        }
    }

    // Unselect col
    unselect_col(current_col);
    custom_matrix_output_unselect_delay(current_col, key_pressed); // wait for all Row signals to go HIGH
}

*/
#ifdef SPLIT_KEYBOARD
#    include "split_common/split_util.h"
#    include "split_common/transactions.h"

#    define ROWS_PER_HAND (MATRIX_ROWS / 2)
#else
#    define ROWS_PER_HAND (MATRIX_ROWS)
#endif

#ifdef DIRECT_PINS_RIGHT
#    define SPLIT_MUTABLE
#else
#    define SPLIT_MUTABLE const
#endif
#ifdef MATRIX_ROW_PINS_RIGHT
#    define SPLIT_MUTABLE_ROW
#else
#    define SPLIT_MUTABLE_ROW const
#endif
#ifdef MATRIX_COL_PINS_RIGHT
#    define SPLIT_MUTABLE_COL
#else
#    define SPLIT_MUTABLE_COL const
#endif

#ifndef MATRIX_INPUT_PRESSED_STATE
#    define MATRIX_INPUT_PRESSED_STATE 0
#endif

#ifdef DIRECT_PINS
static SPLIT_MUTABLE pin_t direct_pins[ROWS_PER_HAND][MATRIX_COLS] = DIRECT_PINS;
#elif (DIODE_DIRECTION == ROW2COL) || (DIODE_DIRECTION == COL2ROW)
#    ifdef MATRIX_ROW_PINS
static SPLIT_MUTABLE_ROW pin_t row_pins[ROWS_PER_HAND] = MATRIX_ROW_PINS;
#    endif // MATRIX_ROW_PINS
#    ifdef MATRIX_COL_PINS
static SPLIT_MUTABLE_COL pin_t col_pins[MATRIX_COLS]   = MATRIX_COL_PINS;
#    endif // MATRIX_COL_PINS
#endif


static inline void setPinOutput_writeLow(pin_t pin) {
    ATOMIC_BLOCK_FORCEON {
        setPinOutput(pin);
        writePinLow(pin);
    }
}

static inline void setPinOutput_writeHigh(pin_t pin) {
    ATOMIC_BLOCK_FORCEON {
        setPinOutput(pin);
        writePinHigh(pin);
    }
}

static inline void setPinInputHigh_atomic(pin_t pin) {
    ATOMIC_BLOCK_FORCEON {
        setPinInputHigh(pin);
    }
}

static inline uint8_t readMatrixPin(pin_t pin) {
    if (pin != NO_PIN) {
        return (readPin(pin) == MATRIX_INPUT_PRESSED_STATE) ? 0 : 1;
    } else {
        return 1;
    }
}

//





static bool select_col(uint8_t col) {
    pin_t pin = col_pins[col];
    if (pin != NO_PIN) {
        setPinOutput_writeLow(pin);
        return true;
    }
    return false;
}

static void unselect_col(uint8_t col) {
    pin_t pin = col_pins[col];
    if (pin != NO_PIN) {
#            ifdef MATRIX_UNSELECT_DRIVE_HIGH
        setPinOutput_writeHigh(pin);
#            else
        setPinInputHigh_atomic(pin);
#            endif
    }
}




/* `matrix_io_delay ()` exists for backwards compatibility. From now on, use custom_matrix_output_unselect_delay(). */
void custom_matrix_io_delay(void) {
    for (int i = 0; i < MATRIX_IO_DELAY; ++i) {
        __asm__ volatile("" ::: "memory");
    }
}


/* `matrix_io_delay ()` exists for backwards compatibility. From now on, use custom_matrix_output_unselect_delay(). */
void custom_matrix_output_select_delay(void) {
    //wait_us(MATRIX_IO_DELAY);
    //should give 2000/48000000Mhz = 42us delay
    //we want 42 micro thus to get value
    for (int i = 0; i < MATRIX_IO_DELAY; ++i) {
        __asm__ volatile("" ::: "memory");
    }
    //wait_us(73); //does not work
}
/* custom_matrix_output_select_delay(void) {
    waitInputPinDelay();
}*/
void custom_matrix_output_unselect_delay(uint8_t line, bool key_pressed) {
        for (int i = 0; i < MATRIX_IO_DELAY; ++i) {
        __asm__ volatile("" ::: "memory");
    }
}



// quantum/matrix.c


static bool select_row(uint8_t row) {
    pin_t pin = row_pins[row];
    if (pin != NO_PIN) {
        setPinOutput_writeLow(pin);
        return true;
    }
    return false;
}

static void unselect_row(uint8_t row) {
    pin_t pin = row_pins[row];
    if (pin != NO_PIN) {
#            ifdef MATRIX_UNSELECT_DRIVE_HIGH
        setPinOutput_writeHigh(pin);
#            else
        setPinInputHigh_atomic(pin);
#            endif
    }
}







// cols_on_row

void matrix_read_cols_on_row(matrix_row_t current_matrix[], uint8_t current_row) {
    // Start with a clear matrix row
    matrix_row_t current_row_value = 0;

    if (!select_row(current_row)) { // Select row
        return;                     // skip NO_PIN row
    }
    //custom_matrix_output_select_delay();

        if (current_row < 10) {
        custom_matrix_output_select_delay();
    } else {
        for (int8_t cycle = 4; cycle > 0; cycle--) {
            custom_matrix_output_select_delay(); // 0.25us
            custom_matrix_output_select_delay();
            custom_matrix_output_select_delay();
            custom_matrix_output_select_delay();
        }
    }

    // For each col...
    matrix_row_t row_shifter = MATRIX_ROW_SHIFTER;
    for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++, row_shifter <<= 1) {
        uint8_t pin_state = readMatrixPin(col_pins[col_index]);

        // Populate the matrix row with the state of the col pin
        current_row_value |= pin_state ? 0 : row_shifter;
    }
                custom_matrix_output_select_delay();
    // Unselect row
    unselect_row(current_row);
    custom_matrix_output_unselect_delay(current_row, current_row_value != 0); // wait for all Col signals to go HIGH

    // Update the matrix
    current_matrix[current_row] = current_row_value;
}

// rows_on_col


void matrix_read_rows_on_col(matrix_row_t current_matrix[], uint8_t current_col, matrix_row_t row_shifter) {
   bool key_pressed = false;

    // Select col
    if (!select_col(current_col)) { // select col
        return;                     // skip NO_PIN col
    }

    if (current_col < 10) {
        custom_matrix_output_select_delay();
    } else {
        for (int8_t cycle = 4; cycle > 0; cycle--) {
            custom_matrix_output_select_delay(); // 0.25us
            custom_matrix_output_select_delay();
            custom_matrix_output_select_delay();
            custom_matrix_output_select_delay();
        }
    }

    // For each row...
    for (uint8_t row_index = 0; row_index < ROWS_PER_HAND; row_index++) {
        // Check row pin state
        if (readMatrixPin(row_pins[row_index]) == 0) {
            // Pin LO, set col bit
            current_matrix[row_index] |= row_shifter;
            key_pressed = true;
        } else {
            // Pin HI, clear col bit
            current_matrix[row_index] &= ~row_shifter;
        }

    }
                custom_matrix_output_select_delay();
    // // Unselect col
    unselect_col(current_col);
    custom_matrix_output_unselect_delay(current_col, key_pressed); // wait for all Row signals to go HIGH
}
