#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SKYDSP__13EventCtrlTaskFv
// Address: 0x1e3110 - 0x1e3130
void SKYDSP__13EventCtrlTaskFv_0x1e3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SKYDSP__13EventCtrlTaskFv");


    ctx->pc = 0x1e3110u;

    // 0x1e3110: 0x8c85000c
    ctx->pc = 0x1e3110u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3114: 0x8f838d60
    ctx->pc = 0x1e3114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937952)));
    // 0x1e3118: 0x80a50004
    ctx->pc = 0x1e3118u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e311c: 0xa0650004
    ctx->pc = 0x1e311cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3120: 0x8c83000c
    ctx->pc = 0x1e3120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3124: 0x24630008
    ctx->pc = 0x1e3124u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3128: 0x3e00008
    ctx->pc = 0x1E3128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E312Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3130u;
}
