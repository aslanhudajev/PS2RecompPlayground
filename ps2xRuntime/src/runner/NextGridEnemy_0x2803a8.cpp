#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextGridEnemy
// Address: 0x2803a8 - 0x28047c
void NextGridEnemy_0x2803a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2803a8u;

    // 0x2803a8: 0x3c02003c
    ctx->pc = 0x2803a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2803ac: 0x8c423a88
    ctx->pc = 0x2803acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14984)));
    // 0x2803b0: 0x4410023
    ctx->pc = 0x2803B0u;
    {
        const bool branch_taken_0x2803b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2803B4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
        if (branch_taken_0x2803b0) {
            ctx->pc = 0x280440u;
            goto label_280440;
        }
    }
    ctx->pc = 0x2803B8u;
    // 0x2803b8: 0x3c04003c
    ctx->pc = 0x2803b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2803bc: 0x3c02003c
    ctx->pc = 0x2803bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2803c0: 0x8c483a80
    ctx->pc = 0x2803c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 14976)));
    // 0x2803c4: 0x3c05003c
    ctx->pc = 0x2803c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2803c8: 0x3c02003c
    ctx->pc = 0x2803c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2803cc: 0x8c473a84
    ctx->pc = 0x2803ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 14980)));
    // 0x2803d0: 0x3c02003c
    ctx->pc = 0x2803d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2803d4: 0x8c463a78
    ctx->pc = 0x2803d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 14968)));
    // 0x2803d8: 0x3c0a003c
    ctx->pc = 0x2803d8u;
    SET_GPR_U32(ctx, 10, ((uint32_t)60 << 16));
    // 0x2803dc: 0x3c020034
    ctx->pc = 0x2803dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2803e0: 0x244956a8
    ctx->pc = 0x2803e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 22184));
    // 0x2803e4: 0x0
    ctx->pc = 0x2803e4u;
    // NOP
label_2803e8:
    // 0x2803e8: 0x8c823a70
    ctx->pc = 0x2803e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14960)));
    // 0x2803ec: 0x24420001
    ctx->pc = 0x2803ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2803f0: 0xac823a70
    ctx->pc = 0x2803f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14960), GPR_U32(ctx, 2));
    // 0x2803f4: 0x102102a
    ctx->pc = 0x2803f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x2803f8: 0x10400007
    ctx->pc = 0x2803F8u;
    {
        const bool branch_taken_0x2803f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2803FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 14964)));
        if (branch_taken_0x2803f8) {
            ctx->pc = 0x280418u;
            goto label_280418;
        }
    }
    ctx->pc = 0x280400u;
    // 0x280400: 0x24420001
    ctx->pc = 0x280400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x280404: 0xaca23a74
    ctx->pc = 0x280404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14964), GPR_U32(ctx, 2));
    // 0x280408: 0xe2102a
    ctx->pc = 0x280408u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x28040c: 0x14400017
    ctx->pc = 0x28040Cu;
    {
        const bool branch_taken_0x28040c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28040c) {
            ctx->pc = 0x28046Cu;
            goto label_28046c;
        }
    }
    ctx->pc = 0x280414u;
    // 0x280414: 0xac863a70
    ctx->pc = 0x280414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14960), GPR_U32(ctx, 6));
label_280418:
    // 0x280418: 0x8c823a70
    ctx->pc = 0x280418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14960)));
    // 0x28041c: 0x21080
    ctx->pc = 0x28041cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x280420: 0x8ca33a74
    ctx->pc = 0x280420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 14964)));
    // 0x280424: 0x31a00
    ctx->pc = 0x280424u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x280428: 0x431021
    ctx->pc = 0x280428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28042c: 0x491021
    ctx->pc = 0x28042cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x280430: 0x84420000
    ctx->pc = 0x280430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280434: 0x440ffec
    ctx->pc = 0x280434u;
    {
        const bool branch_taken_0x280434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x280438u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 14984), GPR_U32(ctx, 2));
        if (branch_taken_0x280434) {
            ctx->pc = 0x2803E8u;
            goto label_2803e8;
        }
    }
    ctx->pc = 0x28043Cu;
    // 0x28043c: 0x3c05003c
    ctx->pc = 0x28043cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_280440:
    // 0x280440: 0x8ca43a88
    ctx->pc = 0x280440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 14984)));
    // 0x280444: 0x480000b
    ctx->pc = 0x280444u;
    {
        const bool branch_taken_0x280444 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x280448u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x280444) {
            ctx->pc = 0x280474u;
            goto label_280474;
        }
    }
    ctx->pc = 0x28044Cu;
    // 0x28044c: 0x2463dfd0
    ctx->pc = 0x28044cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x280450: 0x240203b0
    ctx->pc = 0x280450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x280454: 0x821018
    ctx->pc = 0x280454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x280458: 0x431021
    ctx->pc = 0x280458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28045c: 0x84420210
    ctx->pc = 0x28045cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x280460: 0xaca23a88
    ctx->pc = 0x280460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14984), GPR_U32(ctx, 2));
    // 0x280464: 0x3e00008
    ctx->pc = 0x280464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280468u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2803E8u: goto label_2803e8;
            case 0x280418u: goto label_280418;
            case 0x280440u: goto label_280440;
            case 0x28046Cu: goto label_28046c;
            case 0x280474u: goto label_280474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28046Cu;
label_28046c:
    // 0x28046c: 0x3e00008
    ctx->pc = 0x28046Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2803E8u: goto label_2803e8;
            case 0x280418u: goto label_280418;
            case 0x280440u: goto label_280440;
            case 0x28046Cu: goto label_28046c;
            case 0x280474u: goto label_280474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280474u;
label_280474:
    // 0x280474: 0x3e00008
    ctx->pc = 0x280474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2803E8u: goto label_2803e8;
            case 0x280418u: goto label_280418;
            case 0x280440u: goto label_280440;
            case 0x28046Cu: goto label_28046c;
            case 0x280474u: goto label_280474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28047Cu;
}
