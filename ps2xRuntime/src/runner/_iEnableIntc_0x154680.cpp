#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iEnableIntc
// Address: 0x154680 - 0x154690
void _iEnableIntc_0x154680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iEnableIntc");


    ctx->pc = 0x154680u;

    // 0x154680: 0x2403ffe6
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x154684: 0xc
    ctx->pc = 0x154684u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154688: 0x3e00008
    ctx->pc = 0x154688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154690u;
}
