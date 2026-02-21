#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iEnableIntc
// Address: 0x303380 - 0x303390
void _iEnableIntc_0x303380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303380u;

    // 0x303380: 0x2403ffe6
    ctx->pc = 0x303380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x303384: 0xc
    ctx->pc = 0x303384u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303388: 0x3e00008
    ctx->pc = 0x303388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303390u;
}
