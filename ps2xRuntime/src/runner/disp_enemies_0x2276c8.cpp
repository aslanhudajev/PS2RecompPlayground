#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_enemies
// Address: 0x2276c8 - 0x2277d8
void disp_enemies_0x2276c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2276c8u;

    // 0x2276c8: 0x27bdffb0
    ctx->pc = 0x2276c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2276cc: 0xffbf0040
    ctx->pc = 0x2276ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2276d0: 0xffb20030
    ctx->pc = 0x2276d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2276d4: 0xffb10020
    ctx->pc = 0x2276d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2276d8: 0xffb00010
    ctx->pc = 0x2276d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2276dc: 0x80902d
    ctx->pc = 0x2276dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276e0: 0x3c020032
    ctx->pc = 0x2276e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2276e4: 0x24420740
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1856));
    // 0x2276e8: 0x8e430000
    ctx->pc = 0x2276e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2276ec: 0x31880
    ctx->pc = 0x2276ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2276f0: 0x621021
    ctx->pc = 0x2276f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2276f4: 0x8c440000
    ctx->pc = 0x2276f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2276f8: 0x3c110032
    ctx->pc = 0x2276f8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x2276fc: 0x26310770
    ctx->pc = 0x2276fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1904));
    // 0x227700: 0x711821
    ctx->pc = 0x227700u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x227704: 0x3c100032
    ctx->pc = 0x227704u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x227708: 0x26100780
    ctx->pc = 0x227708u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1920));
    // 0x22770c: 0x8c620000
    ctx->pc = 0x22770cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227710: 0x8e050004
    ctx->pc = 0x227710u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227714: 0x24840007
    ctx->pc = 0x227714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7));
    // 0x227718: 0x452821
    ctx->pc = 0x227718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22771c: 0x24060007
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x227720: 0x3c0700ff
    ctx->pc = 0x227720u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x227724: 0x34e7ffff
    ctx->pc = 0x227724u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x227728: 0x3c013f00
    ctx->pc = 0x227728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22772c: 0x44816000
    ctx->pc = 0x22772cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227730: 0x3c08003a
    ctx->pc = 0x227730u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x227734: 0xc080510
    ctx->pc = 0x227734u;
    SET_GPR_U32(ctx, 31, 0x22773Cu);
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27944));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22773Cu; }
    }
    if (ctx->pc != 0x22773Cu) { return; }
    ctx->pc = 0x22773Cu;
    // 0x22773c: 0x3c02003c
    ctx->pc = 0x22773cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x227740: 0x24421838
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6200));
    // 0x227744: 0x8e430000
    ctx->pc = 0x227744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x227748: 0x31880
    ctx->pc = 0x227748u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22774c: 0x621821
    ctx->pc = 0x22774cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227750: 0x3a0202d
    ctx->pc = 0x227750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227754: 0x3c05003a
    ctx->pc = 0x227754u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227758: 0x24a56d30
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27952));
    // 0x22775c: 0xc0b6252
    ctx->pc = 0x22775Cu;
    SET_GPR_U32(ctx, 31, 0x227764u);
    ctx->pc = 0x227760u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227764u; }
    }
    if (ctx->pc != 0x227764u) { return; }
    ctx->pc = 0x227764u;
    // 0x227764: 0x3a0202d
    ctx->pc = 0x227764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227768: 0x3c013f00
    ctx->pc = 0x227768u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22776c: 0x44816000
    ctx->pc = 0x22776cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x227770: 0xc080552
    ctx->pc = 0x227770u;
    SET_GPR_U32(ctx, 31, 0x227778u);
    ctx->pc = 0x227774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227778u; }
    }
    if (ctx->pc != 0x227778u) { return; }
    ctx->pc = 0x227778u;
    // 0x227778: 0x3c040032
    ctx->pc = 0x227778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22777c: 0x24840760
    ctx->pc = 0x22777cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1888));
    // 0x227780: 0x8e430000
    ctx->pc = 0x227780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x227784: 0x31880
    ctx->pc = 0x227784u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227788: 0x642021
    ctx->pc = 0x227788u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22778c: 0x8c840000
    ctx->pc = 0x22778cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227790: 0x711821
    ctx->pc = 0x227790u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x227794: 0x8c630000
    ctx->pc = 0x227794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227798: 0x8e050004
    ctx->pc = 0x227798u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22779c: 0x822023
    ctx->pc = 0x22779cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2277a0: 0x652821
    ctx->pc = 0x2277a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2277a4: 0x24060007
    ctx->pc = 0x2277a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2277a8: 0x3c0700ff
    ctx->pc = 0x2277a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2277ac: 0x34e7ffff
    ctx->pc = 0x2277acu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2277b0: 0x3c013f00
    ctx->pc = 0x2277b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2277b4: 0x44816000
    ctx->pc = 0x2277b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2277b8: 0xc080510
    ctx->pc = 0x2277B8u;
    SET_GPR_U32(ctx, 31, 0x2277C0u);
    ctx->pc = 0x2277BCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2277C0u; }
    }
    if (ctx->pc != 0x2277C0u) { return; }
    ctx->pc = 0x2277C0u;
    // 0x2277c0: 0xdfbf0040
    ctx->pc = 0x2277c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2277c4: 0xdfb20030
    ctx->pc = 0x2277c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2277c8: 0xdfb10020
    ctx->pc = 0x2277c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2277cc: 0xdfb00010
    ctx->pc = 0x2277ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277d0: 0x3e00008
    ctx->pc = 0x2277D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2277D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2277D8u;
}
