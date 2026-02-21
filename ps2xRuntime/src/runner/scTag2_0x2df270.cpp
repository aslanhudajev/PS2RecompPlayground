#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: scTag2
// Address: 0x2df270 - 0x2df294
void scTag2_0x2df270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df270u;

    // 0x2df270: 0x5283c
    ctx->pc = 0x2df270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2df274: 0x6303c
    ctx->pc = 0x2df274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2df278: 0x6313a
    ctx->pc = 0x2df278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2df27c: 0xa62825
    ctx->pc = 0x2df27cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2df280: 0x7383c
    ctx->pc = 0x2df280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2df284: 0x7383e
    ctx->pc = 0x2df284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2df288: 0xa72825
    ctx->pc = 0x2df288u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2df28c: 0x3e00008
    ctx->pc = 0x2DF28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF290u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF294u;
}
