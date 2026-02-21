#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSelChar
// Address: 0x2606e8 - 0x260710
void AudioSelChar_0x2606e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2606e8u;

    // 0x2606e8: 0x3c04000c
    ctx->pc = 0x2606e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x2606ec: 0x34840002
    ctx->pc = 0x2606ecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x2606f0: 0x240500e0
    ctx->pc = 0x2606f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2606f4: 0x2406007f
    ctx->pc = 0x2606f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2606f8: 0x3c01bf80
    ctx->pc = 0x2606f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2606fc: 0x44816000
    ctx->pc = 0x2606fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260700: 0x3c014120
    ctx->pc = 0x260700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x260704: 0x44816800
    ctx->pc = 0x260704u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260708: 0x8097116
    ctx->pc = 0x260708u;
    ctx->pc = 0x26070Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x260710u;
}
