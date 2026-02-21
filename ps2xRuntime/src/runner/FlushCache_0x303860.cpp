#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FlushCache
// Address: 0x303860 - 0x303870
void FlushCache_0x303860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303860u;

    // 0x303860: 0x24030064
    ctx->pc = 0x303860u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x303864: 0xc
    ctx->pc = 0x303864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303868: 0x3e00008
    ctx->pc = 0x303868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303870u;
}
