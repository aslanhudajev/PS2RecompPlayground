#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVTLBRefillHandler
// Address: 0x303290 - 0x3032a0
void SetVTLBRefillHandler_0x303290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303290u;

    // 0x303290: 0x2403000d
    ctx->pc = 0x303290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x303294: 0xc
    ctx->pc = 0x303294u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303298: 0x3e00008
    ctx->pc = 0x303298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3032A0u;
}
