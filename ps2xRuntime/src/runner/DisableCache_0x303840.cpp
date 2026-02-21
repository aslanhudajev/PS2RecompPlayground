#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableCache
// Address: 0x303840 - 0x303850
void DisableCache_0x303840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303840u;

    // 0x303840: 0x24030062
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 98));
    // 0x303844: 0xc
    ctx->pc = 0x303844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303848: 0x3e00008
    ctx->pc = 0x303848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303850u;
}
