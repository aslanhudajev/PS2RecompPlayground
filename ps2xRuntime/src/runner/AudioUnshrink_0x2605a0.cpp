#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioUnshrink
// Address: 0x2605a0 - 0x2605b4
void AudioUnshrink_0x2605a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2605a0u;

    // 0x2605a0: 0x24040055
    ctx->pc = 0x2605a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 85));
    // 0x2605a4: 0x2405007f
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2605a8: 0x240600e0
    ctx->pc = 0x2605a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2605ac: 0x8088a4a
    ctx->pc = 0x2605ACu;
    ctx->pc = 0x2605B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x2605B4u;
}
