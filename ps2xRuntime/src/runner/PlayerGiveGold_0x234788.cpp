#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveGold
// Address: 0x234788 - 0x2347c4
void PlayerGiveGold_0x234788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234788u;

    // 0x234788: 0x24022b00
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23478c: 0x822018
    ctx->pc = 0x23478cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x234790: 0x3c020032
    ctx->pc = 0x234790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x234794: 0x24421bc0
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x234798: 0x822021
    ctx->pc = 0x234798u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23479c: 0x8c821a20
    ctx->pc = 0x23479cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6688)));
    // 0x2347a0: 0xa22821
    ctx->pc = 0x2347a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2347a4: 0xac851a20
    ctx->pc = 0x2347a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6688), GPR_U32(ctx, 5));
    // 0x2347a8: 0x3c020001
    ctx->pc = 0x2347a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2347ac: 0x3442869f
    ctx->pc = 0x2347acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34463));
    // 0x2347b0: 0x45282a
    ctx->pc = 0x2347b0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x2347b4: 0x54a00001
    ctx->pc = 0x2347B4u;
    {
        const bool branch_taken_0x2347b4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2347b4) {
            ctx->pc = 0x2347B8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 6688), GPR_U32(ctx, 2));
            ctx->pc = 0x2347BCu;
            goto label_2347bc;
        }
    }
    ctx->pc = 0x2347BCu;
label_2347bc:
    // 0x2347bc: 0x3e00008
    ctx->pc = 0x2347BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2347BCu: goto label_2347bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2347C4u;
}
