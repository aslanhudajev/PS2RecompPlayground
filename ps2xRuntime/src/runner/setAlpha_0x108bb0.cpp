#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setAlpha
// Address: 0x108bb0 - 0x108bcc
void setAlpha_0x108bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108bb0u;

    // 0x108bb0: 0x24030044
    ctx->pc = 0x108bb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x108bb4: 0x3c020014
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x108bb8: 0x832018
    ctx->pc = 0x108bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108bbc: 0x24421698
    ctx->pc = 0x108bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108bc0: 0x822021
    ctx->pc = 0x108bc0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108bc4: 0x3e00008
    ctx->pc = 0x108BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BC8u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108BCCu;
}
