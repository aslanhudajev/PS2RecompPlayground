#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindExit
// Address: 0x260748 - 0x260770
void AudioFindExit_0x260748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260748u;

    // 0x260748: 0x3c040002
    ctx->pc = 0x260748u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x26074c: 0x3484000d
    ctx->pc = 0x26074cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 13));
    // 0x260750: 0x240500e0
    ctx->pc = 0x260750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260754: 0x2406007f
    ctx->pc = 0x260754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260758: 0x3c01bf80
    ctx->pc = 0x260758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x26075c: 0x44816000
    ctx->pc = 0x26075cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260760: 0x3c014120
    ctx->pc = 0x260760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x260764: 0x44816800
    ctx->pc = 0x260764u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260768: 0x8097116
    ctx->pc = 0x260768u;
    ctx->pc = 0x26076Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x260770u;
}
