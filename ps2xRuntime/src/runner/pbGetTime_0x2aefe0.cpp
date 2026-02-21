#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetTime
// Address: 0x2aefe0 - 0x2aeff0
void pbGetTime_0x2aefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aefe0u;

    // 0x2aefe0: 0x3c021000
    ctx->pc = 0x2aefe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aefe4: 0x8c420000
    ctx->pc = 0x2aefe4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2aefe8: 0x3e00008
    ctx->pc = 0x2AEFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEFF0u;
}
