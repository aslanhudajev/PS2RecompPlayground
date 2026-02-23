#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @28@64@__dt__11OverLapTaskFv
// Address: 0x216270 - 0x216280
void _28_64___dt__11OverLapTaskFv_0x216270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__11OverLapTaskFv");


    ctx->pc = 0x216270u;

    // 0x216270: 0x8c990040
    ctx->pc = 0x216270u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216274: 0x2484ffe4
    ctx->pc = 0x216274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x216278: 0x808587c
    ctx->pc = 0x216278u;
    ctx->pc = 0x21627Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x2161F0u;
    ps2___dt__11OverLapTaskFv_0x2161f0(rdram, ctx, runtime); return;
    ctx->pc = 0x216280u;
}
