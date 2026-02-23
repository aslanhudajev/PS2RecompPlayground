#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: NOWLOADINGSET__13EventCtrlTaskFv
// Address: 0x1e3ce0 - 0x1e3cfc
void NOWLOADINGSET__13EventCtrlTaskFv_0x1e3ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("NOWLOADINGSET__13EventCtrlTaskFv");


    ctx->pc = 0x1e3ce0u;

    // 0x1e3ce0: 0x8c83000c
    ctx->pc = 0x1e3ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3ce4: 0x84630004
    ctx->pc = 0x1e3ce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3ce8: 0xa7838bf4
    ctx->pc = 0x1e3ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937588), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e3cec: 0x8c83000c
    ctx->pc = 0x1e3cecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3cf0: 0x24630008
    ctx->pc = 0x1e3cf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3cf4: 0x3e00008
    ctx->pc = 0x1E3CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3CFCu;
}
