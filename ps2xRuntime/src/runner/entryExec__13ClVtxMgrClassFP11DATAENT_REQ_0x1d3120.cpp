#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__13ClVtxMgrClassFP11DATAENT_REQ
// Address: 0x1d3120 - 0x1d319c
void entryExec__13ClVtxMgrClassFP11DATAENT_REQ_0x1d3120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__13ClVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1d3120u;

    // 0x1d3120: 0x27bdfff0
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3124: 0x7fbf0000
    ctx->pc = 0x1d3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d3128: 0xac850000
    ctx->pc = 0x1d3128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d312c: 0x8c830000
    ctx->pc = 0x1d312cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3130: 0x24020003
    ctx->pc = 0x1d3130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3134: 0x8c63000c
    ctx->pc = 0x1d3134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d3138: 0x10620013
    ctx->pc = 0x1D3138u;
    {
        const bool branch_taken_0x1d3138 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d3138) {
            ctx->pc = 0x1D3188u;
            goto label_1d3188;
        }
    }
    ctx->pc = 0x1D3140u;
    // 0x1d3140: 0x24020002
    ctx->pc = 0x1d3140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3144: 0x1062000c
    ctx->pc = 0x1D3144u;
    {
        const bool branch_taken_0x1d3144 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d3144) {
            ctx->pc = 0x1D3178u;
            goto label_1d3178;
        }
    }
    ctx->pc = 0x1D314Cu;
    // 0x1d314c: 0x24020001
    ctx->pc = 0x1d314cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3150: 0x10620005
    ctx->pc = 0x1D3150u;
    {
        const bool branch_taken_0x1d3150 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d3150) {
            ctx->pc = 0x1D3168u;
            goto label_1d3168;
        }
    }
    ctx->pc = 0x1D3158u;
    // 0x1d3158: 0xc074bb0
    ctx->pc = 0x1D3158u;
    SET_GPR_U32(ctx, 31, 0x1D3160u);
    ctx->pc = 0x1D2EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_00__13ClVtxMgrClassFv_0x1d2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3160u; }
        else if (ctx->pc != 0x1D3160u) { ctx->pc = 0x1D3160u; }
    }
    if (ctx->pc != 0x1D3160u) { return; }
    ctx->pc = 0x1D3160u;
    // 0x1d3160: 0x1000000c
    ctx->pc = 0x1D3160u;
    {
        const bool branch_taken_0x1d3160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3164u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1d3160) {
            ctx->pc = 0x1D3194u;
            goto label_1d3194;
        }
    }
    ctx->pc = 0x1D3168u;
label_1d3168:
    // 0x1d3168: 0xc074bfc
    ctx->pc = 0x1D3168u;
    SET_GPR_U32(ctx, 31, 0x1D3170u);
    ctx->pc = 0x1D2FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_005__13ClVtxMgrClassFv_0x1d2ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3170u; }
        else if (ctx->pc != 0x1D3170u) { ctx->pc = 0x1D3170u; }
    }
    if (ctx->pc != 0x1D3170u) { return; }
    ctx->pc = 0x1D3170u;
    // 0x1d3170: 0x10000007
    ctx->pc = 0x1D3170u;
    {
        const bool branch_taken_0x1d3170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3170) {
            ctx->pc = 0x1D3190u;
            goto label_1d3190;
        }
    }
    ctx->pc = 0x1D3178u;
label_1d3178:
    // 0x1d3178: 0xc074c10
    ctx->pc = 0x1D3178u;
    SET_GPR_U32(ctx, 31, 0x1D3180u);
    ctx->pc = 0x1D3040u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_01__13ClVtxMgrClassFv_0x1d3040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3180u; }
        else if (ctx->pc != 0x1D3180u) { ctx->pc = 0x1D3180u; }
    }
    if (ctx->pc != 0x1D3180u) { return; }
    ctx->pc = 0x1D3180u;
    // 0x1d3180: 0x10000003
    ctx->pc = 0x1D3180u;
    {
        const bool branch_taken_0x1d3180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3180) {
            ctx->pc = 0x1D3190u;
            goto label_1d3190;
        }
    }
    ctx->pc = 0x1D3188u;
label_1d3188:
    // 0x1d3188: 0xc074c3c
    ctx->pc = 0x1D3188u;
    SET_GPR_U32(ctx, 31, 0x1D3190u);
    ctx->pc = 0x1D30F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_02__13ClVtxMgrClassFv_0x1d30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3190u; }
        else if (ctx->pc != 0x1D3190u) { ctx->pc = 0x1D3190u; }
    }
    if (ctx->pc != 0x1D3190u) { return; }
    ctx->pc = 0x1D3190u;
label_1d3190:
    // 0x1d3190: 0x7bbf0000
    ctx->pc = 0x1d3190u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3194:
    // 0x1d3194: 0x3e00008
    ctx->pc = 0x1D3194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3168u: goto label_1d3168;
            case 0x1D3178u: goto label_1d3178;
            case 0x1D3188u: goto label_1d3188;
            case 0x1D3190u: goto label_1d3190;
            case 0x1D3194u: goto label_1d3194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D319Cu;
}
