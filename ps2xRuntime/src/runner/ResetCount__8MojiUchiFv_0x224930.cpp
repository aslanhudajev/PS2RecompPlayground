#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ResetCount__8MojiUchiFv
// Address: 0x224930 - 0x224940
void ResetCount__8MojiUchiFv_0x224930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ResetCount__8MojiUchiFv");


    ctx->pc = 0x224930u;

    // 0x224930: 0xa080101c
    ctx->pc = 0x224930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4124), (uint8_t)GPR_U32(ctx, 0));
    // 0x224934: 0x24030001
    ctx->pc = 0x224934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224938: 0x3e00008
    ctx->pc = 0x224938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22493Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224940u;
}
