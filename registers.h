/**
 * RCA 1802 Register Structure
 * 
 * 
 */

#define  ROM_SIZE    2^14
#define  RAM_SIZE    2^12
#define  VRAM_SIZE   2^14
#define  ROM_START   0x0000
#define  RAM_START   ROM_START + ROM_SIZE
#define  VRAM_START  RAM_START + RAM_SIZE
#define  TOTAL_SIZE  ROM_SIZE + RAM_SIZE + VRAM_SIZE 




typedef struct {
    uint16_t   Rx[16];
    uint8_t    D;
    uint8_t    DF;
    uint8_t    P;
    uint8_t    X;
    uint8_t    T;
    uint8_t    Q;
    uint8_t    IE;
} cosmac_register_t;

