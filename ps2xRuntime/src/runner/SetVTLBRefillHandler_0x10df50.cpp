#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVTLBRefillHandler
// Address: 0x10df50 - 0x10df60
void SetVTLBRefillHandler_0x10df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10df50u;

    // 0x10df50: 0x2403000d
    ctx->pc = 0x10df50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x10df54: 0xc
    ctx->pc = 0x10df54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10df58: 0x3e00008
    ctx->pc = 0x10DF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF60u;
}
