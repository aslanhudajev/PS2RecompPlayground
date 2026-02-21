#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iChangeThreadPriority
// Address: 0x303480 - 0x303490
void iChangeThreadPriority_0x303480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303480u;

    // 0x303480: 0x2403ffd6
    ctx->pc = 0x303480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x303484: 0xc
    ctx->pc = 0x303484u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303488: 0x3e00008
    ctx->pc = 0x303488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303490u;
}
