#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioCursorChar
// Address: 0x260688 - 0x260698
void AudioCursorChar_0x260688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260688u;

    // 0x260688: 0x2404000f
    ctx->pc = 0x260688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x26068c: 0x2405007f
    ctx->pc = 0x26068cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260690: 0x8088a94
    ctx->pc = 0x260690u;
    ctx->pc = 0x260694u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x260698u;
}
