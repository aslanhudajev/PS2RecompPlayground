#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: conv_cmp
// Address: 0x1793d8 - 0x1793f0
void conv_cmp_0x1793d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("conv_cmp");


    ctx->pc = 0x1793d8u;

    // 0x1793d8: 0x42600
    ctx->pc = 0x1793d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x1793dc: 0x2402002f
    ctx->pc = 0x1793dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1793e0: 0x42603
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x1793e4: 0x3883005c
    ctx->pc = 0x1793e4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), 92));
    // 0x1793e8: 0x3e00008
    ctx->pc = 0x1793E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793ECu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1793F0u;
}
