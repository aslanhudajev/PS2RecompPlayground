#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @876@64@__dt__10McLoadTaskFv
// Address: 0x1f8e70 - 0x1f8e80
void _876_64___dt__10McLoadTaskFv_0x1f8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_876_64___dt__10McLoadTaskFv");


    ctx->pc = 0x1f8e70u;

    // 0x1f8e70: 0x8c990040
    ctx->pc = 0x1f8e70u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e74: 0x2484fc94
    ctx->pc = 0x1f8e74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966420));
    // 0x1f8e78: 0x807e2bc
    ctx->pc = 0x1F8E78u;
    ctx->pc = 0x1F8E7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8AF0u;
    ps2___dt__10McLoadTaskFv_0x1f8af0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E80u;
}
