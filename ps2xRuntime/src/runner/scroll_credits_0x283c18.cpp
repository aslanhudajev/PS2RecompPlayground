#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: scroll_credits
// Address: 0x283c18 - 0x283f28
void scroll_credits_0x283c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x283c18u;

    // 0x283c18: 0x27bdff60
    ctx->pc = 0x283c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x283c1c: 0xffbf0090
    ctx->pc = 0x283c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x283c20: 0xffbe0080
    ctx->pc = 0x283c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x283c24: 0xffb70070
    ctx->pc = 0x283c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x283c28: 0xffb60060
    ctx->pc = 0x283c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x283c2c: 0xffb50050
    ctx->pc = 0x283c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x283c30: 0xffb40040
    ctx->pc = 0x283c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x283c34: 0xffb30030
    ctx->pc = 0x283c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x283c38: 0xffb20020
    ctx->pc = 0x283c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x283c3c: 0xffb10010
    ctx->pc = 0x283c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283c40: 0xffb00000
    ctx->pc = 0x283c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283c44: 0x3c02003c
    ctx->pc = 0x283c44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x283c48: 0x8c513b48
    ctx->pc = 0x283c48u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 15176)));
    // 0x283c4c: 0xa82d
    ctx->pc = 0x283c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c50: 0x24140001
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283c54: 0x982d
    ctx->pc = 0x283c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283c58: 0x620002e
    ctx->pc = 0x283C58u;
    {
        const bool branch_taken_0x283c58 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x283C5Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283c58) {
            ctx->pc = 0x283D14u;
            goto label_283d14;
        }
    }
    ctx->pc = 0x283C60u;
    // 0x283c60: 0x241e0180
    ctx->pc = 0x283c60u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 384));
    // 0x283c64: 0x241700ff
    ctx->pc = 0x283c64u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 255));
    // 0x283c68: 0x24160010
    ctx->pc = 0x283c68u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 16));
    // 0x283c6c: 0x2a220180
    ctx->pc = 0x283c6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
label_283c70:
    // 0x283c70: 0x10400022
    ctx->pc = 0x283C70u;
    {
        const bool branch_taken_0x283c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283C74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x283c70) {
            ctx->pc = 0x283CFCu;
            goto label_283cfc;
        }
    }
    ctx->pc = 0x283C78u;
    // 0x283c78: 0x3c030035
    ctx->pc = 0x283c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x283c7c: 0x2463a0a0
    ctx->pc = 0x283c7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294942880));
    // 0x283c80: 0x431021
    ctx->pc = 0x283c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283c84: 0x24040020
    ctx->pc = 0x283c84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x283c88: 0x2403017f
    ctx->pc = 0x283c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 383));
    // 0x283c8c: 0x712823
    ctx->pc = 0x283c8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x283c90: 0x2406000d
    ctx->pc = 0x283c90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x283c94: 0x3c0700ff
    ctx->pc = 0x283c94u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x283c98: 0x34e7ffff
    ctx->pc = 0x283c98u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x283c9c: 0xc0804c8
    ctx->pc = 0x283C9Cu;
    SET_GPR_U32(ctx, 31, 0x283CA4u);
    ctx->pc = 0x283CA0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283CA4u; }
    }
    if (ctx->pc != 0x283CA4u) { return; }
    ctx->pc = 0x283CA4u;
    // 0x283ca4: 0x40802d
    ctx->pc = 0x283ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ca8: 0x52000015
    ctx->pc = 0x283CA8u;
    {
        const bool branch_taken_0x283ca8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x283ca8) {
            ctx->pc = 0x283CACu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x283D00u;
            goto label_283d00;
        }
    }
    ctx->pc = 0x283CB0u;
    // 0x283cb0: 0x3d12823
    ctx->pc = 0x283cb0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x283cb4: 0x28a20010
    ctx->pc = 0x283cb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x283cb8: 0x10400004
    ctx->pc = 0x283CB8u;
    {
        const bool branch_taken_0x283cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283CBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283cb8) {
            ctx->pc = 0x283CCCu;
            goto label_283ccc;
        }
    }
    ctx->pc = 0x283CC0u;
    // 0x283cc0: 0x52900
    ctx->pc = 0x283cc0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x283cc4: 0xc0b16c6
    ctx->pc = 0x283CC4u;
    SET_GPR_U32(ctx, 31, 0x283CCCu);
    ctx->pc = 0x283CC8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283CCCu; }
    }
    if (ctx->pc != 0x283CCCu) { return; }
    ctx->pc = 0x283CCCu;
