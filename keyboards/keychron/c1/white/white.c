#ifdef RGB_MATRIX_ENABLE

#include "rgb_matrix.h"

#define XX NO_LED

// Mark keys that are black & orange with the default keychron keycaps.
// This is used by the custom rgb matrix effect to create a high contrast mode that only lights up black keys or black and orange keys. To make them better readable.
#define B (128 | 4) // Black
#define O (64  | 4) // Orange, Esc and lightbulb are assumed to be orange

/// Force g_led_config into flash, because there is no space in RAM.
/// This should be safe because g_led_config should never be written to.
/// We cannot make g_led_config const, because rgb_matrix.h, exports it as mutable.
__attribute__(( section(".rodata.g_led_config") ))
led_config_t g_led_config = { {
  {  0, XX,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12,  13, 14, 15},
  { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,  30, 31, 32},
  { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,  47, 48, 49},
  { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, XX, 62,  XX, XX, XX},
  { 63, XX, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, XX, 74,  XX, 75, XX},
  { 76, 77, 78, XX, XX, XX, 79, XX, XX, XX, 80, 81, 82, 83,  84, 85, 86}
}, {
    {0  ,  0},            {25 ,  0}, {37 ,  0}, {50 ,  0}, {62 ,  0}, {75 ,  0}, {87 ,  0}, {100,  0}, {112,  0}, {124,  0}, {137,  0}, {149,  0}, {168,  0}, {174,  0}, {187,  0}, {199,  0},
    {0  , 13}, {12 , 13}, {25 , 13}, {37 , 13}, {50 , 13}, {62 , 13}, {75 , 13}, {87 , 13}, {100, 13}, {112, 13}, {124, 13}, {137, 13}, {149, 13}, {168, 13}, {174, 13}, {187, 13}, {199, 13},
    {3  , 26}, {19 , 26}, {31 , 26}, {44 , 26}, {56 , 26}, {68 , 26}, {81 , 26}, {93 , 26}, {106, 26}, {118, 26}, {131, 26}, {143, 26}, {156, 26}, {168, 26}, {174, 26}, {187, 26}, {199, 26},
    {5  , 38}, {22 , 38}, {34 , 38}, {47 , 38}, {59 , 38}, {72 , 38}, {84 , 38}, {96 , 38}, {109, 38}, {121, 38}, {134, 38}, {146, 38},            {166, 38},
    {8  , 51},            {28 , 51}, {40 , 51}, {53 , 51}, {65 , 51}, {78 , 51}, {90 , 51}, {103, 51}, {115, 51}, {128, 51}, {140, 51},            {157, 51},            {187, 51},
    {2  , 64}, {17 , 64}, {33 , 64},                                  {79 , 64},                                  {124, 64}, {137, 64}, {149, 64}, {162, 64}, {174, 64}, {187, 64}, {199, 64},
}, {
   O,    4, 4, 4, 4, B, B, B, B, 4, 4, 4, 4, B, B, O,
   B, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, B, B, B, B,
   B, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, B, B, B, B,
   B, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    B,
   B,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    B,    4,
   B, B, B,          4,          B, B, B, B, 4, 4, 4
} };

#endif
