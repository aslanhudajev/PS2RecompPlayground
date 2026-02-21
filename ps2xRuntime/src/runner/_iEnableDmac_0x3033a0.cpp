#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iEnableDmac
// Address: 0x3033a0 - 0x3033b0
void _iEnableDmac_0x3033a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3033a0u;

    // 0x3033a0: 0x2403ffe4
    ctx->pc = 0x3033a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x3033a4: 0xc
    ctx->pc = 0x3033a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3033a8: 0x3e00008
    ctx->pc = 0x3033A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3033B0u;
}
