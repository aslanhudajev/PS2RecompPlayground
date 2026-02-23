#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @20@64@__dt__17ClothPostMainTaskFv
// Address: 0x1d2da0 - 0x1d2db0
void _20_64___dt__17ClothPostMainTaskFv_0x1d2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_20_64___dt__17ClothPostMainTaskFv");


    ctx->pc = 0x1d2da0u;

    // 0x1d2da0: 0x8c990040
    ctx->pc = 0x1d2da0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d2da4: 0x2484ffec
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1d2da8: 0x8074b48
    ctx->pc = 0x1D2DA8u;
    ctx->pc = 0x1D2DACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1D2D20u;
    ps2___dt__17ClothPostMainTaskFv_0x1d2d20(rdram, ctx, runtime); return;
    ctx->pc = 0x1D2DB0u;
}
