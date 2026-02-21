#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxGetNode
// Address: 0x27ab40 - 0x27ab5c
void SfxGetNode_0x27ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ab40u;

    // 0x27ab40: 0x3c020034
    ctx->pc = 0x27ab40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ab44: 0x24420eb0
    ctx->pc = 0x27ab44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27ab48: 0x240300f0
    ctx->pc = 0x27ab48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27ab4c: 0x832018
    ctx->pc = 0x27ab4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ab50: 0x822021
    ctx->pc = 0x27ab50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27ab54: 0x3e00008
    ctx->pc = 0x27AB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AB5Cu;
}
