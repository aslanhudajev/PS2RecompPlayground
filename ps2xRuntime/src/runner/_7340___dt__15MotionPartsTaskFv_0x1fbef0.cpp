#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @7340@__dt__15MotionPartsTaskFv
// Address: 0x1fbef0 - 0x1fbef8
void _7340___dt__15MotionPartsTaskFv_0x1fbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_7340___dt__15MotionPartsTaskFv");


    ctx->pc = 0x1fbef0u;

    // 0x1fbef0: 0x807efa4
    ctx->pc = 0x1FBEF0u;
    ctx->pc = 0x1FBEF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959956));
    ctx->pc = 0x1FBE90u;
    ps2___dt__15MotionPartsTaskFv_0x1fbe90(rdram, ctx, runtime); return;
    ctx->pc = 0x1FBEF8u;
}
