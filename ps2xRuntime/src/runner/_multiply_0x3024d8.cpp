#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _multiply
// Address: 0x3024d8 - 0x302704
void _multiply_0x3024d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3024d8u;

    // 0x3024d8: 0x27bdff90
    ctx->pc = 0x3024d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3024dc: 0xffb10010
    ctx->pc = 0x3024dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3024e0: 0xffb00000
    ctx->pc = 0x3024e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3024e4: 0xc0882d
    ctx->pc = 0x3024e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024e8: 0xffbf0060
    ctx->pc = 0x3024e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3024ec: 0xa0802d
    ctx->pc = 0x3024ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024f0: 0xffb50050
    ctx->pc = 0x3024f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3024f4: 0xffb40040
    ctx->pc = 0x3024f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3024f8: 0xffb30030
    ctx->pc = 0x3024f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3024fc: 0xffb20020
    ctx->pc = 0x3024fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302500: 0x8e120010
    ctx->pc = 0x302500u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x302504: 0x8e330010
    ctx->pc = 0x302504u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x302508: 0x253102a
    ctx->pc = 0x302508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x30250c: 0x10400005
    ctx->pc = 0x30250Cu;
    {
        const bool branch_taken_0x30250c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302510u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30250c) {
            ctx->pc = 0x302524u;
            goto label_302524;
        }
    }
    ctx->pc = 0x302514u;
    // 0x302514: 0x220802d
    ctx->pc = 0x302514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302518: 0x320882d
    ctx->pc = 0x302518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30251c: 0x8e120010
    ctx->pc = 0x30251cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x302520: 0x8e330010
    ctx->pc = 0x302520u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_302524:
    // 0x302524: 0x8e050008
    ctx->pc = 0x302524u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x302528: 0x253a021
    ctx->pc = 0x302528u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x30252c: 0x8e020004
    ctx->pc = 0x30252cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x302530: 0xb4282a
    ctx->pc = 0x302530u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
    // 0x302534: 0xc0c0808
    ctx->pc = 0x302534u;
    SET_GPR_U32(ctx, 31, 0x30253Cu);
    ctx->pc = 0x302538u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30253Cu; }
    }
    if (ctx->pc != 0x30253Cu) { return; }
    ctx->pc = 0x30253Cu;
    // 0x30253c: 0x40c82d
    ctx->pc = 0x30253cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302540: 0x14a880
    ctx->pc = 0x302540u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 2));
    // 0x302544: 0x27380014
    ctx->pc = 0x302544u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 25), 20));
    // 0x302548: 0x3152021
    ctx->pc = 0x302548u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x30254c: 0x304102b
    ctx->pc = 0x30254cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x302550: 0x1040000e
    ctx->pc = 0x302550u;
    {
        const bool branch_taken_0x302550 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302554u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302550) {
            ctx->pc = 0x30258Cu;
            goto label_30258c;
        }
    }
    ctx->pc = 0x302558u;
    // 0x302558: 0x260e0014
    ctx->pc = 0x302558u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 16), 20));
    // 0x30255c: 0x122880
    ctx->pc = 0x30255cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
    // 0x302560: 0x26260014
    ctx->pc = 0x302560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    // 0x302564: 0x131880
    ctx->pc = 0x302564u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_302568:
    // 0x302568: 0xad200000
    ctx->pc = 0x302568u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x30256c: 0x25290004
    ctx->pc = 0x30256cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x302570: 0x124102b
    ctx->pc = 0x302570u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x302574: 0x0
    ctx->pc = 0x302574u;
    // NOP
    // 0x302578: 0x0
    ctx->pc = 0x302578u;
    // NOP
    // 0x30257c: 0x1440fffa
    ctx->pc = 0x30257Cu;
    {
        const bool branch_taken_0x30257c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30257c) {
            ctx->pc = 0x302568u;
            goto label_302568;
        }
    }
    ctx->pc = 0x302584u;
    // 0x302584: 0x10000006
    ctx->pc = 0x302584u;
    {
        const bool branch_taken_0x302584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302588u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302584) {
            ctx->pc = 0x3025A0u;
            goto label_3025a0;
        }
    }
    ctx->pc = 0x30258Cu;
