#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @28@64@__dt__13EventCtrlTaskFv
// Address: 0x1e5210 - 0x1e5220
void _28_64___dt__13EventCtrlTaskFv_0x1e5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__13EventCtrlTaskFv");


    ctx->pc = 0x1e5210u;

    // 0x1e5210: 0x8c990040
    ctx->pc = 0x1e5210u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e5214: 0x2484ffe4
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x1e5218: 0x8079464
    ctx->pc = 0x1E5218u;
    ctx->pc = 0x1E521Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1E5190u;
    ps2___dt__13EventCtrlTaskFv_0x1e5190(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5220u;
}
