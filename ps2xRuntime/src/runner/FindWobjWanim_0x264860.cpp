#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindWobjWanim
// Address: 0x264860 - 0x2648cc
void FindWobjWanim_0x264860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264860u;

    // 0x264860: 0x3c030032
    ctx->pc = 0x264860u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x264864: 0x2463f9f8
    ctx->pc = 0x264864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965752));
    // 0x264868: 0x8c620004
    ctx->pc = 0x264868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26486c: 0x822023
    ctx->pc = 0x26486cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x264870: 0x3c02eeee
    ctx->pc = 0x264870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61166 << 16));
    // 0x264874: 0x3442eeef
    ctx->pc = 0x264874u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61167));
    // 0x264878: 0x821018
    ctx->pc = 0x264878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26487c: 0x22083
    ctx->pc = 0x26487cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x264880: 0x8c620090
    ctx->pc = 0x264880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x264884: 0x1840000f
    ctx->pc = 0x264884u;
    {
        const bool branch_taken_0x264884 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x264888u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x264884) {
            ctx->pc = 0x2648C4u;
            goto label_2648c4;
        }
    }
    ctx->pc = 0x26488Cu;
    // 0x26488c: 0x3c020032
    ctx->pc = 0x26488cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x264890: 0x2442f9f8
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x264894: 0x8c47008c
    ctx->pc = 0x264894u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x264898: 0x8c460090
    ctx->pc = 0x264898u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x26489c: 0x51100
    ctx->pc = 0x26489cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_2648a0:
    // 0x2648a0: 0x471821
    ctx->pc = 0x2648a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2648a4: 0x84620000
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2648a8: 0x14440003
    ctx->pc = 0x2648A8u;
    {
        const bool branch_taken_0x2648a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x2648ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2648a8) {
            ctx->pc = 0x2648B8u;
            goto label_2648b8;
        }
    }
    ctx->pc = 0x2648B0u;
    // 0x2648b0: 0x3e00008
    ctx->pc = 0x2648B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2648B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2648A0u: goto label_2648a0;
            case 0x2648B8u: goto label_2648b8;
            case 0x2648C4u: goto label_2648c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2648B8u;
label_2648b8:
    // 0x2648b8: 0xa6102a
    ctx->pc = 0x2648b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2648bc: 0x1440fff8
    ctx->pc = 0x2648BCu;
    {
        const bool branch_taken_0x2648bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2648C0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2648bc) {
            ctx->pc = 0x2648A0u;
            goto label_2648a0;
        }
    }
    ctx->pc = 0x2648C4u;
label_2648c4:
    // 0x2648c4: 0x3e00008
    ctx->pc = 0x2648C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2648C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2648A0u: goto label_2648a0;
            case 0x2648B8u: goto label_2648b8;
            case 0x2648C4u: goto label_2648c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2648CCu;
}
