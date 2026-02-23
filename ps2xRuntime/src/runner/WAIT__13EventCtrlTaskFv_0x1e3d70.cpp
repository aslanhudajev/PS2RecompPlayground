#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT__13EventCtrlTaskFv
// Address: 0x1e3d70 - 0x1e3d7c
void WAIT__13EventCtrlTaskFv_0x1e3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT__13EventCtrlTaskFv");


    ctx->pc = 0x1e3d70u;

    // 0x1e3d70: 0x24030001
    ctx->pc = 0x1e3d70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3d74: 0x3e00008
    ctx->pc = 0x1E3D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D78u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3D7Cu;
}
