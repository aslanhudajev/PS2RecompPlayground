#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterTypeLoaded
// Address: 0x2925d0 - 0x2925f4
void CritterTypeLoaded_0x2925d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2925d0u;

    // 0x2925d0: 0x3c030036
    ctx->pc = 0x2925d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2925d4: 0x2463d4c8
    ctx->pc = 0x2925d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956232));
    // 0x2925d8: 0x52880
    ctx->pc = 0x2925d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2925dc: 0x24020018
    ctx->pc = 0x2925dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2925e0: 0x822018
    ctx->pc = 0x2925e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2925e4: 0xa42821
    ctx->pc = 0x2925e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2925e8: 0xa32821
    ctx->pc = 0x2925e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2925ec: 0x3e00008
    ctx->pc = 0x2925ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2925F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2925F4u;
}
