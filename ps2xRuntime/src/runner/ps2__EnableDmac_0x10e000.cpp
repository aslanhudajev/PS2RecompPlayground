#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _EnableDmac
// Address: 0x10e000 - 0x10e010
void ps2__EnableDmac_0x10e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e000u;

    // 0x10e000: 0x24030016
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x10e004: 0xc
    ctx->pc = 0x10e004u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e008: 0x3e00008
    ctx->pc = 0x10E008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E010u;
}
