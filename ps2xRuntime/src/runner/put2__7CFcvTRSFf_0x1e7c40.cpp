#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: put2__7CFcvTRSFf
// Address: 0x1e7c40 - 0x1e7cbc
void put2__7CFcvTRSFf_0x1e7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put2__7CFcvTRSFf");


    ctx->pc = 0x1e7c40u;

    // 0x1e7c40: 0x27bdfff0
    ctx->pc = 0x1e7c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7c44: 0x7fbf0000
    ctx->pc = 0x1e7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e7c48: 0x8c8300ec
    ctx->pc = 0x1e7c48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7c4c: 0x30620020
    ctx->pc = 0x1e7c4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x1e7c50: 0x1040000c
    ctx->pc = 0x1E7C50u;
    {
        const bool branch_taken_0x1e7c50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7C54u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x1e7c50) {
            ctx->pc = 0x1E7C84u;
            goto label_1e7c84;
        }
    }
    ctx->pc = 0x1E7C58u;
    // 0x1e7c58: 0x30620080
    ctx->pc = 0x1e7c58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x1e7c5c: 0x10400005
    ctx->pc = 0x1E7C5Cu;
    {
        const bool branch_taken_0x1e7c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7c5c) {
            ctx->pc = 0x1E7C74u;
            goto label_1e7c74;
        }
    }
    ctx->pc = 0x1E7C64u;
    // 0x1e7c64: 0xc07a47c
    ctx->pc = 0x1E7C64u;
    SET_GPR_U32(ctx, 31, 0x1E7C6Cu);
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C6Cu; }
        else if (ctx->pc != 0x1E7C6Cu) { ctx->pc = 0x1E7C6Cu; }
    }
    if (ctx->pc != 0x1E7C6Cu) { return; }
    ctx->pc = 0x1E7C6Cu;
    // 0x1e7c6c: 0x10000011
    ctx->pc = 0x1E7C6Cu;
    {
        const bool branch_taken_0x1e7c6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7C70u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e7c6c) {
            ctx->pc = 0x1E7CB4u;
            goto label_1e7cb4;
        }
    }
    ctx->pc = 0x1E7C74u;
label_1e7c74:
    // 0x1e7c74: 0xc07a42c
    ctx->pc = 0x1E7C74u;
    SET_GPR_U32(ctx, 31, 0x1E7C7Cu);
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C7Cu; }
        else if (ctx->pc != 0x1E7C7Cu) { ctx->pc = 0x1E7C7Cu; }
    }
    if (ctx->pc != 0x1E7C7Cu) { return; }
    ctx->pc = 0x1E7C7Cu;
    // 0x1e7c7c: 0x1000000c
    ctx->pc = 0x1E7C7Cu;
    {
        const bool branch_taken_0x1e7c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7c7c) {
            ctx->pc = 0x1E7CB0u;
            goto label_1e7cb0;
        }
    }
    ctx->pc = 0x1E7C84u;
label_1e7c84:
    // 0x1e7c84: 0x10400007
    ctx->pc = 0x1E7C84u;
    {
        const bool branch_taken_0x1e7c84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7C88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e7c84) {
            ctx->pc = 0x1E7CA4u;
            goto label_1e7ca4;
        }
    }
    ctx->pc = 0x1E7C8Cu;
    // 0x1e7c8c: 0x3c023f80
    ctx->pc = 0x1e7c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e7c90: 0x44826800
    ctx->pc = 0x1e7c90u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e7c94: 0xc07a2e0
    ctx->pc = 0x1E7C94u;
    SET_GPR_U32(ctx, 31, 0x1E7C9Cu);
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C9Cu; }
        else if (ctx->pc != 0x1E7C9Cu) { ctx->pc = 0x1E7C9Cu; }
    }
    if (ctx->pc != 0x1E7C9Cu) { return; }
    ctx->pc = 0x1E7C9Cu;
    // 0x1e7c9c: 0x10000004
    ctx->pc = 0x1E7C9Cu;
    {
        const bool branch_taken_0x1e7c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7c9c) {
            ctx->pc = 0x1E7CB0u;
            goto label_1e7cb0;
        }
    }
    ctx->pc = 0x1E7CA4u;
label_1e7ca4:
    // 0x1e7ca4: 0x44826800
    ctx->pc = 0x1e7ca4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e7ca8: 0xc079f30
    ctx->pc = 0x1E7CA8u;
    SET_GPR_U32(ctx, 31, 0x1E7CB0u);
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CB0u; }
        else if (ctx->pc != 0x1E7CB0u) { ctx->pc = 0x1E7CB0u; }
    }
    if (ctx->pc != 0x1E7CB0u) { return; }
    ctx->pc = 0x1E7CB0u;
label_1e7cb0:
    // 0x1e7cb0: 0x7bbf0000
    ctx->pc = 0x1e7cb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7cb4:
    // 0x1e7cb4: 0x3e00008
    ctx->pc = 0x1E7CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7CB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7C74u: goto label_1e7c74;
            case 0x1E7C84u: goto label_1e7c84;
            case 0x1E7CA4u: goto label_1e7ca4;
            case 0x1E7CB0u: goto label_1e7cb0;
            case 0x1E7CB4u: goto label_1e7cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7CBCu;
}
