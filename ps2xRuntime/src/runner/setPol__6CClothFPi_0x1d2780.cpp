#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPol__6CClothFPi
// Address: 0x1d2780 - 0x1d286c
void setPol__6CClothFPi_0x1d2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPol__6CClothFPi");


    ctx->pc = 0x1d2780u;

    // 0x1d2780: 0xac850004
    ctx->pc = 0x1d2780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1d2784: 0x8ca3002c
    ctx->pc = 0x1d2784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1d2788: 0x70003e28
    ctx->pc = 0x1d2788u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d278c: 0x31880
    ctx->pc = 0x1d278cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2790: 0x2463000c
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1d2794: 0x31880
    ctx->pc = 0x1d2794u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2798: 0xa31821
    ctx->pc = 0x1d2798u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d279c: 0x1000002e
    ctx->pc = 0x1D279Cu;
    {
        const bool branch_taken_0x1d279c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D27A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x1d279c) {
            ctx->pc = 0x1D2858u;
            goto label_1d2858;
        }
    }
    ctx->pc = 0x1D27A4u;
label_1d27a4:
    // 0x1d27a4: 0x8cc600d8
    ctx->pc = 0x1d27a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x1d27a8: 0x70e02e28
    ctx->pc = 0x1d27a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1d27ac: 0x10000026
    ctx->pc = 0x1D27ACu;
    {
        const bool branch_taken_0x1d27ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D27B0u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x1d27ac) {
            ctx->pc = 0x1D2848u;
            goto label_1d2848;
        }
    }
    ctx->pc = 0x1D27B4u;
label_1d27b4:
    // 0x1d27b4: 0x8c6a0004
    ctx->pc = 0x1d27b4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d27b8: 0x1d400004
    ctx->pc = 0x1D27B8u;
    {
        const bool branch_taken_0x1d27b8 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1D27BCu;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x1d27b8) {
            ctx->pc = 0x1D27CCu;
            goto label_1d27cc;
        }
    }
    ctx->pc = 0x1D27C0u;
label_1d27c0:
    // 0x1d27c0: 0x1000ffff
    ctx->pc = 0x1D27C0u;
    {
        const bool branch_taken_0x1d27c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d27c0) {
            ctx->pc = 0x1D27C0u;
            goto label_1d27c0;
        }
    }
    ctx->pc = 0x1D27C8u;
    // 0x1d27c8: 0xa4040
    ctx->pc = 0x1d27c8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 1));
label_1d27cc:
    // 0x1d27cc: 0x10a4021
    ctx->pc = 0x1d27ccu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1d27d0: 0x2508000a
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 10));
    // 0x1d27d4: 0x84080
    ctx->pc = 0x1d27d4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1d27d8: 0x686021
    ctx->pc = 0x1d27d8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d27dc: 0x71404628
    ctx->pc = 0x1d27dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1d27e0: 0x246b0024
    ctx->pc = 0x1d27e0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 36));
    // 0x1d27e4: 0x11000010
    ctx->pc = 0x1D27E4u;
    {
        const bool branch_taken_0x1d27e4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D27E8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
        if (branch_taken_0x1d27e4) {
            ctx->pc = 0x1D2828u;
            goto label_1d2828;
        }
    }
    ctx->pc = 0x1D27ECu;
    // 0x1d27ec: 0x70a06e28
    ctx->pc = 0x1d27ecu;
    SET_GPR_VEC(ctx, 13, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1d27f0:
    // 0x1d27f0: 0x8c890024
    ctx->pc = 0x1d27f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d27f4: 0x71404628
    ctx->pc = 0x1d27f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1d27f8: 0x24a50004
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d27fc: 0x24e70004
    ctx->pc = 0x1d27fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d2800: 0x254affff
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1d2804: 0x12d4821
    ctx->pc = 0x1d2804u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1d2808: 0xad2b0000
    ctx->pc = 0x1d2808u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1d280c: 0x8c890034
    ctx->pc = 0x1d280cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d2810: 0x256b000c
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 12));
    // 0x1d2814: 0x12d4821
    ctx->pc = 0x1d2814u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1d2818: 0xad2c0000
    ctx->pc = 0x1d2818u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x1d281c: 0x258c0004
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4));
    // 0x1d2820: 0x1500fff3
    ctx->pc = 0x1D2820u;
    {
        const bool branch_taken_0x1d2820 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2824u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4));
        if (branch_taken_0x1d2820) {
            ctx->pc = 0x1D27F0u;
            goto label_1d27f0;
        }
    }
    ctx->pc = 0x1D2828u;
label_1d2828:
    // 0x1d2828: 0x8c6a0004
    ctx->pc = 0x1d2828u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d282c: 0x2408fffc
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d2830: 0xa48c0
    ctx->pc = 0x1d2830u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d2834: 0x12a4823
    ctx->pc = 0x1d2834u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d2838: 0x25290014
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 20));
    // 0x1d283c: 0x1284024
    ctx->pc = 0x1d283cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d2840: 0x84080
    ctx->pc = 0x1d2840u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1d2844: 0x681821
    ctx->pc = 0x1d2844u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1d2848:
    // 0x1d2848: 0xc34023
    ctx->pc = 0x1d2848u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d284c: 0x29010011
    ctx->pc = 0x1d284cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), 17));
    // 0x1d2850: 0x1020ffd8
    ctx->pc = 0x1D2850u;
    {
        const bool branch_taken_0x1d2850 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d2850) {
            ctx->pc = 0x1D27B4u;
            goto label_1d27b4;
        }
    }
    ctx->pc = 0x1D2858u;
label_1d2858:
    // 0x1d2858: 0x8cc30000
    ctx->pc = 0x1d2858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d285c: 0x1460ffd1
    ctx->pc = 0x1D285Cu;
    {
        const bool branch_taken_0x1d285c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2860u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 224));
        if (branch_taken_0x1d285c) {
            ctx->pc = 0x1D27A4u;
            goto label_1d27a4;
        }
    }
    ctx->pc = 0x1D2864u;
    // 0x1d2864: 0x3e00008
    ctx->pc = 0x1D2864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D27A4u: goto label_1d27a4;
            case 0x1D27B4u: goto label_1d27b4;
            case 0x1D27C0u: goto label_1d27c0;
            case 0x1D27CCu: goto label_1d27cc;
            case 0x1D27F0u: goto label_1d27f0;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2848u: goto label_1d2848;
            case 0x1D2858u: goto label_1d2858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D286Cu;
}
