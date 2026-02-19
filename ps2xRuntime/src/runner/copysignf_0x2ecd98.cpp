#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copysignf
// Address: 0x2ecd98 - 0x2ecdc8
void copysignf_0x2ecd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecd98u;

    // 0x2ecd98: 0x44056000
    ctx->pc = 0x2ecd98u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[12]);
    // 0x2ecd9c: 0x44046800
    ctx->pc = 0x2ecd9cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[13]);
    // 0x2ecda0: 0x80182d
    ctx->pc = 0x2ecda0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecda4: 0x3c027fff
    ctx->pc = 0x2ecda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2ecda8: 0x3442ffff
    ctx->pc = 0x2ecda8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ecdac: 0x3c048000
    ctx->pc = 0x2ecdacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2ecdb0: 0xa22824
    ctx->pc = 0x2ecdb0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ecdb4: 0x641824
    ctx->pc = 0x2ecdb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ecdb8: 0xa32825
    ctx->pc = 0x2ecdb8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ecdbc: 0x44850000
    ctx->pc = 0x2ecdbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2ecdc0: 0x3e00008
    ctx->pc = 0x2ECDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECDC8u;
}
