#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearCustomEffect
// Address: 0x279b68 - 0x279b84
void ClearCustomEffect_0x279b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279b68u;

    // 0x279b68: 0x3c020034
    ctx->pc = 0x279b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x279b6c: 0x24424ab8
    ctx->pc = 0x279b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19128));
    // 0x279b70: 0x2403000c
    ctx->pc = 0x279b70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279b74: 0x832018
    ctx->pc = 0x279b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279b78: 0x822021
    ctx->pc = 0x279b78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279b7c: 0x3e00008
    ctx->pc = 0x279B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279B80u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279B84u;
}
