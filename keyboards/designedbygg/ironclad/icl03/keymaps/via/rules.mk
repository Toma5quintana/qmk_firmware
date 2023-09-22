VIA_ENABLE = yes
LED_WIN_LOCK_PIN = yes

# Reduce RAM usage
ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
LTO_ENABLE = yes
endif
