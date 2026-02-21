#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU082_SetEventFlag
// Address: 0x10e3c0 - 0x10e3d0
void RFU082_SetEventFlag_0x10e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e3c0u;

    // 0x10e3c0: 0x24030052
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 82));
    // 0x10e3c4: 0xc
    ctx->pc = 0x10e3c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3c8: 0x3e00008
    ctx->pc = 0x10E3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3D0u;
}
