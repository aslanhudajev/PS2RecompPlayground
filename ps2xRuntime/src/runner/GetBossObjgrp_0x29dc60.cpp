#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossObjgrp
// Address: 0x29dc60 - 0x29dc80
void GetBossObjgrp_0x29dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29dc60u;

    // 0x29dc60: 0x3c020036
    ctx->pc = 0x29dc60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dc64: 0x8c42d930
    ctx->pc = 0x29dc64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29dc68: 0x14400003
    ctx->pc = 0x29DC68u;
    {
        const bool branch_taken_0x29dc68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DC6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x29dc68) {
            ctx->pc = 0x29DC78u;
            goto label_29dc78;
        }
    }
    ctx->pc = 0x29DC70u;
    // 0x29dc70: 0x3e00008
    ctx->pc = 0x29DC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DC78u: goto label_29dc78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DC78u;
label_29dc78:
    // 0x29dc78: 0x3e00008
    ctx->pc = 0x29DC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DC78u: goto label_29dc78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DC80u;
}
