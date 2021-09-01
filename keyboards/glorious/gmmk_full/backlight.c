#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <SN32F260.h>
#include "ch.h"
#include "hal.h"

#include "color.h"
#include "wait.h"
#include "util.h"
#include "matrix.h"
#include "debounce.h"
#include "quantum.h"

#include "SPI.h"

#define I2C_SCL B3
#define I2C_SDA B5
#define SDB     B0

#if 0   /* I2C bitbang */
#define I2C_SCL_IN readPin(I2C_SCL)
#define I2C_SDA_IN readPin(I2C_SDA)

#define I2C_SCL_HI setPinInputHigh(I2C_SCL)
#define I2C_SCL_LO setPinOutput(I2C_SCL)
#define I2C_SCL_HIZ setPinInputHigh(I2C_SCL)

#define I2C_SDA_HI setPinInputHigh(I2C_SDA)
#define I2C_SDA_LO setPinOutput(I2C_SDA)
#define I2C_SDA_HIZ setPinInputHigh(I2C_SDA)

static uint8_t  i2c_byte_ct = 0;
static uint8_t  i2c_addr_rw = 0;
static uint8_t* i2c_data_ptr;
static uint8_t  i2c_data_byte[2] = {0};
static uint8_t  i2c_tx_byte = 0;

void i2c_init(void)
{
    writePinLow(I2C_SCL);
    writePinLow(I2C_SDA);
    writePinHigh(SDB);
    setPinOutput(SDB);

    I2C_SCL_HIZ;
    I2C_SDA_HIZ;
}

static inline void i2c_process_bit(void)
{
    if(i2c_tx_byte & 0x80)
    {
        I2C_SDA_HIZ;
    }
    else
    {
        I2C_SDA_LO;
    }

    i2c_tx_byte = i2c_tx_byte << 1;

    I2C_SCL_HIZ;
    I2C_SCL_LO;
}

static inline void i2c_transaction(void)
{
//I2C_STATE_START_COND:
    I2C_SDA_LO;
    I2C_SCL_LO;

    i2c_tx_byte = i2c_addr_rw;

//I2C_STATE_SEND_ADDR_RW:
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();

    goto I2C_STATE_READ_ACK;

I2C_STATE_WRITE_BYTE:
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();
    i2c_process_bit();

    i2c_byte_ct = i2c_byte_ct - 1;
    i2c_data_ptr++;

I2C_STATE_READ_ACK:
    I2C_SDA_HIZ;
    I2C_SCL_HIZ;

    if(!I2C_SDA_IN)
    {
        // Slave did ACK, move on to data
        if(i2c_byte_ct > 0)
        {
            i2c_tx_byte = *i2c_data_ptr;

            I2C_SDA_LO;
            I2C_SCL_LO;

            goto I2C_STATE_WRITE_BYTE;
        }
    }

    I2C_SDA_LO;
    I2C_SCL_LO;

//I2C_STATE_STOP_COND:
    I2C_SCL_HIZ;
    I2C_SDA_HIZ;
}

static inline void i2c_write_buf(uint8_t devid, uint8_t* data, uint8_t len)
{   
    i2c_addr_rw  = devid;

    i2c_data_ptr = data;
    i2c_byte_ct  = len;

    i2c_transaction();
}

static inline void i2c_write_reg(uint8_t devid, uint8_t reg, uint8_t data)
{
    i2c_addr_rw      = devid;
    i2c_data_byte[0] = reg;
    i2c_data_byte[1] = data;

    i2c_data_ptr     = i2c_data_byte;
    i2c_byte_ct      = 2;

    i2c_transaction();
}

enum
{
    REG_CONFIGURE_COMMAND       = 0xFD,
    REG_FUNC_CONFIGURATION      = 0x00,
    REG_FUNC_PICTURE_DISPLAY    = 0x01,
    REG_FUNC_DISPLAY_OPTION     = 0x05,
    REG_FUNC_AUDIO_SYNC         = 0x06,
    REG_FUNC_BREATH_CONTROL_1   = 0x08,
    REG_FUNC_BREATH_CONTROL_2   = 0x09,
    REG_FUNC_SHUTDOWN           = 0x0A,
    REG_FUNC_AUDIO_GAIN_CONTROL = 0x0B,
    REG_FUNC_STAGGERED_DELAY    = 0x0D,
    REG_FUNC_SLEW_RATE_CONTROL  = 0x0E,
    REG_FUNC_CURRENT_CONTROL    = 0x0F,
    REG_FUNC_OPEN_SHORT_TEST_1  = 0x10,
    REG_FUNC_OPEN_SHORT_TEST_2  = 0x11,
    REG_FUNC_ADC_OUTPUT         = 0x13,
    REG_FUNC_VAF_1              = 0x14,
    REG_FUNC_VAF_2              = 0x15,
    REG_FUNC_THERMAL_DETECTION  = 0x17,
};

