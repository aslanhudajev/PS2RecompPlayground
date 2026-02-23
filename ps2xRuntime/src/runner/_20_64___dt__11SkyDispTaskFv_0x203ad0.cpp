#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @20@64@__dt__11SkyDispTaskFv
// Address: 0x203ad0 - 0x203ae0
void _20_64___dt__11SkyDispTaskFv_0x203ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_20_64___dt__11SkyDispTaskFv");


    ctx->pc = 0x203ad0u;

    // 0x203ad0: 0x8c990040
    ctx->pc = 0x203ad0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x203ad4: 0x2484ffec
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x203ad8: 0x8080e94
    ctx->pc = 0x203AD8u;
    ctx->pc = 0x203ADCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x203A50u;
    ps2___dt__11SkyDispTaskFv_0x203a50(rdram, ctx, runtime); return;
    ctx->pc = 0x203AE0u;
}
