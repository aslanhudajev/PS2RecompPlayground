#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexBlitSetup
// Address: 0x2ad738 - 0x2ad8f0
void pbTexBlitSetup_0x2ad738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad738u;

    // 0x2ad738: 0x27bdffd0
    ctx->pc = 0x2ad738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad73c: 0xffbf0020
    ctx->pc = 0x2ad73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad740: 0xffb10010
    ctx->pc = 0x2ad740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ad744: 0xffb00000
    ctx->pc = 0x2ad744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad748: 0x80802d
    ctx->pc = 0x2ad748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad74c: 0x3c020036
    ctx->pc = 0x2ad74cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad750: 0x8c51dee0
    ctx->pc = 0x2ad750u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad754: 0x282d
    ctx->pc = 0x2ad754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad758: 0xc0becc6
    ctx->pc = 0x2AD758u;
    SET_GPR_U32(ctx, 31, 0x2AD760u);
    ctx->pc = 0x2AD75Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD760u; }
    }
    if (ctx->pc != 0x2AD760u) { return; }
    ctx->pc = 0x2AD760u;
    // 0x2ad760: 0xde020000
    ctx->pc = 0x2ad760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad764: 0x24038000
    ctx->pc = 0x2ad764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2ad768: 0x431024
    ctx->pc = 0x2ad768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad76c: 0x24030008
    ctx->pc = 0x2ad76cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ad770: 0x431025
    ctx->pc = 0x2ad770u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad774: 0x34038000
    ctx->pc = 0x2ad774u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2ad778: 0x431025
    ctx->pc = 0x2ad778u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad77c: 0x2403bfff
    ctx->pc = 0x2ad77cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2ad780: 0x31c38
    ctx->pc = 0x2ad780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad784: 0x3463ffff
    ctx->pc = 0x2ad784u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad788: 0x31c38
    ctx->pc = 0x2ad788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad78c: 0x3463ffff
    ctx->pc = 0x2ad78cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad790: 0x431024
    ctx->pc = 0x2ad790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad794: 0x3c03fc00
    ctx->pc = 0x2ad794u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64512 << 16));
    // 0x2ad798: 0x34637fff
    ctx->pc = 0x2ad798u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x2ad79c: 0x31c38
    ctx->pc = 0x2ad79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad7a0: 0x3463ffff
    ctx->pc = 0x2ad7a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad7a4: 0x31c38
    ctx->pc = 0x2ad7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad7a8: 0x3463ffff
    ctx->pc = 0x2ad7a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad7ac: 0x431024
    ctx->pc = 0x2ad7acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7b0: 0x3c03f3ff
    ctx->pc = 0x2ad7b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62463 << 16));
    // 0x2ad7b4: 0x3463ffff
    ctx->pc = 0x2ad7b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad7b8: 0x31c38
    ctx->pc = 0x2ad7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad7bc: 0x3463ffff
    ctx->pc = 0x2ad7bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad7c0: 0x31c38
    ctx->pc = 0x2ad7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ad7c4: 0x3463ffff
    ctx->pc = 0x2ad7c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad7c8: 0x431024
    ctx->pc = 0x2ad7c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7cc: 0x2403ffff
    ctx->pc = 0x2ad7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad7d0: 0x3193a
    ctx->pc = 0x2ad7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x2ad7d4: 0x431024
    ctx->pc = 0x2ad7d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7d8: 0x34038000
    ctx->pc = 0x2ad7d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2ad7dc: 0x31b7c
    ctx->pc = 0x2ad7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2ad7e0: 0x431025
    ctx->pc = 0x2ad7e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7e4: 0xfe020000
    ctx->pc = 0x2ad7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2ad7e8: 0xde020008
    ctx->pc = 0x2ad7e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ad7ec: 0x2403fff0
    ctx->pc = 0x2ad7ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2ad7f0: 0x431024
    ctx->pc = 0x2ad7f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7f4: 0x2403000e
    ctx->pc = 0x2ad7f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ad7f8: 0x431025
    ctx->pc = 0x2ad7f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad7fc: 0xfe020008
    ctx->pc = 0x2ad7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2ad800: 0x8e220008
    ctx->pc = 0x2ad800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ad804: 0xdc420020
    ctx->pc = 0x2ad804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ad808: 0x3c03c0ff
    ctx->pc = 0x2ad808u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49407 << 16));
    // 0x2ad80c: 0x3463ffff
    ctx->pc = 0x2ad80cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad810: 0x431024
    ctx->pc = 0x2ad810u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad814: 0xfe020010
    ctx->pc = 0x2ad814u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2ad818: 0xde020040
    ctx->pc = 0x2ad818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2ad81c: 0x2403fffe
    ctx->pc = 0x2ad81cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2ad820: 0x431024
    ctx->pc = 0x2ad820u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad824: 0x2403bfff
    ctx->pc = 0x2ad824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2ad828: 0x431024
    ctx->pc = 0x2ad828u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad82c: 0x3c03fffe
    ctx->pc = 0x2ad82cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2ad830: 0x3463ffff
    ctx->pc = 0x2ad830u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad834: 0x431024
    ctx->pc = 0x2ad834u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad838: 0xfe020040
    ctx->pc = 0x2ad838u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2ad83c: 0xde020060
    ctx->pc = 0x2ad83cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2ad840: 0x24030001
    ctx->pc = 0x2ad840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad844: 0x431025
    ctx->pc = 0x2ad844u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad848: 0x2403ffe3
    ctx->pc = 0x2ad848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x2ad84c: 0x431024
    ctx->pc = 0x2ad84cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad850: 0x2403ffdf
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2ad854: 0x431024
    ctx->pc = 0x2ad854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad858: 0x2403fe3f
    ctx->pc = 0x2ad858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x2ad85c: 0x431024
    ctx->pc = 0x2ad85cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad860: 0xfe020060
    ctx->pc = 0x2ad860u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x2ad864: 0xde020070
    ctx->pc = 0x2ad864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2ad868: 0x2403fffc
    ctx->pc = 0x2ad868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2ad86c: 0x431024
    ctx->pc = 0x2ad86cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad870: 0x2403fff3
    ctx->pc = 0x2ad870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2ad874: 0x431024
    ctx->pc = 0x2ad874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad878: 0x24030004
    ctx->pc = 0x2ad878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad87c: 0x431025
    ctx->pc = 0x2ad87cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad880: 0x2403ffcf
    ctx->pc = 0x2ad880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x2ad884: 0x431024
    ctx->pc = 0x2ad884u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad888: 0x2403ff3f
    ctx->pc = 0x2ad888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x2ad88c: 0x431024
    ctx->pc = 0x2ad88cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad890: 0x24030040
    ctx->pc = 0x2ad890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ad894: 0x431025
    ctx->pc = 0x2ad894u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad898: 0xfe020070
    ctx->pc = 0x2ad898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x2ad89c: 0x2402004d
    ctx->pc = 0x2ad89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 77));
    // 0x2ad8a0: 0xfe020018
    ctx->pc = 0x2ad8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2ad8a4: 0x24020019
    ctx->pc = 0x2ad8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ad8a8: 0xfe020028
    ctx->pc = 0x2ad8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x2ad8ac: 0x24020041
    ctx->pc = 0x2ad8acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2ad8b0: 0xfe020038
    ctx->pc = 0x2ad8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x2ad8b4: 0x24020048
    ctx->pc = 0x2ad8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x2ad8b8: 0xfe020048
    ctx->pc = 0x2ad8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2ad8bc: 0x24020007
    ctx->pc = 0x2ad8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ad8c0: 0xfe020058
    ctx->pc = 0x2ad8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x2ad8c4: 0x24020015
    ctx->pc = 0x2ad8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ad8c8: 0xfe020068
    ctx->pc = 0x2ad8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x2ad8cc: 0x24020043
    ctx->pc = 0x2ad8ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 67));
    // 0x2ad8d0: 0xfe020078
    ctx->pc = 0x2ad8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
    // 0x2ad8d4: 0x2402003f
    ctx->pc = 0x2ad8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x2ad8d8: 0xfe020088
    ctx->pc = 0x2ad8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 2));
    // 0x2ad8dc: 0xdfbf0020
    ctx->pc = 0x2ad8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad8e0: 0xdfb10010
    ctx->pc = 0x2ad8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad8e4: 0xdfb00000
    ctx->pc = 0x2ad8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad8e8: 0x3e00008
    ctx->pc = 0x2AD8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD8F0u;
}
