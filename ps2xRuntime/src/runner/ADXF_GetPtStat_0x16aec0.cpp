#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetPtStat
// Address: 0x16aec0 - 0x16b144
void ADXF_GetPtStat_0x16aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetPtStat");


    ctx->pc = 0x16aec0u;

    // 0x16aec0: 0x27bdff80
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16aec4: 0x3c030023
    ctx->pc = 0x16aec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16aec8: 0xffb00000
    ctx->pc = 0x16aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aecc: 0x8c62dd4c
    ctx->pc = 0x16aeccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958412)));
    // 0x16aed0: 0x80802d
    ctx->pc = 0x16aed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aed4: 0xffbf0070
    ctx->pc = 0x16aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16aed8: 0xffb60060
    ctx->pc = 0x16aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16aedc: 0xffb50050
    ctx->pc = 0x16aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16aee0: 0xffb40040
    ctx->pc = 0x16aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16aee4: 0xffb30030
    ctx->pc = 0x16aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16aee8: 0xffb20020
    ctx->pc = 0x16aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16aeec: 0x12020006
    ctx->pc = 0x16AEECu;
    {
        const bool branch_taken_0x16aeec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x16AEF0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x16aeec) {
            ctx->pc = 0x16AF08u;
            goto label_16af08;
        }
    }
    ctx->pc = 0x16AEF4u;
    // 0x16aef4: 0x3c04002c
    ctx->pc = 0x16aef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16aef8: 0xc05a854
    ctx->pc = 0x16AEF8u;
    SET_GPR_U32(ctx, 31, 0x16AF00u);
    ctx->pc = 0x16AEFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939304));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF00u; }
        else if (ctx->pc != 0x16AF00u) { ctx->pc = 0x16AF00u; }
    }
    if (ctx->pc != 0x16AF00u) { return; }
    ctx->pc = 0x16AF00u;
    // 0x16af00: 0x10000086
    ctx->pc = 0x16AF00u;
    {
        const bool branch_taken_0x16af00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AF04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16af00) {
            ctx->pc = 0x16B11Cu;
            goto label_16b11c;
        }
    }
    ctx->pc = 0x16AF08u;
label_16af08:
    // 0x16af08: 0x3c140023
    ctx->pc = 0x16af08u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x16af0c: 0x8e84dd48
    ctx->pc = 0x16af0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294958408)));
    // 0x16af10: 0xc05b018
    ctx->pc = 0x16AF10u;
    SET_GPR_U32(ctx, 31, 0x16AF18u);
    ctx->pc = 0x16AF14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF18u; }
        else if (ctx->pc != 0x16AF18u) { ctx->pc = 0x16AF18u; }
    }
    if (ctx->pc != 0x16AF18u) { return; }
    ctx->pc = 0x16AF18u;
    // 0x16af18: 0x40902d
    ctx->pc = 0x16af18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af1c: 0x24020003
    ctx->pc = 0x16af1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16af20: 0x1642007e
    ctx->pc = 0x16AF20u;
    {
        const bool branch_taken_0x16af20 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x16AF24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16af20) {
            ctx->pc = 0x16B11Cu;
            goto label_16b11c;
        }
    }
    ctx->pc = 0x16AF28u;
    // 0x16af28: 0x3c020023
    ctx->pc = 0x16af28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16af2c: 0x101880
    ctx->pc = 0x16af2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16af30: 0x2442c918
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16af34: 0x621821
    ctx->pc = 0x16af34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af38: 0x8c710000
    ctx->pc = 0x16af38u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16af3c: 0x8e220008
    ctx->pc = 0x16af3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16af40: 0x14400042
    ctx->pc = 0x16AF40u;
    {
        const bool branch_taken_0x16af40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AF44u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 278));
        if (branch_taken_0x16af40) {
            ctx->pc = 0x16B04Cu;
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16AF48u;
    // 0x16af48: 0x3c13002e
    ctx->pc = 0x16af48u;
    SET_GPR_U32(ctx, 19, ((uint32_t)46 << 16));
    // 0x16af4c: 0x3c05002c
    ctx->pc = 0x16af4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x16af50: 0x8e64f0a4
    ctx->pc = 0x16af50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294963364)));
    // 0x16af54: 0x24a592e0
    ctx->pc = 0x16af54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x16af58: 0xc050c6a
    ctx->pc = 0x16AF58u;
    SET_GPR_U32(ctx, 31, 0x16AF60u);
    ctx->pc = 0x16AF5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF60u; }
        else if (ctx->pc != 0x16AF60u) { ctx->pc = 0x16AF60u; }
    }
    if (ctx->pc != 0x16AF60u) { return; }
    ctx->pc = 0x16AF60u;
    // 0x16af60: 0x10400003
    ctx->pc = 0x16AF60u;
    {
        const bool branch_taken_0x16af60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AF64u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16af60) {
            ctx->pc = 0x16AF70u;
            goto label_16af70;
        }
    }
    ctx->pc = 0x16AF68u;
    // 0x16af68: 0x10000011
    ctx->pc = 0x16AF68u;
    {
        const bool branch_taken_0x16af68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AF6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939368));
        if (branch_taken_0x16af68) {
            ctx->pc = 0x16AFB0u;
            goto label_16afb0;
        }
    }
    ctx->pc = 0x16AF70u;
