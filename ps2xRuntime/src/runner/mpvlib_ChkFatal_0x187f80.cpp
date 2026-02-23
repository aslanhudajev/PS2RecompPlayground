#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_ChkFatal
// Address: 0x187f80 - 0x187fe8
void mpvlib_ChkFatal_0x187f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_ChkFatal");


    ctx->pc = 0x187f80u;

    // 0x187f80: 0x3c02002c
    ctx->pc = 0x187f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x187f84: 0x27bdfff0
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187f88: 0x3c035a5a
    ctx->pc = 0x187f88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23130 << 16));
    // 0x187f8c: 0x8c44c9e8
    ctx->pc = 0x187f8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953448)));
    // 0x187f90: 0x34635a5a
    ctx->pc = 0x187f90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23130));
    // 0x187f94: 0x10830007
    ctx->pc = 0x187F94u;
    {
        const bool branch_taken_0x187f94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x187F98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x187f94) {
            ctx->pc = 0x187FB4u;
            goto label_187fb4;
        }
    }
    ctx->pc = 0x187F9Cu;
    // 0x187f9c: 0x3c05ff03
    ctx->pc = 0x187f9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x187fa0: 0x202d
    ctx->pc = 0x187fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fa4: 0xc061846
    ctx->pc = 0x187FA4u;
    SET_GPR_U32(ctx, 31, 0x187FACu);
    ctx->pc = 0x187FA8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65282));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FACu; }
        else if (ctx->pc != 0x187FACu) { ctx->pc = 0x187FACu; }
    }
    if (ctx->pc != 0x187FACu) { return; }
    ctx->pc = 0x187FACu;
    // 0x187fac: 0x1000000c
    ctx->pc = 0x187FACu;
    {
        const bool branch_taken_0x187fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187FB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x187fac) {
            ctx->pc = 0x187FE0u;
            goto label_187fe0;
        }
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0xc06270c
    ctx->pc = 0x187FB4u;
    SET_GPR_U32(ctx, 31, 0x187FBCu);
    ctx->pc = 0x189C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVVLC_IsVlcSizErr_0x189c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FBCu; }
        else if (ctx->pc != 0x187FBCu) { ctx->pc = 0x187FBCu; }
    }
    if (ctx->pc != 0x187FBCu) { return; }
    ctx->pc = 0x187FBCu;
    // 0x187fbc: 0x10400006
    ctx->pc = 0x187FBCu;
    {
        const bool branch_taken_0x187fbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187FC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187fbc) {
            ctx->pc = 0x187FD8u;
            goto label_187fd8;
        }
    }
    ctx->pc = 0x187FC4u;
    // 0x187fc4: 0x3c05ff03
    ctx->pc = 0x187fc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x187fc8: 0xc061846
    ctx->pc = 0x187FC8u;
    SET_GPR_U32(ctx, 31, 0x187FD0u);
    ctx->pc = 0x187FCCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65283));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FD0u; }
        else if (ctx->pc != 0x187FD0u) { ctx->pc = 0x187FD0u; }
    }
    if (ctx->pc != 0x187FD0u) { return; }
    ctx->pc = 0x187FD0u;
    // 0x187fd0: 0x10000003
    ctx->pc = 0x187FD0u;
    {
        const bool branch_taken_0x187fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187FD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x187fd0) {
            ctx->pc = 0x187FE0u;
            goto label_187fe0;
        }
    }
    ctx->pc = 0x187FD8u;
label_187fd8:
    // 0x187fd8: 0x102d
    ctx->pc = 0x187fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fdc: 0xdfbf0000
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187fe0:
    // 0x187fe0: 0x3e00008
    ctx->pc = 0x187FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187FE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187FB4u: goto label_187fb4;
            case 0x187FD8u: goto label_187fd8;
            case 0x187FE0u: goto label_187fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187FE8u;
}
