#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setanpoAdr__9FcvEffectFP4ANPO
// Address: 0x1d89e0 - 0x1d89e8
void setanpoAdr__9FcvEffectFP4ANPO_0x1d89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setanpoAdr__9FcvEffectFP4ANPO");


    ctx->pc = 0x1d89e0u;

    // 0x1d89e0: 0x3e00008
    ctx->pc = 0x1D89E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D89E8u;
}
