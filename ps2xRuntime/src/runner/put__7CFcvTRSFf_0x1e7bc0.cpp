#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: put__7CFcvTRSFf
// Address: 0x1e7bc0 - 0x1e7c3c
void put__7CFcvTRSFf_0x1e7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__7CFcvTRSFf");


    ctx->pc = 0x1e7bc0u;

    // 0x1e7bc0: 0x27bdfff0
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7bc4: 0x7fbf0000
    ctx->pc = 0x1e7bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e7bc8: 0x8c8300ec
    ctx->pc = 0x1e7bc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7bcc: 0x30620020
    ctx->pc = 0x1e7bccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x1e7bd0: 0x1040000c
    ctx->pc = 0x1E7BD0u;
    {
        const bool branch_taken_0x1e7bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7BD4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x1e7bd0) {
            ctx->pc = 0x1E7C04u;
            goto label_1e7c04;
        }
    }
    ctx->pc = 0x1E7BD8u;
    // 0x1e7bd8: 0x30620080
    ctx->pc = 0x1e7bd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x1e7bdc: 0x10400005
    ctx->pc = 0x1E7BDCu;
    {
        const bool branch_taken_0x1e7bdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7bdc) {
            ctx->pc = 0x1E7BF4u;
            goto label_1e7bf4;
        }
    }
    ctx->pc = 0x1E7BE4u;
    // 0x1e7be4: 0xc07a47c
    ctx->pc = 0x1E7BE4u;
    SET_GPR_U32(ctx, 31, 0x1E7BECu);
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BECu; }
        else if (ctx->pc != 0x1E7BECu) { ctx->pc = 0x1E7BECu; }
    }
    if (ctx->pc != 0x1E7BECu) { return; }
    ctx->pc = 0x1E7BECu;
    // 0x1e7bec: 0x10000011
    ctx->pc = 0x1E7BECu;
    {
        const bool branch_taken_0x1e7bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7BF0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e7bec) {
            ctx->pc = 0x1E7C34u;
            goto label_1e7c34;
        }
    }
    ctx->pc = 0x1E7BF4u;
label_1e7bf4:
    // 0x1e7bf4: 0xc07a42c
    ctx->pc = 0x1E7BF4u;
    SET_GPR_U32(ctx, 31, 0x1E7BFCu);
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BFCu; }
        else if (ctx->pc != 0x1E7BFCu) { ctx->pc = 0x1E7BFCu; }
    }
    if (ctx->pc != 0x1E7BFCu) { return; }
    ctx->pc = 0x1E7BFCu;
    // 0x1e7bfc: 0x1000000c
    ctx->pc = 0x1E7BFCu;
    {
        const bool branch_taken_0x1e7bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7bfc) {
            ctx->pc = 0x1E7C30u;
            goto label_1e7c30;
        }
    }
    ctx->pc = 0x1E7C04u;
label_1e7c04:
    // 0x1e7c04: 0x10400007
    ctx->pc = 0x1E7C04u;
    {
        const bool branch_taken_0x1e7c04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7C08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e7c04) {
            ctx->pc = 0x1E7C24u;
            goto label_1e7c24;
        }
    }
    ctx->pc = 0x1E7C0Cu;
    // 0x1e7c0c: 0x3c023f80
    ctx->pc = 0x1e7c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e7c10: 0x44826800
    ctx->pc = 0x1e7c10u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e7c14: 0xc07a2e0
    ctx->pc = 0x1E7C14u;
    SET_GPR_U32(ctx, 31, 0x1E7C1Cu);
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C1Cu; }
        else if (ctx->pc != 0x1E7C1Cu) { ctx->pc = 0x1E7C1Cu; }
    }
    if (ctx->pc != 0x1E7C1Cu) { return; }
    ctx->pc = 0x1E7C1Cu;
    // 0x1e7c1c: 0x10000004
    ctx->pc = 0x1E7C1Cu;
    {
        const bool branch_taken_0x1e7c1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7c1c) {
            ctx->pc = 0x1E7C30u;
            goto label_1e7c30;
        }
    }
    ctx->pc = 0x1E7C24u;
label_1e7c24:
    // 0x1e7c24: 0x44826800
    ctx->pc = 0x1e7c24u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1e7c28: 0xc079f30
    ctx->pc = 0x1E7C28u;
    SET_GPR_U32(ctx, 31, 0x1E7C30u);
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C30u; }
        else if (ctx->pc != 0x1E7C30u) { ctx->pc = 0x1E7C30u; }
    }
    if (ctx->pc != 0x1E7C30u) { return; }
    ctx->pc = 0x1E7C30u;
label_1e7c30:
    // 0x1e7c30: 0x7bbf0000
    ctx->pc = 0x1e7c30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7c34:
    // 0x1e7c34: 0x3e00008
    ctx->pc = 0x1E7C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7C38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7BF4u: goto label_1e7bf4;
            case 0x1E7C04u: goto label_1e7c04;
            case 0x1E7C24u: goto label_1e7c24;
            case 0x1E7C30u: goto label_1e7c30;
            case 0x1E7C34u: goto label_1e7c34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7C3Cu;
}
