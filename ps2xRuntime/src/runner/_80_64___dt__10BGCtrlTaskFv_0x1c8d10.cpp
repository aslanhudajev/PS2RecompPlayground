#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @80@64@__dt__10BGCtrlTaskFv
// Address: 0x1c8d10 - 0x1c8d20
void _80_64___dt__10BGCtrlTaskFv_0x1c8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_80_64___dt__10BGCtrlTaskFv");


    ctx->pc = 0x1c8d10u;

    // 0x1c8d10: 0x8c990040
    ctx->pc = 0x1c8d10u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1c8d14: 0x2484ffb0
    ctx->pc = 0x1c8d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967216));
    // 0x1c8d18: 0x8072324
    ctx->pc = 0x1C8D18u;
    ctx->pc = 0x1C8D1Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1C8C90u;
    ps2___dt__10BGCtrlTaskFv_0x1c8c90(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8D20u;
}
