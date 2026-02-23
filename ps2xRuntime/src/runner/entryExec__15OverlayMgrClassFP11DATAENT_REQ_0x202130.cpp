#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__15OverlayMgrClassFP11DATAENT_REQ
// Address: 0x202130 - 0x202188
void entryExec__15OverlayMgrClassFP11DATAENT_REQ_0x202130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__15OverlayMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x202130u;

    // 0x202130: 0x27bdfff0
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202134: 0x7fbf0000
    ctx->pc = 0x202134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x202138: 0x8ca3000c
    ctx->pc = 0x202138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20213c: 0x24020002
    ctx->pc = 0x20213cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x202140: 0x1062000c
    ctx->pc = 0x202140u;
    {
        const bool branch_taken_0x202140 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x202140) {
            ctx->pc = 0x202174u;
            goto label_202174;
        }
    }
    ctx->pc = 0x202148u;
    // 0x202148: 0x24020001
    ctx->pc = 0x202148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20214c: 0x10620005
    ctx->pc = 0x20214Cu;
    {
        const bool branch_taken_0x20214c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20214c) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x202154u;
    // 0x202154: 0xc0807cc
    ctx->pc = 0x202154u;
    SET_GPR_U32(ctx, 31, 0x20215Cu);
    ctx->pc = 0x201F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_00__15OverlayMgrClassFP11DATAENT_REQ_0x201f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20215Cu; }
        else if (ctx->pc != 0x20215Cu) { ctx->pc = 0x20215Cu; }
    }
    if (ctx->pc != 0x20215Cu) { return; }
    ctx->pc = 0x20215Cu;
    // 0x20215c: 0x10000008
    ctx->pc = 0x20215Cu;
    {
        const bool branch_taken_0x20215c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202160u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20215c) {
            ctx->pc = 0x202180u;
            goto label_202180;
        }
    }
    ctx->pc = 0x202164u;
label_202164:
    // 0x202164: 0xc080808
    ctx->pc = 0x202164u;
    SET_GPR_U32(ctx, 31, 0x20216Cu);
    ctx->pc = 0x202020u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_01__15OverlayMgrClassFP11DATAENT_REQ_0x202020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20216Cu; }
        else if (ctx->pc != 0x20216Cu) { ctx->pc = 0x20216Cu; }
    }
    if (ctx->pc != 0x20216Cu) { return; }
    ctx->pc = 0x20216Cu;
    // 0x20216c: 0x10000003
    ctx->pc = 0x20216Cu;
    {
        const bool branch_taken_0x20216c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20216c) {
            ctx->pc = 0x20217Cu;
            goto label_20217c;
        }
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0xc080834
    ctx->pc = 0x202174u;
    SET_GPR_U32(ctx, 31, 0x20217Cu);
    ctx->pc = 0x2020D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_02__15OverlayMgrClassFP11DATAENT_REQ_0x2020d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20217Cu; }
        else if (ctx->pc != 0x20217Cu) { ctx->pc = 0x20217Cu; }
    }
    if (ctx->pc != 0x20217Cu) { return; }
    ctx->pc = 0x20217Cu;
label_20217c:
    // 0x20217c: 0x7bbf0000
    ctx->pc = 0x20217cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202180:
    // 0x202180: 0x3e00008
    ctx->pc = 0x202180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202164u: goto label_202164;
            case 0x202174u: goto label_202174;
            case 0x20217Cu: goto label_20217c;
            case 0x202180u: goto label_202180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202188u;
}
