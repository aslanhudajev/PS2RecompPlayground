#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sliceA0
// Address: 0x2f16d0 - 0x2f17f4
void _sliceA0_0x2f16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f16d0u;

    // 0x2f16d0: 0x27bdff90
    ctx->pc = 0x2f16d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f16d4: 0xffb40040
    ctx->pc = 0x2f16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f16d8: 0xffb50050
    ctx->pc = 0x2f16d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f16dc: 0x3c14003a
    ctx->pc = 0x2f16dcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f16e0: 0xffb30030
    ctx->pc = 0x2f16e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f16e4: 0xa0a82d
    ctx->pc = 0x2f16e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e8: 0xffb00000
    ctx->pc = 0x2f16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f16ec: 0xc0982d
    ctx->pc = 0x2f16ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16f0: 0xffb10010
    ctx->pc = 0x2f16f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f16f4: 0xe0802d
    ctx->pc = 0x2f16f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16f8: 0xffbf0060
    ctx->pc = 0x2f16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f16fc: 0xffb20020
    ctx->pc = 0x2f16fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1700: 0xc0bca8c
    ctx->pc = 0x2F1700u;
    SET_GPR_U32(ctx, 31, 0x2F1708u);
    ctx->pc = 0x2F1704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12616), GPR_U32(ctx, 0));
    ctx->pc = 0x2F2A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x2f2a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1708u; }
    }
    if (ctx->pc != 0x2F1708u) { return; }
    ctx->pc = 0x2F1708u;
    // 0x2f1708: 0xc0bc99e
    ctx->pc = 0x2F1708u;
    SET_GPR_U32(ctx, 31, 0x2F1710u);
    ctx->pc = 0x2F170Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F2678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x2f2678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1710u; }
    }
    if (ctx->pc != 0x2F1710u) { return; }
    ctx->pc = 0x2F1710u;
    // 0x2f1710: 0x40882d
    ctx->pc = 0x2f1710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1714: 0x2622feff
    ctx->pc = 0x2f1714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967039));
    // 0x2f1718: 0x2c4200af
    ctx->pc = 0x2f1718u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 175));
    // 0x2f171c: 0x14400006
    ctx->pc = 0x2F171Cu;
    {
        const bool branch_taken_0x2f171c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1720u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f171c) {
            ctx->pc = 0x2F1738u;
            goto label_2f1738;
        }
    }
    ctx->pc = 0x2F1724u;
    // 0x2f1724: 0x220282d
    ctx->pc = 0x2f1724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1728: 0xc0bba4a
    ctx->pc = 0x2F1728u;
    SET_GPR_U32(ctx, 31, 0x2F1730u);
    ctx->pc = 0x2F172Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942712));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1730u; }
    }
    if (ctx->pc != 0x2F1730u) { return; }
    ctx->pc = 0x2F1730u;
    // 0x2f1730: 0x10000027
    ctx->pc = 0x2F1730u;
    {
        const bool branch_taken_0x2f1730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2f1730) {
            ctx->pc = 0x2F17D0u;
            goto label_2f17d0;
        }
    }
    ctx->pc = 0x2F1738u;
