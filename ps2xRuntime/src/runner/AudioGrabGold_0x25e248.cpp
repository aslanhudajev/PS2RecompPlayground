#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGrabGold
// Address: 0x25e248 - 0x25e270
void AudioGrabGold_0x25e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e248u;

    // 0x25e248: 0x3c040001
    ctx->pc = 0x25e248u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25e24c: 0x34840029
    ctx->pc = 0x25e24cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 41));
    // 0x25e250: 0x240500e0
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e254: 0x2406007f
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e258: 0x3c01bf80
    ctx->pc = 0x25e258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e25c: 0x44816000
    ctx->pc = 0x25e25cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e260: 0x3c013f80
    ctx->pc = 0x25e260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e264: 0x44816800
    ctx->pc = 0x25e264u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e268: 0x8097116
    ctx->pc = 0x25E268u;
    ctx->pc = 0x25E26Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25E270u;
}
