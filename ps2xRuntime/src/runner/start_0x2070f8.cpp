#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start
// Address: 0x2070f8 - 0x207130
void start_0x2070f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2070f8u;

    // 0x2070f8: 0x3c030031
    ctx->pc = 0x2070f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2070fc: 0x24631b90
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x207100: 0x2402003c
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x207104: 0x821018
    ctx->pc = 0x207104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x207108: 0x621821
    ctx->pc = 0x207108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20710c: 0x8c620004
    ctx->pc = 0x20710cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x207110: 0x3c030004
    ctx->pc = 0x207110u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x207114: 0x431024
    ctx->pc = 0x207114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207118: 0x14400003
    ctx->pc = 0x207118u;
    {
        const bool branch_taken_0x207118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20711Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x207118) {
            ctx->pc = 0x207128u;
            goto label_207128;
        }
    }
    ctx->pc = 0x207120u;
    // 0x207120: 0x3e00008
    ctx->pc = 0x207120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207124u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207128u: goto label_207128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207128u;
label_207128:
    // 0x207128: 0x3e00008
    ctx->pc = 0x207128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207128u: goto label_207128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207130u;
}
