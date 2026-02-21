#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copysignf
// Address: 0x11e450 - 0x11e480
void copysignf_0x11e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e450u;

    // 0x11e450: 0x44056000
    ctx->pc = 0x11e450u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[12]);
    // 0x11e454: 0x44046800
    ctx->pc = 0x11e454u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[13]);
    // 0x11e458: 0x80182d
    ctx->pc = 0x11e458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e45c: 0x3c027fff
    ctx->pc = 0x11e45cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x11e460: 0x3442ffff
    ctx->pc = 0x11e460u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11e464: 0x3c048000
    ctx->pc = 0x11e464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x11e468: 0xa22824
    ctx->pc = 0x11e468u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e46c: 0x641824
    ctx->pc = 0x11e46cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e470: 0xa32825
    ctx->pc = 0x11e470u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11e474: 0x44850000
    ctx->pc = 0x11e474u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x11e478: 0x3e00008
    ctx->pc = 0x11E478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E480u;
}
