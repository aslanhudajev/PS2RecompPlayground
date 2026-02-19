#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitHeader
// Address: 0x291ad8 - 0x291d2c
void CritterInitHeader_0x291ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291ad8u;

    // 0x291ad8: 0x27bdffa0
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291adc: 0xffbf0050
    ctx->pc = 0x291adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x291ae0: 0xffb40040
    ctx->pc = 0x291ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x291ae4: 0xffb30030
    ctx->pc = 0x291ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x291ae8: 0xffb20020
    ctx->pc = 0x291ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291aec: 0xffb10010
    ctx->pc = 0x291aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x291af0: 0xffb00000
    ctx->pc = 0x291af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291af4: 0x80882d
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291af8: 0x8e220000
    ctx->pc = 0x291af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291afc: 0x5440003e
    ctx->pc = 0x291AFCu;
    {
        const bool branch_taken_0x291afc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x291afc) {
            ctx->pc = 0x291B00u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->pc = 0x291BF8u;
            goto label_291bf8;
        }
    }
    ctx->pc = 0x291B04u;
    // 0x291b04: 0x26300004
    ctx->pc = 0x291b04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4));
    // 0x291b08: 0xc0b5116
    ctx->pc = 0x291B08u;
    SET_GPR_U32(ctx, 31, 0x291B10u);
    ctx->pc = 0x291B0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupWad_0x2d4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B10u; }
    }
    if (ctx->pc != 0x291B10u) { return; }
    ctx->pc = 0x291B10u;
    // 0x291b10: 0x200202d
    ctx->pc = 0x291b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b14: 0x3c055346
    ctx->pc = 0x291b14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21318 << 16));
    // 0x291b18: 0x34a55858
    ctx->pc = 0x291b18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 22616));
    // 0x291b1c: 0xc0b514a
    ctx->pc = 0x291B1Cu;
    SET_GPR_U32(ctx, 31, 0x291B24u);
    ctx->pc = 0x291B20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 72));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B24u; }
    }
    if (ctx->pc != 0x291B24u) { return; }
    ctx->pc = 0x291B24u;
    // 0x291b24: 0xae22004c
    ctx->pc = 0x291b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x291b28: 0x200202d
    ctx->pc = 0x291b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b2c: 0x3c054441
    ctx->pc = 0x291b2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)17473 << 16));
    // 0x291b30: 0x34a54d47
    ctx->pc = 0x291b30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 19783));
    // 0x291b34: 0xc0b514a
    ctx->pc = 0x291B34u;
    SET_GPR_U32(ctx, 31, 0x291B3Cu);
    ctx->pc = 0x291B38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B3Cu; }
    }
    if (ctx->pc != 0x291B3Cu) { return; }
    ctx->pc = 0x291B3Cu;
    // 0x291b3c: 0xae220044
    ctx->pc = 0x291b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x291b40: 0x200202d
    ctx->pc = 0x291b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b44: 0x3c054d4f
    ctx->pc = 0x291b44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19791 << 16));
    // 0x291b48: 0x34a55645
    ctx->pc = 0x291b48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 22085));
    // 0x291b4c: 0xc0b514a
    ctx->pc = 0x291B4Cu;
    SET_GPR_U32(ctx, 31, 0x291B54u);
    ctx->pc = 0x291B50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 40));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B54u; }
    }
    if (ctx->pc != 0x291B54u) { return; }
    ctx->pc = 0x291B54u;
    // 0x291b54: 0xae22002c
    ctx->pc = 0x291b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x291b58: 0x200202d
    ctx->pc = 0x291b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b5c: 0x3c055054
    ctx->pc = 0x291b5cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)20564 << 16));
    // 0x291b60: 0x34a5524e
    ctx->pc = 0x291b60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21070));
    // 0x291b64: 0xc0b514a
    ctx->pc = 0x291B64u;
    SET_GPR_U32(ctx, 31, 0x291B6Cu);
    ctx->pc = 0x291B68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B6Cu; }
    }
    if (ctx->pc != 0x291B6Cu) { return; }
    ctx->pc = 0x291B6Cu;
    // 0x291b6c: 0xae220034
    ctx->pc = 0x291b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x291b70: 0x200202d
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b74: 0x3c054e4f
    ctx->pc = 0x291b74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20047 << 16));
    // 0x291b78: 0x34a54445
    ctx->pc = 0x291b78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17477));
    // 0x291b7c: 0xc0b514a
    ctx->pc = 0x291B7Cu;
    SET_GPR_U32(ctx, 31, 0x291B84u);
    ctx->pc = 0x291B80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 56));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B84u; }
    }
    if (ctx->pc != 0x291B84u) { return; }
    ctx->pc = 0x291B84u;
    // 0x291b84: 0xae22003c
    ctx->pc = 0x291b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x291b88: 0x200202d
    ctx->pc = 0x291b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b8c: 0x3c054445
    ctx->pc = 0x291b8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)17477 << 16));
    // 0x291b90: 0x34a55343
    ctx->pc = 0x291b90u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21315));
    // 0x291b94: 0xc0b514a
    ctx->pc = 0x291B94u;
    SET_GPR_U32(ctx, 31, 0x291B9Cu);
    ctx->pc = 0x291B98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 24));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B9Cu; }
    }
    if (ctx->pc != 0x291B9Cu) { return; }
    ctx->pc = 0x291B9Cu;
    // 0x291b9c: 0xae22001c
    ctx->pc = 0x291b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x291ba0: 0x200202d
    ctx->pc = 0x291ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ba4: 0x3c055459
    ctx->pc = 0x291ba4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21593 << 16));
    // 0x291ba8: 0x34a55045
    ctx->pc = 0x291ba8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 20549));
    // 0x291bac: 0xc0b514a
    ctx->pc = 0x291BACu;
    SET_GPR_U32(ctx, 31, 0x291BB4u);
    ctx->pc = 0x291BB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BB4u; }
    }
    if (ctx->pc != 0x291BB4u) { return; }
    ctx->pc = 0x291BB4u;
    // 0x291bb4: 0xae220014
    ctx->pc = 0x291bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x291bb8: 0x200202d
    ctx->pc = 0x291bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bbc: 0x3c054144
    ctx->pc = 0x291bbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16708 << 16));
    // 0x291bc0: 0x34a54441
    ctx->pc = 0x291bc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17473));
    // 0x291bc4: 0xc0b514a
    ctx->pc = 0x291BC4u;
    SET_GPR_U32(ctx, 31, 0x291BCCu);
    ctx->pc = 0x291BC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BCCu; }
    }
    if (ctx->pc != 0x291BCCu) { return; }
    ctx->pc = 0x291BCCu;
    // 0x291bcc: 0xae220024
    ctx->pc = 0x291bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x291bd0: 0x8e220014
    ctx->pc = 0x291bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x291bd4: 0x14400006
    ctx->pc = 0x291BD4u;
    {
        const bool branch_taken_0x291bd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291BD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x291bd4) {
            ctx->pc = 0x291BF0u;
            goto label_291bf0;
        }
    }
    ctx->pc = 0x291BDCu;
    // 0x291bdc: 0x3c04003b
    ctx->pc = 0x291bdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x291be0: 0x2484e030
    ctx->pc = 0x291be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959152));
    // 0x291be4: 0xc0b49a6
    ctx->pc = 0x291BE4u;
    SET_GPR_U32(ctx, 31, 0x291BECu);
    ctx->pc = 0x291BE8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BECu; }
    }
    if (ctx->pc != 0x291BECu) { return; }
    ctx->pc = 0x291BECu;
    // 0x291bec: 0x24020001
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_291bf0:
    // 0x291bf0: 0xae220000
    ctx->pc = 0x291bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291bf4: 0x8e220018
    ctx->pc = 0x291bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_291bf8:
    // 0x291bf8: 0x1840000d
    ctx->pc = 0x291BF8u;
    {
        const bool branch_taken_0x291bf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291BFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291bf8) {
            ctx->pc = 0x291C30u;
            goto label_291c30;
        }
    }
    ctx->pc = 0x291C00u;
    // 0x291c00: 0x24050030
    ctx->pc = 0x291c00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x291c04: 0x2404ffff
    ctx->pc = 0x291c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291c08: 0x8e23001c
    ctx->pc = 0x291c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x291c0c: 0x0
    ctx->pc = 0x291c0cu;
    // NOP
