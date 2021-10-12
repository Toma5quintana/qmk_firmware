#ifndef WHITE_H
#define WHITE_H

#include "quantum.h"

#if defined(KEYBOARD_keychron_k4_white_v1)
  #include "v1.h"
#elif defined(KEYBOARD_keychron_k4_white_v2)
  #include "v2.h"
#endif // Keychron K4 White revisions

#endif
