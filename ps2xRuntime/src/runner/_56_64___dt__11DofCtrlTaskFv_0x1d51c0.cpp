#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @56@64@__dt__11DofCtrlTaskFv
// Address: 0x1d51c0 - 0x1d51d0
void _56_64___dt__11DofCtrlTaskFv_0x1d51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_56_64___dt__11DofCtrlTaskFv");


    ctx->pc = 0x1d51c0u;

    // 0x1d51c0: 0x8c990040
    ctx->pc = 0x1d51c0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d51c4: 0x2484ffc8
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967240));
    // 0x1d51c8: 0x807544c
    ctx->pc = 0x1D51C8u;
    ctx->pc = 0x1D51CCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1D5130u;
    ps2___dt__11DofCtrlTaskFv_0x1d5130(rdram, ctx, runtime); return;
    ctx->pc = 0x1D51D0u;
}
