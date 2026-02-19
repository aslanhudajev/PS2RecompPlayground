#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddIntcHandler2
// Address: 0x3032d0 - 0x3032e0
void AddIntcHandler2_0x3032d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3032d0u;

    // 0x3032d0: 0x24030010
    ctx->pc = 0x3032d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x3032d4: 0xc
    ctx->pc = 0x3032d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3032d8: 0x3e00008
    ctx->pc = 0x3032D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3032E0u;
}
