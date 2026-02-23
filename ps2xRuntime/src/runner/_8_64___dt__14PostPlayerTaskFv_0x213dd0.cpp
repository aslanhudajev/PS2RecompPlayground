#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @8@64@__dt__14PostPlayerTaskFv
// Address: 0x213dd0 - 0x213de0
void _8_64___dt__14PostPlayerTaskFv_0x213dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_8_64___dt__14PostPlayerTaskFv");


    ctx->pc = 0x213dd0u;

    // 0x213dd0: 0x8c990040
    ctx->pc = 0x213dd0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x213dd4: 0x2484fff8
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x213dd8: 0x8084f08
    ctx->pc = 0x213DD8u;
    ctx->pc = 0x213DDCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x213C20u;
    ps2___dt__14PostPlayerTaskFv_0x213c20(rdram, ctx, runtime); return;
    ctx->pc = 0x213DE0u;
}
