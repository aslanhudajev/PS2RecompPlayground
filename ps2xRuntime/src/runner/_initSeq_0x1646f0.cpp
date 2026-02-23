#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _initSeq
// Address: 0x1646f0 - 0x164a34
void _initSeq_0x1646f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_initSeq");


    ctx->pc = 0x1646f0u;

    // 0x1646f0: 0x27bdff40
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1646f4: 0x3c020023
    ctx->pc = 0x1646f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1646f8: 0xffbf00b0
    ctx->pc = 0x1646f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1646fc: 0x80582d
    ctx->pc = 0x1646fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164700: 0xffb70090
    ctx->pc = 0x164700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x164704: 0xffb60080
    ctx->pc = 0x164704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x164708: 0xffb50070
    ctx->pc = 0x164708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x16470c: 0xffb40060
    ctx->pc = 0x16470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x164710: 0xffb30050
    ctx->pc = 0x164710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x164714: 0xffb20040
    ctx->pc = 0x164714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x164718: 0xffb10030
    ctx->pc = 0x164718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x16471c: 0xffb00020
    ctx->pc = 0x16471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x164720: 0xffbe00a0
    ctx->pc = 0x164720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x164724: 0x8c4caaf0
    ctx->pc = 0x164724u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 4294945520)));
    // 0x164728: 0x15800010
    ctx->pc = 0x164728u;
    {
        const bool branch_taken_0x164728 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x16472Cu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 11), 64)));
        if (branch_taken_0x164728) {
            ctx->pc = 0x16476Cu;
            goto label_16476c;
        }
    }
    ctx->pc = 0x164730u;
    // 0x164730: 0x24020001
    ctx->pc = 0x164730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164734: 0x3c080023
    ctx->pc = 0x164734u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x164738: 0x3c090023
    ctx->pc = 0x164738u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x16473c: 0x3c0a0023
    ctx->pc = 0x16473cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x164740: 0x3c070023
    ctx->pc = 0x164740u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x164744: 0x24040003
    ctx->pc = 0x164744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x164748: 0x3c050023
    ctx->pc = 0x164748u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16474c: 0x3c060023
    ctx->pc = 0x16474cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x164750: 0x24030005
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x164754: 0xace4a3ec
    ctx->pc = 0x164754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943724), GPR_U32(ctx, 4));
    // 0x164758: 0xaca2a3f4
    ctx->pc = 0x164758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943732), GPR_U32(ctx, 2));
    // 0x16475c: 0xacc3a3ac
    ctx->pc = 0x16475cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943660), GPR_U32(ctx, 3));
    // 0x164760: 0xad02a388
    ctx->pc = 0x164760u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943624), GPR_U32(ctx, 2));
    // 0x164764: 0xad22a38c
    ctx->pc = 0x164764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943628), GPR_U32(ctx, 2));
    // 0x164768: 0xad42a408
    ctx->pc = 0x164768u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943752), GPR_U32(ctx, 2));
label_16476c:
    // 0x16476c: 0x3c030023
    ctx->pc = 0x16476cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x164770: 0x3c040023
    ctx->pc = 0x164770u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x164774: 0x8c62a360
    ctx->pc = 0x164774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943584)));
    // 0x164778: 0x3c050023
    ctx->pc = 0x164778u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16477c: 0x24a6a36c
    ctx->pc = 0x16477cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294943596));
    // 0x164780: 0x2442000f
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x164784: 0x21103
    ctx->pc = 0x164784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x164788: 0x1180000a
    ctx->pc = 0x164788u;
    {
        const bool branch_taken_0x164788 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x16478Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943592), GPR_U32(ctx, 2));
        if (branch_taken_0x164788) {
            ctx->pc = 0x1647B4u;
            goto label_1647b4;
        }
    }
    ctx->pc = 0x164790u;
    // 0x164790: 0x3c020023
    ctx->pc = 0x164790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x164794: 0x8c43a388
    ctx->pc = 0x164794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943624)));
    // 0x164798: 0x14600007
    ctx->pc = 0x164798u;
    {
        const bool branch_taken_0x164798 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16479Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x164798) {
            ctx->pc = 0x1647B8u;
            goto label_1647b8;
        }
    }
    ctx->pc = 0x1647A0u;
    // 0x1647a0: 0x8c62a364
    ctx->pc = 0x1647a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943588)));
    // 0x1647a4: 0x2442001f
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1647a8: 0x21143
    ctx->pc = 0x1647a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1647ac: 0x10000005
    ctx->pc = 0x1647ACu;
    {
        const bool branch_taken_0x1647ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1647B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1647ac) {
            ctx->pc = 0x1647C4u;
            goto label_1647c4;
        }
    }
    ctx->pc = 0x1647B4u;
