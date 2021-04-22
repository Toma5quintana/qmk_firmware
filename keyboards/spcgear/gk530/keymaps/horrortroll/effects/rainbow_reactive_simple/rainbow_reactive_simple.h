#pragma once

typedef HSV (*rainbow_reactive_f)(HSV hsv, uint8_t i, uint8_t time, uint16_t offset);

bool effect_rainbow_reactive(effect_params_t* params, rainbow_reactive_f effect_func) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t time = scale16by8(g_rgb_timer, rgb_matrix_config.speed / 4);
    uint16_t max_tick = 65535 / rgb_matrix_config.speed;
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        uint16_t tick = max_tick;
        // Reverse search to find most recent key hit
        for (int8_t j = g_last_hit_tracker.count - 1; j >= 0; j--) {
            if (g_last_hit_tracker.index[j] == i && g_last_hit_tracker.tick[j] < tick) {
                tick = g_last_hit_tracker.tick[j];
                break;
            }
        }

        uint16_t offset = scale16by8(tick, rgb_matrix_config.speed);
        RGB      rgb    = rgb_matrix_hsv_to_rgb(effect_func(rgb_matrix_config.hsv, i, time, offset));
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return led_max < DRIVER_LED_TOTAL;
}