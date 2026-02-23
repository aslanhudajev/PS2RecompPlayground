#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyLinkStm
// Address: 0x18cf78 - 0x18cffc
void mwPlyLinkStm_0x18cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyLinkStm");


    ctx->pc = 0x18cf78u;

    // 0x18cf78: 0x27bdffd0
    ctx->pc = 0x18cf78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18cf7c: 0x24020001
    ctx->pc = 0x18cf7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf80: 0xffb10010
    ctx->pc = 0x18cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18cf84: 0xffb00000
    ctx->pc = 0x18cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18cf88: 0xa0882d
    ctx->pc = 0x18cf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf8c: 0xffbf0020
    ctx->pc = 0x18cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18cf90: 0x80802d
    ctx->pc = 0x18cf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf94: 0x8203007c
    ctx->pc = 0x18cf94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x18cf98: 0x14620003
    ctx->pc = 0x18CF98u;
    {
        const bool branch_taken_0x18cf98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18CF9Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        if (branch_taken_0x18cf98) {
            ctx->pc = 0x18CFA8u;
            goto label_18cfa8;
        }
    }
    ctx->pc = 0x18CFA0u;
    // 0x18cfa0: 0x52200001
    ctx->pc = 0x18CFA0u;
    {
        const bool branch_taken_0x18cfa0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x18cfa0) {
            ctx->pc = 0x18CFA4u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 3));
            ctx->pc = 0x18CFA8u;
            goto label_18cfa8;
        }
    }
    ctx->pc = 0x18CFA8u;
label_18cfa8:
    // 0x18cfa8: 0x8202007c
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x18cfac: 0x1440000b
    ctx->pc = 0x18CFACu;
    {
        const bool branch_taken_0x18cfac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CFB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18cfac) {
            ctx->pc = 0x18CFDCu;
            goto label_18cfdc;
        }
    }
    ctx->pc = 0x18CFB4u;
    // 0x18cfb4: 0x5622000c
    ctx->pc = 0x18CFB4u;
    {
        const bool branch_taken_0x18cfb4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x18cfb4) {
            ctx->pc = 0x18CFB8u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x18CFE8u;
            goto label_18cfe8;
        }
    }
    ctx->pc = 0x18CFBCu;
    // 0x18cfbc: 0xc064a66
    ctx->pc = 0x18CFBCu;
    SET_GPR_U32(ctx, 31, 0x18CFC4u);
    ctx->pc = 0x192998u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetConcatPlay_0x192998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC4u; }
        else if (ctx->pc != 0x18CFC4u) { ctx->pc = 0x18CFC4u; }
    }
    if (ctx->pc != 0x18CFC4u) { return; }
    ctx->pc = 0x18CFC4u;
    // 0x18cfc4: 0x10400005
    ctx->pc = 0x18CFC4u;
    {
        const bool branch_taken_0x18cfc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CFC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18cfc4) {
            ctx->pc = 0x18CFDCu;
            goto label_18cfdc;
        }
    }
    ctx->pc = 0x18CFCCu;
    // 0x18cfcc: 0x3c04002c
    ctx->pc = 0x18cfccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cfd0: 0xc063dda
    ctx->pc = 0x18CFD0u;
    SET_GPR_U32(ctx, 31, 0x18CFD8u);
    ctx->pc = 0x18CFD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954352));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFD8u; }
        else if (ctx->pc != 0x18CFD8u) { ctx->pc = 0x18CFD8u; }
    }
    if (ctx->pc != 0x18CFD8u) { return; }
    ctx->pc = 0x18CFD8u;
    // 0x18cfd8: 0x24020001
    ctx->pc = 0x18cfd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18cfdc:
    // 0x18cfdc: 0x56220002
    ctx->pc = 0x18CFDCu;
    {
        const bool branch_taken_0x18cfdc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x18cfdc) {
            ctx->pc = 0x18CFE0u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x18CFE8u;
            goto label_18cfe8;
        }
    }
    ctx->pc = 0x18CFE4u;
    // 0x18cfe4: 0xa211007c
    ctx->pc = 0x18cfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 17));
label_18cfe8:
    // 0x18cfe8: 0xdfbf0020
    ctx->pc = 0x18cfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cfec: 0xdfb10010
    ctx->pc = 0x18cfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cff0: 0xdfb00000
    ctx->pc = 0x18cff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cff4: 0x3e00008
    ctx->pc = 0x18CFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CFF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CFA8u: goto label_18cfa8;
            case 0x18CFDCu: goto label_18cfdc;
            case 0x18CFE8u: goto label_18cfe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CFFCu;
}