label_283ccc:
    // 0x283ccc: 0x2a220010
    ctx->pc = 0x283cccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x283cd0: 0x10400004
    ctx->pc = 0x283CD0u;
    {
        const bool branch_taken_0x283cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283CD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283cd0) {
            ctx->pc = 0x283CE4u;
            goto label_283ce4;
        }
    }
    ctx->pc = 0x283CD8u;
    // 0x283cd8: 0x2d12823
    ctx->pc = 0x283cd8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x283cdc: 0xc0b16c6
    ctx->pc = 0x283CDCu;
    SET_GPR_U32(ctx, 31, 0x283CE4u);
    ctx->pc = 0x283CE0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283CE4u; }
    }
    if (ctx->pc != 0x283CE4u) { return; }
    ctx->pc = 0x283CE4u;
label_283ce4:
    // 0x283ce4: 0x24020022
    ctx->pc = 0x283ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x283ce8: 0x16420004
    ctx->pc = 0x283CE8u;
    {
        const bool branch_taken_0x283ce8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x283CECu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283ce8) {
            ctx->pc = 0x283CFCu;
            goto label_283cfc;
        }
    }
    ctx->pc = 0x283CF0u;
    // 0x283cf0: 0x2a2300c1
    ctx->pc = 0x283cf0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 193));
    // 0x283cf4: 0x24020001
    ctx->pc = 0x283cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283cf8: 0x43980a
    ctx->pc = 0x283cf8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
label_283cfc:
    // 0x283cfc: 0x26520001
    ctx->pc = 0x283cfcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_283d00:
    // 0x283d00: 0x2e420023
    ctx->pc = 0x283d00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 35));
    // 0x283d04: 0x10400003
    ctx->pc = 0x283D04u;
    {
        const bool branch_taken_0x283d04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283D08u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967275));
        if (branch_taken_0x283d04) {
            ctx->pc = 0x283D14u;
            goto label_283d14;
        }
    }
    ctx->pc = 0x283D0Cu;
    // 0x283d0c: 0x621ffd8
    ctx->pc = 0x283D0Cu;
    {
        const bool branch_taken_0x283d0c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x283D10u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
        if (branch_taken_0x283d0c) {
            ctx->pc = 0x283C70u;
            goto label_283c70;
        }
    }
    ctx->pc = 0x283D14u;
label_283d14:
    // 0x283d14: 0x56600004
    ctx->pc = 0x283D14u;
    {
        const bool branch_taken_0x283d14 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x283d14) {
            ctx->pc = 0x283D18u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x283D28u;
            goto label_283d28;
        }
    }
    ctx->pc = 0x283D1Cu;
    // 0x283d1c: 0x12800003
    ctx->pc = 0x283D1Cu;
    {
        const bool branch_taken_0x283d1c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x283D20u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283d1c) {
            ctx->pc = 0x283D2Cu;
            goto label_283d2c;
        }
    }
    ctx->pc = 0x283D24u;
    // 0x283d24: 0x26b50001
    ctx->pc = 0x283d24u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_283d28:
    // 0x283d28: 0x982d
    ctx->pc = 0x283d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283d2c:
    // 0x283d2c: 0x6200032
    ctx->pc = 0x283D2Cu;
    {
        const bool branch_taken_0x283d2c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x283D30u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283d2c) {
            ctx->pc = 0x283DF8u;
            goto label_283df8;
        }
    }
    ctx->pc = 0x283D34u;
    // 0x283d34: 0x241e0180
    ctx->pc = 0x283d34u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 384));
    // 0x283d38: 0x241700ff
    ctx->pc = 0x283d38u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 255));
    // 0x283d3c: 0x24160010
    ctx->pc = 0x283d3cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 16));
    // 0x283d40: 0x2a220180
    ctx->pc = 0x283d40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
    // 0x283d44: 0x0
    ctx->pc = 0x283d44u;
    // NOP
