#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioBuzzer
// Address: 0x260658 - 0x260668
void AudioBuzzer_0x260658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260658u;

    // 0x260658: 0x2404000a
    ctx->pc = 0x260658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x26065c: 0x2405007f
    ctx->pc = 0x26065cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260660: 0x8088a94
    ctx->pc = 0x260660u;
    ctx->pc = 0x260664u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x260668u;
}
