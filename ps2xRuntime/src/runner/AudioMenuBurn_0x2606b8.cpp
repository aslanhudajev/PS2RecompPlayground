#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMenuBurn
// Address: 0x2606b8 - 0x2606c8
void AudioMenuBurn_0x2606b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2606b8u;

    // 0x2606b8: 0x24040013
    ctx->pc = 0x2606b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    // 0x2606bc: 0x240500e0
    ctx->pc = 0x2606bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2606c0: 0x8088a94
    ctx->pc = 0x2606C0u;
    ctx->pc = 0x2606C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x2606C8u;
}