enum
{
    PAGE_FRAME_1                = 0x00,
    PAGE_FRAME_2                = 0x01,
    PAGE_FUNCTION               = 0x0B,
    PAGE_DETECTION              = 0x0C,
    PAGE_VAF                    = 0x0D,
};

#endif /* I2C */


static int g_cs_pin = 0;

void spi_init(void)
{
    SPI0_Init();
    SPI0_Enable();
}

void spi_set_cspin(int pin)
{   
    if (g_cs_pin == pin)
        return;

    writePinHigh(B2); 
    setPinOutput(B2);    
    writePinHigh(B1); 
    setPinOutput(B1);

    g_cs_pin = pin;
}

extern void SPI0_Read3(unsigned char b1, unsigned char b2, unsigned char *b3);

void spi_read3(unsigned char b1, unsigned char b2, unsigned char *b3)
{    
    writePinLow(g_cs_pin);    
    SPI0_Read3(b1, b2, b3);    
    writePinHigh(g_cs_pin);
}


void spi_write(uint8_t *data_p, int len)
{    
    writePinLow(g_cs_pin);    
    SPI0_Write(data_p, len);    
    writePinHigh(g_cs_pin);
}

void spi_w3(uint8_t page, uint8_t addr, uint8_t data)
{
    uint8_t c[4];
    c[0] = page | 0x20;
    c[1] = addr;
    c[2] = data;
    spi_write(c, 3);
}

void spi_r3(uint8_t page, uint8_t addr, uint8_t *data)
{
    uint8_t c[4];
    c[0] = page | 0x20;
    c[1] = addr;    
    spi_read3(c[0], c[1], data);
}

/* 
 * LED index to RGB address
 * >100 means it belongs to pin B1 chipselected SN2735 chip, the real addr is minus by 100 
 */
static const uint8_t g_led_pos[DRIVER_LED_TOTAL] = {
/* 0*/    0,   2,   3,   4,   5,   6,   7,   8,   9,  10,   11,  12,  13,  14,  15,  16,
/*16*/  100, 101, 102, 103, 104, 105, 106, 107, 108, 109,  110, 111, 112, 113,  21,  22,  23,  24,   25,   26,  27,   
/*37*/  116, 117, 118, 119, 120, 121, 122, 123, 124, 125,  126, 127, 128, 129,  32,  33,  34,  35,   36,   37,  38, 
/*58*/  132, 133, 134, 135, 136, 137, 138, 139, 140, 141,  142, 143, 145,  42,  43,  44,    
/*74*/  148, 150, 151, 152, 153, 154, 155, 156, 157,  158, 159, 161, 49,  51,  52,  53,  54,
/*91*/  114, 115, 130, 131, 146, 147, 162, 163,  55,  56,   57,  59,  60
};

void _set_color(int index, uint8_t r, uint8_t g, uint8_t b)
{
    int l = g_led_pos[index];

    if (l >= 100)
    {
        l -= 100;
        spi_set_cspin(B1);
    }
    else
        spi_set_cspin(B2);

    int y = l / 16;
    int a = l % 16;
            
    spi_w3(1, y * 48 + a, r);       // r
    spi_w3(1, y * 48 + a + 2*8, b); // b
    spi_w3(1, y * 48 + a + 4*8, g); // g  
}

void _read_color(int index, uint8_t *r, uint8_t *g, uint8_t *b)
{
    int l = g_led_pos[index];

    if (l >= 100)
    {
        l -= 100;
        spi_set_cspin(B1);
    }
    else
        spi_set_cspin(B2);

    int y = l / 16;
    int a = l % 16;
            
    spi_r3(1, y * 48 + a, r);       // r
    spi_r3(1, y * 48 + a + 2*8, b); // b
    spi_r3(1, y * 48 + a + 4*8, g); // g  
}



