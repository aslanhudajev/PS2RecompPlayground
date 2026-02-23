#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @7672@64@__dt__10ErsPplTaskFv
// Address: 0x20dbb0 - 0x20dbc0
void _7672_64___dt__10ErsPplTaskFv_0x20dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_7672_64___dt__10ErsPplTaskFv");


    ctx->pc = 0x20dbb0u;

    // 0x20dbb0: 0x8c990040
    ctx->pc = 0x20dbb0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20dbb4: 0x2484e208
    ctx->pc = 0x20dbb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959624));
    // 0x20dbb8: 0x8083660
    ctx->pc = 0x20DBB8u;
    ctx->pc = 0x20DBBCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x20D980u;
    ps2___dt__10ErsPplTaskFv_0x20d980(rdram, ctx, runtime); return;
    ctx->pc = 0x20DBC0u;
}
