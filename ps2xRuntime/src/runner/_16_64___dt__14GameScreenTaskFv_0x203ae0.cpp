#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @16@64@__dt__14GameScreenTaskFv
// Address: 0x203ae0 - 0x203af0
void _16_64___dt__14GameScreenTaskFv_0x203ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_16_64___dt__14GameScreenTaskFv");


    ctx->pc = 0x203ae0u;

    // 0x203ae0: 0x8c990040
    ctx->pc = 0x203ae0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x203ae4: 0x2484fff0
    ctx->pc = 0x203ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x203ae8: 0x8080e70
    ctx->pc = 0x203AE8u;
    ctx->pc = 0x203AECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x2039C0u;
    ps2___dt__14GameScreenTaskFv_0x2039c0(rdram, ctx, runtime); return;
    ctx->pc = 0x203AF0u;
}
