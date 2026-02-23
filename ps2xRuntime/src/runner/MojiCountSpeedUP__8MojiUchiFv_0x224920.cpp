#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MojiCountSpeedUP__8MojiUchiFv
// Address: 0x224920 - 0x22492c
void MojiCountSpeedUP__8MojiUchiFv_0x224920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MojiCountSpeedUP__8MojiUchiFv");


    ctx->pc = 0x224920u;

    // 0x224920: 0x24030001
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224924: 0x3e00008
    ctx->pc = 0x224924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224928u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22492Cu;
}
