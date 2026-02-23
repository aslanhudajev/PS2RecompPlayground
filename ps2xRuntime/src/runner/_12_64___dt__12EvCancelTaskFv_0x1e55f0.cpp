#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @12@64@__dt__12EvCancelTaskFv
// Address: 0x1e55f0 - 0x1e5600
void _12_64___dt__12EvCancelTaskFv_0x1e55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_12_64___dt__12EvCancelTaskFv");


    ctx->pc = 0x1e55f0u;

    // 0x1e55f0: 0x8c990040
    ctx->pc = 0x1e55f0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e55f4: 0x2484fff4
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x1e55f8: 0x8079558
    ctx->pc = 0x1E55F8u;
    ctx->pc = 0x1E55FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1E5560u;
    ps2___dt__12EvCancelTaskFv_0x1e5560(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5600u;
}
