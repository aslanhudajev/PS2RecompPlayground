#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @852@64@__dt__22ClearRankingCameraTaskFv
// Address: 0x225be0 - 0x225bf0
void _852_64___dt__22ClearRankingCameraTaskFv_0x225be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_852_64___dt__22ClearRankingCameraTaskFv");


    ctx->pc = 0x225be0u;

    // 0x225be0: 0x8c990040
    ctx->pc = 0x225be0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x225be4: 0x2484fcac
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966444));
    // 0x225be8: 0x80896b8
    ctx->pc = 0x225BE8u;
    ctx->pc = 0x225BECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x225AE0u;
    ps2___dt__22ClearRankingCameraTaskFv_0x225ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x225BF0u;
}
