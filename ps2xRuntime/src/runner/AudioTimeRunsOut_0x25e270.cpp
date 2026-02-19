#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTimeRunsOut
// Address: 0x25e270 - 0x25e284
void AudioTimeRunsOut_0x25e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e270u;

    // 0x25e270: 0x3c04000c
    ctx->pc = 0x25e270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25e274: 0x34840085
    ctx->pc = 0x25e274u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 133));
    // 0x25e278: 0x240500e0
    ctx->pc = 0x25e278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e27c: 0x8088a94
    ctx->pc = 0x25E27Cu;
    ctx->pc = 0x25E280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25E284u;
}
