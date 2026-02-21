#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ChangeThreadPriority
// Address: 0x303470 - 0x303480
void ChangeThreadPriority_0x303470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303470u;

    // 0x303470: 0x24030029
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
    // 0x303474: 0xc
    ctx->pc = 0x303474u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303478: 0x3e00008
    ctx->pc = 0x303478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303480u;
}
