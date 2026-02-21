#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecBeginPut
// Address: 0x11a0d8 - 0x11a0e0
void videoDecBeginPut_0x11a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0d8u;

    // 0x11a0d8: 0x80470b0
    ctx->pc = 0x11A0D8u;
    ctx->pc = 0x11A0DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x11C2C0u;
    viBufBeginPut_0x11c2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x11A0E0u;
}
