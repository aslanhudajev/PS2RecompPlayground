#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecEndPut
// Address: 0x2de0e8 - 0x2de0f0
void videoDecEndPut_0x2de0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de0e8u;

    // 0x2de0e8: 0x80b7d5a
    ctx->pc = 0x2DE0E8u;
    ctx->pc = 0x2DE0ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x2DF568u;
    viBufEndPut_0x2df568(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE0F0u;
}
