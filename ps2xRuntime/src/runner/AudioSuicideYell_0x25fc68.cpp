#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSuicideYell
// Address: 0x25fc68 - 0x25fc7c
void AudioSuicideYell_0x25fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc68u;

    // 0x25fc68: 0x80282d
    ctx->pc = 0x25fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc6c: 0x24040037
    ctx->pc = 0x25fc6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 55));
    // 0x25fc70: 0x240600e0
    ctx->pc = 0x25fc70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fc74: 0x8088a62
    ctx->pc = 0x25FC74u;
    ctx->pc = 0x25FC78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 52));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC7Cu;
}
