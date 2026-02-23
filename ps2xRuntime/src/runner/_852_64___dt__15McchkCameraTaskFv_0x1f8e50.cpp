#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @852@64@__dt__15McchkCameraTaskFv
// Address: 0x1f8e50 - 0x1f8e60
void _852_64___dt__15McchkCameraTaskFv_0x1f8e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_852_64___dt__15McchkCameraTaskFv");


    ctx->pc = 0x1f8e50u;

    // 0x1f8e50: 0x8c990040
    ctx->pc = 0x1f8e50u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f8e54: 0x2484fcac
    ctx->pc = 0x1f8e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966444));
    // 0x1f8e58: 0x807e2fc
    ctx->pc = 0x1F8E58u;
    ctx->pc = 0x1F8E5Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x1F8BF0u;
    ps2___dt__15McchkCameraTaskFv_0x1f8bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8E60u;
}
