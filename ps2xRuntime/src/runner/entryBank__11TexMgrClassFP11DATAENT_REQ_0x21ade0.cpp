#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21ade0 - 0x21ae78
void entryBank__11TexMgrClassFP11DATAENT_REQ_0x21ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21ade0u;

    // 0x21ade0: 0x27bdfff0
    ctx->pc = 0x21ade0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ade4: 0x7fbf0000
    ctx->pc = 0x21ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21ade8: 0xac8503a8
    ctx->pc = 0x21ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 5));
    // 0x21adec: 0x8c8303a8
    ctx->pc = 0x21adecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 936)));
    // 0x21adf0: 0x24020004
    ctx->pc = 0x21adf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x21adf4: 0x8c63000c
    ctx->pc = 0x21adf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21adf8: 0x1062001a
    ctx->pc = 0x21ADF8u;
    {
        const bool branch_taken_0x21adf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21adf8) {
            ctx->pc = 0x21AE64u;
            goto label_21ae64;
        }
    }
    ctx->pc = 0x21AE00u;
    // 0x21ae00: 0x24020003
    ctx->pc = 0x21ae00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ae04: 0x10620013
    ctx->pc = 0x21AE04u;
    {
        const bool branch_taken_0x21ae04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21ae04) {
            ctx->pc = 0x21AE54u;
            goto label_21ae54;
        }
    }
    ctx->pc = 0x21AE0Cu;
    // 0x21ae0c: 0x24020002
    ctx->pc = 0x21ae0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ae10: 0x1062000c
    ctx->pc = 0x21AE10u;
    {
        const bool branch_taken_0x21ae10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21ae10) {
            ctx->pc = 0x21AE44u;
            goto label_21ae44;
        }
    }
    ctx->pc = 0x21AE18u;
    // 0x21ae18: 0x24020001
    ctx->pc = 0x21ae18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ae1c: 0x10620005
    ctx->pc = 0x21AE1Cu;
    {
        const bool branch_taken_0x21ae1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21ae1c) {
            ctx->pc = 0x21AE34u;
            goto label_21ae34;
        }
    }
    ctx->pc = 0x21AE24u;
    // 0x21ae24: 0xc086a30
    ctx->pc = 0x21AE24u;
    SET_GPR_U32(ctx, 31, 0x21AE2Cu);
    ctx->pc = 0x21A8C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank_STAT_00__11TexMgrClassFP11DATAENT_REQ_0x21a8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE2Cu; }
        else if (ctx->pc != 0x21AE2Cu) { ctx->pc = 0x21AE2Cu; }
    }
    if (ctx->pc != 0x21AE2Cu) { return; }
    ctx->pc = 0x21AE2Cu;
    // 0x21ae2c: 0x10000010
    ctx->pc = 0x21AE2Cu;
    {
        const bool branch_taken_0x21ae2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21AE30u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x21ae2c) {
            ctx->pc = 0x21AE70u;
            goto label_21ae70;
        }
    }
    ctx->pc = 0x21AE34u;
label_21ae34:
    // 0x21ae34: 0xc086a90
    ctx->pc = 0x21AE34u;
    SET_GPR_U32(ctx, 31, 0x21AE3Cu);
    ctx->pc = 0x21AA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank_STAT_01__11TexMgrClassFP11DATAENT_REQ_0x21aa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE3Cu; }
        else if (ctx->pc != 0x21AE3Cu) { ctx->pc = 0x21AE3Cu; }
    }
    if (ctx->pc != 0x21AE3Cu) { return; }
    ctx->pc = 0x21AE3Cu;
    // 0x21ae3c: 0x1000000b
    ctx->pc = 0x21AE3Cu;
    {
        const bool branch_taken_0x21ae3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ae3c) {
            ctx->pc = 0x21AE6Cu;
            goto label_21ae6c;
        }
    }
    ctx->pc = 0x21AE44u;
label_21ae44:
    // 0x21ae44: 0xc086aac
    ctx->pc = 0x21AE44u;
    SET_GPR_U32(ctx, 31, 0x21AE4Cu);
    ctx->pc = 0x21AAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank_STAT_02__11TexMgrClassFP11DATAENT_REQ_0x21aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE4Cu; }
        else if (ctx->pc != 0x21AE4Cu) { ctx->pc = 0x21AE4Cu; }
    }
    if (ctx->pc != 0x21AE4Cu) { return; }
    ctx->pc = 0x21AE4Cu;
    // 0x21ae4c: 0x10000007
    ctx->pc = 0x21AE4Cu;
    {
        const bool branch_taken_0x21ae4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ae4c) {
            ctx->pc = 0x21AE6Cu;
            goto label_21ae6c;
        }
    }
    ctx->pc = 0x21AE54u;
label_21ae54:
    // 0x21ae54: 0xc086ae8
    ctx->pc = 0x21AE54u;
    SET_GPR_U32(ctx, 31, 0x21AE5Cu);
    ctx->pc = 0x21ABA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank_STAT_03__11TexMgrClassFP11DATAENT_REQ_0x21aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE5Cu; }
        else if (ctx->pc != 0x21AE5Cu) { ctx->pc = 0x21AE5Cu; }
    }
    if (ctx->pc != 0x21AE5Cu) { return; }
    ctx->pc = 0x21AE5Cu;
    // 0x21ae5c: 0x10000003
    ctx->pc = 0x21AE5Cu;
    {
        const bool branch_taken_0x21ae5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ae5c) {
            ctx->pc = 0x21AE6Cu;
            goto label_21ae6c;
        }
    }
    ctx->pc = 0x21AE64u;
label_21ae64:
    // 0x21ae64: 0xc086b2c
    ctx->pc = 0x21AE64u;
    SET_GPR_U32(ctx, 31, 0x21AE6Cu);
    ctx->pc = 0x21ACB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank_STAT_04__11TexMgrClassFP11DATAENT_REQ_0x21acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AE6Cu; }
        else if (ctx->pc != 0x21AE6Cu) { ctx->pc = 0x21AE6Cu; }
    }
    if (ctx->pc != 0x21AE6Cu) { return; }
    ctx->pc = 0x21AE6Cu;
label_21ae6c:
    // 0x21ae6c: 0x7bbf0000
    ctx->pc = 0x21ae6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21ae70:
    // 0x21ae70: 0x3e00008
    ctx->pc = 0x21AE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AE74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AE34u: goto label_21ae34;
            case 0x21AE44u: goto label_21ae44;
            case 0x21AE54u: goto label_21ae54;
            case 0x21AE64u: goto label_21ae64;
            case 0x21AE6Cu: goto label_21ae6c;
            case 0x21AE70u: goto label_21ae70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AE78u;
}