label_291c10:
    // 0x291c10: 0x2051018
    ctx->pc = 0x291c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291c14: 0x431021
    ctx->pc = 0x291c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291c18: 0xa4440022
    ctx->pc = 0x291c18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x291c1c: 0x26100001
    ctx->pc = 0x291c1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x291c20: 0x8e220018
    ctx->pc = 0x291c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x291c24: 0x202102a
    ctx->pc = 0x291c24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x291c28: 0x5440fff9
    ctx->pc = 0x291C28u;
    {
        const bool branch_taken_0x291c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x291c28) {
            ctx->pc = 0x291C2Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x291C10u;
            goto label_291c10;
        }
    }
    ctx->pc = 0x291C30u;
label_291c30:
    // 0x291c30: 0x8e220010
    ctx->pc = 0x291c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x291c34: 0x1840000c
    ctx->pc = 0x291C34u;
    {
        const bool branch_taken_0x291c34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291C38u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291c34) {
            ctx->pc = 0x291C68u;
            goto label_291c68;
        }
    }
    ctx->pc = 0x291C3Cu;
    // 0x291c3c: 0x24040140
    ctx->pc = 0x291c3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x291c40: 0x8e230014
    ctx->pc = 0x291c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x291c44: 0x0
    ctx->pc = 0x291c44u;
    // NOP
