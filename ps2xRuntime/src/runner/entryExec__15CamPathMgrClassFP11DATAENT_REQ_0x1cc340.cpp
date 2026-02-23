#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__15CamPathMgrClassFP11DATAENT_REQ
// Address: 0x1cc340 - 0x1cc3bc
void entryExec__15CamPathMgrClassFP11DATAENT_REQ_0x1cc340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__15CamPathMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1cc340u;

    // 0x1cc340: 0x27bdfff0
    ctx->pc = 0x1cc340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc344: 0x7fbf0000
    ctx->pc = 0x1cc344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cc348: 0xac850000
    ctx->pc = 0x1cc348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cc34c: 0x8c830000
    ctx->pc = 0x1cc34cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc350: 0x24020003
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc354: 0x8c63000c
    ctx->pc = 0x1cc354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1cc358: 0x10620013
    ctx->pc = 0x1CC358u;
    {
        const bool branch_taken_0x1cc358 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cc358) {
            ctx->pc = 0x1CC3A8u;
            goto label_1cc3a8;
        }
    }
    ctx->pc = 0x1CC360u;
    // 0x1cc360: 0x24020002
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc364: 0x1062000c
    ctx->pc = 0x1CC364u;
    {
        const bool branch_taken_0x1cc364 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cc364) {
            ctx->pc = 0x1CC398u;
            goto label_1cc398;
        }
    }
    ctx->pc = 0x1CC36Cu;
    // 0x1cc36c: 0x24020001
    ctx->pc = 0x1cc36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc370: 0x10620005
    ctx->pc = 0x1CC370u;
    {
        const bool branch_taken_0x1cc370 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cc370) {
            ctx->pc = 0x1CC388u;
            goto label_1cc388;
        }
    }
    ctx->pc = 0x1CC378u;
    // 0x1cc378: 0xc072fd8
    ctx->pc = 0x1CC378u;
    SET_GPR_U32(ctx, 31, 0x1CC380u);
    ctx->pc = 0x1CBF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_00__15CamPathMgrClassFv_0x1cbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC380u; }
        else if (ctx->pc != 0x1CC380u) { ctx->pc = 0x1CC380u; }
    }
    if (ctx->pc != 0x1CC380u) { return; }
    ctx->pc = 0x1CC380u;
    // 0x1cc380: 0x1000000c
    ctx->pc = 0x1CC380u;
    {
        const bool branch_taken_0x1cc380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC384u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cc380) {
            ctx->pc = 0x1CC3B4u;
            goto label_1cc3b4;
        }
    }
    ctx->pc = 0x1CC388u;
label_1cc388:
    // 0x1cc388: 0xc073058
    ctx->pc = 0x1CC388u;
    SET_GPR_U32(ctx, 31, 0x1CC390u);
    ctx->pc = 0x1CC160u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_005__15CamPathMgrClassFv_0x1cc160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC390u; }
        else if (ctx->pc != 0x1CC390u) { ctx->pc = 0x1CC390u; }
    }
    if (ctx->pc != 0x1CC390u) { return; }
    ctx->pc = 0x1CC390u;
    // 0x1cc390: 0x10000007
    ctx->pc = 0x1CC390u;
    {
        const bool branch_taken_0x1cc390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc390) {
            ctx->pc = 0x1CC3B0u;
            goto label_1cc3b0;
        }
    }
    ctx->pc = 0x1CC398u;
label_1cc398:
    // 0x1cc398: 0xc073070
    ctx->pc = 0x1CC398u;
    SET_GPR_U32(ctx, 31, 0x1CC3A0u);
    ctx->pc = 0x1CC1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_01__15CamPathMgrClassFv_0x1cc1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3A0u; }
        else if (ctx->pc != 0x1CC3A0u) { ctx->pc = 0x1CC3A0u; }
    }
    if (ctx->pc != 0x1CC3A0u) { return; }
    ctx->pc = 0x1CC3A0u;
    // 0x1cc3a0: 0x10000003
    ctx->pc = 0x1CC3A0u;
    {
        const bool branch_taken_0x1cc3a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc3a0) {
            ctx->pc = 0x1CC3B0u;
            goto label_1cc3b0;
        }
    }
    ctx->pc = 0x1CC3A8u;
label_1cc3a8:
    // 0x1cc3a8: 0xc0730a8
    ctx->pc = 0x1CC3A8u;
    SET_GPR_U32(ctx, 31, 0x1CC3B0u);
    ctx->pc = 0x1CC2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_02__15CamPathMgrClassFv_0x1cc2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3B0u; }
        else if (ctx->pc != 0x1CC3B0u) { ctx->pc = 0x1CC3B0u; }
    }
    if (ctx->pc != 0x1CC3B0u) { return; }
    ctx->pc = 0x1CC3B0u;
label_1cc3b0:
    // 0x1cc3b0: 0x7bbf0000
    ctx->pc = 0x1cc3b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc3b4:
    // 0x1cc3b4: 0x3e00008
    ctx->pc = 0x1CC3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC388u: goto label_1cc388;
            case 0x1CC398u: goto label_1cc398;
            case 0x1CC3A8u: goto label_1cc3a8;
            case 0x1CC3B0u: goto label_1cc3b0;
            case 0x1CC3B4u: goto label_1cc3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC3BCu;
}
