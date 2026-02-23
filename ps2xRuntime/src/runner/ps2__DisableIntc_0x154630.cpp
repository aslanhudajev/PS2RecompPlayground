#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _DisableIntc
// Address: 0x154630 - 0x154640
void ps2__DisableIntc_0x154630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__DisableIntc");


    ctx->pc = 0x154630u;

    // 0x154630: 0x24030015
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 21));
    // 0x154634: 0xc
    ctx->pc = 0x154634u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154638: 0x3e00008
    ctx->pc = 0x154638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154640u;
}
