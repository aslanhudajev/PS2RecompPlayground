#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExecPS2
// Address: 0x10def0 - 0x10df00
void ExecPS2_0x10def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10def0u;

    // 0x10def0: 0x24030007
    ctx->pc = 0x10def0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x10def4: 0xc
    ctx->pc = 0x10def4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10def8: 0x3e00008
    ctx->pc = 0x10DEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF00u;
}