label_30258c:
    // 0x30258c: 0x260e0014
    ctx->pc = 0x30258cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 16), 20));
    // 0x302590: 0x122880
    ctx->pc = 0x302590u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
    // 0x302594: 0x26260014
    ctx->pc = 0x302594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    // 0x302598: 0x131880
    ctx->pc = 0x302598u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x30259c: 0xc0602d
    ctx->pc = 0x30259cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3025a0:
    // 0x3025a0: 0x1c58821
    ctx->pc = 0x3025a0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x3025a4: 0x1839021
    ctx->pc = 0x3025a4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3025a8: 0x192102b
    ctx->pc = 0x3025a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x3025ac: 0x10400043
    ctx->pc = 0x3025ACu;
    {
        const bool branch_taken_0x3025ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3025B0u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3025ac) {
            ctx->pc = 0x3026BCu;
            goto label_3026bc;
        }
    }
    ctx->pc = 0x3025B4u;
    // 0x3025b4: 0x0
    ctx->pc = 0x3025b4u;
    // NOP
label_3025b8:
    // 0x3025b8: 0x8d820000
    ctx->pc = 0x3025b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3025bc: 0x304affff
    ctx->pc = 0x3025bcu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 2), 65535));
    // 0x3025c0: 0x1140001c
    ctx->pc = 0x3025C0u;
    {
        const bool branch_taken_0x3025c0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x3025C4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3025c0) {
            ctx->pc = 0x302634u;
            goto label_302634;
        }
    }
    ctx->pc = 0x3025C8u;
    // 0x3025c8: 0x1c0482d
    ctx->pc = 0x3025c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025cc: 0x582d
    ctx->pc = 0x3025ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025d0: 0x25900004
    ctx->pc = 0x3025d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 12), 4));
    // 0x3025d4: 0x250f0004
    ctx->pc = 0x3025d4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 8), 4));
label_3025d8:
    // 0x3025d8: 0x8d230000
    ctx->pc = 0x3025d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3025dc: 0x8d040000
    ctx->pc = 0x3025dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3025e0: 0x25290004
    ctx->pc = 0x3025e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x3025e4: 0x3062ffff
    ctx->pc = 0x3025e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x3025e8: 0x131302b
    ctx->pc = 0x3025e8u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x3025ec: 0x4a1018
    ctx->pc = 0x3025ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x3025f0: 0x31c02
    ctx->pc = 0x3025f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x3025f4: 0x706a1818
    ctx->pc = 0x3025f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x3025f8: 0x3085ffff
    ctx->pc = 0x3025f8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x3025fc: 0x42402
    ctx->pc = 0x3025fcu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x302600: 0x451021
    ctx->pc = 0x302600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x302604: 0x4b1021
    ctx->pc = 0x302604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x302608: 0x641821
    ctx->pc = 0x302608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30260c: 0x25c02
    ctx->pc = 0x30260cu;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 2), 16));
    // 0x302610: 0xa5020000
    ctx->pc = 0x302610u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x302614: 0x6b3821
    ctx->pc = 0x302614u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x302618: 0xa5070002
    ctx->pc = 0x302618u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x30261c: 0x75c02
    ctx->pc = 0x30261cu;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 7), 16));
    // 0x302620: 0x14c0ffed
    ctx->pc = 0x302620u;
    {
        const bool branch_taken_0x302620 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x302624u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x302620) {
            ctx->pc = 0x3025D8u;
            goto label_3025d8;
        }
    }
    ctx->pc = 0x302628u;
    // 0x302628: 0xad0b0000
    ctx->pc = 0x302628u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x30262c: 0x10000003
    ctx->pc = 0x30262Cu;
    {
        const bool branch_taken_0x30262c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302630u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 0)));
        if (branch_taken_0x30262c) {
            ctx->pc = 0x30263Cu;
            goto label_30263c;
        }
    }
    ctx->pc = 0x302634u;
label_302634:
    // 0x302634: 0x25900004
    ctx->pc = 0x302634u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 12), 4));
    // 0x302638: 0x25af0004
    ctx->pc = 0x302638u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 13), 4));
