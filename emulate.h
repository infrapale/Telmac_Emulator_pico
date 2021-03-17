/**
 *  COSMAC RCA1802 CPU definitions
 * 
 * 
 */

#include <stdint.h>

typedef enum {
    IDL = 0,
    LDN,
    INC,
    DEC,
    LDA,
    STR,
    IRX,
    _7X,
    GLO,
    GHI,
    PLO,
    PHI,
    NOP,
    LBR,
    SEP,
    SEX,
    LDI,
    BR,
    BQ,
    BNQ,
    BZ,
    BNZ,
    BDF,
    BNF,
    BPZ,
    BGE,
    B1,
    B2,
    B3,
    B4,
    SKP,
    BN1,
    BN2,
    BN3,
    BN4,
    OUT,
    INP,
    RET,
    DIS,
    LDX,
    LDXA,
    STXD,
    ADC,
    SDB,
    SHRC,
    RSHR,
    SMB,
    SAV,
    MARK,
    SEQ,
    REQ,
    ADDI,
    OR,  
    AND, 
    XOR,
    SHR,
    ADD,
    SD,
    SM,
    SMI,
    SDI,
    ORI,
    ANI,
    XRI,
    ADI,
    ADCI,
    SDBI,
    SHL,
    SHLC,
    SMBI,
    LBQ, 
    LBZ, 
    LBDF,
    LSNQ,
    LSNZ,
    LSNF,
    LSKP,
    LBNQ,
    LBNZ,
    LBNF,
    LSIE,
    LSQ, 
    LSZ, 
    LSDF,
    NA,
} instr_category_t;

typedef struct {
    instr_category_t    Category;
    char                Mnemonic[5];
    uint8_t             Code;
    uint8_t             Mask;
    uint8_t             ShiftRight;
    void                (*cbFunction)();
} instr_code_t;

void emulate_initialize(void);