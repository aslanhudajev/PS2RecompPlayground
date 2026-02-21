#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _defRestartDMA
// Address: 0x120a08 - 0x120a14
void _defRestartDMA_0x120a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120a08u;

    // 0x120a08: 0x8c840040
    ctx->pc = 0x120a08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x120a0c: 0x804989c
    ctx->pc = 0x120A0Cu;
    ctx->pc = 0x120A10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x126270u;
    sceIpuRestartDMA_0x126270(rdram, ctx, runtime); return;
    ctx->pc = 0x120A14u;
}
