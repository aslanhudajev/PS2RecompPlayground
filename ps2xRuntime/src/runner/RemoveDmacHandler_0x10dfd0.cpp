#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveDmacHandler
// Address: 0x10dfd0 - 0x10dfe0
void RemoveDmacHandler_0x10dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10dfd0u;

    // 0x10dfd0: 0x24030013
    ctx->pc = 0x10dfd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x10dfd4: 0xc
    ctx->pc = 0x10dfd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dfd8: 0x3e00008
    ctx->pc = 0x10DFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DFE0u;
}
