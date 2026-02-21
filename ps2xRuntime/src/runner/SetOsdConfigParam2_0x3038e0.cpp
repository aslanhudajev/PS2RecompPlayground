#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetOsdConfigParam2
// Address: 0x3038e0 - 0x3038f0
void SetOsdConfigParam2_0x3038e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3038e0u;

    // 0x3038e0: 0x2403006e
    ctx->pc = 0x3038e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 110));
    // 0x3038e4: 0xc
    ctx->pc = 0x3038e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3038e8: 0x3e00008
    ctx->pc = 0x3038E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3038F0u;
}