void reset_rgb(int pin)
{
    spi_set_cspin(pin);
    
    spi_w3(3, 0, 0);
    spi_w3(3, 0x13, 0xAA);
    spi_w3(3, 0x14, 0);
    // spi_w3(3, 0x15, 4);
    spi_w3(3, 0x15, 0);
    spi_w3(3, 0x16, 0xC0);
    spi_w3(3, 0x1A, 0);
    
    // set curent
    for (int i = 0; i < 12; i++)
    {
        spi_w3(4, i, 0x80);
    }               
    
    // led all on
    for (int i = 0; i < 192/8; i++)
    {
        spi_w3(0, i, 0xFF);
    }

    // turn off pwm
    for (int i = 0; i < 192; i++)
    {
        spi_w3(1, i, 0);
    }
                
    // normal mode
    spi_w3(3, 0, 1);
}

void process_backlight(uint8_t devid, volatile LED_TYPE* states)
{    
    static unsigned char state = 0;       

    switch (state)
    {
        case 0: /* init RGB chips */
            spi_init();
            
            writePinHigh(SDB);
            setPinOutput(SDB);            
            
            reset_rgb(B1);                        
            reset_rgb(B2);
            
            state = 1;
            break;
            
        case 1: /* run state */
            break;

#if 0            
        case 1:
            static int x = 0;
            static int slow_count = 0;
        
            slow_count++;
            if (slow_count >= 30 /*30*/)
                slow_count = 0;
            else
                break;
            
            spi_set_cspin(B2);
            
            // set pwm all
            // memset(r, 0xFF, 32);
#if 0
            static unsigned char r[32];
            int addr = 0;
            memset(r, 0, 32);
            
            r[0] = 0x21;
            r[1] = 0;
            spi_write(r, 16 + 2);
            
            addr = 16;
            for (int i = 0; i < 192/16 - 1; i++)
            {
                r[1] = addr;                
                spi_write(r, 16 + 2);
                addr += 16;
            }
#endif

            for (int i = 0; i < 192; i++)
            {
                spi_w3(1, i, 0);
            }
            
            #if 0
            if (x >= 16/*192/3*/)
            {
                x = 0;
            }
            #endif

            // if (x >= 192 /* 192/3*/)
            if (x >= 64)
            {
                x = 0;
            }
            
            // clear all leds
            //r[0] = 0x20;
            //r[1] = 0x0;
            //memset(r, 0, 32);           
            // spi_write(r, 0x18 + 2);
            for (int i = 0; i < 0x18; i++)
            {
                // spi_w3(0, i, 0);
            }
            
            /*
            spi_write(r, 0x18 + 2);
            */
            // spi_w3(0, x / 8, 1 << (x % 8));
            
            #if 1
            // r
/*
            int y = x/16;
            int a = x/8;
            spi_w3(0, y * 6 + a, 1 << (x % 8));
            spi_w3(0, y * 6 + a + 2, 1 << (x % 8));
            spi_w3(0, y * 6 + a + 4, 1 << (x % 8));            
*/                       
            int y = x/16;
            int a = x %16;
            // int l = 255/(2*y + 1);
            unsigned int red, blue, green;
            
            
            if (y % 2 == 0)
            {
                red = 255;
                blue = 0;
                green = 0;
            }
            else
            {
                red = 0;
                blue = 255;
                green = 0;                
            }
            
            spi_w3(1, y * 48 + a, red);       // r
            spi_w3(1, y * 48 + a + 2*8, blue); // b
            spi_w3(1, y * 48 + a + 4*8, green); // g      


            spi_set_cspin(B1);
            // turn off all pwm
            for (int i = 0; i < 48; i++)
            {
                spi_w3(1, i, 0);
            }          
            
            a = x % 16;
            spi_w3(1, a, 255);       // r
            spi_w3(1, a + 2*8, 255); // b
            spi_w3(1, a + 4*8, 255); // g      


            // if (y == 0)
            //spi_w3(0, y * 6  +  a,       1 << (x % 8));  // r
            //spi_w3(0, y * 6  +  a + 2, 1 << (x % 8)); // b
            //spi_w3(0, y * 6  +  a + 4, 1 << (x % 8)); // g                        

/*            
            if (y == 0)
            {
                spi_w3(0, a,            1 << (x % 8)); // b
                spi_w3(0, a + 2,        1 << (x % 8)); // g
                spi_w3(0, a + 4,        1 << (x % 8)); // g
                // spi_w3(0, 24 + a,   1 << (x % 8)); // r
            }
            else if (y == 1)
            {
                spi_w3(0, y * 6 - 2 +  a,       1 << (x % 8));  // r
                spi_w3(0, y * 6 - 2 +  a + 2, 1 << (x % 8)); // b
                spi_w3(0, y * 6 - 2 +  a + 4, 1 << (x % 8)); // g                        
            }
            else if (y == 2)
            {
                
            }
*/


            #endif
            x++;
            
                
            break;
#endif
            
    #if 0        
        case 1:
            static uint8_t frames = 0;
            memset(r, frames, 32);
            
            spi_set_cspin(B1);
            
            // shut down1 mode 0
            // spi_w3(3, 0, 0);
        
            if (frames >= 255)
                frames = 128;
            else
                frames++;

            
            // set pwm
            r[0] = 0x21;
            r[1] = 0;
            spi_write(r, 16 + 2);
            
            addr = 16;
            for (int i = 0; i < 192/16 - 1; i++)
            {
                r[1] = addr;                
                spi_write(r, 16 + 2);
                addr += 16;
            }            
            
            // spi_w3(3, 0, 1);


            spi_set_cspin(B2);

            // shut down1 mode 0
            // spi_w3(3, 0, 0);

            
            // set pwm all
            r[0] = 0x21;
            r[1] = 0;
            spi_write(r, 16 + 2);
            
            addr = 16;
            for (int i = 0; i < 192/16 - 1; i++)
            {
                r[1] = addr;                
                spi_write(r, 16 + 2);
                addr += 16;
            }            
            
            // spi_w3(3, 0, 1);
            
            break;
    #endif
    }
}


