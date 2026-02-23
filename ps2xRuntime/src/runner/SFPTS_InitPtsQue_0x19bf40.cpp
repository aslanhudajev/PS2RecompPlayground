#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPTS_InitPtsQue
// Address: 0x19bf40 - 0x19bf58
void SFPTS_InitPtsQue_0x19bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPTS_InitPtsQue");


    ctx->pc = 0x19bf40u;

    // 0x19bf40: 0xac800010
    ctx->pc = 0x19bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x19bf44: 0xac800000
    ctx->pc = 0x19bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x19bf48: 0xac800004
    ctx->pc = 0x19bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19bf4c: 0xac800008
    ctx->pc = 0x19bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x19bf50: 0x3e00008
    ctx->pc = 0x19BF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF58u;
}
