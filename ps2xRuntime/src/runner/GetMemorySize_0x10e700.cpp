#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMemorySize
// Address: 0x10e700 - 0x10e710
void GetMemorySize_0x10e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e700u;

    // 0x10e700: 0x2403007f
    ctx->pc = 0x10e700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x10e704: 0xc
    ctx->pc = 0x10e704u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e708: 0x3e00008
    ctx->pc = 0x10E708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E710u;
}
