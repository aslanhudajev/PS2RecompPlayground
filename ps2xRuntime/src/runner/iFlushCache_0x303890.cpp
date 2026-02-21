#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iFlushCache
// Address: 0x303890 - 0x3038a0
void iFlushCache_0x303890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303890u;

    // 0x303890: 0x2403ff98
    ctx->pc = 0x303890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x303894: 0xc
    ctx->pc = 0x303894u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303898: 0x3e00008
    ctx->pc = 0x303898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3038A0u;
}
