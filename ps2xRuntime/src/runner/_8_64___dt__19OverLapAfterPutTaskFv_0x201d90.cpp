#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @8@64@__dt__19OverLapAfterPutTaskFv
// Address: 0x201d90 - 0x201da0
void _8_64___dt__19OverLapAfterPutTaskFv_0x201d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_8_64___dt__19OverLapAfterPutTaskFv");


    ctx->pc = 0x201d90u;

    // 0x201d90: 0x8c990040
    ctx->pc = 0x201d90u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x201d94: 0x2484fff8
    ctx->pc = 0x201d94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x201d98: 0x8080718
    ctx->pc = 0x201D98u;
    ctx->pc = 0x201D9Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x201C60u;
    ps2___dt__19OverLapAfterPutTaskFv_0x201c60(rdram, ctx, runtime); return;
    ctx->pc = 0x201DA0u;
}
