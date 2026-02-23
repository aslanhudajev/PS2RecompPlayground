#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _EnableIntc
// Address: 0x154620 - 0x154630
void ps2__EnableIntc_0x154620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__EnableIntc");


    ctx->pc = 0x154620u;

    // 0x154620: 0x24030014
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x154624: 0xc
    ctx->pc = 0x154624u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154628: 0x3e00008
    ctx->pc = 0x154628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154630u;
}
