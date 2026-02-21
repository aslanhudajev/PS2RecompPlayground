#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup
// Address: 0x10ec68 - 0x10ec78
void setup_0x10ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec68u;

    // 0x10ec68: 0x24030074
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 116));
    // 0x10ec6c: 0xc
    ctx->pc = 0x10ec6cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ec70: 0x3e00008
    ctx->pc = 0x10EC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC78u;
}
