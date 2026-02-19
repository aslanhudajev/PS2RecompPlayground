#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetTime1
// Address: 0x2aeff0 - 0x2af004
void pbGetTime1_0x2aeff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeff0u;

    // 0x2aeff0: 0x3c021000
    ctx->pc = 0x2aeff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aeff4: 0x34420800
    ctx->pc = 0x2aeff4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x2aeff8: 0x8c420000
    ctx->pc = 0x2aeff8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2aeffc: 0x3e00008
    ctx->pc = 0x2AEFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF004u;
}
