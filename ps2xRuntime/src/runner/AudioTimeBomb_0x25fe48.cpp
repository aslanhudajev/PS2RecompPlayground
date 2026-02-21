#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTimeBomb
// Address: 0x25fe48 - 0x25fe58
void AudioTimeBomb_0x25fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fe48u;

    // 0x25fe48: 0x2404002d
    ctx->pc = 0x25fe48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 45));
    // 0x25fe4c: 0x240500e0
    ctx->pc = 0x25fe4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fe50: 0x8088a94
    ctx->pc = 0x25FE50u;
    ctx->pc = 0x25FE54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25FE58u;
}
