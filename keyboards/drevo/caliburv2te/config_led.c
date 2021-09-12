#ifdef RGB_MATRIX_ENABLE

#    include "rgb_matrix.h"
#    include "config_led.h"

#define NL NO_LED
led_config_t g_led_config = { {
  {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, NL, NL, NL, NL, NL, NL },
  { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, NL, NL, NL, NL, NL, NL },
  { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, NL, 44, 45, 46, NL, NL, NL, NL, NL, NL },
  { 47, NL, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, NL, 58, 59, 60, NL, NL, NL, NL, NL, NL },
  { 61, 62, 63, NL, NL, NL, 64, NL, NL, NL, 65, 66, 67, 68, 69, 70, NL, NL, NL, NL, NL, NL },
  { NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, NL, 71, 72, 73, 74, 75, 76 }
  //                                                                ^^^side rgb led's
}, {
    { 1 *15, 0 }, { 2 *15, 0 }, { 3 *15, 0 }, { 4 *15, 0 }, { 5 *15, 0 }, { 6 *15, 0 },  { 7 *15, 0  }, { 8 *15, 0  }, { 9 *15, 0 }, { 10*15, 0  }, { 11*15, 0 }, { 12*15, 0 }, { 13*15, 0 }, { 14*15, 0 }, { 15 *15, 0 }, { 16 *15, 0 },
    { 1 *15, 1 }, { 2 *15, 1 }, { 3 *15, 1 }, { 4 *15, 1 }, { 5 *15, 1 }, { 6 *15, 1 },  { 7 *15, 1  }, { 8 *15, 1  }, { 9 *15, 1 }, { 10*15, 1  }, { 11*15, 1 }, { 12*15, 1 }, { 13*15, 1 }, { 14*15, 1 }, { 15 *15, 1 }, { 16 *15, 1 },
    { 1 *15, 2 }, { 2 *15, 2 }, { 3 *15, 2 }, { 4 *15, 2 }, { 5 *15, 2 }, { 6 *15, 2 },  { 7 *15, 2  }, { 8 *15, 2  }, { 9 *15, 2 }, { 10*15, 2  }, { 11*15, 2 }, { 12*15, 2 },               { 14*15, 2 }, { 15 *15, 2 }, { 16 *15, 2 },
    { 1 *15, 3 },               { 3 *15, 3 }, { 4 *15, 3 }, { 5 *15, 3 }, { 6 *15, 3 },  { 7 *15, 3  }, { 8 *15, 3  }, { 9 *15, 3 }, { 10*15, 3  }, { 11*15, 3 }, { 12*15, 3 },               { 14*15, 3 }, { 15 *15, 3 }, { 16 *15, 3 },
    { 1 *15, 4 }, { 2 *15, 4 }, { 3 *15, 4 },                                            { 7 *15, 4  },                                             { 11*15, 4 }, { 12*15, 4 }, { 13*15, 4 }, { 14*15, 4 }, { 15 *15, 4 }, { 16 *15, 4 },

    { 1 *15, 5 }, { 2 *15, 5 }, { 3 *15, 5 }, { 4 *15, 5 }, { 5 *15, 5 }, { 6 *15, 5 } // side rgb led's
}, {
   1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1,
   1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
   1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 1, 1,
   1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 1, 1,
   1, 1, 1,          1,          1, 1, 1, 1, 1, 1,

   2, 2, 2, 2, 2, 2 // side rgb led's
} };

#endif
