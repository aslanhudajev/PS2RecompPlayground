#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_get_rsig
// Address: 0x16ef40 - 0x16ef5c
void pflt_get_rsig_0x16ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_get_rsig");


    ctx->pc = 0x16ef40u;

    // 0x16ef40: 0x14800003
    ctx->pc = 0x16EF40u;
    {
        const bool branch_taken_0x16ef40 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EF44u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x16ef40) {
            ctx->pc = 0x16EF50u;
            goto label_16ef50;
        }
    }
    ctx->pc = 0x16EF48u;
    // 0x16ef48: 0x3e00008
    ctx->pc = 0x16EF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF50u: goto label_16ef50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF50u;
label_16ef50:
    // 0x16ef50: 0x831821
    ctx->pc = 0x16ef50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ef54: 0x3e00008
    ctx->pc = 0x16EF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF58u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF50u: goto label_16ef50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF5Cu;
}
