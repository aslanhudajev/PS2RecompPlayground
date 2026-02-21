#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGameOver
// Address: 0x25e1f8 - 0x25e20c
void AudioGameOver_0x25e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e1f8u;

    // 0x25e1f8: 0x3c040001
    ctx->pc = 0x25e1f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25e1fc: 0x3484005a
    ctx->pc = 0x25e1fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 90));
    // 0x25e200: 0x240500e0
    ctx->pc = 0x25e200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e204: 0x8088a94
    ctx->pc = 0x25E204u;
    ctx->pc = 0x25E208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25E20Cu;
}
