#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_05__12PolyMgrClassFv
// Address: 0x2146b0 - 0x21483c
void entryBankObj_STAT_05__12PolyMgrClassFv_0x2146b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_05__12PolyMgrClassFv");


    ctx->pc = 0x2146b0u;

    // 0x2146b0: 0x27bdffa0
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2146b4: 0x7fbf0050
    ctx->pc = 0x2146b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2146b8: 0x7fb40040
    ctx->pc = 0x2146b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2146bc: 0x7fb30030
    ctx->pc = 0x2146bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2146c0: 0x7fb20020
    ctx->pc = 0x2146c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2146c4: 0x7fb10010
    ctx->pc = 0x2146c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2146c8: 0x7fb00000
    ctx->pc = 0x2146c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2146cc: 0x8c840000
    ctx->pc = 0x2146ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2146d0: 0x3c010091
    ctx->pc = 0x2146d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2146d4: 0x842519a8
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 6568)));
    // 0x2146d8: 0x3c020050
    ctx->pc = 0x2146d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2146dc: 0x2443ea24
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x2146e0: 0x3c020050
    ctx->pc = 0x2146e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2146e4: 0x8c910008
    ctx->pc = 0x2146e4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2146e8: 0x3c0101fb
    ctx->pc = 0x2146e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2146ec: 0x2444e540
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x2146f0: 0x111080
    ctx->pc = 0x2146f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2146f4: 0x410821
    ctx->pc = 0x2146f4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2146f8: 0x111400
    ctx->pc = 0x2146f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 16));
    // 0x2146fc: 0x45a025
    ctx->pc = 0x2146fcu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x214700: 0x141403
    ctx->pc = 0x214700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 16));
    // 0x214704: 0x3042ffff
    ctx->pc = 0x214704u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x214708: 0x21100
    ctx->pc = 0x214708u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x21470c: 0x621021
    ctx->pc = 0x21470cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214710: 0x8c420000
    ctx->pc = 0x214710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214714: 0x3285ffff
    ctx->pc = 0x214714u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 20), 65535));
    // 0x214718: 0x51840
    ctx->pc = 0x214718u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x21471c: 0x651821
    ctx->pc = 0x21471cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214720: 0x8c321fd8
    ctx->pc = 0x214720u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 8152)));
    // 0x214724: 0x31880
    ctx->pc = 0x214724u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x214728: 0x439821
    ctx->pc = 0x214728u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21472c: 0x8e620000
    ctx->pc = 0x21472cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x214730: 0x3c010091
    ctx->pc = 0x214730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214734: 0x72402e28
    ctx->pc = 0x214734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x214738: 0xc086a0c
    ctx->pc = 0x214738u;
    SET_GPR_U32(ctx, 31, 0x214740u);
    ctx->pc = 0x21473Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6560), GPR_U32(ctx, 2));
    ctx->pc = 0x21A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        getTexAdrs__11TexMgrClassFi_0x21a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214740u; }
        else if (ctx->pc != 0x214740u) { ctx->pc = 0x214740u; }
    }
    if (ctx->pc != 0x214740u) { return; }
    ctx->pc = 0x214740u;
    // 0x214740: 0x70408628
    ctx->pc = 0x214740u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x214744: 0x3c020050
    ctx->pc = 0x214744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214748: 0x2444e540
    ctx->pc = 0x214748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x21474c: 0xc086a1c
    ctx->pc = 0x21474Cu;
    SET_GPR_U32(ctx, 31, 0x214754u);
    ctx->pc = 0x214750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A870u;
    {
        const uint32_t __entryPc = ctx->pc;
        getVTexBuf__11TexMgrClassFi_0x21a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214754u; }
        else if (ctx->pc != 0x214754u) { ctx->pc = 0x214754u; }
    }
    if (ctx->pc != 0x214754u) { return; }
    ctx->pc = 0x214754u;
    // 0x214754: 0x121880
    ctx->pc = 0x214754u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x214758: 0x3c0101fb
    ctx->pc = 0x214758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21475c: 0x610821
    ctx->pc = 0x21475cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x214760: 0x8c23e064
    ctx->pc = 0x214760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x214764: 0x72002e28
    ctx->pc = 0x214764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x214768: 0x70403e28
    ctx->pc = 0x214768u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21476c: 0x2408ffff
    ctx->pc = 0x21476cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214770: 0x3c010091
    ctx->pc = 0x214770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214774: 0x8c2419a0
    ctx->pc = 0x214774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 6560)));
    // 0x214778: 0xc06a81c
    ctx->pc = 0x214778u;
    SET_GPR_U32(ctx, 31, 0x214780u);
    ctx->pc = 0x21477Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x1AA070u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutUpdateTexInfoPoly2_0x1aa070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214780u; }
        else if (ctx->pc != 0x214780u) { ctx->pc = 0x214780u; }
    }
    if (ctx->pc != 0x214780u) { return; }
    ctx->pc = 0x214780u;
    // 0x214780: 0x72602628
    ctx->pc = 0x214780u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x214784: 0xc085480
    ctx->pc = 0x214784u;
    SET_GPR_U32(ctx, 31, 0x21478Cu);
    ctx->pc = 0x214788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215200u;
    {
        const uint32_t __entryPc = ctx->pc;
        EntryObjModel_i__FP7_OBJENTi_0x215200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21478Cu; }
        else if (ctx->pc != 0x21478Cu) { ctx->pc = 0x21478Cu; }
    }
    if (ctx->pc != 0x21478Cu) { return; }
    ctx->pc = 0x21478Cu;
    // 0x21478c: 0x3c010091
    ctx->pc = 0x21478cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214790: 0x8c2319a4
    ctx->pc = 0x214790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x214794: 0x111040
    ctx->pc = 0x214794u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x214798: 0x24630008
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x21479c: 0x3c010091
    ctx->pc = 0x21479cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2147a0: 0xac2319a4
    ctx->pc = 0x2147a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6564), GPR_U32(ctx, 3));
    // 0x2147a4: 0x3c010091
    ctx->pc = 0x2147a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2147a8: 0x842319a8
    ctx->pc = 0x2147a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 6568)));
    // 0x2147ac: 0x24630001
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2147b0: 0x3c010091
    ctx->pc = 0x2147b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2147b4: 0xa42319a8
    ctx->pc = 0x2147b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6568), (uint16_t)GPR_U32(ctx, 3));
    // 0x2147b8: 0x3c0101fb
    ctx->pc = 0x2147b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2147bc: 0x410821
    ctx->pc = 0x2147bcu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2147c0: 0x8422de48
    ctx->pc = 0x2147c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958664)));
    // 0x2147c4: 0x3c010091
    ctx->pc = 0x2147c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2147c8: 0x842319a8
    ctx->pc = 0x2147c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 6568)));
    // 0x2147cc: 0x62082a
    ctx->pc = 0x2147ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2147d0: 0x10200003
    ctx->pc = 0x2147D0u;
    {
        const bool branch_taken_0x2147d0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2147D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x2147d0) {
            ctx->pc = 0x2147E0u;
            goto label_2147e0;
        }
    }
    ctx->pc = 0x2147D8u;
    // 0x2147d8: 0x10000010
    ctx->pc = 0x2147D8u;
    {
        const bool branch_taken_0x2147d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2147DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2147d8) {
            ctx->pc = 0x21481Cu;
            goto label_21481c;
        }
    }
    ctx->pc = 0x2147E0u;