label_16af70:
    // 0x16af70: 0x8e67f0a4
    ctx->pc = 0x16af70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 4294963364)));
    // 0x16af74: 0x3c060001
    ctx->pc = 0x16af74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x16af78: 0x90e50007
    ctx->pc = 0x16af78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x16af7c: 0x90e30006
    ctx->pc = 0x16af7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x16af80: 0x90e40005
    ctx->pc = 0x16af80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x16af84: 0x52e00
    ctx->pc = 0x16af84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16af88: 0x90e20004
    ctx->pc = 0x16af88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16af8c: 0x31c00
    ctx->pc = 0x16af8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16af90: 0x42200
    ctx->pc = 0x16af90u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16af94: 0x451025
    ctx->pc = 0x16af94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16af98: 0x641825
    ctx->pc = 0x16af98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16af9c: 0x431025
    ctx->pc = 0x16af9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16afa0: 0xc2302a
    ctx->pc = 0x16afa0u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x16afa4: 0x10c00008
    ctx->pc = 0x16AFA4u;
    {
        const bool branch_taken_0x16afa4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AFA8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16afa4) {
            ctx->pc = 0x16AFC8u;
            goto label_16afc8;
        }
    }
    ctx->pc = 0x16AFACu;
    // 0x16afac: 0x24849320
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939424));
label_16afb0:
    // 0x16afb0: 0xc05a854
    ctx->pc = 0x16AFB0u;
    SET_GPR_U32(ctx, 31, 0x16AFB8u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFB8u; }
        else if (ctx->pc != 0x16AFB8u) { ctx->pc = 0x16AFB8u; }
    }
    if (ctx->pc != 0x16AFB8u) { return; }
    ctx->pc = 0x16AFB8u;
    // 0x16afb8: 0xc05ab86
    ctx->pc = 0x16AFB8u;
    SET_GPR_U32(ctx, 31, 0x16AFC0u);
    ctx->pc = 0x16AE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CloseLdptnwHn_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFC0u; }
        else if (ctx->pc != 0x16AFC0u) { ctx->pc = 0x16AFC0u; }
    }
    if (ctx->pc != 0x16AFC0u) { return; }
    ctx->pc = 0x16AFC0u;
    // 0x16afc0: 0x10000056
    ctx->pc = 0x16AFC0u;
    {
        const bool branch_taken_0x16afc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AFC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x16afc0) {
            ctx->pc = 0x16B11Cu;
            goto label_16b11c;
        }
    }
    ctx->pc = 0x16AFC8u;
label_16afc8:
    // 0x16afc8: 0x90e20005
    ctx->pc = 0x16afc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x16afcc: 0x2406ffff
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16afd0: 0x90e30004
    ctx->pc = 0x16afd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16afd4: 0x240b0003
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16afd8: 0x21200
    ctx->pc = 0x16afd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16afdc: 0x621825
    ctx->pc = 0x16afdcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16afe0: 0x60202d
    ctx->pc = 0x16afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afe4: 0xa623000c
    ctx->pc = 0x16afe4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16afe8: 0x2482008c
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 140));
    // 0x16afec: 0xae240008
    ctx->pc = 0x16afecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x16aff0: 0x21042
    ctx->pc = 0x16aff0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x16aff4: 0x21080
    ctx->pc = 0x16aff4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16aff8: 0xae220004
    ctx->pc = 0x16aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16affc: 0x90e50009
    ctx->pc = 0x16affcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x16b000: 0x90e4000b
    ctx->pc = 0x16b000u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x16b004: 0x90e2000a
    ctx->pc = 0x16b004u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x16b008: 0x52a00
    ctx->pc = 0x16b008u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x16b00c: 0x90e30008
    ctx->pc = 0x16b00cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x16b010: 0x42600
    ctx->pc = 0x16b010u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x16b014: 0x21400
    ctx->pc = 0x16b014u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x16b018: 0x451025
    ctx->pc = 0x16b018u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b01c: 0x641825
    ctx->pc = 0x16b01cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b020: 0x621825
    ctx->pc = 0x16b020u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b024: 0xc3302a
    ctx->pc = 0x16b024u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x16b028: 0x246207ff
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x16b02c: 0x66100b
    ctx->pc = 0x16b02cu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16b030: 0x212c3
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16b034: 0x10000007
    ctx->pc = 0x16B034u;
    {
        const bool branch_taken_0x16b034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B038u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16b034) {
            ctx->pc = 0x16B054u;
            goto label_16b054;
        }
    }
    ctx->pc = 0x16B03Cu;
