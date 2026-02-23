#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_get_rsig_q
// Address: 0x16ef60 - 0x16ef78
void pflt_get_rsig_q_0x16ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_get_rsig_q");


    ctx->pc = 0x16ef60u;

    // 0x16ef60: 0x14800003
    ctx->pc = 0x16EF60u;
    {
        const bool branch_taken_0x16ef60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EF64u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x16ef60) {
            ctx->pc = 0x16EF70u;
            goto label_16ef70;
        }
    }
    ctx->pc = 0x16EF68u;
    // 0x16ef68: 0x3e00008
    ctx->pc = 0x16EF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF70u: goto label_16ef70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF70u;
label_16ef70:
    // 0x16ef70: 0x3e00008
    ctx->pc = 0x16EF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF74u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF70u: goto label_16ef70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF78u;
}
