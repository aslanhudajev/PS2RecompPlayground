#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _defRestartDMA
// Address: 0x2ef348 - 0x2ef354
void _defRestartDMA_0x2ef348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef348u;

    // 0x2ef348: 0x8c840040
    ctx->pc = 0x2ef348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ef34c: 0x80bd246
    ctx->pc = 0x2EF34Cu;
    ctx->pc = 0x2EF350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x2F4918u;
    sceIpuRestartDMA_0x2f4918(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF354u;
}
