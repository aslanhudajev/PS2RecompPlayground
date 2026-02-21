#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevItem
// Address: 0x26b458 - 0x26b50c
void PrevItem_0x26b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b458u;

    // 0x26b458: 0x3c020034
    ctx->pc = 0x26b458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b45c: 0x8c46cd98
    ctx->pc = 0x26b45cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b460: 0x3c030034
    ctx->pc = 0x26b460u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b464: 0x2463eb60
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b468: 0x240201a0
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b46c: 0x821018
    ctx->pc = 0x26b46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b470: 0x431021
    ctx->pc = 0x26b470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b474: 0x18c00023
    ctx->pc = 0x26B474u;
    {
        const bool branch_taken_0x26b474 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26B478u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 276)));
        if (branch_taken_0x26b474) {
            ctx->pc = 0x26B504u;
            goto label_26b504;
        }
    }
    ctx->pc = 0x26B47Cu;
    // 0x26b47c: 0x3c020034
    ctx->pc = 0x26b47cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b480: 0x240a0110
    ctx->pc = 0x26b480u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 272));
    // 0x26b484: 0x8c4bcd94
    ctx->pc = 0x26b484u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x26b488: 0x24090003
    ctx->pc = 0x26b488u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b48c: 0x2408ffff
    ctx->pc = 0x26b48cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b490: 0x3c030034
    ctx->pc = 0x26b490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b494: 0x2463eb60
    ctx->pc = 0x26b494u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b498: 0x240201a0
    ctx->pc = 0x26b498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b49c: 0x821018
    ctx->pc = 0x26b49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b4a0: 0x432021
    ctx->pc = 0x26b4a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b4a4: 0x3c020034
    ctx->pc = 0x26b4a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b4a8: 0x8c47cd98
    ctx->pc = 0x26b4a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b4ac: 0xaa1018
    ctx->pc = 0x26b4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_26b4b0:
    // 0x26b4b0: 0x4b1821
    ctx->pc = 0x26b4b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x26b4b4: 0x8c620070
    ctx->pc = 0x26b4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x26b4b8: 0x5040000d
    ctx->pc = 0x26B4B8u;
    {
        const bool branch_taken_0x26b4b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26b4b8) {
            ctx->pc = 0x26B4BCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x26B4F0u;
            goto label_26b4f0;
        }
    }
    ctx->pc = 0x26B4C0u;
    // 0x26b4c0: 0x8c620000
    ctx->pc = 0x26b4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b4c4: 0x8c420000
    ctx->pc = 0x26b4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b4c8: 0x14490004
    ctx->pc = 0x26B4C8u;
    {
        const bool branch_taken_0x26b4c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        ctx->pc = 0x26B4CCu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
        if (branch_taken_0x26b4c8) {
            ctx->pc = 0x26B4DCu;
            goto label_26b4dc;
        }
    }
    ctx->pc = 0x26B4D0u;
    // 0x26b4d0: 0x5c400005
    ctx->pc = 0x26B4D0u;
    {
        const bool branch_taken_0x26b4d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26b4d0) {
            ctx->pc = 0x26B4D4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
            ctx->pc = 0x26B4E8u;
            goto label_26b4e8;
        }
    }
    ctx->pc = 0x26B4D8u;
    // 0x26b4d8: 0x846200d8
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_26b4dc:
    // 0x26b4dc: 0x50480004
    ctx->pc = 0x26B4DCu;
    {
        const bool branch_taken_0x26b4dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x26b4dc) {
            ctx->pc = 0x26B4E0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x26B4F0u;
            goto label_26b4f0;
        }
    }
    ctx->pc = 0x26B4E4u;
    // 0x26b4e4: 0xac850114
    ctx->pc = 0x26b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
label_26b4e8:
    // 0x26b4e8: 0x3e00008
    ctx->pc = 0x26B4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B4ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B4DCu: goto label_26b4dc;
            case 0x26B4E8u: goto label_26b4e8;
            case 0x26B4F0u: goto label_26b4f0;
            case 0x26B4F8u: goto label_26b4f8;
            case 0x26B504u: goto label_26b504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B4F0u;
label_26b4f0:
    // 0x26b4f0: 0x4a20001
    ctx->pc = 0x26B4F0u;
    {
        const bool branch_taken_0x26b4f0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x26b4f0) {
            ctx->pc = 0x26B4F4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->pc = 0x26B4F8u;
            goto label_26b4f8;
        }
    }
    ctx->pc = 0x26B4F8u;
label_26b4f8:
    // 0x26b4f8: 0x24c6ffff
    ctx->pc = 0x26b4f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b4fc: 0x1cc0ffec
    ctx->pc = 0x26B4FCu;
    {
        const bool branch_taken_0x26b4fc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B500u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x26b4fc) {
            ctx->pc = 0x26B4B0u;
            goto label_26b4b0;
        }
    }
    ctx->pc = 0x26B504u;
label_26b504:
    // 0x26b504: 0x3e00008
    ctx->pc = 0x26B504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B508u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B4B0u: goto label_26b4b0;
            case 0x26B4DCu: goto label_26b4dc;
            case 0x26B4E8u: goto label_26b4e8;
            case 0x26B4F0u: goto label_26b4f0;
            case 0x26B4F8u: goto label_26b4f8;
            case 0x26B504u: goto label_26b504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B50Cu;
}
