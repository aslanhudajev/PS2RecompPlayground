#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @7340@PutForEntry__10PlayerTaskFv
// Address: 0x213da0 - 0x213da8
void _7340_PutForEntry__10PlayerTaskFv_0x213da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_7340_PutForEntry__10PlayerTaskFv");


    ctx->pc = 0x213da0u;

    // 0x213da0: 0x80849b8
    ctx->pc = 0x213DA0u;
    ctx->pc = 0x213DA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959956));
    ctx->pc = 0x2126E0u;
    PutForEntry__10PlayerTaskFv_0x2126e0(rdram, ctx, runtime); return;
    ctx->pc = 0x213DA8u;
}
