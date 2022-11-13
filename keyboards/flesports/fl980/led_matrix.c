#include "rgb_matrix.h"
#include <hal.h>

#if !defined(RGB_MATRIX_HUE_STEP)
#    define RGB_MATRIX_HUE_STEP 8
#endif

#if !defined(RGB_MATRIX_SAT_STEP)
#    define RGB_MATRIX_SAT_STEP 16
#endif

#if !defined(RGB_MATRIX_VAL_STEP)
#    define RGB_MATRIX_VAL_STEP 16
#endif

#if !defined(RGB_MATRIX_SPD_STEP)
#    define RGB_MATRIX_SPD_STEP 16
#endif

extern void matrix_scan_keys(matrix_row_t raw_matrix[], uint8_t current);
static uint8_t chan_row_order[LED_MATRIX_ROWS_HW] = {0}; // track the channel order
static uint8_t current_col = 0; // LED col scan counter
extern matrix_row_t raw_matrix[MATRIX_ROWS]; //raw values
static const uint32_t periodticks = 256;
static const uint32_t freq = (RGB_MATRIX_HUE_STEP * RGB_MATRIX_SAT_STEP * RGB_MATRIX_VAL_STEP * RGB_MATRIX_SPD_STEP * RGB_MATRIX_LED_PROCESS_LIMIT);
static const pin_t led_row_pins[LED_MATRIX_ROWS_HW] = LED_MATRIX_ROW_PINS; // We expect a R,B,G order here
static const pin_t led_col_pins[LED_MATRIX_COLS] = LED_MATRIX_COL_PINS;
RGB led_state[DRIVER_LED_TOTAL]; // led state buffer
bool enable_pwm = false;

/* PWM configuration structure. We use timer CT16B1 with 24 channels. */
static PWMConfig pwmcfg = {
    freq,            /* PWM clock frequency. */
    periodticks,     /* PWM period (in ticks) 1S (1/10kHz=0.1mS 0.1ms*10000 ticks=1S) */
    NULL,            /* RGB Callback */
    {                /* Default all channels to disabled - Channels will be configured durring init */
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0},
        {PWM_OUTPUT_DISABLED, NULL, 0}
    },
    0/* HW dependent part.*/
};

void rgb_ch_ctrl(PWMConfig *cfg) {
    /* Enable PWM function, IOs and select the PWM modes for the LED rows pins */
    for(uint8_t i = 0; i < LED_MATRIX_ROWS_HW; i++) {
        switch(led_row_pins[i]) {
            // Intentional fall-through for the PWM B-pin mapping
            case B8:
                cfg->channels[0].pfpamsk = 1;
            case A0:
                cfg->channels[0].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 0;
                break;

            case B9:
                cfg->channels[1].pfpamsk = 1;
            case A1:
                cfg->channels[1].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 1;
                break;

            case B10:
                cfg->channels[2].pfpamsk = 1;
            case A2:
                cfg->channels[2].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 2;
                break;

            case B11:
                cfg->channels[3].pfpamsk = 1;
            case A3:
                cfg->channels[3].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 3;
                break;

            case B12:
                cfg->channels[4].pfpamsk = 1;
            case A4:
                cfg->channels[4].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 4;
                break;

            case B13:
                cfg->channels[5].pfpamsk = 1;
            case A5:
                cfg->channels[5].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 5;
                break;

            case B14:
                cfg->channels[6].pfpamsk = 1;
            case A6:
                cfg->channels[6].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 6;
                break;

            case B15:
                cfg->channels[7].pfpamsk = 1;
            case A7:
                cfg->channels[7].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 7;
                break;

            case C0:
                cfg->channels[8].pfpamsk = 1;
            case A8:
                cfg->channels[8].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 8;
                break;

            case C1:
                cfg->channels[9].pfpamsk = 1;
            case A9:
                cfg->channels[9].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 9;
                break;

            case C2:
                cfg->channels[10].pfpamsk = 1;
            case A10:
                cfg->channels[10].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 10;
                break;

            case C3:
                cfg->channels[11].pfpamsk = 1;
            case A11:
                cfg->channels[11].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 11;
                break;

            case C4:
                cfg->channels[12].pfpamsk = 1;
            case A12:
                cfg->channels[12].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 12;
                break;

            case C5:
                cfg->channels[13].pfpamsk = 1;
            case A13:
                cfg->channels[13].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 13;
                break;

            case C6:
                cfg->channels[14].pfpamsk = 1;
            case A14:
                cfg->channels[14].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 14;
                break;

            case C7:
                cfg->channels[15].pfpamsk = 1;
            case A15:
                cfg->channels[15].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 15;
                break;

            case C8:
                cfg->channels[16].pfpamsk = 1;
            case B0:
                cfg->channels[16].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 16;
                break;

            case C9:
                cfg->channels[17].pfpamsk = 1;
            case B1:
                cfg->channels[17].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 17;
                break;

            case C10:
                cfg->channels[18].pfpamsk = 1;
            case B2:
                cfg->channels[18].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 18;
                break;

            case C11:
                cfg->channels[19].pfpamsk = 1;
            case B3:
                cfg->channels[19].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 19;
                break;

            case C12:
                cfg->channels[20].pfpamsk = 1;
            case B4:
                cfg->channels[20].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 20;
                break;

            case C13:
                cfg->channels[21].pfpamsk = 1;
            case B5:
                cfg->channels[21].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 21;
                break;

            case C14:
                cfg->channels[22].pfpamsk = 1;
            case B6:
                cfg->channels[22].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 22;
                break;

            case C15:
                cfg->channels[23].pfpamsk = 1;
            case B7:
                cfg->channels[23].mode = PWM_OUTPUT_ACTIVE_HIGH;
                chan_row_order[i] = 23;
                break;
        }
    }
}
void rgb_callback(PWMDriver *pwmp);

