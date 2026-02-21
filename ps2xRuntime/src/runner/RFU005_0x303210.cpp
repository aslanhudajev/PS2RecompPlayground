#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU005
// Address: 0x303210 - 0x303220
void RFU005_0x303210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303210u;

    // 0x303210: 0x24030005
    ctx->pc = 0x303210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x303214: 0xc
    ctx->pc = 0x303214u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303218: 0x3e00008
    ctx->pc = 0x303218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303220u;
}
