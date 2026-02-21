#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iDisableIntc
// Address: 0x303390 - 0x3033a0
void _iDisableIntc_0x303390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303390u;

    // 0x303390: 0x2403ffe5
    ctx->pc = 0x303390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x303394: 0xc
    ctx->pc = 0x303394u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303398: 0x3e00008
    ctx->pc = 0x303398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3033A0u;
}