#if 0
void process_backlight(uint8_t devid, volatile LED_TYPE* states)
{
    static unsigned char led_val[49];
    static unsigned short state = 0;

    switch(state)
    {
        case 0:
            i2c_init();

            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FUNCTION);
            i2c_write_reg(devid, REG_FUNC_SHUTDOWN,           0x00);
            i2c_write_reg(devid, REG_FUNC_CONFIGURATION,      0x00);
            i2c_write_reg(devid, REG_FUNC_PICTURE_DISPLAY,    0x10);
            i2c_write_reg(devid, REG_FUNC_DISPLAY_OPTION,     0x00);
            i2c_write_reg(devid, REG_FUNC_AUDIO_SYNC,         0x00);
            i2c_write_reg(devid, REG_FUNC_BREATH_CONTROL_1,   0x00);
            i2c_write_reg(devid, REG_FUNC_BREATH_CONTROL_2,   0x00);
            i2c_write_reg(devid, REG_FUNC_AUDIO_GAIN_CONTROL, 0x00);
            i2c_write_reg(devid, REG_FUNC_STAGGERED_DELAY,    0x0F);
            i2c_write_reg(devid, REG_FUNC_SLEW_RATE_CONTROL,  0x01);
            i2c_write_reg(devid, REG_FUNC_VAF_1,              68);
            i2c_write_reg(devid, REG_FUNC_VAF_2,              128);
            i2c_write_reg(devid, REG_FUNC_CURRENT_CONTROL,    153);

            state = 1;
            break;

        case 1:
            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FRAME_1);

            led_val[0] = 0x00;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
                led_val[led_id + 1 + 0x00] = 0x00;
                led_val[ledw_id + 1 + 0x10] = 0x00;
            }

            //Enable Columns 0-2 for the first 13 LEDs
            led_val[0x01] = 0b11111000;
            led_val[0x02] = 0b11111111;

            led_val[0x03] = 0b11111000;
            led_val[0x04] = 0b11111111;

            led_val[0x05] = 0b11111000;
            led_val[0x06] = 0b11111111;

            //Enable Columns 3-5 for the second 13 LEDs
            led_val[0x07] = 0b11000111;
            led_val[0x08] = 0b11111111;

            led_val[0x09] = 0b11000111;
            led_val[0x0A] = 0b11111111;

            led_val[0x0B] = 0b11000111;
            led_val[0x0C] = 0b11111111;

            //Enable Column 6 for the third 13 LEDs (Red and Blue channels)
            led_val[0x0D] = 0b00111111;
            led_val[0x0E] = 0b11111110;
            
            led_val[0x0F] = 0b00111111;
            led_val[0x10] = 0b11111110;

            i2c_write_buf(devid, led_val, 33);

            state = 2;
            break;

        case 2:
            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FRAME_2);
            led_val[0] = 0x00;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
                led_val[led_id + 1 + 0x00] = 0x00;
                led_val[led_id + 1 + 0x10] = 0x00;
            }

            //Enable Column 6 for the third 13 LEDs (Green channel)
            led_val[0x01] = 0b00111111;
            led_val[0x02] = 0b11111110;

            //Enable Columns 7-9 for the fourth LEDs
            led_val[0x03] = 0b10000000;
            led_val[0x04] = 0b11111001;

            led_val[0x05] = 0b10000000;
            led_val[0x06] = 0b11111001;

            led_val[0x07] = 0b10000000;
            led_val[0x08] = 0b11111001;

            //Enable Columns 10-12 for the fifth LEDs
            led_val[0x09] = 0b00000000;
            led_val[0x0A] = 0b11001000;

            led_val[0x0B] = 0b00000000;
            led_val[0x0C] = 0b11001000;

            led_val[0x0D] = 0b00000000;
            led_val[0x0E] = 0b11001000;

            i2c_write_buf(devid, led_val, 33);

            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FUNCTION);
            i2c_write_reg(devid, REG_FUNC_SHUTDOWN,           0x01);

            state = 3;
            break;

        case 3:
            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FRAME_1);

            // Column 0-2 LEDs starting at address 0x20, RBG order
            led_val[0] = 0x20;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
