#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _DisableIntc
// Address: 0x303330 - 0x303340
void ps2__DisableIntc_0x303330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303330u;

    // 0x303330: 0x24030015
    ctx->pc = 0x303330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 21));
    // 0x303334: 0xc
    ctx->pc = 0x303334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303338: 0x3e00008
    ctx->pc = 0x303338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303340u;
}