label_283d48:
    // 0x283d48: 0x10400025
    ctx->pc = 0x283D48u;
    {
        const bool branch_taken_0x283d48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283D4Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x283d48) {
            ctx->pc = 0x283DE0u;
            goto label_283de0;
        }
    }
    ctx->pc = 0x283D50u;
    // 0x283d50: 0x3c030035
    ctx->pc = 0x283d50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x283d54: 0x2463a130
    ctx->pc = 0x283d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x283d58: 0x431021
    ctx->pc = 0x283d58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283d5c: 0x24040020
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x283d60: 0x2403017f
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 383));
    // 0x283d64: 0x712823
    ctx->pc = 0x283d64u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x283d68: 0x2406000d
    ctx->pc = 0x283d68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x283d6c: 0x3c0700ff
    ctx->pc = 0x283d6cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x283d70: 0x34e7ffff
    ctx->pc = 0x283d70u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x283d74: 0x3c013f55
    ctx->pc = 0x283d74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16213 << 16));
    // 0x283d78: 0x34213f7d
    ctx->pc = 0x283d78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16253));
    // 0x283d7c: 0x44816000
    ctx->pc = 0x283d7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x283d80: 0xc080510
    ctx->pc = 0x283D80u;
    SET_GPR_U32(ctx, 31, 0x283D88u);
    ctx->pc = 0x283D84u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283D88u; }
    }
    if (ctx->pc != 0x283D88u) { return; }
    ctx->pc = 0x283D88u;
    // 0x283d88: 0x40802d
    ctx->pc = 0x283d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283d8c: 0x52000015
    ctx->pc = 0x283D8Cu;
    {
        const bool branch_taken_0x283d8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x283d8c) {
            ctx->pc = 0x283D90u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x283DE4u;
            goto label_283de4;
        }
    }
    ctx->pc = 0x283D94u;
    // 0x283d94: 0x3d12823
    ctx->pc = 0x283d94u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x283d98: 0x28a20010
    ctx->pc = 0x283d98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x283d9c: 0x10400004
    ctx->pc = 0x283D9Cu;
    {
        const bool branch_taken_0x283d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283DA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283d9c) {
            ctx->pc = 0x283DB0u;
            goto label_283db0;
        }
    }
    ctx->pc = 0x283DA4u;
    // 0x283da4: 0x52900
    ctx->pc = 0x283da4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x283da8: 0xc0b16c6
    ctx->pc = 0x283DA8u;
    SET_GPR_U32(ctx, 31, 0x283DB0u);
    ctx->pc = 0x283DACu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DB0u; }
    }
    if (ctx->pc != 0x283DB0u) { return; }
    ctx->pc = 0x283DB0u;
label_283db0:
    // 0x283db0: 0x2a220010
    ctx->pc = 0x283db0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x283db4: 0x10400004
    ctx->pc = 0x283DB4u;
    {
        const bool branch_taken_0x283db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283DB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283db4) {
            ctx->pc = 0x283DC8u;
            goto label_283dc8;
        }
    }
    ctx->pc = 0x283DBCu;
    // 0x283dbc: 0x2d12823
    ctx->pc = 0x283dbcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x283dc0: 0xc0b16c6
    ctx->pc = 0x283DC0u;
    SET_GPR_U32(ctx, 31, 0x283DC8u);
    ctx->pc = 0x283DC4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283DC8u; }
    }
    if (ctx->pc != 0x283DC8u) { return; }
    ctx->pc = 0x283DC8u;
label_283dc8:
    // 0x283dc8: 0x2402000f
    ctx->pc = 0x283dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x283dcc: 0x16420004
    ctx->pc = 0x283DCCu;
    {
        const bool branch_taken_0x283dcc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x283DD0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283dcc) {
            ctx->pc = 0x283DE0u;
            goto label_283de0;
        }
    }
    ctx->pc = 0x283DD4u;
    // 0x283dd4: 0x2a2300c1
    ctx->pc = 0x283dd4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 193));
    // 0x283dd8: 0x24020001
    ctx->pc = 0x283dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x283ddc: 0x43980a
    ctx->pc = 0x283ddcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
label_283de0:
    // 0x283de0: 0x26520001
    ctx->pc = 0x283de0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_283de4:
    // 0x283de4: 0x2e420010
    ctx->pc = 0x283de4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 16));
    // 0x283de8: 0x10400003
    ctx->pc = 0x283DE8u;
    {
        const bool branch_taken_0x283de8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283DECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967281));
        if (branch_taken_0x283de8) {
            ctx->pc = 0x283DF8u;
            goto label_283df8;
        }
    }
    ctx->pc = 0x283DF0u;
    // 0x283df0: 0x621ffd5
    ctx->pc = 0x283DF0u;
    {
        const bool branch_taken_0x283df0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x283DF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
        if (branch_taken_0x283df0) {
            ctx->pc = 0x283D48u;
            goto label_283d48;
        }
    }
    ctx->pc = 0x283DF8u;
label_283df8:
    // 0x283df8: 0x56600003
    ctx->pc = 0x283DF8u;
    {
        const bool branch_taken_0x283df8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x283df8) {
            ctx->pc = 0x283DFCu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283E00u;
    // 0x283e00: 0x56800001
    ctx->pc = 0x283E00u;
    {
        const bool branch_taken_0x283e00 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x283e00) {
            ctx->pc = 0x283E04u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x283E08u;
            goto label_283e08;
        }
    }
    ctx->pc = 0x283E08u;
