#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveDmacHandler
// Address: 0x303310 - 0x303320
void RemoveDmacHandler_0x303310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303310u;

    // 0x303310: 0x24030013
    ctx->pc = 0x303310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x303314: 0xc
    ctx->pc = 0x303314u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303318: 0x3e00008
    ctx->pc = 0x303318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303320u;
}
