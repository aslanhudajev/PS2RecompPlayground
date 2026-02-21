#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerStart
// Address: 0x2606d0 - 0x2606e0
void AudioPlayerStart_0x2606d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2606d0u;

    // 0x2606d0: 0x2404000c
    ctx->pc = 0x2606d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2606d4: 0x240500e0
    ctx->pc = 0x2606d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2606d8: 0x8088a94
    ctx->pc = 0x2606D8u;
    ctx->pc = 0x2606DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x2606E0u;
}
