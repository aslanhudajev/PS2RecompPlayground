#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @28@64@__dt__15McchkSelectTaskFv
// Address: 0x1f8e30 - 0x1f8e40
void _28_64___dt__15McchkSelectTaskFv_0x1f8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__15McchkSelectTaskFv");


    ctx->pc = 0x1f8e30u;

    // 0x1f8e30: 0x8c990040
    ctx->pc = 0x1f8e30u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e34: 0x2484ffe4
    ctx->pc = 0x1f8e34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x1f8e38: 0x807e348
    ctx->pc = 0x1F8E38u;
    ctx->pc = 0x1F8E3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8D20u;
    ps2___dt__15McchkSelectTaskFv_0x1f8d20(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E40u;
}
