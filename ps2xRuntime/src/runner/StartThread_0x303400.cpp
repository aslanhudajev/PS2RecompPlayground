#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartThread
// Address: 0x303400 - 0x303410
void StartThread_0x303400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303400u;

    // 0x303400: 0x24030022
    ctx->pc = 0x303400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x303404: 0xc
    ctx->pc = 0x303404u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303408: 0x3e00008
    ctx->pc = 0x303408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303410u;
}
