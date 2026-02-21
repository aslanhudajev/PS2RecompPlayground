#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStunPlayers
// Address: 0x260720 - 0x260748
void AudioStunPlayers_0x260720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260720u;

    // 0x260720: 0x3c040001
    ctx->pc = 0x260720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x260724: 0x34840006
    ctx->pc = 0x260724u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 6));
    // 0x260728: 0x240500e0
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x26072c: 0x2406007f
    ctx->pc = 0x26072cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260730: 0x3c01bf80
    ctx->pc = 0x260730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x260734: 0x44816000
    ctx->pc = 0x260734u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260738: 0x3c014120
    ctx->pc = 0x260738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x26073c: 0x44816800
    ctx->pc = 0x26073cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260740: 0x8097116
    ctx->pc = 0x260740u;
    ctx->pc = 0x260744u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x260748u;
}
