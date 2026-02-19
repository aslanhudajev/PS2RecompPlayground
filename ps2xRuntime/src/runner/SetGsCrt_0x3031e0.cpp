#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetGsCrt
// Address: 0x3031e0 - 0x3031f0
void SetGsCrt_0x3031e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3031e0u;

    // 0x3031e0: 0x24030002
    ctx->pc = 0x3031e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x3031e4: 0xc
    ctx->pc = 0x3031e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3031e8: 0x3e00008
    ctx->pc = 0x3031E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3031F0u;
}
