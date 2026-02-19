#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMenuExit
// Address: 0x2606a8 - 0x2606b8
void AudioMenuExit_0x2606a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2606a8u;

    // 0x2606a8: 0x24040010
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2606ac: 0x2405007f
    ctx->pc = 0x2606acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2606b0: 0x8088a94
    ctx->pc = 0x2606B0u;
    ctx->pc = 0x2606B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x2606B8u;
}
