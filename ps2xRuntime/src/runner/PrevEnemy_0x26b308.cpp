#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevEnemy
// Address: 0x26b308 - 0x26b398
void PrevEnemy_0x26b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b308u;

    // 0x26b308: 0x24060019
    ctx->pc = 0x26b308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 25));
    // 0x26b30c: 0x3c030034
    ctx->pc = 0x26b30cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b310: 0x2463eb60
    ctx->pc = 0x26b310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b314: 0x240201a0
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b318: 0x821018
    ctx->pc = 0x26b318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b31c: 0x431021
    ctx->pc = 0x26b31cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b320: 0x8c450110
    ctx->pc = 0x26b320u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x26b324: 0x240b03b0
    ctx->pc = 0x26b324u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 944));
    // 0x26b328: 0x3c020033
    ctx->pc = 0x26b328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26b32c: 0x244cdfd0
    ctx->pc = 0x26b32cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x26b330: 0x240a0001
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b334: 0x24090006
    ctx->pc = 0x26b334u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 6));
    // 0x26b338: 0x3c020034
    ctx->pc = 0x26b338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b33c: 0x2442eb60
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b340: 0x240301a0
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b344: 0x832018
    ctx->pc = 0x26b344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b348: 0x822021
    ctx->pc = 0x26b348u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b34c: 0x24080018
    ctx->pc = 0x26b34cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 24));
    // 0x26b350: 0x2407ffff
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b354: 0x0
    ctx->pc = 0x26b354u;
    // NOP
label_26b358:
    // 0x26b358: 0xab1818
    ctx->pc = 0x26b358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b35c: 0x6c1021
    ctx->pc = 0x26b35cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26b360: 0x8c4300c8
    ctx->pc = 0x26b360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x26b364: 0x506a0004
    ctx->pc = 0x26B364u;
    {
        const bool branch_taken_0x26b364 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 10));
        if (branch_taken_0x26b364) {
            ctx->pc = 0x26B368u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
            ctx->pc = 0x26B378u;
            goto label_26b378;
        }
    }
    ctx->pc = 0x26B36Cu;
    // 0x26b36c: 0x54690004
    ctx->pc = 0x26B36Cu;
    {
        const bool branch_taken_0x26b36c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x26b36c) {
            ctx->pc = 0x26B370u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x26B380u;
            goto label_26b380;
        }
    }
    ctx->pc = 0x26B374u;
    // 0x26b374: 0xac850110
    ctx->pc = 0x26b374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
label_26b378:
    // 0x26b378: 0x3e00008
    ctx->pc = 0x26B378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B37Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B358u: goto label_26b358;
            case 0x26B378u: goto label_26b378;
            case 0x26B380u: goto label_26b380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B380u;
label_26b380:
    // 0x26b380: 0xe5102a
    ctx->pc = 0x26b380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x26b384: 0x24c6ffff
    ctx->pc = 0x26b384u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b388: 0x1cc0fff3
    ctx->pc = 0x26B388u;
    {
        const bool branch_taken_0x26b388 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B38Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
        if (branch_taken_0x26b388) {
            ctx->pc = 0x26B358u;
            goto label_26b358;
        }
    }
    ctx->pc = 0x26B390u;
    // 0x26b390: 0x3e00008
    ctx->pc = 0x26B390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B394u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B358u: goto label_26b358;
            case 0x26B378u: goto label_26b378;
            case 0x26B380u: goto label_26b380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B398u;
}
