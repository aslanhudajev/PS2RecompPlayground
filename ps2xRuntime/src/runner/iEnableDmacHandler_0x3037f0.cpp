#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iEnableDmacHandler
// Address: 0x3037f0 - 0x303800
void iEnableDmacHandler_0x3037f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3037f0u;

    // 0x3037f0: 0x2403ffa2
    ctx->pc = 0x3037f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x3037f4: 0xc
    ctx->pc = 0x3037f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3037f8: 0x3e00008
    ctx->pc = 0x3037F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303800u;
}