/*                
                led_val[led_id + 1 + 0x00] = states[led_id].r;
                led_val[led_id + 1 + 0x10] = states[led_id].b;
                led_val[led_id + 1 + 0x20] = states[led_id].g;
*/                
                led_val[led_id + 1 + 0x00] = 255;
                led_val[led_id + 1 + 0x10] = 255;
                led_val[led_id + 1 + 0x20] = 255;

            }
            i2c_write_buf(devid, led_val, 49);

            // Column 3-5 LEDs starting at address 0x50, RBG order
            led_val[0] = 0x50;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
/*                
                led_val[led_id + 1 + 0x00] = states[led_id + 16].r;
                led_val[led_id + 1 + 0x10] = states[led_id + 16].b;
                led_val[led_id + 1 + 0x20] = states[led_id + 16].g;
*/                

                led_val[led_id + 1 + 0x00] = 255;
                led_val[led_id + 1 + 0x10] = 255;
                led_val[led_id + 1 + 0x20] = 255;

            }
            i2c_write_buf(devid, led_val, 49);

            state = 4;
            break;
#if 0
        case 4:
            // Column 6-8 LEDs (Red and Blue channels) starting at address 0x80, RBG order
            led_val[0] = 0x80;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
                led_val[led_id + 1 + 0x00] = states[led_id + 32].r;
                led_val[led_id + 1 + 0x10] = states[led_id + 32].b;
            }
            i2c_write_buf(devid, led_val, 33);

            i2c_write_reg(devid, REG_CONFIGURE_COMMAND,       PAGE_FRAME_2);

            // Column 6-8 LEDs (Green channel) starting at address 0x20, RBG order
            led_val[0] = 0x20;
            for(unsigned int led_id = 0; led_id < 16; led_id++)
            {
                led_val[led_id + 1 + 0x00] = states[led_id + 32].g;
            }
            i2c_write_buf(devid, led_val, 17);

            // Column 7-9 LEDs starting at address 0x30, RBG order
            led_val[0] = 0x37;
            for(unsigned int led_id = 7; led_id < 16; led_id++)
            {
                led_val[led_id - 6 + 0x00] = states[led_id + 48].r;
            }
            i2c_write_buf(devid, led_val, 11);

            led_val[0] = 0x47;
            for(unsigned int led_id = 7; led_id < 16; led_id++)
            {
                led_val[led_id - 6 + 0x00] = states[led_id + 48].b;
            }
            i2c_write_buf(devid, led_val, 11);

            led_val[0] = 0x57;
            for(unsigned int led_id = 7; led_id < 16; led_id++)
            {
                led_val[led_id - 6 + 0x00] = states[led_id + 48].g;
            }
            i2c_write_buf(devid, led_val, 11);

            // Column 10-12 LEDs starting at address 0x60, RBG order
            led_val[0] = 0x6B;
            for(unsigned int led_id = 11; led_id < 16; led_id++)
            {
                led_val[led_id - 10 + 0x00] = states[led_id + 64].r;
            }
            i2c_write_buf(devid, led_val, 6);

            led_val[0] = 0x7B;
            for(unsigned int led_id = 11; led_id < 16; led_id++)
            {
                led_val[led_id - 10 + 0x00] = states[led_id + 64].b;
            }
            i2c_write_buf(devid, led_val, 6);

            led_val[0] = 0x8B;
            for(unsigned int led_id = 11; led_id < 16; led_id++)
            {
                led_val[led_id - 10 + 0x00] = states[led_id + 64].g;
            }
            i2c_write_buf(devid, led_val, 6);

            state = 3;
            break;
#endif            
    }
    
    
}
#endif    
