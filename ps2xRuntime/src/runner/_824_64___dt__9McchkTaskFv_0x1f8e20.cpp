#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @824@64@__dt__9McchkTaskFv
// Address: 0x1f8e20 - 0x1f8e30
void _824_64___dt__9McchkTaskFv_0x1f8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_824_64___dt__9McchkTaskFv");


    ctx->pc = 0x1f8e20u;

    // 0x1f8e20: 0x8c990040
    ctx->pc = 0x1f8e20u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e24: 0x2484fcc8
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966472));
    // 0x1f8e28: 0x807e368
    ctx->pc = 0x1F8E28u;
    ctx->pc = 0x1F8E2Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8DA0u;
    ps2___dt__9McchkTaskFv_0x1f8da0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E30u;
}
