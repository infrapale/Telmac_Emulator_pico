#include "emulate.h"
#include <stdio.h>
#include <string.h>


const instr_category_t codes[] = 
{ 
//  0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F     
    IDL, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN, LDN,  //0X00
    INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, INC, 
    DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC, DEC,  
    BR,  BQ,  BZ,  BDF, B1,  B2,  B3,  B4,  SKP, BNQ, BNZ, BNF, BN1, BN2, BN3, BN4,
    LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA, LDA,  //0X40
    STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, STR, 
    IRX, OUT, OUT, OUT, OUT, OUT, OUT, OUT, NA,  INP, INP, INP, INP, INP, INP, INP, 
    RET, DIS, LDXA,STXD,ADC, SDB, SHRC,SMB, SAV, MARK,REQ, SEQ, ADCI,SDBI,SHLC,SMBI,
    GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO, GLO,  //0X80
    GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, GHI, 
    PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, PLO, 
    PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, PHI, 
    LBR, LBQ, LBZ, LBDF,NOP, LSNQ,LSNZ,LSNF,LSKP,LBNQ,LBNZ,LBNF,LSIE,LSQ, LSZ, LSDF,  //0XC0
    SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, SEP, 
    SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, SEX, 
    LDX, OR,  AND, XOR, ADD, SD,  SHR, SM,  LDI, ORI, ANI, XRI, ADI, SDI, SHL, SMI

};


instr_code_t cdp1802_instr[10];

void instr_idl(void)
{

}

void instr_ldn(void)
{

}


void emulate_initialize(void){
    instr_code_t *cptr;

    cptr = &cdp1802_instr[IDL];
    strcpy(cptr->Mnemonic,"IDLE");
    cptr->Mask        = 0x00;
    cptr->ShiftRight  = 0;
    cptr->cbFunction  = &instr_idl; 
    

    cptr = &cdp1802_instr[LDN];
    strcpy(cptr->Mnemonic, "LDN");
    cptr->Mask        = 0xF0;
    cptr->ShiftRight  = 0;
    cptr->cbFunction  = &instr_ldn;


}

