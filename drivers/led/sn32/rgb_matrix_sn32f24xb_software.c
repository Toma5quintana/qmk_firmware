#define PWM_OUTPUT_ACTIVE_LEVEL PWM_OUTPUT_DISABLED
#define SN32_PWM_CONTROL SOFTWARE

static uint8_t led_col_duty_cycle[LED_MATRIX_COLS] = {0};

void update_pwm_channels(PWMDriver *pwmp) {
    bool         enable_pwm_output = false;
    matrix_row_t row_shifter       = MATRIX_ROW_SHIFTER;
    for (uint8_t col_idx = 0; col_idx < LED_MATRIX_COLS; col_idx++, row_shifter <<= 1) {
#if (DIODE_DIRECTION == ROW2COL)
        // Scan the key matrix column
        if (!matrix_scanned) {
            matrix_locked = true;
            matrix_read_rows_on_col(shared_matrix, col_idx, row_shifter);
        }
#endif // DIODE_DIRECTION == ROW2COL
        uint8_t led_index = g_led_config.matrix_co[row_idx][col_idx];
        uint8_t led_col = chan_col_order[col_idx];
        // Check if we need to enable RGB output
        if (led_state[led_index].b != 0) enable_pwm_output |= true;
        if (led_state[led_index].g != 0) enable_pwm_output |= true;
        if (led_state[led_index].r != 0) enable_pwm_output |= true;
        // Update matching RGB channel PWM configuration
        switch (current_row % LED_MATRIX_ROW_CHANNELS) {
            case 0:
                led_col_duty_cycle[col_idx] = led_state[led_index].b;
                ATOMIC_BLOCK_FORCEON {
                	setPinOutput(led_col_pins[led_col]);
                }
                break;
            case 1:
                led_col_duty_cycle[col_idx] = led_state[led_index].g;
                ATOMIC_BLOCK_FORCEON {
					setPinOutput(led_col_pins[led_col]);
				}
                break;
            case 2:
                led_col_duty_cycle[col_idx] = led_state[led_index].r;
                ATOMIC_BLOCK_FORCEON {
					setPinOutput(led_col_pins[led_col]);
				}
                break;
            default:;
        }
    }
    // Enable RGB output
    if (enable_pwm_output) {
        ATOMIC_BLOCK_FORCEON {
            writePinHigh(led_row_pins[current_row]);
        }
    }
#if (DIODE_DIRECTION == ROW2COL)
    // The whole matrix has been scanned
    matrix_locked  = false;
    matrix_scanned = true;
#endif // DIODE_DIRECTION == ROW2COL
}
void shared_matrix_rgb_disable_pwm(void) {
    // Disable PWM outputs on column pins
    for (uint8_t y = 0; y < LED_MATRIX_COLS; y++) {
    	uint8_t led_col = chan_col_order[y];
    	ATOMIC_BLOCK_FORCEON {
        	setPinInput(led_col_pins[led_col]);
        }
    }
}
void pwmSoftwareControl(pwmp) {
    for(uint8_t y = 0; y < LED_MATRIX_COLS; y++) {
    	uint8_t led_col = chan_col_order[col_idx];
    	if((pwmp->period <= (led_col_duty_cycle[led_col])) && (led_col_duty_cycle[led_col] > 0)){
    		//on
    		ATOMIC_BLOCK_FORCEON {
    			writePinLow(led_col_pins[led_col]);
    		}
    	}else{
    		//off
    		ATOMIC_BLOCK_FORCEON {
    			writePinHigh(led_col_pins[led_col]);
    		}
    	}
    }
}
