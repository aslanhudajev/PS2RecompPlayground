#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: print
// Address: 0x303970 - 0x303980
void print_0x303970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303970u;

    // 0x303970: 0x24030075
    ctx->pc = 0x303970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 117));
    // 0x303974: 0xc
    ctx->pc = 0x303974u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303978: 0x3e00008
    ctx->pc = 0x303978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303980u;
}
