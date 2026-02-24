#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartSoundCallback
// Address: 0x10b9e0 - 0x10b9ec
void StartSoundCallback_0x10b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b9e0u;

    // 0x10b9e0: 0x3c040011
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)17 << 16));
    // 0x10b9e4: 0x8045c7c
    ctx->pc = 0x10B9E4u;
    ctx->pc = 0x10B9E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950936));
    ctx->pc = 0x1171F0u;
    sceSdCallBack_0x1171f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10B9ECu;
}