label_16b03c:
    // 0x16b03c: 0xc05ab86
    ctx->pc = 0x16B03Cu;
    SET_GPR_U32(ctx, 31, 0x16B044u);
    ctx->pc = 0x16B040u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x16AE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CloseLdptnwHn_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B044u; }
        else if (ctx->pc != 0x16B044u) { ctx->pc = 0x16B044u; }
    }
    if (ctx->pc != 0x16B044u) { return; }
    ctx->pc = 0x16B044u;
    // 0x16b044: 0x10000027
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B0E4u;
            goto label_16b0e4;
        }
    }
    ctx->pc = 0x16B04Cu;
label_16b04c:
    // 0x16b04c: 0x240b0001
    ctx->pc = 0x16b04cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b050: 0x3c13002e
    ctx->pc = 0x16b050u;
    SET_GPR_U32(ctx, 19, ((uint32_t)46 << 16));
label_16b054:
    // 0x16b054: 0x29700200
    ctx->pc = 0x16b054u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 11), 512));
    // 0x16b058: 0x12000024
    ctx->pc = 0x16B058u;
    {
        const bool branch_taken_0x16b058 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B05Cu;
        SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
        if (branch_taken_0x16b058) {
            ctx->pc = 0x16B0ECu;
            goto label_16b0ec;
        }
    }
    ctx->pc = 0x16B060u;
    // 0x16b060: 0x8e62f0a4
    ctx->pc = 0x16b060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963364)));
    // 0x16b064: 0x0
    ctx->pc = 0x16b064u;
    // NOP
label_16b068:
    // 0x16b068: 0xb2080
    ctx->pc = 0x16b068u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 2));
    // 0x16b06c: 0x8d86dd44
    ctx->pc = 0x16b06cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 12), 4294958404)));
    // 0x16b070: 0x2409ffff
    ctx->pc = 0x16b070u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b074: 0x822021
    ctx->pc = 0x16b074u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b078: 0x8e2a0008
    ctx->pc = 0x16b078u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b07c: 0x90870001
    ctx->pc = 0x16b07cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16b080: 0x64040
    ctx->pc = 0x16b080u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 1));
    // 0x16b084: 0x90850003
    ctx->pc = 0x16b084u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x16b088: 0x24c60001
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16b08c: 0x90830002
    ctx->pc = 0x16b08cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16b090: 0x73a00
    ctx->pc = 0x16b090u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x16b094: 0x90820000
    ctx->pc = 0x16b094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b098: 0x52e00
    ctx->pc = 0x16b098u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16b09c: 0x31c00
    ctx->pc = 0x16b09cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b0a0: 0xad86dd44
    ctx->pc = 0x16b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294958404), GPR_U32(ctx, 6));
    // 0x16b0a4: 0x671825
    ctx->pc = 0x16b0a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16b0a8: 0x451025
    ctx->pc = 0x16b0a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b0ac: 0x431025
    ctx->pc = 0x16b0acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b0b0: 0x1154021
    ctx->pc = 0x16b0b0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    // 0x16b0b4: 0x244307ff
    ctx->pc = 0x16b0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16b0b8: 0xca302a
    ctx->pc = 0x16b0b8u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 10)));
    // 0x16b0bc: 0x24420ffe
    ctx->pc = 0x16b0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16b0c0: 0x123482a
    ctx->pc = 0x16b0c0u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x16b0c4: 0x69100b
    ctx->pc = 0x16b0c4u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16b0c8: 0x212c3
    ctx->pc = 0x16b0c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16b0cc: 0x10c0ffdb
    ctx->pc = 0x16B0CCu;
    {
        const bool branch_taken_0x16b0cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B0D0u;
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16b0cc) {
            ctx->pc = 0x16B03Cu;
            goto label_16b03c;
        }
    }
    ctx->pc = 0x16B0D4u;
    // 0x16b0d4: 0x256b0002
    ctx->pc = 0x16b0d4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
    // 0x16b0d8: 0x29700200
    ctx->pc = 0x16b0d8u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 11), 512));
    // 0x16b0dc: 0x1600ffe2
    ctx->pc = 0x16B0DCu;
    {
        const bool branch_taken_0x16b0dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B0E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963364)));
        if (branch_taken_0x16b0dc) {
            ctx->pc = 0x16B068u;
            goto label_16b068;
        }
    }
    ctx->pc = 0x16B0E4u;
