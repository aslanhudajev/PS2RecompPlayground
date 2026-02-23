#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @1140@64@__dt__13LightCtrlTaskFv
// Address: 0x1f2b70 - 0x1f2b80
void _1140_64___dt__13LightCtrlTaskFv_0x1f2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_1140_64___dt__13LightCtrlTaskFv");


    ctx->pc = 0x1f2b70u;

    // 0x1f2b70: 0x8c990040
    ctx->pc = 0x1f2b70u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f2b74: 0x2484fb8c
    ctx->pc = 0x1f2b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966156));
    // 0x1f2b78: 0x807cab8
    ctx->pc = 0x1F2B78u;
    ctx->pc = 0x1F2B7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F2AE0u;
    ps2___dt__13LightCtrlTaskFv_0x1f2ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F2B80u;
}
