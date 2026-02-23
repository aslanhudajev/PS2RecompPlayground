#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fda80 - 0x1fdaf4
void entryOskName__15OneSkinMgrClassFP11DATAENT_REQ_0x1fda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fda80u;

    // 0x1fda80: 0x27bdfff0
    ctx->pc = 0x1fda80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fda84: 0x7fbf0000
    ctx->pc = 0x1fda84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fda88: 0x8ca3000c
    ctx->pc = 0x1fda88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fda8c: 0x24020003
    ctx->pc = 0x1fda8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fda90: 0x10620013
    ctx->pc = 0x1FDA90u;
    {
        const bool branch_taken_0x1fda90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fda90) {
            ctx->pc = 0x1FDAE0u;
            goto label_1fdae0;
        }
    }
    ctx->pc = 0x1FDA98u;
    // 0x1fda98: 0x24020002
    ctx->pc = 0x1fda98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fda9c: 0x1062000c
    ctx->pc = 0x1FDA9Cu;
    {
        const bool branch_taken_0x1fda9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fda9c) {
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDAA4u;
    // 0x1fdaa4: 0x24020001
    ctx->pc = 0x1fdaa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdaa8: 0x10620005
    ctx->pc = 0x1FDAA8u;
    {
        const bool branch_taken_0x1fdaa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fdaa8) {
            ctx->pc = 0x1FDAC0u;
            goto label_1fdac0;
        }
    }
    ctx->pc = 0x1FDAB0u;
    // 0x1fdab0: 0xc07f56c
    ctx->pc = 0x1FDAB0u;
    SET_GPR_U32(ctx, 31, 0x1FDAB8u);
    ctx->pc = 0x1FD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAB8u; }
        else if (ctx->pc != 0x1FDAB8u) { ctx->pc = 0x1FDAB8u; }
    }
    if (ctx->pc != 0x1FDAB8u) { return; }
    ctx->pc = 0x1FDAB8u;
    // 0x1fdab8: 0x1000000c
    ctx->pc = 0x1FDAB8u;
    {
        const bool branch_taken_0x1fdab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDABCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1fdab8) {
            ctx->pc = 0x1FDAECu;
            goto label_1fdaec;
        }
    }
    ctx->pc = 0x1FDAC0u;
label_1fdac0:
    // 0x1fdac0: 0xc07f5bc
    ctx->pc = 0x1FDAC0u;
    SET_GPR_U32(ctx, 31, 0x1FDAC8u);
    ctx->pc = 0x1FD6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAC8u; }
        else if (ctx->pc != 0x1FDAC8u) { ctx->pc = 0x1FDAC8u; }
    }
    if (ctx->pc != 0x1FDAC8u) { return; }
    ctx->pc = 0x1FDAC8u;
    // 0x1fdac8: 0x10000007
    ctx->pc = 0x1FDAC8u;
    {
        const bool branch_taken_0x1fdac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fdac8) {
            ctx->pc = 0x1FDAE8u;
            goto label_1fdae8;
        }
    }
    ctx->pc = 0x1FDAD0u;
label_1fdad0:
    // 0x1fdad0: 0xc07f5e0
    ctx->pc = 0x1FDAD0u;
    SET_GPR_U32(ctx, 31, 0x1FDAD8u);
    ctx->pc = 0x1FD780u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAD8u; }
        else if (ctx->pc != 0x1FDAD8u) { ctx->pc = 0x1FDAD8u; }
    }
    if (ctx->pc != 0x1FDAD8u) { return; }
    ctx->pc = 0x1FDAD8u;
    // 0x1fdad8: 0x10000003
    ctx->pc = 0x1FDAD8u;
    {
        const bool branch_taken_0x1fdad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fdad8) {
            ctx->pc = 0x1FDAE8u;
            goto label_1fdae8;
        }
    }
    ctx->pc = 0x1FDAE0u;
label_1fdae0:
    // 0x1fdae0: 0xc07f658
    ctx->pc = 0x1FDAE0u;
    SET_GPR_U32(ctx, 31, 0x1FDAE8u);
    ctx->pc = 0x1FD960u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAE8u; }
        else if (ctx->pc != 0x1FDAE8u) { ctx->pc = 0x1FDAE8u; }
    }
    if (ctx->pc != 0x1FDAE8u) { return; }
    ctx->pc = 0x1FDAE8u;
label_1fdae8:
    // 0x1fdae8: 0x7bbf0000
    ctx->pc = 0x1fdae8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdaec:
    // 0x1fdaec: 0x3e00008
    ctx->pc = 0x1FDAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDAC0u: goto label_1fdac0;
            case 0x1FDAD0u: goto label_1fdad0;
            case 0x1FDAE0u: goto label_1fdae0;
            case 0x1FDAE8u: goto label_1fdae8;
            case 0x1FDAECu: goto label_1fdaec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDAF4u;
}
