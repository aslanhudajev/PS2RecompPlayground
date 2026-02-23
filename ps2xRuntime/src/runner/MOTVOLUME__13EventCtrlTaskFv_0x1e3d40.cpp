#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MOTVOLUME__13EventCtrlTaskFv
// Address: 0x1e3d40 - 0x1e3d50
void MOTVOLUME__13EventCtrlTaskFv_0x1e3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MOTVOLUME__13EventCtrlTaskFv");


    ctx->pc = 0x1e3d40u;

    // 0x1e3d40: 0x8c83000c
    ctx->pc = 0x1e3d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3d44: 0x24630014
    ctx->pc = 0x1e3d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e3d48: 0x3e00008
    ctx->pc = 0x1E3D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3D50u;
}
