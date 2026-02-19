#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tally_enemies
// Address: 0x227368 - 0x227448
void tally_enemies_0x227368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227368u;

    // 0x227368: 0x80282d
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22736c: 0x3c03003c
    ctx->pc = 0x22736cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x227370: 0x24631878
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6264));
    // 0x227374: 0x8ca20000
    ctx->pc = 0x227374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227378: 0x21080
    ctx->pc = 0x227378u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22737c: 0x431021
    ctx->pc = 0x22737cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227380: 0x8c460000
    ctx->pc = 0x227380u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227384: 0x3c020031
    ctx->pc = 0x227384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x227388: 0x8c42ff9c
    ctx->pc = 0x227388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x22738c: 0x14400020
    ctx->pc = 0x22738Cu;
    {
        const bool branch_taken_0x22738c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227390u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x22738c) {
            ctx->pc = 0x227410u;
            goto label_227410;
        }
    }
    ctx->pc = 0x227394u;
    // 0x227394: 0x24631b90
    ctx->pc = 0x227394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x227398: 0x8ca20000
    ctx->pc = 0x227398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22739c: 0x2404003c
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2273a0: 0x441018
    ctx->pc = 0x2273a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2273a4: 0x621821
    ctx->pc = 0x2273a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2273a8: 0x8c620004
    ctx->pc = 0x2273a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2273ac: 0x3c030f00
    ctx->pc = 0x2273acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x2273b0: 0x431024
    ctx->pc = 0x2273b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2273b4: 0x10400002
    ctx->pc = 0x2273B4u;
    {
        const bool branch_taken_0x2273b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2273B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2273b4) {
            ctx->pc = 0x2273C0u;
            goto label_2273c0;
        }
    }
    ctx->pc = 0x2273BCu;
    // 0x2273bc: 0xc23018
    ctx->pc = 0x2273bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2273c0:
    // 0x2273c0: 0x3c04003c
    ctx->pc = 0x2273c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2273c4: 0x24841838
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6200));
    // 0x2273c8: 0x8ca30000
    ctx->pc = 0x2273c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2273cc: 0x31880
    ctx->pc = 0x2273ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2273d0: 0x641821
    ctx->pc = 0x2273d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2273d4: 0x8c620000
    ctx->pc = 0x2273d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2273d8: 0xc21021
    ctx->pc = 0x2273d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2273dc: 0xac620000
    ctx->pc = 0x2273dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2273e0: 0x8ca20000
    ctx->pc = 0x2273e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2273e4: 0x21080
    ctx->pc = 0x2273e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2273e8: 0x441021
    ctx->pc = 0x2273e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2273ec: 0x8ca3000c
    ctx->pc = 0x2273ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2273f0: 0x2404001c
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2273f4: 0x643018
    ctx->pc = 0x2273f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2273f8: 0xc51821
    ctx->pc = 0x2273f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2273fc: 0x8c420000
    ctx->pc = 0x2273fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227400: 0x8c630b2c
    ctx->pc = 0x227400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2860)));
    // 0x227404: 0x43102a
    ctx->pc = 0x227404u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x227408: 0x10400003
    ctx->pc = 0x227408u;
    {
        const bool branch_taken_0x227408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22740Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x227408) {
            ctx->pc = 0x227418u;
            goto label_227418;
        }
    }
    ctx->pc = 0x227410u;
label_227410:
    // 0x227410: 0x3e00008
    ctx->pc = 0x227410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227414u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2273C0u: goto label_2273c0;
            case 0x227410u: goto label_227410;
            case 0x227418u: goto label_227418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227418u;
label_227418:
    // 0x227418: 0x24421838
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6200));
    // 0x22741c: 0x8ca40000
    ctx->pc = 0x22741cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227420: 0x42080
    ctx->pc = 0x227420u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x227424: 0x822021
    ctx->pc = 0x227424u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227428: 0x8ca2000c
    ctx->pc = 0x227428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22742c: 0x2403001c
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x227430: 0x433018
    ctx->pc = 0x227430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227434: 0xc51021
    ctx->pc = 0x227434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x227438: 0x8c420b2c
    ctx->pc = 0x227438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2860)));
    // 0x22743c: 0xac820000
    ctx->pc = 0x22743cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x227440: 0x3e00008
    ctx->pc = 0x227440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2273C0u: goto label_2273c0;
            case 0x227410u: goto label_227410;
            case 0x227418u: goto label_227418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227448u;
}
