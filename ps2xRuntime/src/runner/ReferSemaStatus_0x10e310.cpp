#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReferSemaStatus
// Address: 0x10e310 - 0x10e320
void ReferSemaStatus_0x10e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e310u;

    // 0x10e310: 0x24030047
    ctx->pc = 0x10e310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x10e314: 0xc
    ctx->pc = 0x10e314u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e318: 0x3e00008
    ctx->pc = 0x10E318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E320u;
}
