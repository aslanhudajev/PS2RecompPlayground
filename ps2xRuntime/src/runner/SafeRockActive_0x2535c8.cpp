#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SafeRockActive
// Address: 0x2535c8 - 0x2535f8
void SafeRockActive_0x2535c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2535c8u;

    // 0x2535c8: 0x3c030034
    ctx->pc = 0x2535c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2535cc: 0x24020110
    ctx->pc = 0x2535ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x2535d0: 0x822018
    ctx->pc = 0x2535d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2535d4: 0x8c62cd94
    ctx->pc = 0x2535d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
    // 0x2535d8: 0x822021
    ctx->pc = 0x2535d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2535dc: 0x848300e4
    ctx->pc = 0x2535dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2535e0: 0x18600003
    ctx->pc = 0x2535E0u;
    {
        const bool branch_taken_0x2535e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2535E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2535e0) {
            ctx->pc = 0x2535F0u;
            goto label_2535f0;
        }
    }
    ctx->pc = 0x2535E8u;
    // 0x2535e8: 0x848200f2
    ctx->pc = 0x2535e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 242)));
    // 0x2535ec: 0x2102a
    ctx->pc = 0x2535ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_2535f0:
    // 0x2535f0: 0x3e00008
    ctx->pc = 0x2535F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2535F0u: goto label_2535f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2535F8u;
}
