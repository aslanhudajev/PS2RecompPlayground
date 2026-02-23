#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__13EnVtxMgrClassFP11DATAENT_REQ
// Address: 0x1e2140 - 0x1e21b4
void entryExec__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__13EnVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e2140u;

    // 0x1e2140: 0x27bdfff0
    ctx->pc = 0x1e2140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2144: 0x7fbf0000
    ctx->pc = 0x1e2144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e2148: 0x8ca3000c
    ctx->pc = 0x1e2148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e214c: 0x24020003
    ctx->pc = 0x1e214cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2150: 0x10620013
    ctx->pc = 0x1E2150u;
    {
        const bool branch_taken_0x1e2150 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e2150) {
            ctx->pc = 0x1E21A0u;
            goto label_1e21a0;
        }
    }
    ctx->pc = 0x1E2158u;
    // 0x1e2158: 0x24020002
    ctx->pc = 0x1e2158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e215c: 0x1062000c
    ctx->pc = 0x1E215Cu;
    {
        const bool branch_taken_0x1e215c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e215c) {
            ctx->pc = 0x1E2190u;
            goto label_1e2190;
        }
    }
    ctx->pc = 0x1E2164u;
    // 0x1e2164: 0x24020001
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2168: 0x10620005
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E2180u;
            goto label_1e2180;
        }
    }
    ctx->pc = 0x1E2170u;
    // 0x1e2170: 0xc07879c
    ctx->pc = 0x1E2170u;
    SET_GPR_U32(ctx, 31, 0x1E2178u);
    ctx->pc = 0x1E1E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_Init__13EnVtxMgrClassFP11DATAENT_REQ_0x1e1e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2178u; }
        else if (ctx->pc != 0x1E2178u) { ctx->pc = 0x1E2178u; }
    }
    if (ctx->pc != 0x1E2178u) { return; }
    ctx->pc = 0x1E2178u;
    // 0x1e2178: 0x1000000c
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E217Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E21ACu;
            goto label_1e21ac;
        }
    }
    ctx->pc = 0x1E2180u;
label_1e2180:
    // 0x1e2180: 0xc0787fc
    ctx->pc = 0x1E2180u;
    SET_GPR_U32(ctx, 31, 0x1E2188u);
    ctx->pc = 0x1E1FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_SeekEndWait__13EnVtxMgrClassFP11DATAENT_REQ_0x1e1ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2188u; }
        else if (ctx->pc != 0x1E2188u) { ctx->pc = 0x1E2188u; }
    }
    if (ctx->pc != 0x1E2188u) { return; }
    ctx->pc = 0x1E2188u;
    // 0x1e2188: 0x10000007
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21A8u;
            goto label_1e21a8;
        }
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0xc078814
    ctx->pc = 0x1E2190u;
    SET_GPR_U32(ctx, 31, 0x1E2198u);
    ctx->pc = 0x1E2050u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_ReadEndWait__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2198u; }
        else if (ctx->pc != 0x1E2198u) { ctx->pc = 0x1E2198u; }
    }
    if (ctx->pc != 0x1E2198u) { return; }
    ctx->pc = 0x1E2198u;
    // 0x1e2198: 0x10000003
    ctx->pc = 0x1E2198u;
    {
        const bool branch_taken_0x1e2198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2198) {
            ctx->pc = 0x1E21A8u;
            goto label_1e21a8;
        }
    }
    ctx->pc = 0x1E21A0u;
label_1e21a0:
    // 0x1e21a0: 0xc07884c
    ctx->pc = 0x1E21A0u;
    SET_GPR_U32(ctx, 31, 0x1E21A8u);
    ctx->pc = 0x1E2130u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_End__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21A8u; }
        else if (ctx->pc != 0x1E21A8u) { ctx->pc = 0x1E21A8u; }
    }
    if (ctx->pc != 0x1E21A8u) { return; }
    ctx->pc = 0x1E21A8u;
label_1e21a8:
    // 0x1e21a8: 0x7bbf0000
    ctx->pc = 0x1e21a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e21ac:
    // 0x1e21ac: 0x3e00008
    ctx->pc = 0x1E21ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2180u: goto label_1e2180;
            case 0x1E2190u: goto label_1e2190;
            case 0x1E21A0u: goto label_1e21a0;
            case 0x1E21A8u: goto label_1e21a8;
            case 0x1E21ACu: goto label_1e21ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E21B4u;
}
