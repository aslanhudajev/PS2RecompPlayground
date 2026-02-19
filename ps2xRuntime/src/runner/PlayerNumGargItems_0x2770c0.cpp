#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerNumGargItems
// Address: 0x2770c0 - 0x2770f4
void PlayerNumGargItems_0x2770c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2770c0u;

    // 0x2770c0: 0x24022b00
    ctx->pc = 0x2770c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2770c4: 0x822018
    ctx->pc = 0x2770c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2770c8: 0x3c020032
    ctx->pc = 0x2770c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2770cc: 0x24421bc0
    ctx->pc = 0x2770ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2770d0: 0x822021
    ctx->pc = 0x2770d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2770d4: 0x52840
    ctx->pc = 0x2770d4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2770d8: 0x8c82000c
    ctx->pc = 0x2770d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2770dc: 0x240300b4
    ctx->pc = 0x2770dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2770e0: 0x431018
    ctx->pc = 0x2770e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2770e4: 0xa22821
    ctx->pc = 0x2770e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2770e8: 0x852021
    ctx->pc = 0x2770e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2770ec: 0x3e00008
    ctx->pc = 0x2770ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770F0u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 3332)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2770F4u;
}
