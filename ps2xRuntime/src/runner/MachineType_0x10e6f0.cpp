#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MachineType
// Address: 0x10e6f0 - 0x10e700
void MachineType_0x10e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e6f0u;

    // 0x10e6f0: 0x2403007e
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
    // 0x10e6f4: 0xc
    ctx->pc = 0x10e6f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e6f8: 0x3e00008
    ctx->pc = 0x10E6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E700u;
}
