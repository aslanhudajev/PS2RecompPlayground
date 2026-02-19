#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerNumCrystals
// Address: 0x276df0 - 0x276e44
void PlayerNumCrystals_0x276df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276df0u;

    // 0x276df0: 0xa0302d
    ctx->pc = 0x276df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276df4: 0x24022b00
    ctx->pc = 0x276df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276df8: 0x822018
    ctx->pc = 0x276df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276dfc: 0x3c020032
    ctx->pc = 0x276dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276e00: 0x24421bc0
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276e04: 0x822021
    ctx->pc = 0x276e04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276e08: 0x62840
    ctx->pc = 0x276e08u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x276e0c: 0x8c82000c
    ctx->pc = 0x276e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x276e10: 0x240300b4
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276e14: 0x431018
    ctx->pc = 0x276e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276e18: 0xa22821
    ctx->pc = 0x276e18u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x276e1c: 0x852021
    ctx->pc = 0x276e1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x276e20: 0x84820d0a
    ctx->pc = 0x276e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 3338)));
    // 0x276e24: 0x4410005
    ctx->pc = 0x276E24u;
    {
        const bool branch_taken_0x276e24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x276E28u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x276e24) {
            ctx->pc = 0x276E3Cu;
            goto label_276e3c;
        }
    }
    ctx->pc = 0x276E2Cu;
    // 0x276e2c: 0x2463fa90
    ctx->pc = 0x276e2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x276e30: 0x61080
    ctx->pc = 0x276e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x276e34: 0x431021
    ctx->pc = 0x276e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e38: 0x8c420000
    ctx->pc = 0x276e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276e3c:
    // 0x276e3c: 0x3e00008
    ctx->pc = 0x276E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276E3Cu: goto label_276e3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276E44u;
}
