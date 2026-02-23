#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_IsGetFrmTime
// Address: 0x19e780 - 0x19e7ac
void SFTIM_IsGetFrmTime_0x19e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_IsGetFrmTime");


    ctx->pc = 0x19e780u;

    // 0x19e780: 0x27bdfff0
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e784: 0x14a00003
    ctx->pc = 0x19E784u;
    {
        const bool branch_taken_0x19e784 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E788u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x19e784) {
            ctx->pc = 0x19E794u;
            goto label_19e794;
        }
    }
    ctx->pc = 0x19E78Cu;
    // 0x19e78c: 0x10000004
    ctx->pc = 0x19E78Cu;
    {
        const bool branch_taken_0x19e78c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E790u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e78c) {
            ctx->pc = 0x19E7A0u;
            goto label_19e7a0;
        }
    }
    ctx->pc = 0x19E794u;
label_19e794:
    // 0x19e794: 0x8ca60018
    ctx->pc = 0x19e794u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e798: 0xc0679ec
    ctx->pc = 0x19E798u;
    SET_GPR_U32(ctx, 31, 0x19E7A0u);
    ctx->pc = 0x19E79Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->pc = 0x19E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsGetFrmTimeTunit_0x19e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7A0u; }
        else if (ctx->pc != 0x19E7A0u) { ctx->pc = 0x19E7A0u; }
    }
    if (ctx->pc != 0x19E7A0u) { return; }
    ctx->pc = 0x19E7A0u;
label_19e7a0:
    // 0x19e7a0: 0xdfbf0000
    ctx->pc = 0x19e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7a4: 0x3e00008
    ctx->pc = 0x19E7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E794u: goto label_19e794;
            case 0x19E7A0u: goto label_19e7a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E7ACu;
}
