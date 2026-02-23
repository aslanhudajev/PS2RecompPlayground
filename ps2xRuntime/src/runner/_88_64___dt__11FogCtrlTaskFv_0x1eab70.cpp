#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @88@64@__dt__11FogCtrlTaskFv
// Address: 0x1eab70 - 0x1eab80
void _88_64___dt__11FogCtrlTaskFv_0x1eab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_88_64___dt__11FogCtrlTaskFv");


    ctx->pc = 0x1eab70u;

    // 0x1eab70: 0x8c990040
    ctx->pc = 0x1eab70u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1eab74: 0x2484ffa8
    ctx->pc = 0x1eab74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967208));
    // 0x1eab78: 0x807aab8
    ctx->pc = 0x1EAB78u;
    ctx->pc = 0x1EAB7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1EAAE0u;
    ps2___dt__11FogCtrlTaskFv_0x1eaae0(rdram, ctx, runtime); return;
    ctx->pc = 0x1EAB80u;
}
