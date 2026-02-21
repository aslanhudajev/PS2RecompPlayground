#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecBeginPut
// Address: 0x2de0e0 - 0x2de0e8
void videoDecBeginPut_0x2de0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de0e0u;

    // 0x2de0e0: 0x80b7d1e
    ctx->pc = 0x2DE0E0u;
    ctx->pc = 0x2DE0E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x2DF478u;
    viBufBeginPut_0x2df478(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE0E8u;
}
