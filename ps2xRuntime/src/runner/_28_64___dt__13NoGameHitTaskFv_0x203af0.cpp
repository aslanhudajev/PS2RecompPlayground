#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @28@64@__dt__13NoGameHitTaskFv
// Address: 0x203af0 - 0x203b00
void _28_64___dt__13NoGameHitTaskFv_0x203af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__13NoGameHitTaskFv");


    ctx->pc = 0x203af0u;

    // 0x203af0: 0x8c990040
    ctx->pc = 0x203af0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x203af4: 0x2484ffe4
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967268));
    // 0x203af8: 0x8080e4c
    ctx->pc = 0x203AF8u;
    ctx->pc = 0x203AFCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x203930u;
    ps2___dt__13NoGameHitTaskFv_0x203930(rdram, ctx, runtime); return;
    ctx->pc = 0x203B00u;
}
