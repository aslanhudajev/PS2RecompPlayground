#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnterInitials
// Address: 0x25e210 - 0x25e248
void AudioEnterInitials_0x25e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e210u;

    // 0x25e210: 0x3c020034
    ctx->pc = 0x25e210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e214: 0x2442d330
    ctx->pc = 0x25e214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25e218: 0x41880
    ctx->pc = 0x25e218u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25e21c: 0x621821
    ctx->pc = 0x25e21cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e220: 0x3c04000c
    ctx->pc = 0x25e220u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25e224: 0x34840001
    ctx->pc = 0x25e224u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x25e228: 0x240500e0
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e22c: 0x8c660000
    ctx->pc = 0x25e22cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e230: 0x3c01bf80
    ctx->pc = 0x25e230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e234: 0x44816000
    ctx->pc = 0x25e234u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e238: 0x3c013f80
    ctx->pc = 0x25e238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e23c: 0x44816800
    ctx->pc = 0x25e23cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e240: 0x8097116
    ctx->pc = 0x25E240u;
    ctx->pc = 0x25E244u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25E248u;
}
