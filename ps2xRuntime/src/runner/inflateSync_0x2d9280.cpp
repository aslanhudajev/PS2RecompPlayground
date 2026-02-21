#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateSync
// Address: 0x2d9280 - 0x2d93c4
void inflateSync_0x2d9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d9280u;

    // 0x2d9280: 0x27bdffc0
    ctx->pc = 0x2d9280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9284: 0xffbf0030
    ctx->pc = 0x2d9284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9288: 0xffb20020
    ctx->pc = 0x2d9288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d928c: 0xffb10010
    ctx->pc = 0x2d928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d9290: 0x80902d
    ctx->pc = 0x2d9290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9294: 0x12400004
    ctx->pc = 0x2D9294u;
    {
        const bool branch_taken_0x2d9294 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9298u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2d9294) {
            ctx->pc = 0x2D92A8u;
            goto label_2d92a8;
        }
    }
    ctx->pc = 0x2D929Cu;
    // 0x2d929c: 0x8e42001c
    ctx->pc = 0x2d929cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d92a0: 0x54400003
    ctx->pc = 0x2D92A0u;
    {
        const bool branch_taken_0x2d92a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d92a0) {
            ctx->pc = 0x2D92A4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->pc = 0x2D92B0u;
            goto label_2d92b0;
        }
    }
    ctx->pc = 0x2D92A8u;
label_2d92a8:
    // 0x2d92a8: 0x10000040
    ctx->pc = 0x2D92A8u;
    {
        const bool branch_taken_0x2d92a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D92ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d92a8) {
            ctx->pc = 0x2D93ACu;
            goto label_2d93ac;
        }
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x8c620000
    ctx->pc = 0x2d92b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d92b4: 0x2404000d
    ctx->pc = 0x2d92b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d92b8: 0x50440005
    ctx->pc = 0x2D92B8u;
    {
        const bool branch_taken_0x2d92b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x2d92b8) {
            ctx->pc = 0x2D92BCu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2D92D0u;
            goto label_2d92d0;
        }
    }
    ctx->pc = 0x2D92C0u;
    // 0x2d92c0: 0xac640000
    ctx->pc = 0x2d92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d92c4: 0x8e42001c
    ctx->pc = 0x2d92c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d92c8: 0xac400004
    ctx->pc = 0x2d92c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d92cc: 0x8e460004
    ctx->pc = 0x2d92ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d92d0:
    // 0x2d92d0: 0x54c00003
    ctx->pc = 0x2D92D0u;
    {
        const bool branch_taken_0x2d92d0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d92d0) {
            ctx->pc = 0x2D92D4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2D92E0u;
            goto label_2d92e0;
        }
    }
    ctx->pc = 0x2D92D8u;
    // 0x2d92d8: 0x10000034
    ctx->pc = 0x2D92D8u;
    {
        const bool branch_taken_0x2d92d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D92DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2d92d8) {
            ctx->pc = 0x2D93ACu;
            goto label_2d93ac;
        }
    }
    ctx->pc = 0x2D92E0u;
label_2d92e0:
    // 0x2d92e0: 0x8e42001c
    ctx->pc = 0x2d92e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d92e4: 0x10c0001b
    ctx->pc = 0x2D92E4u;
    {
        const bool branch_taken_0x2d92e4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D92E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        if (branch_taken_0x2d92e4) {
            ctx->pc = 0x2D9354u;
            goto label_2d9354;
        }
    }
    ctx->pc = 0x2D92ECu;
    // 0x2d92ec: 0x2c820004
    ctx->pc = 0x2d92ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 4));
    // 0x2d92f0: 0x50400019
    ctx->pc = 0x2D92F0u;
    {
        const bool branch_taken_0x2d92f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d92f0) {
            ctx->pc = 0x2D92F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2D9358u;
            goto label_2d9358;
        }
    }
    ctx->pc = 0x2D92F8u;
    // 0x2d92f8: 0x240800ff
    ctx->pc = 0x2d92f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d92fc: 0x24070004
    ctx->pc = 0x2d92fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9300: 0x2c820002
    ctx->pc = 0x2d9300u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x2d9304: 0x0
    ctx->pc = 0x2d9304u;
    // NOP
label_2d9308:
    // 0x2d9308: 0x14400005
    ctx->pc = 0x2D9308u;
    {
        const bool branch_taken_0x2d9308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D930Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2d9308) {
            ctx->pc = 0x2D9320u;
            goto label_2d9320;
        }
    }
    ctx->pc = 0x2D9310u;
    // 0x2d9310: 0x5068000a
    ctx->pc = 0x2D9310u;
    {
        const bool branch_taken_0x2d9310 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        if (branch_taken_0x2d9310) {
            ctx->pc = 0x2D9314u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2D933Cu;
            goto label_2d933c;
        }
    }
    ctx->pc = 0x2D9318u;
    // 0x2d9318: 0x10000005
    ctx->pc = 0x2D9318u;
    {
        const bool branch_taken_0x2d9318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D931Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2d9318) {
            ctx->pc = 0x2D9330u;
            goto label_2d9330;
        }
    }
    ctx->pc = 0x2D9320u;
