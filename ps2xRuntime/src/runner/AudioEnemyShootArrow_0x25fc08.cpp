#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyShootArrow
// Address: 0x25fc08 - 0x25fc1c
void AudioEnemyShootArrow_0x25fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc08u;

    // 0x25fc08: 0x80282d
    ctx->pc = 0x25fc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc0c: 0x24040030
    ctx->pc = 0x25fc0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x25fc10: 0x2406007f
    ctx->pc = 0x25fc10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25fc14: 0x8088a62
    ctx->pc = 0x25FC14u;
    ctx->pc = 0x25FC18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 126));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC1Cu;
}