label_2147e0:
    // 0x2147e0: 0x111900
    ctx->pc = 0x2147e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2147e4: 0x2442ea20
    ctx->pc = 0x2147e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x2147e8: 0x433021
    ctx->pc = 0x2147e8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2147ec: 0x8cc50000
    ctx->pc = 0x2147ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2147f0: 0x3c029fff
    ctx->pc = 0x2147f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40959 << 16));
    // 0x2147f4: 0x3443ffff
    ctx->pc = 0x2147f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2147f8: 0x3c02c000
    ctx->pc = 0x2147f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x2147fc: 0x70002628
    ctx->pc = 0x2147fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x214800: 0xa31824
    ctx->pc = 0x214800u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x214804: 0xacc30000
    ctx->pc = 0x214804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x214808: 0x8cc30000
    ctx->pc = 0x214808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21480c: 0x621025
    ctx->pc = 0x21480cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214810: 0xc0552d8
    ctx->pc = 0x214810u;
    SET_GPR_U32(ctx, 31, 0x214818u);
    ctx->pc = 0x214814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214818u; }
        else if (ctx->pc != 0x214818u) { ctx->pc = 0x214818u; }
    }
    if (ctx->pc != 0x214818u) { return; }
    ctx->pc = 0x214818u;
    // 0x214818: 0x2402ffff
    ctx->pc = 0x214818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21481c:
    // 0x21481c: 0x7bbf0050
    ctx->pc = 0x21481cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214820: 0x7bb40040
    ctx->pc = 0x214820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214824: 0x7bb30030
    ctx->pc = 0x214824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214828: 0x7bb20020
    ctx->pc = 0x214828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21482c: 0x7bb10010
    ctx->pc = 0x21482cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214830: 0x7bb00000
    ctx->pc = 0x214830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214834: 0x3e00008
    ctx->pc = 0x214834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2147E0u: goto label_2147e0;
            case 0x21481Cu: goto label_21481c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21483Cu;
}
