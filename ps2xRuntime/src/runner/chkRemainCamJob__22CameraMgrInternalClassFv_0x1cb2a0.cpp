#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkRemainCamJob__22CameraMgrInternalClassFv
// Address: 0x1cb2a0 - 0x1cb2b8
void chkRemainCamJob__22CameraMgrInternalClassFv_0x1cb2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkRemainCamJob__22CameraMgrInternalClassFv");


    ctx->pc = 0x1cb2a0u;

    // 0x1cb2a0: 0x84830900
    ctx->pc = 0x1cb2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2304)));
    // 0x1cb2a4: 0x84820902
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1cb2a8: 0x621026
    ctx->pc = 0x1cb2a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb2ac: 0x2c420001
    ctx->pc = 0x1cb2acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1cb2b0: 0x3e00008
    ctx->pc = 0x1CB2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB2B4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB2B8u;
}
