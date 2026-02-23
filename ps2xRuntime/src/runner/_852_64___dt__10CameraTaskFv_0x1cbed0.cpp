#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @852@64@__dt__10CameraTaskFv
// Address: 0x1cbed0 - 0x1cbee0
void _852_64___dt__10CameraTaskFv_0x1cbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_852_64___dt__10CameraTaskFv");


    ctx->pc = 0x1cbed0u;

    // 0x1cbed0: 0x8c990040
    ctx->pc = 0x1cbed0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1cbed4: 0x2484fcac
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966444));
    // 0x1cbed8: 0x8072f94
    ctx->pc = 0x1CBED8u;
    ctx->pc = 0x1CBEDCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1CBE50u;
    ps2___dt__10CameraTaskFv_0x1cbe50(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBEE0u;
}