label_291c48:
    // 0x291c48: 0x2041018
    ctx->pc = 0x291c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291c4c: 0x431021
    ctx->pc = 0x291c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291c50: 0xac400134
    ctx->pc = 0x291c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x291c54: 0x26100001
    ctx->pc = 0x291c54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x291c58: 0x8e220010
    ctx->pc = 0x291c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x291c5c: 0x202102a
    ctx->pc = 0x291c5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x291c60: 0x5440fff9
    ctx->pc = 0x291C60u;
    {
        const bool branch_taken_0x291c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x291c60) {
            ctx->pc = 0x291C64u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291C68u;
label_291c68:
    // 0x291c68: 0x8e220020
    ctx->pc = 0x291c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x291c6c: 0x18400027
    ctx->pc = 0x291C6Cu;
    {
        const bool branch_taken_0x291c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291C70u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291c6c) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291C74u;
    // 0x291c74: 0x24140030
    ctx->pc = 0x291c74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x291c78: 0x3c13003b
    ctx->pc = 0x291c78u;
    SET_GPR_U32(ctx, 19, ((uint32_t)59 << 16));
    // 0x291c7c: 0x24120140
    ctx->pc = 0x291c7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 320));
    // 0x291c80: 0x2141818
    ctx->pc = 0x291c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291c84: 0x0
    ctx->pc = 0x291c84u;
    // NOP
label_291c88:
    // 0x291c88: 0x8e220024
    ctx->pc = 0x291c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x291c8c: 0x622021
    ctx->pc = 0x291c8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291c90: 0x84850000
    ctx->pc = 0x291c90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291c94: 0x8e260010
    ctx->pc = 0x291c94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x291c98: 0xc5102a
    ctx->pc = 0x291c98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x291c9c: 0x50400005
    ctx->pc = 0x291C9Cu;
    {
        const bool branch_taken_0x291c9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x291c9c) {
            ctx->pc = 0x291CA0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x291CB4u;
            goto label_291cb4;
        }
    }
    ctx->pc = 0x291CA4u;
    // 0x291ca4: 0xc0b492e
    ctx->pc = 0x291CA4u;
    SET_GPR_U32(ctx, 31, 0x291CACu);
    ctx->pc = 0x291CA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294959184));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CACu; }
    }
    if (ctx->pc != 0x291CACu) { return; }
    ctx->pc = 0x291CACu;
    // 0x291cac: 0x10000013
    ctx->pc = 0x291CACu;
    {
        const bool branch_taken_0x291cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291CB0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x291cac) {
            ctx->pc = 0x291CFCu;
            goto label_291cfc;
        }
    }
    ctx->pc = 0x291CB4u;
