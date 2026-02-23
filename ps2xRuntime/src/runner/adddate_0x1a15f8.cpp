#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adddate
// Address: 0x1a15f8 - 0x1a16dc
void adddate_0x1a15f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adddate");


    ctx->pc = 0x1a15f8u;

    // 0x1a15f8: 0x27bdffd0
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a15fc: 0x3c02002c
    ctx->pc = 0x1a15fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1a1600: 0xffb00010
    ctx->pc = 0x1a1600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a1604: 0xffbf0020
    ctx->pc = 0x1a1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1608: 0x80802d
    ctx->pc = 0x1a1608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a160c: 0x2446d858
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x1a1610: 0x68c30007
    ctx->pc = 0x1a1610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1a1614: 0x6cc30000
    ctx->pc = 0x1a1614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1a1618: 0x88c4000b
    ctx->pc = 0x1a1618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1a161c: 0x98c40008
    ctx->pc = 0x1a161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1a1620: 0xb3a30007
    ctx->pc = 0x1a1620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1624: 0xb7a30000
    ctx->pc = 0x1a1624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1628: 0xaba4000b
    ctx->pc = 0x1a1628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a162c: 0xbba40008
    ctx->pc = 0x1a162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a1630: 0x56000008
    ctx->pc = 0x1A1630u;
    {
        const bool branch_taken_0x1a1630 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1630) {
            ctx->pc = 0x1A1634u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->pc = 0x1A1654u;
            goto label_1a1654;
        }
    }
    ctx->pc = 0x1A1638u;
    // 0x1a1638: 0x3c04002c
    ctx->pc = 0x1a1638u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a163c: 0x3c06002c
    ctx->pc = 0x1a163cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a1640: 0x2484d820
    ctx->pc = 0x1a1640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a1644: 0x24c6d848
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a1648: 0xc05003c
    ctx->pc = 0x1A1648u;
    SET_GPR_U32(ctx, 31, 0x1A1650u);
    ctx->pc = 0x1A164Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 336));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1650u; }
        else if (ctx->pc != 0x1A1650u) { ctx->pc = 0x1A1650u; }
    }
    if (ctx->pc != 0x1A1650u) { return; }
    ctx->pc = 0x1A1650u;
    // 0x1a1650: 0x92020005
    ctx->pc = 0x1a1650u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1a1654:
    // 0x1a1654: 0x92030007
    ctx->pc = 0x1a1654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1a1658: 0x24420001
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a165c: 0x30630003
    ctx->pc = 0x1a165cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x1a1660: 0x14600003
    ctx->pc = 0x1A1660u;
    {
        const bool branch_taken_0x1a1660 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1664u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a1660) {
            ctx->pc = 0x1A1670u;
            goto label_1a1670;
        }
    }
    ctx->pc = 0x1A1668u;
    // 0x1a1668: 0x2402001d
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1a166c: 0xa3a20001
    ctx->pc = 0x1a166cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a1670:
    // 0x1a1670: 0x92020006
    ctx->pc = 0x1a1670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1674: 0x92040005
    ctx->pc = 0x1a1674u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1a1678: 0x5d1021
    ctx->pc = 0x1a1678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a167c: 0x8043ffff
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1a1680: 0x64182a
    ctx->pc = 0x1a1680u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1a1684: 0x10600011
    ctx->pc = 0x1A1684u;
    {
        const bool branch_taken_0x1a1684 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a1684) {
            ctx->pc = 0x1A16CCu;
            goto label_1a16cc;
        }
    }
    ctx->pc = 0x1A168Cu;
    // 0x1a168c: 0x92030006
    ctx->pc = 0x1a168cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1690: 0xa2020005
    ctx->pc = 0x1a1690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1694: 0x2404000d
    ctx->pc = 0x1a1694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a1698: 0x24630001
    ctx->pc = 0x1a1698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a169c: 0x306200ff
    ctx->pc = 0x1a169cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x1a16a0: 0x1444000a
    ctx->pc = 0x1A16A0u;
    {
        const bool branch_taken_0x1a16a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A16A4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a16a0) {
            ctx->pc = 0x1A16CCu;
            goto label_1a16cc;
        }
    }
    ctx->pc = 0x1A16A8u;
    // 0x1a16a8: 0x92030007
    ctx->pc = 0x1a16a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1a16ac: 0x24020063
    ctx->pc = 0x1a16acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1a16b0: 0x14620003
    ctx->pc = 0x1A16B0u;
    {
        const bool branch_taken_0x1a16b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A16B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1a16b0) {
            ctx->pc = 0x1A16C0u;
            goto label_1a16c0;
        }
    }
    ctx->pc = 0x1A16B8u;
    // 0x1a16b8: 0x10000002
    ctx->pc = 0x1A16B8u;
    {
        const bool branch_taken_0x1a16b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A16BCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1a16b8) {
            ctx->pc = 0x1A16C4u;
            goto label_1a16c4;
        }
    }
    ctx->pc = 0x1A16C0u;
label_1a16c0:
    // 0x1a16c0: 0xa2020007
    ctx->pc = 0x1a16c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
label_1a16c4:
    // 0x1a16c4: 0x24020001
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16c8: 0xa2020006
    ctx->pc = 0x1a16c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1a16cc:
    // 0x1a16cc: 0xdfbf0020
    ctx->pc = 0x1a16ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a16d0: 0xdfb00010
    ctx->pc = 0x1a16d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a16d4: 0x3e00008
    ctx->pc = 0x1A16D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A16D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1654u: goto label_1a1654;
            case 0x1A1670u: goto label_1a1670;
            case 0x1A16C0u: goto label_1a16c0;
            case 0x1A16C4u: goto label_1a16c4;
            case 0x1A16CCu: goto label_1a16cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A16DCu;
}
