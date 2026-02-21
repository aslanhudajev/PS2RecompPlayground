#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextPlayer
// Address: 0x26b168 - 0x26b1f0
void NextPlayer_0x26b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b168u;

    // 0x26b168: 0x24060004
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b16c: 0x3c030034
    ctx->pc = 0x26b16cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b170: 0x2463eb60
    ctx->pc = 0x26b170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b174: 0x240201a0
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b178: 0x821018
    ctx->pc = 0x26b178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b17c: 0x431021
    ctx->pc = 0x26b17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b180: 0x8c45010c
    ctx->pc = 0x26b180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x26b184: 0x24092b00
    ctx->pc = 0x26b184u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26b188: 0x3c020032
    ctx->pc = 0x26b188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26b18c: 0x244a1bc0
    ctx->pc = 0x26b18cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26b190: 0x24080001
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b194: 0x24070004
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b198: 0x3c020034
    ctx->pc = 0x26b198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b19c: 0x2442eb60
    ctx->pc = 0x26b19cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b1a0: 0x240301a0
    ctx->pc = 0x26b1a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b1a4: 0x832018
    ctx->pc = 0x26b1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b1a8: 0x822021
    ctx->pc = 0x26b1a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b1ac: 0x0
    ctx->pc = 0x26b1acu;
    // NOP
label_26b1b0:
    // 0x26b1b0: 0xa91818
    ctx->pc = 0x26b1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b1b4: 0x6a1021
    ctx->pc = 0x26b1b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x26b1b8: 0x8c4300fc
    ctx->pc = 0x26b1b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x26b1bc: 0x50680004
    ctx->pc = 0x26B1BCu;
    {
        const bool branch_taken_0x26b1bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        if (branch_taken_0x26b1bc) {
            ctx->pc = 0x26B1C0u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
            ctx->pc = 0x26B1D0u;
            goto label_26b1d0;
        }
    }
    ctx->pc = 0x26B1C4u;
    // 0x26b1c4: 0x54670004
    ctx->pc = 0x26B1C4u;
    {
        const bool branch_taken_0x26b1c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x26b1c4) {
            ctx->pc = 0x26B1C8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x26B1D8u;
            goto label_26b1d8;
        }
    }
    ctx->pc = 0x26B1CCu;
    // 0x26b1cc: 0xac85010c
    ctx->pc = 0x26b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
label_26b1d0:
    // 0x26b1d0: 0x3e00008
    ctx->pc = 0x26B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B1D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B1B0u: goto label_26b1b0;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1D8u: goto label_26b1d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B1D8u;
label_26b1d8:
    // 0x26b1d8: 0x28a20004
    ctx->pc = 0x26b1d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x26b1dc: 0x24c6ffff
    ctx->pc = 0x26b1dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b1e0: 0x1cc0fff3
    ctx->pc = 0x26B1E0u;
    {
        const bool branch_taken_0x26b1e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B1E4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x26b1e0) {
            ctx->pc = 0x26B1B0u;
            goto label_26b1b0;
        }
    }
    ctx->pc = 0x26B1E8u;
    // 0x26b1e8: 0x3e00008
    ctx->pc = 0x26B1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B1ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B1B0u: goto label_26b1b0;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1D8u: goto label_26b1d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B1F0u;
}
