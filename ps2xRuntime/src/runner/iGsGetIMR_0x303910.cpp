#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iGsGetIMR
// Address: 0x303910 - 0x303920
void iGsGetIMR_0x303910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303910u;

    // 0x303910: 0x2403ff90
    ctx->pc = 0x303910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x303914: 0xc
    ctx->pc = 0x303914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303918: 0x3e00008
    ctx->pc = 0x303918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303920u;
}
