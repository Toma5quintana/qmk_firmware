# Experimental VIA support
VIA_ENABLE=yes

# Size optimizations to fit VIA support
#
# These optimizations are pretty intrusive because they remove the idle thread.
# Without idle thread some sleep related functions no longer function.
# These broken functions are overwritten with patched variants.
#
# These optimization are copied from:
# https://github.com/gloryhzw/qmk_firmware/blob/sn32/keyboards/gmmk/full

# Reduce RAW endpoints
OPT_DEFS += -DRAW_IN_CAPACITY=1
OPT_DEFS += -DRAW_OUT_CAPACITY=1

# Remove idle thread
OPT_DEFS += -DCH_CFG_NO_IDLE_THREAD=TRUE

# Include the patched functions
SRC += no_idle_thread.c
