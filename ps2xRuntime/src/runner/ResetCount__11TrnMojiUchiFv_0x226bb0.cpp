#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ResetCount__11TrnMojiUchiFv
// Address: 0x226bb0 - 0x226bc0
void ResetCount__11TrnMojiUchiFv_0x226bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ResetCount__11TrnMojiUchiFv");


    ctx->pc = 0x226bb0u;

    // 0x226bb0: 0xa080101c
    ctx->pc = 0x226bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4124), (uint8_t)GPR_U32(ctx, 0));
    // 0x226bb4: 0x24030001
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226bb8: 0x3e00008
    ctx->pc = 0x226BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BBCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226BC0u;
}
