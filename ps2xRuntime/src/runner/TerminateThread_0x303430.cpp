#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TerminateThread
// Address: 0x303430 - 0x303440
void TerminateThread_0x303430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303430u;

    // 0x303430: 0x24030025
    ctx->pc = 0x303430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
    // 0x303434: 0xc
    ctx->pc = 0x303434u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303438: 0x3e00008
    ctx->pc = 0x303438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303440u;
}