label_2d9320:
    // 0x2d9320: 0x54600003
    ctx->pc = 0x2D9320u;
    {
        const bool branch_taken_0x2d9320 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d9320) {
            ctx->pc = 0x2D9324u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2D9330u;
            goto label_2d9330;
        }
    }
    ctx->pc = 0x2D9328u;
    // 0x2d9328: 0x10000004
    ctx->pc = 0x2D9328u;
    {
        const bool branch_taken_0x2d9328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D932Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2d9328) {
            ctx->pc = 0x2D933Cu;
            goto label_2d933c;
        }
    }
    ctx->pc = 0x2D9330u;
label_2d9330:
    // 0x2d9330: 0x10400002
    ctx->pc = 0x2D9330u;
    {
        const bool branch_taken_0x2d9330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9334u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        if (branch_taken_0x2d9330) {
            ctx->pc = 0x2D933Cu;
            goto label_2d933c;
        }
    }
    ctx->pc = 0x2D9338u;
    // 0x2d9338: 0x202d
    ctx->pc = 0x2d9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d933c:
    // 0x2d933c: 0x24c6ffff
    ctx->pc = 0x2d933cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d9340: 0x10c00004
    ctx->pc = 0x2D9340u;
    {
        const bool branch_taken_0x2d9340 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9344u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2d9340) {
            ctx->pc = 0x2D9354u;
            goto label_2d9354;
        }
    }
    ctx->pc = 0x2D9348u;
    // 0x2d9348: 0x2c820004
    ctx->pc = 0x2d9348u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 4));
    // 0x2d934c: 0x1440ffee
    ctx->pc = 0x2D934Cu;
    {
        const bool branch_taken_0x2d934c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9350u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2d934c) {
            ctx->pc = 0x2D9308u;
            goto label_2d9308;
        }
    }
    ctx->pc = 0x2D9354u;
label_2d9354:
    // 0x2d9354: 0x8e420000
    ctx->pc = 0x2d9354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9358:
    // 0x2d9358: 0xa21023
    ctx->pc = 0x2d9358u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d935c: 0x8e430008
    ctx->pc = 0x2d935cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d9360: 0x431021
    ctx->pc = 0x2d9360u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9364: 0xae420008
    ctx->pc = 0x2d9364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2d9368: 0xae450000
    ctx->pc = 0x2d9368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2d936c: 0xae460004
    ctx->pc = 0x2d936cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x2d9370: 0x8e42001c
    ctx->pc = 0x2d9370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d9374: 0xac440004
    ctx->pc = 0x2d9374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2d9378: 0x24020004
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d937c: 0x1482000b
    ctx->pc = 0x2D937Cu;
    {
        const bool branch_taken_0x2d937c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D9380u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2d937c) {
            ctx->pc = 0x2D93ACu;
            goto label_2d93ac;
        }
    }
    ctx->pc = 0x2D9384u;
    // 0x2d9384: 0x8e500008
    ctx->pc = 0x2d9384u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d9388: 0x8e510014
    ctx->pc = 0x2d9388u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2d938c: 0xc0b6294
    ctx->pc = 0x2D938Cu;
    SET_GPR_U32(ctx, 31, 0x2D9394u);
    ctx->pc = 0x2D9390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflateReset_0x2d8a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9394u; }
    }
    if (ctx->pc != 0x2D9394u) { return; }
    ctx->pc = 0x2D9394u;
    // 0x2d9394: 0xae500008
    ctx->pc = 0x2d9394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x2d9398: 0xae510014
    ctx->pc = 0x2d9398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
    // 0x2d939c: 0x8e43001c
    ctx->pc = 0x2d939cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d93a0: 0x24020007
    ctx->pc = 0x2d93a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d93a4: 0xac620000
    ctx->pc = 0x2d93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d93a8: 0x102d
    ctx->pc = 0x2d93a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d93ac:
    // 0x2d93ac: 0xdfbf0030
    ctx->pc = 0x2d93acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d93b0: 0xdfb20020
    ctx->pc = 0x2d93b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d93b4: 0xdfb10010
    ctx->pc = 0x2d93b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d93b8: 0xdfb00000
    ctx->pc = 0x2d93b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d93bc: 0x3e00008
    ctx->pc = 0x2D93BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D93C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D92A8u: goto label_2d92a8;
            case 0x2D92B0u: goto label_2d92b0;
            case 0x2D92D0u: goto label_2d92d0;
            case 0x2D92E0u: goto label_2d92e0;
            case 0x2D9308u: goto label_2d9308;
            case 0x2D9320u: goto label_2d9320;
            case 0x2D9330u: goto label_2d9330;
            case 0x2D933Cu: goto label_2d933c;
            case 0x2D9354u: goto label_2d9354;
            case 0x2D9358u: goto label_2d9358;
            case 0x2D93ACu: goto label_2d93ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D93C4u;
}