label_30263c:
    // 0x30263c: 0x25402
    ctx->pc = 0x30263cu;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
    // 0x302640: 0x1140001a
    ctx->pc = 0x302640u;
    {
        const bool branch_taken_0x302640 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x302644u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302640) {
            ctx->pc = 0x3026ACu;
            goto label_3026ac;
        }
    }
    ctx->pc = 0x302648u;
    // 0x302648: 0x1c0482d
    ctx->pc = 0x302648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30264c: 0x8d070000
    ctx->pc = 0x30264cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x302650: 0x582d
    ctx->pc = 0x302650u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302654: 0xe0102d
    ctx->pc = 0x302654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_302658:
    // 0x302658: 0x8d240000
    ctx->pc = 0x302658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30265c: 0x21c02
    ctx->pc = 0x30265cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 16));
    // 0x302660: 0xa5070000
    ctx->pc = 0x302660u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x302664: 0x25290004
    ctx->pc = 0x302664u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x302668: 0x3082ffff
    ctx->pc = 0x302668u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x30266c: 0x131282b
    ctx->pc = 0x30266cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x302670: 0x4a1018
    ctx->pc = 0x302670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x302674: 0x42402
    ctx->pc = 0x302674u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x302678: 0x708a2018
    ctx->pc = 0x302678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x30267c: 0x431021
    ctx->pc = 0x30267cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x302680: 0x4b1021
    ctx->pc = 0x302680u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x302684: 0xa5020002
    ctx->pc = 0x302684u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x302688: 0x25c02
    ctx->pc = 0x302688u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 2), 16));
    // 0x30268c: 0x25080004
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x302690: 0x8d020000
    ctx->pc = 0x302690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x302694: 0x3043ffff
    ctx->pc = 0x302694u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x302698: 0x832021
    ctx->pc = 0x302698u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30269c: 0x8b3821
    ctx->pc = 0x30269cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x3026a0: 0x14a0ffed
    ctx->pc = 0x3026A0u;
    {
        const bool branch_taken_0x3026a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x3026A4u;
        SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x3026a0) {
            ctx->pc = 0x302658u;
            goto label_302658;
        }
    }
    ctx->pc = 0x3026A8u;
    // 0x3026a8: 0xad070000
    ctx->pc = 0x3026a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_3026ac:
    // 0x3026ac: 0x200602d
    ctx->pc = 0x3026acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3026b0: 0x192102b
    ctx->pc = 0x3026b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x3026b4: 0x1440ffc0
    ctx->pc = 0x3026B4u;
    {
        const bool branch_taken_0x3026b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3026B8u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3026b4) {
            ctx->pc = 0x3025B8u;
            goto label_3025b8;
        }
    }
    ctx->pc = 0x3026BCu;
label_3026bc:
    // 0x3026bc: 0x3154021
    ctx->pc = 0x3026bcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_3026c0:
    // 0x3026c0: 0x5a800006
    ctx->pc = 0x3026C0u;
    {
        const bool branch_taken_0x3026c0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x3026c0) {
            ctx->pc = 0x3026C4u;
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->pc = 0x3026DCu;
            goto label_3026dc;
        }
    }
    ctx->pc = 0x3026C8u;
    // 0x3026c8: 0x2508fffc
    ctx->pc = 0x3026c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3026cc: 0x8d020000
    ctx->pc = 0x3026ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3026d0: 0x5040fffb
    ctx->pc = 0x3026D0u;
    {
        const bool branch_taken_0x3026d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3026d0) {
            ctx->pc = 0x3026D4u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x3026C0u;
            goto label_3026c0;
        }
    }
    ctx->pc = 0x3026D8u;
    // 0x3026d8: 0xaf340010
    ctx->pc = 0x3026d8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_3026dc:
    // 0x3026dc: 0x320102d
    ctx->pc = 0x3026dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3026e0: 0xdfbf0060
    ctx->pc = 0x3026e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3026e4: 0xdfb50050
    ctx->pc = 0x3026e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3026e8: 0xdfb40040
    ctx->pc = 0x3026e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3026ec: 0xdfb30030
    ctx->pc = 0x3026ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3026f0: 0xdfb20020
    ctx->pc = 0x3026f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3026f4: 0xdfb10010
    ctx->pc = 0x3026f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3026f8: 0xdfb00000
    ctx->pc = 0x3026f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3026fc: 0x3e00008
    ctx->pc = 0x3026FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302524u: goto label_302524;
            case 0x302568u: goto label_302568;
            case 0x30258Cu: goto label_30258c;
            case 0x3025A0u: goto label_3025a0;
            case 0x3025B8u: goto label_3025b8;
            case 0x3025D8u: goto label_3025d8;
            case 0x302634u: goto label_302634;
            case 0x30263Cu: goto label_30263c;
            case 0x302658u: goto label_302658;
            case 0x3026ACu: goto label_3026ac;
            case 0x3026BCu: goto label_3026bc;
            case 0x3026C0u: goto label_3026c0;
            case 0x3026DCu: goto label_3026dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302704u;
}
