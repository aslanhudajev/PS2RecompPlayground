#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @596@64@__dt__15OverLapCtrlTaskFv
// Address: 0x201d80 - 0x201d90
void _596_64___dt__15OverLapCtrlTaskFv_0x201d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_596_64___dt__15OverLapCtrlTaskFv");


    ctx->pc = 0x201d80u;

    // 0x201d80: 0x8c990040
    ctx->pc = 0x201d80u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x201d84: 0x2484fdac
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966700));
    // 0x201d88: 0x808073c
    ctx->pc = 0x201D88u;
    ctx->pc = 0x201D8Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x201CF0u;
    ps2___dt__15OverLapCtrlTaskFv_0x201cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x201D90u;
}
