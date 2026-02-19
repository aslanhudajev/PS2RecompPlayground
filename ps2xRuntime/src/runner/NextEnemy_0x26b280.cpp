#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextEnemy
// Address: 0x26b280 - 0x26b308
void NextEnemy_0x26b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b280u;

    // 0x26b280: 0x24060019
    ctx->pc = 0x26b280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 25));
    // 0x26b284: 0x3c030034
    ctx->pc = 0x26b284u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b288: 0x2463eb60
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b28c: 0x240201a0
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b290: 0x821018
    ctx->pc = 0x26b290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b294: 0x431021
    ctx->pc = 0x26b294u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b298: 0x8c450110
    ctx->pc = 0x26b298u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x26b29c: 0x240903b0
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 944));
    // 0x26b2a0: 0x3c020033
    ctx->pc = 0x26b2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26b2a4: 0x244adfd0
    ctx->pc = 0x26b2a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x26b2a8: 0x24080001
    ctx->pc = 0x26b2a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b2ac: 0x24070006
    ctx->pc = 0x26b2acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x26b2b0: 0x3c020034
    ctx->pc = 0x26b2b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b2b4: 0x2442eb60
    ctx->pc = 0x26b2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b2b8: 0x240301a0
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b2bc: 0x832018
    ctx->pc = 0x26b2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b2c0: 0x822021
    ctx->pc = 0x26b2c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b2c4: 0x0
    ctx->pc = 0x26b2c4u;
    // NOP
label_26b2c8:
    // 0x26b2c8: 0xa91818
    ctx->pc = 0x26b2c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b2cc: 0x6a1021
    ctx->pc = 0x26b2ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x26b2d0: 0x8c4300c8
    ctx->pc = 0x26b2d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x26b2d4: 0x50680004
    ctx->pc = 0x26B2D4u;
    {
        const bool branch_taken_0x26b2d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        if (branch_taken_0x26b2d4) {
            ctx->pc = 0x26B2D8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
            ctx->pc = 0x26B2E8u;
            goto label_26b2e8;
        }
    }
    ctx->pc = 0x26B2DCu;
    // 0x26b2dc: 0x54670004
    ctx->pc = 0x26B2DCu;
    {
        const bool branch_taken_0x26b2dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x26b2dc) {
            ctx->pc = 0x26B2E0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x26B2F0u;
            goto label_26b2f0;
        }
    }
    ctx->pc = 0x26B2E4u;
    // 0x26b2e4: 0xac850110
    ctx->pc = 0x26b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
label_26b2e8:
    // 0x26b2e8: 0x3e00008
    ctx->pc = 0x26B2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B2ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B2C8u: goto label_26b2c8;
            case 0x26B2E8u: goto label_26b2e8;
            case 0x26B2F0u: goto label_26b2f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B2F0u;
label_26b2f0:
    // 0x26b2f0: 0x28a20019
    ctx->pc = 0x26b2f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 25));
    // 0x26b2f4: 0x24c6ffff
    ctx->pc = 0x26b2f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b2f8: 0x1cc0fff3
    ctx->pc = 0x26B2F8u;
    {
        const bool branch_taken_0x26b2f8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B2FCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x26b2f8) {
            ctx->pc = 0x26B2C8u;
            goto label_26b2c8;
        }
    }
    ctx->pc = 0x26B300u;
    // 0x26b300: 0x3e00008
    ctx->pc = 0x26B300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B304u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B2C8u: goto label_26b2c8;
            case 0x26B2E8u: goto label_26b2e8;
            case 0x26B2F0u: goto label_26b2f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B308u;
}
