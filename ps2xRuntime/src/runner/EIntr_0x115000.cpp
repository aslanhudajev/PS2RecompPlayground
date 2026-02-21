#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EIntr
// Address: 0x115000 - 0x115018
void EIntr_0x115000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115000u;

    // 0x115000: 0x40026000
    ctx->pc = 0x115000u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x115004: 0x3c030001
    ctx->pc = 0x115004u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x115008: 0x431024
    ctx->pc = 0x115008u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11500c: 0x42000038
    ctx->pc = 0x11500cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x115010: 0x3e00008
    ctx->pc = 0x115010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115014u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115018u;
}
