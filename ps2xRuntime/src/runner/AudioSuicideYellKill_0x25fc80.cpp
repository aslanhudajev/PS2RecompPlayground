#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSuicideYellKill
// Address: 0x25fc80 - 0x25fc88
void AudioSuicideYellKill_0x25fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc80u;

    // 0x25fc80: 0x808870e
    ctx->pc = 0x25FC80u;
    ctx->pc = 0x25FC84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 55));
    ctx->pc = 0x221C38u;
    AudioSoundKill_0x221c38(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC88u;
}