label_2f1738:
    // 0x2f1738: 0xc0bc9ec
    ctx->pc = 0x2F1738u;
    SET_GPR_U32(ctx, 31, 0x2F1740u);
    ctx->pc = 0x2F173Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1740u; }
    }
    if (ctx->pc != 0x2F1740u) { return; }
    ctx->pc = 0x2F1740u;
    // 0x2f1740: 0xc0bcaa6
    ctx->pc = 0x2F1740u;
    SET_GPR_U32(ctx, 31, 0x2F1748u);
    ctx->pc = 0x2F2A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sliceB_0x2f2a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1748u; }
    }
    if (ctx->pc != 0x2F1748u) { return; }
    ctx->pc = 0x2F1748u;
    // 0x2f1748: 0xc0bc526
    ctx->pc = 0x2F1748u;
    SET_GPR_U32(ctx, 31, 0x2F1750u);
    ctx->pc = 0x2F174Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F1498u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x2f1498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1750u; }
    }
    if (ctx->pc != 0x2F1750u) { return; }
    ctx->pc = 0x2F1750u;
    // 0x2f1750: 0x40382d
    ctx->pc = 0x2f1750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1754: 0xae670000
    ctx->pc = 0x2f1754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x2f1758: 0x8e823148
    ctx->pc = 0x2f1758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12616)));
    // 0x2f175c: 0x10400005
    ctx->pc = 0x2F175Cu;
    {
        const bool branch_taken_0x2f175c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1760u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f175c) {
            ctx->pc = 0x2F1774u;
            goto label_2f1774;
        }
    }
    ctx->pc = 0x2F1764u;
    // 0x2f1764: 0xc0bba56
    ctx->pc = 0x2F1764u;
    SET_GPR_U32(ctx, 31, 0x2F176Cu);
    ctx->pc = 0x2F1768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942752));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F176Cu; }
    }
    if (ctx->pc != 0x2F176Cu) { return; }
    ctx->pc = 0x2F176Cu;
    // 0x2f176c: 0x10000018
    ctx->pc = 0x2F176Cu;
    {
        const bool branch_taken_0x2f176c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f176c) {
            ctx->pc = 0x2F17D0u;
            goto label_2f17d0;
        }
    }
    ctx->pc = 0x2F1774u;
label_2f1774:
    // 0x2f1774: 0x322200ff
    ctx->pc = 0x2f1774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
    // 0x2f1778: 0x3c04003a
    ctx->pc = 0x2f1778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f177c: 0x1219c0
    ctx->pc = 0x2f177cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 7));
    // 0x2f1780: 0x8c853168
    ctx->pc = 0x2f1780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12648)));
    // 0x2f1784: 0x621821
    ctx->pc = 0x2f1784u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1788: 0x24040001
    ctx->pc = 0x2f1788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f178c: 0x2463ffff
    ctx->pc = 0x2f178cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f1790: 0x3c06003a
    ctx->pc = 0x2f1790u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f1794: 0x651018
    ctx->pc = 0x2f1794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f1798: 0x471821
    ctx->pc = 0x2f1798u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f179c: 0x2463ffff
    ctx->pc = 0x2f179cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f17a0: 0x102d
    ctx->pc = 0x2f17a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17a4: 0xaea30000
    ctx->pc = 0x2f17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2f17a8: 0xae640000
    ctx->pc = 0x2f17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2f17ac: 0xacc4327c
    ctx->pc = 0x2f17acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12924), GPR_U32(ctx, 4));
    // 0x2f17b0: 0xae000008
    ctx->pc = 0x2f17b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f17b4: 0xae000014
    ctx->pc = 0x2f17b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2f17b8: 0xae000010
    ctx->pc = 0x2f17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f17bc: 0xae000004
    ctx->pc = 0x2f17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f17c0: 0xae000000
    ctx->pc = 0x2f17c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f17c4: 0xae00001c
    ctx->pc = 0x2f17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2f17c8: 0xae000018
    ctx->pc = 0x2f17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2f17cc: 0xae00000c
    ctx->pc = 0x2f17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2f17d0:
    // 0x2f17d0: 0xdfbf0060
    ctx->pc = 0x2f17d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f17d4: 0xdfb50050
    ctx->pc = 0x2f17d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f17d8: 0xdfb40040
    ctx->pc = 0x2f17d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f17dc: 0xdfb30030
    ctx->pc = 0x2f17dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f17e0: 0xdfb20020
    ctx->pc = 0x2f17e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f17e4: 0xdfb10010
    ctx->pc = 0x2f17e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f17e8: 0xdfb00000
    ctx->pc = 0x2f17e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f17ec: 0x3e00008
    ctx->pc = 0x2F17ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F17F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1738u: goto label_2f1738;
            case 0x2F1774u: goto label_2f1774;
            case 0x2F17D0u: goto label_2f17d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F17F4u;
}