label_1647b4:
    // 0x1647b4: 0x3c030023
    ctx->pc = 0x1647b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_1647b8:
    // 0x1647b8: 0x8c62a364
    ctx->pc = 0x1647b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943588)));
    // 0x1647bc: 0x2442000f
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x1647c0: 0x21103
    ctx->pc = 0x1647c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1647c4:
    // 0x1647c4: 0xacc20000
    ctx->pc = 0x1647c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1647c8: 0x3c160023
    ctx->pc = 0x1647c8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)35 << 16));
    // 0x1647cc: 0x8c82a368
    ctx->pc = 0x1647ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943592)));
    // 0x1647d0: 0x3c170023
    ctx->pc = 0x1647d0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)35 << 16));
    // 0x1647d4: 0x8ca3a36c
    ctx->pc = 0x1647d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943596)));
    // 0x1647d8: 0x8d640000
    ctx->pc = 0x1647d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1647dc: 0x23100
    ctx->pc = 0x1647dcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1647e0: 0x31900
    ctx->pc = 0x1647e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1647e4: 0xaec6a34c
    ctx->pc = 0x1647e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294943564), GPR_U32(ctx, 6));
    // 0x1647e8: 0x14c40004
    ctx->pc = 0x1647E8u;
    {
        const bool branch_taken_0x1647e8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x1647ECu;
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294943568), GPR_U32(ctx, 3));
        if (branch_taken_0x1647e8) {
            ctx->pc = 0x1647FCu;
            goto label_1647fc;
        }
    }
    ctx->pc = 0x1647F0u;
    // 0x1647f0: 0x8d620004
    ctx->pc = 0x1647f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1647f4: 0x10620084
    ctx->pc = 0x1647F4u;
    {
        const bool branch_taken_0x1647f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1647F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x1647f4) {
            ctx->pc = 0x164A08u;
            goto label_164a08;
        }
    }
    ctx->pc = 0x1647FCu;