label_16b0e4:
    // 0x16b0e4: 0x1600000d
    ctx->pc = 0x16B0E4u;
    {
        const bool branch_taken_0x16b0e4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B0E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b0e4) {
            ctx->pc = 0x16B11Cu;
            goto label_16b11c;
        }
    }
    ctx->pc = 0x16B0ECu;
label_16b0ec:
    // 0x16b0ec: 0x8ec4dd48
    ctx->pc = 0x16b0ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 4294958408)));
    // 0x16b0f0: 0x24050001
    ctx->pc = 0x16b0f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b0f4: 0xc05aeba
    ctx->pc = 0x16B0F4u;
    SET_GPR_U32(ctx, 31, 0x16B0FCu);
    ctx->pc = 0x16B0F8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 4294963364)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0FCu; }
        else if (ctx->pc != 0x16B0FCu) { ctx->pc = 0x16B0FCu; }
    }
    if (ctx->pc != 0x16B0FCu) { return; }
    ctx->pc = 0x16B0FCu;
    // 0x16b0fc: 0x4410005
    ctx->pc = 0x16B0FCu;
    {
        const bool branch_taken_0x16b0fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16B100u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294958408)));
        if (branch_taken_0x16b0fc) {
            ctx->pc = 0x16B114u;
            goto label_16b114;
        }
    }
    ctx->pc = 0x16B104u;
    // 0x16b104: 0xc05ab86
    ctx->pc = 0x16B104u;
    SET_GPR_U32(ctx, 31, 0x16B10Cu);
    ctx->pc = 0x16B108u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x16AE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CloseLdptnwHn_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B10Cu; }
        else if (ctx->pc != 0x16B10Cu) { ctx->pc = 0x16B10Cu; }
    }
    if (ctx->pc != 0x16B10Cu) { return; }
    ctx->pc = 0x16B10Cu;
    // 0x16b10c: 0x10000003
    ctx->pc = 0x16B10Cu;
    {
        const bool branch_taken_0x16b10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b10c) {
            ctx->pc = 0x16B11Cu;
            goto label_16b11c;
        }
    }
    ctx->pc = 0x16B114u;
label_16b114:
    // 0x16b114: 0x80520001
    ctx->pc = 0x16b114u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x16b118: 0x240102d
    ctx->pc = 0x16b118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b11c:
    // 0x16b11c: 0xdfbf0070
    ctx->pc = 0x16b11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b120: 0xdfb60060
    ctx->pc = 0x16b120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b124: 0xdfb50050
    ctx->pc = 0x16b124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b128: 0xdfb40040
    ctx->pc = 0x16b128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b12c: 0xdfb30030
    ctx->pc = 0x16b12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b130: 0xdfb20020
    ctx->pc = 0x16b130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b134: 0xdfb10010
    ctx->pc = 0x16b134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b138: 0xdfb00000
    ctx->pc = 0x16b138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b13c: 0x3e00008
    ctx->pc = 0x16B13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AF08u: goto label_16af08;
            case 0x16AF70u: goto label_16af70;
            case 0x16AFB0u: goto label_16afb0;
            case 0x16AFC8u: goto label_16afc8;
            case 0x16B03Cu: goto label_16b03c;
            case 0x16B04Cu: goto label_16b04c;
            case 0x16B054u: goto label_16b054;
            case 0x16B068u: goto label_16b068;
            case 0x16B0E4u: goto label_16b0e4;
            case 0x16B0ECu: goto label_16b0ec;
            case 0x16B114u: goto label_16b114;
            case 0x16B11Cu: goto label_16b11c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B144u;
}
