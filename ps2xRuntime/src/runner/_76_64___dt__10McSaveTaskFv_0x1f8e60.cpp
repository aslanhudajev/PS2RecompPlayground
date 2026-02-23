#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @76@64@__dt__10McSaveTaskFv
// Address: 0x1f8e60 - 0x1f8e70
void _76_64___dt__10McSaveTaskFv_0x1f8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_76_64___dt__10McSaveTaskFv");


    ctx->pc = 0x1f8e60u;

    // 0x1f8e60: 0x8c990040
    ctx->pc = 0x1f8e60u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e64: 0x2484ffb4
    ctx->pc = 0x1f8e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967220));
    // 0x1f8e68: 0x807e2dc
    ctx->pc = 0x1F8E68u;
    ctx->pc = 0x1F8E6Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8B70u;
    ps2___dt__10McSaveTaskFv_0x1f8b70(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E70u;
}
