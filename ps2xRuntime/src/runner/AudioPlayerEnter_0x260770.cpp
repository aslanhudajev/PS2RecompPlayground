#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerEnter
// Address: 0x260770 - 0x260780
void AudioPlayerEnter_0x260770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260770u;

    // 0x260770: 0x24040002
    ctx->pc = 0x260770u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x260774: 0x240500e0
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260778: 0x8088a94
    ctx->pc = 0x260778u;
    ctx->pc = 0x26077Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x260780u;
}
