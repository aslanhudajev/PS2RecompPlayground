#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PSMode
// Address: 0x303a20 - 0x303a30
void PSMode_0x303a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a20u;

    // 0x303a20: 0x2403007d
    ctx->pc = 0x303a20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 125));
    // 0x303a24: 0xc
    ctx->pc = 0x303a24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303a28: 0x3e00008
    ctx->pc = 0x303A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303A30u;
}
