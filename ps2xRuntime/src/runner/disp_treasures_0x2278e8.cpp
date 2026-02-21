#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_treasures
// Address: 0x2278e8 - 0x2279f8
void disp_treasures_0x2278e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2278e8u;

    // 0x2278e8: 0x27bdffb0
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2278ec: 0xffbf0040
    ctx->pc = 0x2278ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2278f0: 0xffb20030
    ctx->pc = 0x2278f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2278f4: 0xffb10020
    ctx->pc = 0x2278f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2278f8: 0xffb00010
    ctx->pc = 0x2278f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2278fc: 0x80902d
    ctx->pc = 0x2278fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227900: 0x3c020032
    ctx->pc = 0x227900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227904: 0x24420740
    ctx->pc = 0x227904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1856));
    // 0x227908: 0x8e430000
    ctx->pc = 0x227908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22790c: 0x31880
    ctx->pc = 0x22790cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227910: 0x621021
    ctx->pc = 0x227910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227914: 0x8c440000
    ctx->pc = 0x227914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227918: 0x3c110032
    ctx->pc = 0x227918u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x22791c: 0x26310770
    ctx->pc = 0x22791cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1904));
    // 0x227920: 0x711821
    ctx->pc = 0x227920u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x227924: 0x3c100032
    ctx->pc = 0x227924u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x227928: 0x26100780
    ctx->pc = 0x227928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1920));
    // 0x22792c: 0x8c620000
    ctx->pc = 0x22792cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227930: 0x8e05000c
    ctx->pc = 0x227930u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x227934: 0x24840007
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7));
    // 0x227938: 0x452821
    ctx->pc = 0x227938u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22793c: 0x24060007
    ctx->pc = 0x22793cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x227940: 0x3c0700ff
    ctx->pc = 0x227940u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x227944: 0x34e7ffff
    ctx->pc = 0x227944u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x227948: 0x3c013f00
    ctx->pc = 0x227948u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22794c: 0x44816000
    ctx->pc = 0x22794cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227950: 0x3c08003a
    ctx->pc = 0x227950u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x227954: 0xc080510
    ctx->pc = 0x227954u;
    SET_GPR_U32(ctx, 31, 0x22795Cu);
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27976));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22795Cu; }
    }
    if (ctx->pc != 0x22795Cu) { return; }
    ctx->pc = 0x22795Cu;
    // 0x22795c: 0x3c02003c
    ctx->pc = 0x22795cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x227960: 0x24421828
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6184));
    // 0x227964: 0x8e430000
    ctx->pc = 0x227964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x227968: 0x31880
    ctx->pc = 0x227968u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22796c: 0x621821
    ctx->pc = 0x22796cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227970: 0x3a0202d
    ctx->pc = 0x227970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227974: 0x3c05003a
    ctx->pc = 0x227974u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227978: 0x24a56d30
    ctx->pc = 0x227978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27952));
    // 0x22797c: 0xc0b6252
    ctx->pc = 0x22797Cu;
    SET_GPR_U32(ctx, 31, 0x227984u);
    ctx->pc = 0x227980u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227984u; }
    }
    if (ctx->pc != 0x227984u) { return; }
    ctx->pc = 0x227984u;
    // 0x227984: 0x3a0202d
    ctx->pc = 0x227984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227988: 0x3c013f00
    ctx->pc = 0x227988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22798c: 0x44816000
    ctx->pc = 0x22798cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227990: 0xc080552
    ctx->pc = 0x227990u;
    SET_GPR_U32(ctx, 31, 0x227998u);
    ctx->pc = 0x227994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227998u; }
    }
    if (ctx->pc != 0x227998u) { return; }
    ctx->pc = 0x227998u;
    // 0x227998: 0x3c040032
    ctx->pc = 0x227998u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22799c: 0x24840760
    ctx->pc = 0x22799cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1888));
    // 0x2279a0: 0x8e430000
    ctx->pc = 0x2279a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2279a4: 0x31880
    ctx->pc = 0x2279a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2279a8: 0x642021
    ctx->pc = 0x2279a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2279ac: 0x8c840000
    ctx->pc = 0x2279acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2279b0: 0x711821
    ctx->pc = 0x2279b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2279b4: 0x8c630000
    ctx->pc = 0x2279b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2279b8: 0x8e05000c
    ctx->pc = 0x2279b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2279bc: 0x822023
    ctx->pc = 0x2279bcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2279c0: 0x652821
    ctx->pc = 0x2279c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2279c4: 0x24060007
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2279c8: 0x3c0700ff
    ctx->pc = 0x2279c8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2279cc: 0x34e7ffff
    ctx->pc = 0x2279ccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2279d0: 0x3c013f00
    ctx->pc = 0x2279d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2279d4: 0x44816000
    ctx->pc = 0x2279d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2279d8: 0xc080510
    ctx->pc = 0x2279D8u;
    SET_GPR_U32(ctx, 31, 0x2279E0u);
    ctx->pc = 0x2279DCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E0u; }
    }
    if (ctx->pc != 0x2279E0u) { return; }
    ctx->pc = 0x2279E0u;
    // 0x2279e0: 0xdfbf0040
    ctx->pc = 0x2279e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2279e4: 0xdfb20030
    ctx->pc = 0x2279e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2279e8: 0xdfb10020
    ctx->pc = 0x2279e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279ec: 0xdfb00010
    ctx->pc = 0x2279ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2279f0: 0x3e00008
    ctx->pc = 0x2279F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2279F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2279F8u;
}
