#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU009
// Address: 0x303250 - 0x303260
void RFU009_0x303250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303250u;

    // 0x303250: 0x24030009
    ctx->pc = 0x303250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x303254: 0xc
    ctx->pc = 0x303254u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303258: 0x3e00008
    ctx->pc = 0x303258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303260u;
}
