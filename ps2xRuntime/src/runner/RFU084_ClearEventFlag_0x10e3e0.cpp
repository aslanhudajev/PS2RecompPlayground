#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU084_ClearEventFlag
// Address: 0x10e3e0 - 0x10e3f0
void RFU084_ClearEventFlag_0x10e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e3e0u;

    // 0x10e3e0: 0x24030054
    ctx->pc = 0x10e3e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
    // 0x10e3e4: 0xc
    ctx->pc = 0x10e3e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3e8: 0x3e00008
    ctx->pc = 0x10E3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3F0u;
}