label_1647fc:
    // 0x1647fc: 0x24100180
    ctx->pc = 0x1647fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 384));
    // 0x164800: 0xad630004
    ctx->pc = 0x164800u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x164804: 0x708018
    ctx->pc = 0x164804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x164808: 0xad660000
    ctx->pc = 0x164808u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x16480c: 0x62043
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x164810: 0x32843
    ctx->pc = 0x164810u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x164814: 0x3c020023
    ctx->pc = 0x164814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x164818: 0x27d10108
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 30), 264));
    // 0x16481c: 0x3c030023
    ctx->pc = 0x16481cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x164820: 0xac44a354
    ctx->pc = 0x164820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943572), GPR_U32(ctx, 4));
    // 0x164824: 0xd08018
    ctx->pc = 0x164824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x164828: 0x220202d
    ctx->pc = 0x164828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16482c: 0x0
    ctx->pc = 0x16482cu;
    // NOP
    // 0x164830: 0xc058f3e
    ctx->pc = 0x164830u;
    SET_GPR_U32(ctx, 31, 0x164838u);
    ctx->pc = 0x164834u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x163CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcFree_0x163cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164838u; }
        else if (ctx->pc != 0x164838u) { ctx->pc = 0x164838u; }
    }
    if (ctx->pc != 0x164838u) { return; }
    ctx->pc = 0x164838u;
    // 0x164838: 0x220202d
    ctx->pc = 0x164838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16483c: 0x200282d
    ctx->pc = 0x16483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164840: 0xc058f42
    ctx->pc = 0x164840u;
    SET_GPR_U32(ctx, 31, 0x164848u);
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x163D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x163d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164848u; }
        else if (ctx->pc != 0x164848u) { ctx->pc = 0x164848u; }
    }
    if (ctx->pc != 0x164848u) { return; }
    ctx->pc = 0x164848u;
    // 0x164848: 0xafc200fc
    ctx->pc = 0x164848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x16484c: 0x220202d
    ctx->pc = 0x16484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164850: 0x200282d
    ctx->pc = 0x164850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164854: 0xc058f42
    ctx->pc = 0x164854u;
    SET_GPR_U32(ctx, 31, 0x16485Cu);
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x163D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x163d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16485Cu; }
        else if (ctx->pc != 0x16485Cu) { ctx->pc = 0x16485Cu; }
    }
    if (ctx->pc != 0x16485Cu) { return; }
    ctx->pc = 0x16485Cu;
    // 0x16485c: 0xafc20100
    ctx->pc = 0x16485cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x164860: 0x220202d
    ctx->pc = 0x164860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164864: 0x200282d
    ctx->pc = 0x164864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164868: 0xc058f42
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x163D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x163d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        else if (ctx->pc != 0x164870u) { ctx->pc = 0x164870u; }
    }
    if (ctx->pc != 0x164870u) { return; }
    ctx->pc = 0x164870u;
    // 0x164870: 0xafc20104
    ctx->pc = 0x164870u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x164874: 0x3c040023
    ctx->pc = 0x164874u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x164878: 0x80102d
    ctx->pc = 0x164878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16487c: 0x3c100023
    ctx->pc = 0x16487cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x164880: 0x2442a7d0
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944720));
    // 0x164884: 0x3c110023
    ctx->pc = 0x164884u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x164888: 0xafa20000
    ctx->pc = 0x164888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16488c: 0x3c120023
    ctx->pc = 0x16488cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x164890: 0x3c130023
    ctx->pc = 0x164890u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x164894: 0x3c140023
    ctx->pc = 0x164894u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x164898: 0x8fc200fc
    ctx->pc = 0x164898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x16489c: 0x3c150023
    ctx->pc = 0x16489cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x1648a0: 0x2610a490
    ctx->pc = 0x1648a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294943888));
    // 0x1648a4: 0x2631a4f8
    ctx->pc = 0x1648a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294943992));
    // 0x1648a8: 0xafa20008
    ctx->pc = 0x1648a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1648ac: 0x2652a560
    ctx->pc = 0x1648acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294944096));
    // 0x1648b0: 0x2673a5c8
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294944200));
    // 0x1648b4: 0x2694a630
    ctx->pc = 0x1648b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294944304));
    // 0x1648b8: 0x8fc20100
    ctx->pc = 0x1648b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x1648bc: 0x26b5a698
    ctx->pc = 0x1648bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294944408));
    // 0x1648c0: 0x260382d
    ctx->pc = 0x1648c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c4: 0x280402d
    ctx->pc = 0x1648c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c8: 0xafa20010
    ctx->pc = 0x1648c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1648cc: 0x2a0482d
    ctx->pc = 0x1648ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648d0: 0x200202d
    ctx->pc = 0x1648d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648d4: 0x220282d
    ctx->pc = 0x1648d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648d8: 0x8fc20104
    ctx->pc = 0x1648d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x1648dc: 0x240302d
    ctx->pc = 0x1648dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648e0: 0x3c0a0023
    ctx->pc = 0x1648e0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x1648e4: 0x254aa700
    ctx->pc = 0x1648e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294944512));
    // 0x1648e8: 0x3c0b0023
    ctx->pc = 0x1648e8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)35 << 16));
    // 0x1648ec: 0x256ba768
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294944616));
    // 0x1648f0: 0xc05928e
    ctx->pc = 0x1648F0u;
    SET_GPR_U32(ctx, 31, 0x1648F8u);
    ctx->pc = 0x1648F4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x164A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        _initRefImages_0x164a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1648F8u; }
        else if (ctx->pc != 0x1648F8u) { ctx->pc = 0x1648F8u; }
    }
    if (ctx->pc != 0x1648F8u) { return; }
    ctx->pc = 0x1648F8u;
    // 0x1648f8: 0x8ec5a34c
    ctx->pc = 0x1648f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x1648fc: 0x200202d
    ctx->pc = 0x1648fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164900: 0xc05915e
    ctx->pc = 0x164900u;
    SET_GPR_U32(ctx, 31, 0x164908u);
    ctx->pc = 0x164904u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164908u; }
        else if (ctx->pc != 0x164908u) { ctx->pc = 0x164908u; }
    }
    if (ctx->pc != 0x164908u) { return; }
    ctx->pc = 0x164908u;
    // 0x164908: 0x8ec5a34c
    ctx->pc = 0x164908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x16490c: 0x220202d
    ctx->pc = 0x16490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164910: 0xc05915e
    ctx->pc = 0x164910u;
    SET_GPR_U32(ctx, 31, 0x164918u);
    ctx->pc = 0x164914u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164918u; }
        else if (ctx->pc != 0x164918u) { ctx->pc = 0x164918u; }
    }
    if (ctx->pc != 0x164918u) { return; }
    ctx->pc = 0x164918u;
    // 0x164918: 0x8ec5a34c
    ctx->pc = 0x164918u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x16491c: 0x240202d
    ctx->pc = 0x16491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164920: 0xc05915e
    ctx->pc = 0x164920u;
    SET_GPR_U32(ctx, 31, 0x164928u);
    ctx->pc = 0x164924u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164928u; }
        else if (ctx->pc != 0x164928u) { ctx->pc = 0x164928u; }
    }
    if (ctx->pc != 0x164928u) { return; }
    ctx->pc = 0x164928u;
    // 0x164928: 0x8ee6a350
    ctx->pc = 0x164928u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x16492c: 0x260202d
    ctx->pc = 0x16492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164930: 0x8ec5a34c
    ctx->pc = 0x164930u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x164934: 0x617c2
    ctx->pc = 0x164934u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x164938: 0xc23021
    ctx->pc = 0x164938u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16493c: 0xc05915e
    ctx->pc = 0x16493Cu;
    SET_GPR_U32(ctx, 31, 0x164944u);
    ctx->pc = 0x164940u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164944u; }
        else if (ctx->pc != 0x164944u) { ctx->pc = 0x164944u; }
    }
    if (ctx->pc != 0x164944u) { return; }
    ctx->pc = 0x164944u;
    // 0x164944: 0x8ee6a350
    ctx->pc = 0x164944u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x164948: 0x280202d
    ctx->pc = 0x164948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16494c: 0x8ec5a34c
    ctx->pc = 0x16494cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x164950: 0x617c2
    ctx->pc = 0x164950u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x164954: 0xc23021
    ctx->pc = 0x164954u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x164958: 0xc05915e
    ctx->pc = 0x164958u;
    SET_GPR_U32(ctx, 31, 0x164960u);
    ctx->pc = 0x16495Cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164960u; }
        else if (ctx->pc != 0x164960u) { ctx->pc = 0x164960u; }
    }
    if (ctx->pc != 0x164960u) { return; }
    ctx->pc = 0x164960u;
    // 0x164960: 0x8ee6a350
    ctx->pc = 0x164960u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x164964: 0x2a0202d
    ctx->pc = 0x164964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164968: 0x8ec5a34c
    ctx->pc = 0x164968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x16496c: 0x617c2
    ctx->pc = 0x16496cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x164970: 0xc23021
    ctx->pc = 0x164970u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x164974: 0xc05915e
    ctx->pc = 0x164974u;
    SET_GPR_U32(ctx, 31, 0x16497Cu);
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16497Cu; }
        else if (ctx->pc != 0x16497Cu) { ctx->pc = 0x16497Cu; }
    }
    if (ctx->pc != 0x16497Cu) { return; }
    ctx->pc = 0x16497Cu;
    // 0x16497c: 0x8ee6a350
    ctx->pc = 0x16497cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x164980: 0x3c040023
    ctx->pc = 0x164980u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x164984: 0x2484a700
    ctx->pc = 0x164984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944512));
    // 0x164988: 0x8ec5a34c
    ctx->pc = 0x164988u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x16498c: 0x617c2
    ctx->pc = 0x16498cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x164990: 0xc23021
    ctx->pc = 0x164990u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x164994: 0xc05915e
    ctx->pc = 0x164994u;
    SET_GPR_U32(ctx, 31, 0x16499Cu);
    ctx->pc = 0x164998u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16499Cu; }
        else if (ctx->pc != 0x16499Cu) { ctx->pc = 0x16499Cu; }
    }
    if (ctx->pc != 0x16499Cu) { return; }
    ctx->pc = 0x16499Cu;
    // 0x16499c: 0x8ee6a350
    ctx->pc = 0x16499cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x1649a0: 0x3c040023
    ctx->pc = 0x1649a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1649a4: 0x2484a768
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944616));
    // 0x1649a8: 0x8ec5a34c
    ctx->pc = 0x1649a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x1649ac: 0x617c2
    ctx->pc = 0x1649acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x1649b0: 0xc23021
    ctx->pc = 0x1649b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1649b4: 0xc05915e
    ctx->pc = 0x1649B4u;
    SET_GPR_U32(ctx, 31, 0x1649BCu);
    ctx->pc = 0x1649B8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x164578u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x164578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1649BCu; }
        else if (ctx->pc != 0x1649BCu) { ctx->pc = 0x1649BCu; }
    }
    if (ctx->pc != 0x1649BCu) { return; }
    ctx->pc = 0x1649BCu;
    // 0x1649bc: 0x8ee6a350
    ctx->pc = 0x1649bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294943568)));
    // 0x1649c0: 0x3c040023
    ctx->pc = 0x1649c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1649c4: 0x2484a7d0
    ctx->pc = 0x1649c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944720));
    // 0x1649c8: 0x8ec5a34c
    ctx->pc = 0x1649c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4294943564)));
    // 0x1649cc: 0x617c2
    ctx->pc = 0x1649ccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), 31));
    // 0x1649d0: 0xdfbf00b0
    ctx->pc = 0x1649d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1649d4: 0xc23021
    ctx->pc = 0x1649d4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1649d8: 0xdfbe00a0
    ctx->pc = 0x1649d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1649dc: 0xdfb70090
    ctx->pc = 0x1649dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1649e0: 0x63043
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1649e4: 0xdfb60080
    ctx->pc = 0x1649e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1649e8: 0xdfb50070
    ctx->pc = 0x1649e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1649ec: 0xdfb40060
    ctx->pc = 0x1649ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1649f0: 0xdfb30050
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1649f4: 0xdfb20040
    ctx->pc = 0x1649f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1649f8: 0xdfb10030
    ctx->pc = 0x1649f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1649fc: 0xdfb00020
    ctx->pc = 0x1649fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164a00: 0x805915e
    ctx->pc = 0x164A00u;
    ctx->pc = 0x164A04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x164578u;
    ps2__RefImageInit_0x164578(rdram, ctx, runtime); return;
    ctx->pc = 0x164A08u;
label_164a08:
    // 0x164a08: 0xdfbe00a0
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164a0c: 0xdfb70090
    ctx->pc = 0x164a0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x164a10: 0xdfb60080
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164a14: 0xdfb50070
    ctx->pc = 0x164a14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164a18: 0xdfb40060
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164a1c: 0xdfb30050
    ctx->pc = 0x164a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164a20: 0xdfb20040
    ctx->pc = 0x164a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164a24: 0xdfb10030
    ctx->pc = 0x164a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164a28: 0xdfb00020
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164a2c: 0x3e00008
    ctx->pc = 0x164A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16476Cu: goto label_16476c;
            case 0x1647B4u: goto label_1647b4;
            case 0x1647B8u: goto label_1647b8;
            case 0x1647C4u: goto label_1647c4;
            case 0x1647FCu: goto label_1647fc;
            case 0x164A08u: goto label_164a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164A34u;
}
