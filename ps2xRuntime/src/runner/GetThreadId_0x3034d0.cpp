#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetThreadId
// Address: 0x3034d0 - 0x3034e0
void GetThreadId_0x3034d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3034d0u;

    // 0x3034d0: 0x2403002f
    ctx->pc = 0x3034d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x3034d4: 0xc
    ctx->pc = 0x3034d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3034d8: 0x3e00008
    ctx->pc = 0x3034D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3034E0u;
}
