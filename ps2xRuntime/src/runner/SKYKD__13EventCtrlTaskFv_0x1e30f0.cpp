#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SKYKD__13EventCtrlTaskFv
// Address: 0x1e30f0 - 0x1e3110
void SKYKD__13EventCtrlTaskFv_0x1e30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SKYKD__13EventCtrlTaskFv");


    ctx->pc = 0x1e30f0u;

    // 0x1e30f0: 0x8c85000c
    ctx->pc = 0x1e30f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e30f4: 0x8f838d60
    ctx->pc = 0x1e30f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937952)));
    // 0x1e30f8: 0x80a50004
    ctx->pc = 0x1e30f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e30fc: 0xa0650005
    ctx->pc = 0x1e30fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3100: 0x8c83000c
    ctx->pc = 0x1e3100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3104: 0x24630008
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3108: 0x3e00008
    ctx->pc = 0x1E3108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E310Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3110u;
}
