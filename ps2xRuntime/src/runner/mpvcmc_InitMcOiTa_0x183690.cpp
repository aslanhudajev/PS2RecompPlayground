#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_InitMcOiTa
// Address: 0x183690 - 0x1836e4
void mpvcmc_InitMcOiTa_0x183690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_InitMcOiTa");


    ctx->pc = 0x183690u;

    // 0x183690: 0x8c87017c
    ctx->pc = 0x183690u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x183694: 0x24050004
    ctx->pc = 0x183694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x183698: 0x2406ffff
    ctx->pc = 0x183698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18369c: 0x24830660
    ctx->pc = 0x18369cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1632));
    // 0x1836a0: 0xc7280a
    ctx->pc = 0x1836a0u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x1836a4: 0x24820130
    ctx->pc = 0x1836a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 304));
    // 0x1836a8: 0xac85012c
    ctx->pc = 0x1836a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 5));
    // 0x1836ac: 0xac830130
    ctx->pc = 0x1836acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x1836b0: 0x24040008
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1836b4: 0xac430028
    ctx->pc = 0x1836b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1836b8: 0xac44002c
    ctx->pc = 0x1836b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
    // 0x1836bc: 0xac430008
    ctx->pc = 0x1836bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1836c0: 0xac430010
    ctx->pc = 0x1836c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1836c4: 0xac430018
    ctx->pc = 0x1836c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1836c8: 0xac430020
    ctx->pc = 0x1836c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1836cc: 0xac440004
    ctx->pc = 0x1836ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1836d0: 0xac44000c
    ctx->pc = 0x1836d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1836d4: 0xac440014
    ctx->pc = 0x1836d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1836d8: 0xac44001c
    ctx->pc = 0x1836d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1836dc: 0x3e00008
    ctx->pc = 0x1836DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836E0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1836E4u;
}
