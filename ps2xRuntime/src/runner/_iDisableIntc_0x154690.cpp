#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iDisableIntc
// Address: 0x154690 - 0x1546a0
void _iDisableIntc_0x154690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iDisableIntc");


    ctx->pc = 0x154690u;

    // 0x154690: 0x2403ffe5
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x154694: 0xc
    ctx->pc = 0x154694u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154698: 0x3e00008
    ctx->pc = 0x154698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1546A0u;
}
