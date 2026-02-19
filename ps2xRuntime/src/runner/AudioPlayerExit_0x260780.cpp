#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerExit
// Address: 0x260780 - 0x260794
void AudioPlayerExit_0x260780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260780u;

    // 0x260780: 0x80282d
    ctx->pc = 0x260780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260784: 0x24040004
    ctx->pc = 0x260784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x260788: 0x2406007f
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x26078c: 0x8088a26
    ctx->pc = 0x26078Cu;
    ctx->pc = 0x260790u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260794u;
}
