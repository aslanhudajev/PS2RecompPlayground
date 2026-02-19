#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawBlitFlatQuad
// Address: 0x2c2638 - 0x2c27a4
void DrawBlitFlatQuad_0x2c2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2638u;

    // 0x2c2638: 0x3c020036
    ctx->pc = 0x2c2638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c263c: 0x8c45dee0
    ctx->pc = 0x2c263cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c2640: 0x84880008
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c2644: 0x8ca30040
    ctx->pc = 0x2c2644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2c2648: 0x8c620008
    ctx->pc = 0x2c2648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c264c: 0x1024021
    ctx->pc = 0x2c264cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c2650: 0x948a0010
    ctx->pc = 0x2c2650u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c2654: 0x10a5021
    ctx->pc = 0x2c2654u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2c2658: 0x8486000a
    ctx->pc = 0x2c2658u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2c265c: 0x8c62000c
    ctx->pc = 0x2c265cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c2660: 0xc23021
    ctx->pc = 0x2c2660u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c2664: 0x94890012
    ctx->pc = 0x2c2664u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2c2668: 0xc94821
    ctx->pc = 0x2c2668u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2c266c: 0x8ca20010
    ctx->pc = 0x2c266cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c2670: 0x8c470034
    ctx->pc = 0x2c2670u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2c2674: 0x8c82000c
    ctx->pc = 0x2c2674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c2678: 0xe23823
    ctx->pc = 0x2c2678u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c267c: 0x3c0b0037
    ctx->pc = 0x2c267cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)55 << 16));
    // 0x2c2680: 0x8d622970
    ctx->pc = 0x2c2680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 10608)));
    // 0x2c2684: 0x3c051000
    ctx->pc = 0x2c2684u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2c2688: 0x3c031000
    ctx->pc = 0x2c2688u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c268c: 0x34630006
    ctx->pc = 0x2c268cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x2c2690: 0xac430000
    ctx->pc = 0x2c2690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c2694: 0x24420004
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2698: 0xac400000
    ctx->pc = 0x2c2698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c269c: 0x24420004
    ctx->pc = 0x2c269cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26a0: 0xac450000
    ctx->pc = 0x2c26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2c26a4: 0x24420004
    ctx->pc = 0x2c26a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26a8: 0x3c035000
    ctx->pc = 0x2c26a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2c26ac: 0x34630006
    ctx->pc = 0x2c26acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x2c26b0: 0xac430000
    ctx->pc = 0x2c26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c26b4: 0x24420004
    ctx->pc = 0x2c26b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26b8: 0x34038001
    ctx->pc = 0x2c26b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32769));
    // 0x2c26bc: 0xac430000
    ctx->pc = 0x2c26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c26c0: 0x24420004
    ctx->pc = 0x2c26c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26c4: 0x3c0350a2
    ctx->pc = 0x2c26c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20642 << 16));
    // 0x2c26c8: 0x34634000
    ctx->pc = 0x2c26c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x2c26cc: 0xac430000
    ctx->pc = 0x2c26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c26d0: 0x24420004
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26d4: 0x3c030005
    ctx->pc = 0x2c26d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x2c26d8: 0x34635551
    ctx->pc = 0x2c26d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 21841));
    // 0x2c26dc: 0xac430000
    ctx->pc = 0x2c26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c26e0: 0x24420004
    ctx->pc = 0x2c26e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26e4: 0xac400000
    ctx->pc = 0x2c26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c26e8: 0x24420004
    ctx->pc = 0x2c26e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26ec: 0x9083001e
    ctx->pc = 0x2c26ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x2c26f0: 0xac430000
    ctx->pc = 0x2c26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c26f4: 0x24420004
    ctx->pc = 0x2c26f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c26f8: 0x9083001d
    ctx->pc = 0x2c26f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x2c26fc: 0xac430000
    ctx->pc = 0x2c26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c2700: 0x24420004
    ctx->pc = 0x2c2700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2704: 0x9083001c
    ctx->pc = 0x2c2704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c2708: 0xac430000
    ctx->pc = 0x2c2708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c270c: 0x24420004
    ctx->pc = 0x2c270cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2710: 0x9083001f
    ctx->pc = 0x2c2710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x2c2714: 0xac430000
    ctx->pc = 0x2c2714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c2718: 0x24420004
    ctx->pc = 0x2c2718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c271c: 0xac480000
    ctx->pc = 0x2c271cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2c2720: 0x24420004
    ctx->pc = 0x2c2720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2724: 0xac460000
    ctx->pc = 0x2c2724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2c2728: 0x24420004
    ctx->pc = 0x2c2728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c272c: 0xac470000
    ctx->pc = 0x2c272cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c2730: 0x24420004
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2734: 0xac400000
    ctx->pc = 0x2c2734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c2738: 0x24420004
    ctx->pc = 0x2c2738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c273c: 0xac4a0000
    ctx->pc = 0x2c273cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2c2740: 0x24420004
    ctx->pc = 0x2c2740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2744: 0xac460000
    ctx->pc = 0x2c2744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2c2748: 0x24420004
    ctx->pc = 0x2c2748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c274c: 0xac470000
    ctx->pc = 0x2c274cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c2750: 0x24420004
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2754: 0xac400000
    ctx->pc = 0x2c2754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c2758: 0x24420004
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c275c: 0xac480000
    ctx->pc = 0x2c275cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x2c2760: 0x24420004
    ctx->pc = 0x2c2760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2764: 0xac490000
    ctx->pc = 0x2c2764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2c2768: 0x24420004
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c276c: 0xac470000
    ctx->pc = 0x2c276cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c2770: 0x24420004
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2774: 0xac400000
    ctx->pc = 0x2c2774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c2778: 0x24420004
    ctx->pc = 0x2c2778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c277c: 0xac4a0000
    ctx->pc = 0x2c277cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2c2780: 0x24420004
    ctx->pc = 0x2c2780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2784: 0xac490000
    ctx->pc = 0x2c2784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2c2788: 0x24420004
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c278c: 0xac470000
    ctx->pc = 0x2c278cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2c2790: 0x24420004
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c2794: 0xac400000
    ctx->pc = 0x2c2794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c2798: 0x24420004
    ctx->pc = 0x2c2798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c279c: 0x3e00008
    ctx->pc = 0x2C279Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C27A0u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 10608), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C27A4u;
}