label_283e08:
    // 0x283e08: 0x620002c
    ctx->pc = 0x283E08u;
    {
        const bool branch_taken_0x283e08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x283E0Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283e08) {
            ctx->pc = 0x283EBCu;
            goto label_283ebc;
        }
    }
    ctx->pc = 0x283E10u;
    // 0x283e10: 0x3c020035
    ctx->pc = 0x283e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x283e14: 0x245ea170
    ctx->pc = 0x283e14u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294943088));
    // 0x283e18: 0x24170180
    ctx->pc = 0x283e18u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 384));
    // 0x283e1c: 0x241600ff
    ctx->pc = 0x283e1cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 255));
    // 0x283e20: 0x24130010
    ctx->pc = 0x283e20u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 16));
    // 0x283e24: 0x2a220180
    ctx->pc = 0x283e24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
label_283e28:
    // 0x283e28: 0x1040001e
    ctx->pc = 0x283E28u;
    {
        const bool branch_taken_0x283e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283E2Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x283e28) {
            ctx->pc = 0x283EA4u;
            goto label_283ea4;
        }
    }
    ctx->pc = 0x283E30u;
    // 0x283e30: 0x5e1021
    ctx->pc = 0x283e30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x283e34: 0x24040020
    ctx->pc = 0x283e34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x283e38: 0x2403017f
    ctx->pc = 0x283e38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 383));
    // 0x283e3c: 0x712823
    ctx->pc = 0x283e3cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x283e40: 0x2406000d
    ctx->pc = 0x283e40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x283e44: 0x3c0700ff
    ctx->pc = 0x283e44u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x283e48: 0x34e7ffff
    ctx->pc = 0x283e48u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x283e4c: 0x3c013f55
    ctx->pc = 0x283e4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16213 << 16));
    // 0x283e50: 0x34213f7d
    ctx->pc = 0x283e50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16253));
    // 0x283e54: 0x44816000
    ctx->pc = 0x283e54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x283e58: 0xc080510
    ctx->pc = 0x283E58u;
    SET_GPR_U32(ctx, 31, 0x283E60u);
    ctx->pc = 0x283E5Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E60u; }
    }
    if (ctx->pc != 0x283E60u) { return; }
    ctx->pc = 0x283E60u;
    // 0x283e60: 0x40802d
    ctx->pc = 0x283e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e64: 0x52000010
    ctx->pc = 0x283E64u;
    {
        const bool branch_taken_0x283e64 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x283e64) {
            ctx->pc = 0x283E68u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x283EA8u;
            goto label_283ea8;
        }
    }
    ctx->pc = 0x283E6Cu;
    // 0x283e6c: 0x2f12823
    ctx->pc = 0x283e6cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x283e70: 0x28a20010
    ctx->pc = 0x283e70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x283e74: 0x10400004
    ctx->pc = 0x283E74u;
    {
        const bool branch_taken_0x283e74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283E78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283e74) {
            ctx->pc = 0x283E88u;
            goto label_283e88;
        }
    }
    ctx->pc = 0x283E7Cu;
    // 0x283e7c: 0x52900
    ctx->pc = 0x283e7cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x283e80: 0xc0b16c6
    ctx->pc = 0x283E80u;
    SET_GPR_U32(ctx, 31, 0x283E88u);
    ctx->pc = 0x283E84u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E88u; }
    }
    if (ctx->pc != 0x283E88u) { return; }
    ctx->pc = 0x283E88u;
label_283e88:
    // 0x283e88: 0x2a220010
    ctx->pc = 0x283e88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x283e8c: 0x10400004
    ctx->pc = 0x283E8Cu;
    {
        const bool branch_taken_0x283e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283E90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x283e8c) {
            ctx->pc = 0x283EA0u;
            goto label_283ea0;
        }
    }
    ctx->pc = 0x283E94u;
    // 0x283e94: 0x2712823
    ctx->pc = 0x283e94u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x283e98: 0xc0b16c6
    ctx->pc = 0x283E98u;
    SET_GPR_U32(ctx, 31, 0x283EA0u);
    ctx->pc = 0x283E9Cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x2C5B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontMsgSetAlpha_0x2c5b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283EA0u; }
    }
    if (ctx->pc != 0x283EA0u) { return; }
    ctx->pc = 0x283EA0u;
