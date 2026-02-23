#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_InitMcOiRt
// Address: 0x1836e8 - 0x183728
void MPVCMC_InitMcOiRt_0x1836e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_InitMcOiRt");


    ctx->pc = 0x1836e8u;

    // 0x1836e8: 0x8c86017c
    ctx->pc = 0x1836e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x1836ec: 0x24030004
    ctx->pc = 0x1836ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1836f0: 0x2405ffff
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1836f4: 0x248701e0
    ctx->pc = 0x1836f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 480));
    // 0x1836f8: 0xa6180a
    ctx->pc = 0x1836f8u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x1836fc: 0x248200fc
    ctx->pc = 0x1836fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 252));
    // 0x183700: 0xac8300f8
    ctx->pc = 0x183700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
    // 0x183704: 0x84e3000c
    ctx->pc = 0x183704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x183708: 0xac43000c
    ctx->pc = 0x183708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x18370c: 0xac430004
    ctx->pc = 0x18370cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x183710: 0x84e3000e
    ctx->pc = 0x183710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x183714: 0xac43002c
    ctx->pc = 0x183714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x183718: 0xac430014
    ctx->pc = 0x183718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x18371c: 0xac43001c
    ctx->pc = 0x18371cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x183720: 0x3e00008
    ctx->pc = 0x183720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183724u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183728u;
}
