#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReplaceTree
// Address: 0x22ccb0 - 0x22cd84
void ReplaceTree_0x22ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ccb0u;

    // 0x22ccb0: 0x27bdffb0
    ctx->pc = 0x22ccb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ccb4: 0xffbf0040
    ctx->pc = 0x22ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ccb8: 0xffb30030
    ctx->pc = 0x22ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22ccbc: 0xffb20020
    ctx->pc = 0x22ccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ccc0: 0xffb10010
    ctx->pc = 0x22ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22ccc4: 0xffb00000
    ctx->pc = 0x22ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ccc8: 0x80802d
    ctx->pc = 0x22ccc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cccc: 0xa0882d
    ctx->pc = 0x22ccccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccd0: 0xc0982d
    ctx->pc = 0x22ccd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccd4: 0x8e020000
    ctx->pc = 0x22ccd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ccd8: 0x1040000c
    ctx->pc = 0x22CCD8u;
    {
        const bool branch_taken_0x22ccd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CCDCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ccd8) {
            ctx->pc = 0x22CD0Cu;
            goto label_22cd0c;
        }
    }
    ctx->pc = 0x22CCE0u;
    // 0x22cce0: 0x12200005
    ctx->pc = 0x22CCE0u;
    {
        const bool branch_taken_0x22cce0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22cce0) {
            ctx->pc = 0x22CCF8u;
            goto label_22ccf8;
        }
    }
    ctx->pc = 0x22CCE8u;
    // 0x22cce8: 0x8e030008
    ctx->pc = 0x22cce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ccec: 0x8e220004
    ctx->pc = 0x22ccecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x22ccf0: 0x50620004
    ctx->pc = 0x22CCF0u;
    {
        const bool branch_taken_0x22ccf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x22ccf0) {
            ctx->pc = 0x22CCF4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x22CD04u;
            goto label_22cd04;
        }
    }
    ctx->pc = 0x22CCF8u;
label_22ccf8:
    // 0x22ccf8: 0xc08496c
    ctx->pc = 0x22CCF8u;
    SET_GPR_U32(ctx, 31, 0x22CD00u);
    ctx->pc = 0x22CCFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD00u; }
    }
    if (ctx->pc != 0x22CD00u) { return; }
    ctx->pc = 0x22CD00u;
    // 0x22cd00: 0x8e020000
    ctx->pc = 0x22cd00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cd04:
    // 0x22cd04: 0x14400018
    ctx->pc = 0x22CD04u;
    {
        const bool branch_taken_0x22cd04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22CD08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22cd04) {
            ctx->pc = 0x22CD68u;
            goto label_22cd68;
        }
    }
    ctx->pc = 0x22CD0Cu;
label_22cd0c:
    // 0x22cd0c: 0x12200015
    ctx->pc = 0x22CD0Cu;
    {
        const bool branch_taken_0x22cd0c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CD10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22cd0c) {
            ctx->pc = 0x22CD64u;
            goto label_22cd64;
        }
    }
    ctx->pc = 0x22CD14u;
    // 0x22cd14: 0x200282d
    ctx->pc = 0x22cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd18: 0x302d
    ctx->pc = 0x22cd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd1c: 0xc08476a
    ctx->pc = 0x22CD1Cu;
    SET_GPR_U32(ctx, 31, 0x22CD24u);
    ctx->pc = 0x22CD20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD24u; }
    }
    if (ctx->pc != 0x22CD24u) { return; }
    ctx->pc = 0x22CD24u;
    // 0x22cd24: 0xae020000
    ctx->pc = 0x22cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22cd28: 0x8c440000
    ctx->pc = 0x22cd28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cd2c: 0x24050010
    ctx->pc = 0x22cd2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x22cd30: 0xc0b41b8
    ctx->pc = 0x22CD30u;
    SET_GPR_U32(ctx, 31, 0x22CD38u);
    ctx->pc = 0x22CD34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD38u; }
    }
    if (ctx->pc != 0x22CD38u) { return; }
    ctx->pc = 0x22CD38u;
    // 0x22cd38: 0x8e020000
    ctx->pc = 0x22cd38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cd3c: 0x8c440000
    ctx->pc = 0x22cd3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cd40: 0xc0b3f94
    ctx->pc = 0x22CD40u;
    SET_GPR_U32(ctx, 31, 0x22CD48u);
    ctx->pc = 0x22CD44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD48u; }
    }
    if (ctx->pc != 0x22CD48u) { return; }
    ctx->pc = 0x22CD48u;
    // 0x22cd48: 0x8e020000
    ctx->pc = 0x22cd48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cd4c: 0x8c440000
    ctx->pc = 0x22cd4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cd50: 0x282d
    ctx->pc = 0x22cd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd54: 0xc0b40c0
    ctx->pc = 0x22CD54u;
    SET_GPR_U32(ctx, 31, 0x22CD5Cu);
    ctx->pc = 0x22CD58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD5Cu; }
    }
    if (ctx->pc != 0x22CD5Cu) { return; }
    ctx->pc = 0x22CD5Cu;
    // 0x22cd5c: 0x10000002
    ctx->pc = 0x22CD5Cu;
    {
        const bool branch_taken_0x22cd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22CD60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22cd5c) {
            ctx->pc = 0x22CD68u;
            goto label_22cd68;
        }
    }
    ctx->pc = 0x22CD64u;
label_22cd64:
    // 0x22cd64: 0x102d
    ctx->pc = 0x22cd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cd68:
    // 0x22cd68: 0xdfbf0040
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cd6c: 0xdfb30030
    ctx->pc = 0x22cd6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cd70: 0xdfb20020
    ctx->pc = 0x22cd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cd74: 0xdfb10010
    ctx->pc = 0x22cd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cd78: 0xdfb00000
    ctx->pc = 0x22cd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cd7c: 0x3e00008
    ctx->pc = 0x22CD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CD80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22CCF8u: goto label_22ccf8;
            case 0x22CD04u: goto label_22cd04;
            case 0x22CD0Cu: goto label_22cd0c;
            case 0x22CD64u: goto label_22cd64;
            case 0x22CD68u: goto label_22cd68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22CD84u;
}
