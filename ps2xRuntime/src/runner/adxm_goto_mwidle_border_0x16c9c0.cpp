#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_goto_mwidle_border
// Address: 0x16c9c0 - 0x16c9d0
void adxm_goto_mwidle_border_0x16c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_goto_mwidle_border");


    ctx->pc = 0x16c9c0u;

    // 0x16c9c0: 0x3c020023
    ctx->pc = 0x16c9c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16c9c4: 0x8f848180
    ctx->pc = 0x16c9c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16c9c8: 0x805b23a
    ctx->pc = 0x16C9C8u;
    ctx->pc = 0x16C9CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294960852)));
    ctx->pc = 0x16C8E8u;
    adxm_goto_svr_border_0x16c8e8(rdram, ctx, runtime); return;
    ctx->pc = 0x16C9D0u;
}
