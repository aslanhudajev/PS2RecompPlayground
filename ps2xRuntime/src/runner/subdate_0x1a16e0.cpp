#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: subdate
// Address: 0x1a16e0 - 0x1a17b4
void subdate_0x1a16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("subdate");


    ctx->pc = 0x1a16e0u;

    // 0x1a16e0: 0x27bdffd0
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a16e4: 0x3c02002c
    ctx->pc = 0x1a16e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1a16e8: 0xffb00010
    ctx->pc = 0x1a16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a16ec: 0xffbf0020
    ctx->pc = 0x1a16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a16f0: 0x80802d
    ctx->pc = 0x1a16f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16f4: 0x2446d858
    ctx->pc = 0x1a16f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x1a16f8: 0x68c30007
    ctx->pc = 0x1a16f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1a16fc: 0x6cc30000
    ctx->pc = 0x1a16fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1a1700: 0x88c4000b
    ctx->pc = 0x1a1700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1a1704: 0x98c40008
    ctx->pc = 0x1a1704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1a1708: 0xb3a30007
    ctx->pc = 0x1a1708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a170c: 0xb7a30000
    ctx->pc = 0x1a170cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1710: 0xaba4000b
    ctx->pc = 0x1a1710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a1714: 0xbba40008
    ctx->pc = 0x1a1714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a1718: 0x56000008
    ctx->pc = 0x1A1718u;
    {
        const bool branch_taken_0x1a1718 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1718) {
            ctx->pc = 0x1A171Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->pc = 0x1A173Cu;
            goto label_1a173c;
        }
    }
    ctx->pc = 0x1A1720u;
    // 0x1a1720: 0x3c04002c
    ctx->pc = 0x1a1720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a1724: 0x3c06002c
    ctx->pc = 0x1a1724u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a1728: 0x2484d820
    ctx->pc = 0x1a1728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a172c: 0x24c6d848
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a1730: 0xc05003c
    ctx->pc = 0x1A1730u;
    SET_GPR_U32(ctx, 31, 0x1A1738u);
    ctx->pc = 0x1A1734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 360));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1738u; }
        else if (ctx->pc != 0x1A1738u) { ctx->pc = 0x1A1738u; }
    }
    if (ctx->pc != 0x1A1738u) { return; }
    ctx->pc = 0x1A1738u;
    // 0x1a1738: 0x92020005
    ctx->pc = 0x1a1738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1a173c:
    // 0x1a173c: 0x92030007
    ctx->pc = 0x1a173cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1a1740: 0x2442ffff
    ctx->pc = 0x1a1740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1744: 0x30630003
    ctx->pc = 0x1a1744u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x1a1748: 0x14600003
    ctx->pc = 0x1A1748u;
    {
        const bool branch_taken_0x1a1748 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A174Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a1748) {
            ctx->pc = 0x1A1758u;
            goto label_1a1758;
        }
    }
    ctx->pc = 0x1A1750u;
    // 0x1a1750: 0x2402001d
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1a1754: 0xa3a20001
    ctx->pc = 0x1a1754u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a1758:
    // 0x1a1758: 0x92020005
    ctx->pc = 0x1a1758u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1a175c: 0x14400012
    ctx->pc = 0x1A175Cu;
    {
        const bool branch_taken_0x1a175c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1760u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1a175c) {
            ctx->pc = 0x1A17A8u;
            goto label_1a17a8;
        }
    }
    ctx->pc = 0x1A1764u;
    // 0x1a1764: 0x92020006
    ctx->pc = 0x1a1764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1768: 0x2442ffff
    ctx->pc = 0x1a1768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a176c: 0x304300ff
    ctx->pc = 0x1a176cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a1770: 0x14600008
    ctx->pc = 0x1A1770u;
    {
        const bool branch_taken_0x1a1770 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1774u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a1770) {
            ctx->pc = 0x1A1794u;
            goto label_1a1794;
        }
    }
    ctx->pc = 0x1A1778u;
    // 0x1a1778: 0x92020007
    ctx->pc = 0x1a1778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1a177c: 0x14400002
    ctx->pc = 0x1A177Cu;
    {
        const bool branch_taken_0x1a177c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1780u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1a177c) {
            ctx->pc = 0x1A1788u;
            goto label_1a1788;
        }
    }
    ctx->pc = 0x1A1784u;
    // 0x1a1784: 0x24020063
    ctx->pc = 0x1a1784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_1a1788:
    // 0x1a1788: 0xa2020007
    ctx->pc = 0x1a1788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a178c: 0x2402000c
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a1790: 0xa2020006
    ctx->pc = 0x1a1790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1a1794:
    // 0x1a1794: 0x92020006
    ctx->pc = 0x1a1794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1798: 0x5d1021
    ctx->pc = 0x1a1798u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a179c: 0x9043ffff
    ctx->pc = 0x1a179cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1a17a0: 0xa2030005
    ctx->pc = 0x1a17a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a17a4: 0xdfbf0020
    ctx->pc = 0x1a17a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a17a8:
    // 0x1a17a8: 0xdfb00010
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a17ac: 0x3e00008
    ctx->pc = 0x1A17ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A17B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A173Cu: goto label_1a173c;
            case 0x1A1758u: goto label_1a1758;
            case 0x1A1788u: goto label_1a1788;
            case 0x1A1794u: goto label_1a1794;
            case 0x1A17A8u: goto label_1a17a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A17B4u;
}
