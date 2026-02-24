#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Copy
// Address: 0x10ec78 - 0x10ec88
void Copy_0x10ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec78u;

    // 0x10ec78: 0x2403005a
    ctx->pc = 0x10ec78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x10ec7c: 0xc
    ctx->pc = 0x10ec7cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ec80: 0x3e00008
    ctx->pc = 0x10EC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC88u;
}
