#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EIntr
// Address: 0x15c9b8 - 0x15c9d0
void EIntr_0x15c9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EIntr");


    ctx->pc = 0x15c9b8u;

    // 0x15c9b8: 0x40026000
    ctx->pc = 0x15c9b8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x15c9bc: 0x3c030001
    ctx->pc = 0x15c9bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x15c9c0: 0x431024
    ctx->pc = 0x15c9c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c9c4: 0x42000038
    ctx->pc = 0x15c9c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x15c9c8: 0x3e00008
    ctx->pc = 0x15C9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C9CCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C9D0u;
}
