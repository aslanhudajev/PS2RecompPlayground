#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CpuConfig
// Address: 0x303870 - 0x303880
void CpuConfig_0x303870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303870u;

    // 0x303870: 0x24030066
    ctx->pc = 0x303870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 102));
    // 0x303874: 0xc
    ctx->pc = 0x303874u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303878: 0x3e00008
    ctx->pc = 0x303878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303880u;
}
