#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: copysignf
// Address: 0x144938 - 0x144968
void copysignf_0x144938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("copysignf");


    ctx->pc = 0x144938u;

    // 0x144938: 0x44056000
    ctx->pc = 0x144938u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[12]);
    // 0x14493c: 0x44046800
    ctx->pc = 0x14493cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[13]);
    // 0x144940: 0x80182d
    ctx->pc = 0x144940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144944: 0x3c027fff
    ctx->pc = 0x144944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x144948: 0x3442ffff
    ctx->pc = 0x144948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x14494c: 0x3c048000
    ctx->pc = 0x14494cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x144950: 0xa22824
    ctx->pc = 0x144950u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x144954: 0x641824
    ctx->pc = 0x144954u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144958: 0xa32825
    ctx->pc = 0x144958u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14495c: 0x44850000
    ctx->pc = 0x14495cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x144960: 0x3e00008
    ctx->pc = 0x144960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144968u;
}