label_291cb4:
    // 0x291cb4: 0x521018
    ctx->pc = 0x291cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291cb8: 0x8e230014
    ctx->pc = 0x291cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x291cbc: 0x431021
    ctx->pc = 0x291cbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291cc0: 0x8c430134
    ctx->pc = 0x291cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x291cc4: 0x5060000c
    ctx->pc = 0x291CC4u;
    {
        const bool branch_taken_0x291cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x291cc4) {
            ctx->pc = 0x291CC8u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 4));
            ctx->pc = 0x291CF8u;
            goto label_291cf8;
        }
    }
    ctx->pc = 0x291CCCu;
    // 0x291ccc: 0x8c620008
    ctx->pc = 0x291cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291cd0: 0x50400009
    ctx->pc = 0x291CD0u;
    {
        const bool branch_taken_0x291cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x291cd0) {
            ctx->pc = 0x291CD4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->pc = 0x291CF8u;
            goto label_291cf8;
        }
    }
    ctx->pc = 0x291CD8u;
label_291cd8:
    // 0x291cd8: 0x8c630008
    ctx->pc = 0x291cd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291cdc: 0x8c620008
    ctx->pc = 0x291cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291ce0: 0x0
    ctx->pc = 0x291ce0u;
    // NOP
    // 0x291ce4: 0x0
    ctx->pc = 0x291ce4u;
    // NOP
    // 0x291ce8: 0x0
    ctx->pc = 0x291ce8u;
    // NOP
    // 0x291cec: 0x1440fffa
    ctx->pc = 0x291CECu;
    {
        const bool branch_taken_0x291cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x291cec) {
            ctx->pc = 0x291CD8u;
            goto label_291cd8;
        }
    }
    ctx->pc = 0x291CF4u;
    // 0x291cf4: 0xac640008
    ctx->pc = 0x291cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_291cf8:
    // 0x291cf8: 0x26100001
    ctx->pc = 0x291cf8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_291cfc:
    // 0x291cfc: 0x8e220020
    ctx->pc = 0x291cfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x291d00: 0x202102a
    ctx->pc = 0x291d00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x291d04: 0x1440ffe0
    ctx->pc = 0x291D04u;
    {
        const bool branch_taken_0x291d04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291D08u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x291d04) {
            ctx->pc = 0x291C88u;
            goto label_291c88;
        }
    }
    ctx->pc = 0x291D0Cu;
label_291d0c:
    // 0x291d0c: 0xdfbf0050
    ctx->pc = 0x291d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291d10: 0xdfb40040
    ctx->pc = 0x291d10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291d14: 0xdfb30030
    ctx->pc = 0x291d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291d18: 0xdfb20020
    ctx->pc = 0x291d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291d1c: 0xdfb10010
    ctx->pc = 0x291d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d20: 0xdfb00000
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d24: 0x3e00008
    ctx->pc = 0x291D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291BF0u: goto label_291bf0;
            case 0x291BF8u: goto label_291bf8;
            case 0x291C10u: goto label_291c10;
            case 0x291C30u: goto label_291c30;
            case 0x291C48u: goto label_291c48;
            case 0x291C68u: goto label_291c68;
            case 0x291C88u: goto label_291c88;
            case 0x291CB4u: goto label_291cb4;
            case 0x291CD8u: goto label_291cd8;
            case 0x291CF8u: goto label_291cf8;
            case 0x291CFCu: goto label_291cfc;
            case 0x291D0Cu: goto label_291d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291D2Cu;
}
