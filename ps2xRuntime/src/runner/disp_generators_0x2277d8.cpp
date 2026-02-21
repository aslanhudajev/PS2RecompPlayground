#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_generators
// Address: 0x2277d8 - 0x2278e8
void disp_generators_0x2277d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2277d8u;

    // 0x2277d8: 0x27bdffb0
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2277dc: 0xffbf0040
    ctx->pc = 0x2277dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2277e0: 0xffb20030
    ctx->pc = 0x2277e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2277e4: 0xffb10020
    ctx->pc = 0x2277e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2277e8: 0xffb00010
    ctx->pc = 0x2277e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2277ec: 0x80902d
    ctx->pc = 0x2277ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277f0: 0x3c020032
    ctx->pc = 0x2277f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2277f4: 0x24420740
    ctx->pc = 0x2277f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1856));
    // 0x2277f8: 0x8e430000
    ctx->pc = 0x2277f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2277fc: 0x31880
    ctx->pc = 0x2277fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227800: 0x621021
    ctx->pc = 0x227800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227804: 0x8c440000
    ctx->pc = 0x227804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227808: 0x3c110032
    ctx->pc = 0x227808u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x22780c: 0x26310770
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1904));
    // 0x227810: 0x711821
    ctx->pc = 0x227810u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x227814: 0x3c100032
    ctx->pc = 0x227814u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x227818: 0x26100780
    ctx->pc = 0x227818u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1920));
    // 0x22781c: 0x8c620000
    ctx->pc = 0x22781cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227820: 0x8e050008
    ctx->pc = 0x227820u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227824: 0x24840007
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7));
    // 0x227828: 0x452821
    ctx->pc = 0x227828u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22782c: 0x24060007
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x227830: 0x3c0700ff
    ctx->pc = 0x227830u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x227834: 0x34e7ffff
    ctx->pc = 0x227834u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x227838: 0x3c013f00
    ctx->pc = 0x227838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22783c: 0x44816000
    ctx->pc = 0x22783cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227840: 0x3c08003a
    ctx->pc = 0x227840u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x227844: 0xc080510
    ctx->pc = 0x227844u;
    SET_GPR_U32(ctx, 31, 0x22784Cu);
    ctx->pc = 0x227848u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27960));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22784Cu; }
    }
    if (ctx->pc != 0x22784Cu) { return; }
    ctx->pc = 0x22784Cu;
    // 0x22784c: 0x3c02003c
    ctx->pc = 0x22784cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x227850: 0x24421848
    ctx->pc = 0x227850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6216));
    // 0x227854: 0x8e430000
    ctx->pc = 0x227854u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x227858: 0x31880
    ctx->pc = 0x227858u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22785c: 0x621821
    ctx->pc = 0x22785cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227860: 0x3a0202d
    ctx->pc = 0x227860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227864: 0x3c05003a
    ctx->pc = 0x227864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227868: 0x24a56d30
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27952));
    // 0x22786c: 0xc0b6252
    ctx->pc = 0x22786Cu;
    SET_GPR_U32(ctx, 31, 0x227874u);
    ctx->pc = 0x227870u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227874u; }
    }
    if (ctx->pc != 0x227874u) { return; }
    ctx->pc = 0x227874u;
    // 0x227874: 0x3a0202d
    ctx->pc = 0x227874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227878: 0x3c013f00
    ctx->pc = 0x227878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22787c: 0x44816000
    ctx->pc = 0x22787cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227880: 0xc080552
    ctx->pc = 0x227880u;
    SET_GPR_U32(ctx, 31, 0x227888u);
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227888u; }
    }
    if (ctx->pc != 0x227888u) { return; }
    ctx->pc = 0x227888u;
    // 0x227888: 0x3c040032
    ctx->pc = 0x227888u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22788c: 0x24840760
    ctx->pc = 0x22788cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1888));
    // 0x227890: 0x8e430000
    ctx->pc = 0x227890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x227894: 0x31880
    ctx->pc = 0x227894u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227898: 0x642021
    ctx->pc = 0x227898u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22789c: 0x8c840000
    ctx->pc = 0x22789cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2278a0: 0x711821
    ctx->pc = 0x2278a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2278a4: 0x8c630000
    ctx->pc = 0x2278a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2278a8: 0x8e050008
    ctx->pc = 0x2278a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2278ac: 0x822023
    ctx->pc = 0x2278acu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2278b0: 0x652821
    ctx->pc = 0x2278b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2278b4: 0x24060007
    ctx->pc = 0x2278b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2278b8: 0x3c0700ff
    ctx->pc = 0x2278b8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2278bc: 0x34e7ffff
    ctx->pc = 0x2278bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2278c0: 0x3c013f00
    ctx->pc = 0x2278c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2278c4: 0x44816000
    ctx->pc = 0x2278c4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2278c8: 0xc080510
    ctx->pc = 0x2278C8u;
    SET_GPR_U32(ctx, 31, 0x2278D0u);
    ctx->pc = 0x2278CCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278D0u; }
    }
    if (ctx->pc != 0x2278D0u) { return; }
    ctx->pc = 0x2278D0u;
    // 0x2278d0: 0xdfbf0040
    ctx->pc = 0x2278d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2278d4: 0xdfb20030
    ctx->pc = 0x2278d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2278d8: 0xdfb10020
    ctx->pc = 0x2278d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2278dc: 0xdfb00010
    ctx->pc = 0x2278dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278e0: 0x3e00008
    ctx->pc = 0x2278E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2278E8u;
}
