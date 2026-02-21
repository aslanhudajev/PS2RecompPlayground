#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU087_PollEvnetFlag
// Address: 0x10e410 - 0x10e420
void RFU087_PollEvnetFlag_0x10e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e410u;

    // 0x10e410: 0x24030057
    ctx->pc = 0x10e410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 87));
    // 0x10e414: 0xc
    ctx->pc = 0x10e414u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e418: 0x3e00008
    ctx->pc = 0x10E418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E420u;
}