label_283ea0:
    // 0x283ea0: 0xa02d
    ctx->pc = 0x283ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283ea4:
    // 0x283ea4: 0x26520001
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_283ea8:
    // 0x283ea8: 0x2e420052
    ctx->pc = 0x283ea8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 82));
    // 0x283eac: 0x10400003
    ctx->pc = 0x283EACu;
    {
        const bool branch_taken_0x283eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283EB0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967281));
        if (branch_taken_0x283eac) {
            ctx->pc = 0x283EBCu;
            goto label_283ebc;
        }
    }
    ctx->pc = 0x283EB4u;
    // 0x283eb4: 0x621ffdc
    ctx->pc = 0x283EB4u;
    {
        const bool branch_taken_0x283eb4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x283EB8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 384));
        if (branch_taken_0x283eb4) {
            ctx->pc = 0x283E28u;
            goto label_283e28;
        }
    }
    ctx->pc = 0x283EBCu;
label_283ebc:
    // 0x283ebc: 0x3c020031
    ctx->pc = 0x283ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x283ec0: 0x8c42ffbc
    ctx->pc = 0x283ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x283ec4: 0x1040000b
    ctx->pc = 0x283EC4u;
    {
        const bool branch_taken_0x283ec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283EC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x283ec4) {
            ctx->pc = 0x283EF4u;
            goto label_283ef4;
        }
    }
    ctx->pc = 0x283ECCu;
    // 0x283ecc: 0x3c020032
    ctx->pc = 0x283eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x283ed0: 0x8c420868
    ctx->pc = 0x283ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x283ed4: 0x10400004
    ctx->pc = 0x283ED4u;
    {
        const bool branch_taken_0x283ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x283ED8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x283ed4) {
            ctx->pc = 0x283EE8u;
            goto label_283ee8;
        }
    }
    ctx->pc = 0x283EDCu;
    // 0x283edc: 0x8c623b48
    ctx->pc = 0x283edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15176)));
    // 0x283ee0: 0x10000003
    ctx->pc = 0x283EE0u;
    {
        const bool branch_taken_0x283ee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x283EE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x283ee0) {
            ctx->pc = 0x283EF0u;
            goto label_283ef0;
        }
    }
    ctx->pc = 0x283EE8u;
label_283ee8:
    // 0x283ee8: 0x8c623b48
    ctx->pc = 0x283ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15176)));
    // 0x283eec: 0x2a21021
    ctx->pc = 0x283eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_283ef0:
    // 0x283ef0: 0xac623b48
    ctx->pc = 0x283ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15176), GPR_U32(ctx, 2));
label_283ef4:
    // 0x283ef4: 0x280102d
    ctx->pc = 0x283ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ef8: 0xdfbf0090
    ctx->pc = 0x283ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283efc: 0xdfbe0080
    ctx->pc = 0x283efcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283f00: 0xdfb70070
    ctx->pc = 0x283f00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283f04: 0xdfb60060
    ctx->pc = 0x283f04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283f08: 0xdfb50050
    ctx->pc = 0x283f08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283f0c: 0xdfb40040
    ctx->pc = 0x283f0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283f10: 0xdfb30030
    ctx->pc = 0x283f10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283f14: 0xdfb20020
    ctx->pc = 0x283f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283f18: 0xdfb10010
    ctx->pc = 0x283f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283f1c: 0xdfb00000
    ctx->pc = 0x283f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283f20: 0x3e00008
    ctx->pc = 0x283F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283C70u: goto label_283c70;
            case 0x283CCCu: goto label_283ccc;
            case 0x283CE4u: goto label_283ce4;
            case 0x283CFCu: goto label_283cfc;
            case 0x283D00u: goto label_283d00;
            case 0x283D14u: goto label_283d14;
            case 0x283D28u: goto label_283d28;
            case 0x283D2Cu: goto label_283d2c;
            case 0x283D48u: goto label_283d48;
            case 0x283DB0u: goto label_283db0;
            case 0x283DC8u: goto label_283dc8;
            case 0x283DE0u: goto label_283de0;
            case 0x283DE4u: goto label_283de4;
            case 0x283DF8u: goto label_283df8;
            case 0x283E08u: goto label_283e08;
            case 0x283E28u: goto label_283e28;
            case 0x283E88u: goto label_283e88;
            case 0x283EA0u: goto label_283ea0;
            case 0x283EA4u: goto label_283ea4;
            case 0x283EA8u: goto label_283ea8;
            case 0x283EBCu: goto label_283ebc;
            case 0x283EE8u: goto label_283ee8;
            case 0x283EF0u: goto label_283ef0;
            case 0x283EF4u: goto label_283ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283F28u;
}