void shared_matrix_rgb_enable(void) {
    pwmcfg.callback = rgb_callback;
    pwmEnablePeriodicNotification(&PWMD1);
}

void update_pwm_channels(PWMDriver *pwmp, uint8_t col_idx) {
    for(uint8_t row_idx = 0; row_idx < LED_MATRIX_ROWS; row_idx++) {
        uint8_t led_index = g_led_config.matrix_co[row_idx][col_idx];
        if(led_index == NO_LED){
            continue;
        }
        // Check if we need to enable RGB output
        if (led_state[led_index].b != 0) enable_pwm |= true;
        if (led_state[led_index].g != 0) enable_pwm |= true;
        if (led_state[led_index].r != 0) enable_pwm |= true;
        // Update RGB rows channel PWM configuration
        if(enable_pwm){
            pwmEnableChannelI(pwmp,chan_row_order[row_idx*LED_MATRIX_ROW_CHANNELS],led_state[led_index].b);
            pwmEnableChannelI(pwmp,chan_row_order[row_idx*LED_MATRIX_ROW_CHANNELS+1],led_state[led_index].g);
            pwmEnableChannelI(pwmp,chan_row_order[row_idx*LED_MATRIX_ROW_CHANNELS+2],led_state[led_index].r);
        }
    }
}
void rgb_callback(PWMDriver *pwmp) {
    // Disable the interrupt
    pwmDisablePeriodicNotification(pwmp);

    // Turn the col off
    writePinLow(led_col_pins[current_col]);

    current_col++;
    if(current_col >= LED_MATRIX_COLS) current_col = 0;

    if(current_col % 6 == 0){ // Scan keys only on 0 and 6th columns
        for (uint8_t x = 0; x < MATRIX_COLS; x++) {
            writePinHigh(led_col_pins[x]);
        }
        for (uint8_t col_index = 0; col_index < MATRIX_COLS; col_index++) {
            matrix_scan_keys(raw_matrix, col_index);
        }
        for (uint8_t x = 0; x < MATRIX_COLS; x++) {
            writePinLow(led_col_pins[x]);
        }
    }

    update_pwm_channels(pwmp,current_col);
    if(enable_pwm) writePinHigh(led_col_pins[current_col]);
    chSysUnlockFromISR();
    // Advance the timer to just before the wrap-around, that will start a new PWM cycle
    pwm_lld_change_counter(pwmp, 0xFFFF);
    // Enable the interrupt
    pwmEnablePeriodicNotification(pwmp);
}

void SN32F24xB_init(void) {
    for (uint8_t x = 0; x < LED_MATRIX_ROWS_HW; x++) {
        setPinOutput(led_row_pins[x]);
        writePinLow(led_row_pins[x]);
    }
    // Determine which PWM channels we need to control
    rgb_ch_ctrl(&pwmcfg);
    pwmStart(&PWMD1, &pwmcfg);
    shared_matrix_rgb_enable();
}

void SN32F24xB_set_color(int index, uint8_t r, uint8_t g, uint8_t b) {
    led_state[index].r = r;
    led_state[index].b = b;
    led_state[index].g = g;
}

void SN32F24xB_set_color_all(uint8_t r, uint8_t g, uint8_t b) {
    for (int i=0; i<DRIVER_LED_TOTAL; i++) {
        SN32F24xB_set_color(i, r, g, b);
    }
}

static void flush(void) {}

const rgb_matrix_driver_t rgb_matrix_driver = {
    .init          = SN32F24xB_init,
    .flush         = flush,
    .set_color     = SN32F24xB_set_color,
    .set_color_all = SN32F24xB_set_color_all,
};
