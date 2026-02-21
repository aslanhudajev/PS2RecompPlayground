#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableCache
// Address: 0x303830 - 0x303840
void EnableCache_0x303830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303830u;

    // 0x303830: 0x24030061
    ctx->pc = 0x303830u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 97));
    // 0x303834: 0xc
    ctx->pc = 0x303834u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303838: 0x3e00008
    ctx->pc = 0x303838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303840u;
}
