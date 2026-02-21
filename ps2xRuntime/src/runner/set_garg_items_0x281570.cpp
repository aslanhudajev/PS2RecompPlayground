#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_garg_items
// Address: 0x281570 - 0x281718
void set_garg_items_0x281570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281570u;

    // 0x281570: 0x27bdff70
    ctx->pc = 0x281570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x281574: 0xffbf0080
    ctx->pc = 0x281574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x281578: 0xffb60070
    ctx->pc = 0x281578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28157c: 0xffb50060
    ctx->pc = 0x28157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x281580: 0xffb40050
    ctx->pc = 0x281580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x281584: 0xffb30040
    ctx->pc = 0x281584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x281588: 0xffb20030
    ctx->pc = 0x281588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28158c: 0xffb10020
    ctx->pc = 0x28158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x281590: 0xffb00010
    ctx->pc = 0x281590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x281594: 0x80902d
    ctx->pc = 0x281594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281598: 0xa0802d
    ctx->pc = 0x281598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28159c: 0xc0a02c4
    ctx->pc = 0x28159Cu;
    SET_GPR_U32(ctx, 31, 0x2815A4u);
    ctx->pc = 0x2815A0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2815A4u; }
    }
    if (ctx->pc != 0x2815A4u) { return; }
    ctx->pc = 0x2815A4u;
    // 0x2815a4: 0x16000053
    ctx->pc = 0x2815A4u;
    {
        const bool branch_taken_0x2815a4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2815A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2815a4) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2815ACu;
    // 0x2815ac: 0x12200051
    ctx->pc = 0x2815ACu;
    {
        const bool branch_taken_0x2815ac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2815B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2815ac) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2815B4u;
    // 0x2815b4: 0x3c020032
    ctx->pc = 0x2815b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2815b8: 0x24561bc0
    ctx->pc = 0x2815b8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2815bc: 0x3c020031
    ctx->pc = 0x2815bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2815c0: 0x24531b50
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 6992));
    // 0x2815c4: 0x241100b4
    ctx->pc = 0x2815c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2815c8: 0x3c020034
    ctx->pc = 0x2815c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2815cc: 0x2455fb00
    ctx->pc = 0x2815ccu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x2815d0: 0x3c020032
    ctx->pc = 0x2815d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2815d4: 0x245415d8
    ctx->pc = 0x2815d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 5592));
    // 0x2815d8: 0x24022b00
    ctx->pc = 0x2815d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2815dc: 0x0
    ctx->pc = 0x2815dcu;
    // NOP
label_2815e0:
    // 0x2815e0: 0x2021818
    ctx->pc = 0x2815e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2815e4: 0x762021
    ctx->pc = 0x2815e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2815e8: 0x8c8300fc
    ctx->pc = 0x2815e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2815ec: 0x24020001
    ctx->pc = 0x2815ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2815f0: 0x5462003c
    ctx->pc = 0x2815F0u;
    {
        const bool branch_taken_0x2815f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2815f0) {
            ctx->pc = 0x2815F4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2816E4u;
            goto label_2816e4;
        }
    }
    ctx->pc = 0x2815F8u;
    // 0x2815f8: 0x101080
    ctx->pc = 0x2815f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2815fc: 0x531021
    ctx->pc = 0x2815fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281600: 0x8c420000
    ctx->pc = 0x281600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281604: 0x3c030c00
    ctx->pc = 0x281604u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3072 << 16));
    // 0x281608: 0x431024
    ctx->pc = 0x281608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28160c: 0x10400003
    ctx->pc = 0x28160Cu;
    {
        const bool branch_taken_0x28160c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281610u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28160c) {
            ctx->pc = 0x28161Cu;
            goto label_28161c;
        }
    }
    ctx->pc = 0x281614u;
    // 0x281614: 0x10000008
    ctx->pc = 0x281614u;
    {
        const bool branch_taken_0x281614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281618u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x281614) {
            ctx->pc = 0x281638u;
            goto label_281638;
        }
    }
    ctx->pc = 0x28161Cu;
label_28161c:
    // 0x28161c: 0x101080
    ctx->pc = 0x28161cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x281620: 0x531021
    ctx->pc = 0x281620u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281624: 0x8c430000
    ctx->pc = 0x281624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281628: 0x3c020300
    ctx->pc = 0x281628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
    // 0x28162c: 0x621824
    ctx->pc = 0x28162cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281630: 0x2402ffff
    ctx->pc = 0x281630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281634: 0x43380b
    ctx->pc = 0x281634u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_281638:
    // 0x281638: 0x8e450000
    ctx->pc = 0x281638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28163c: 0x51840
    ctx->pc = 0x28163cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x281640: 0x8c82000c
    ctx->pc = 0x281640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x281644: 0x511018
    ctx->pc = 0x281644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x281648: 0x621821
    ctx->pc = 0x281648u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28164c: 0x831821
    ctx->pc = 0x28164cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281650: 0x10e00015
    ctx->pc = 0x281650u;
    {
        const bool branch_taken_0x281650 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x281654u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3332)));
        if (branch_taken_0x281650) {
            ctx->pc = 0x2816A8u;
            goto label_2816a8;
        }
    }
    ctx->pc = 0x281658u;
    // 0x281658: 0xc73021
    ctx->pc = 0x281658u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28165c: 0x28c2ffff
    ctx->pc = 0x28165cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294967295));
    // 0x281660: 0x54400006
    ctx->pc = 0x281660u;
    {
        const bool branch_taken_0x281660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x281660) {
            ctx->pc = 0x281664u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x28167Cu;
            goto label_28167c;
        }
    }
    ctx->pc = 0x281668u;
    // 0x281668: 0x51080
    ctx->pc = 0x281668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x28166c: 0x551021
    ctx->pc = 0x28166cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x281670: 0x8c430000
    ctx->pc = 0x281670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281674: 0x66102a
    ctx->pc = 0x281674u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x281678: 0x62300b
    ctx->pc = 0x281678u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_28167c:
    // 0x28167c: 0x51840
    ctx->pc = 0x28167cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x281680: 0x8c82000c
    ctx->pc = 0x281680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x281684: 0x511018
    ctx->pc = 0x281684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x281688: 0x621021
    ctx->pc = 0x281688u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28168c: 0x821021
    ctx->pc = 0x28168cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281690: 0xa4460d04
    ctx->pc = 0x281690u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3332), (uint16_t)GPR_U32(ctx, 6));
    // 0x281694: 0x8c82000c
    ctx->pc = 0x281694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x281698: 0x512818
    ctx->pc = 0x281698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28169c: 0xa31021
    ctx->pc = 0x28169cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2816a0: 0x821021
    ctx->pc = 0x2816a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2816a4: 0xa4461d90
    ctx->pc = 0x2816a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7568), (uint16_t)GPR_U32(ctx, 6));
label_2816a8:
    // 0x2816a8: 0x3c05003b
    ctx->pc = 0x2816a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2816ac: 0x3a0202d
    ctx->pc = 0x2816acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816b0: 0xc0b6252
    ctx->pc = 0x2816B0u;
    SET_GPR_U32(ctx, 31, 0x2816B8u);
    ctx->pc = 0x2816B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950792));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816B8u; }
    }
    if (ctx->pc != 0x2816B8u) { return; }
    ctx->pc = 0x2816B8u;
    // 0x2816b8: 0x101040
    ctx->pc = 0x2816b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x2816bc: 0x541021
    ctx->pc = 0x2816bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2816c0: 0x94440000
    ctx->pc = 0x2816c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2816c4: 0x42023
    ctx->pc = 0x2816c4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2816c8: 0x24050152
    ctx->pc = 0x2816c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 338));
    // 0x2816cc: 0x24060001
    ctx->pc = 0x2816ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2816d0: 0x3c0700ff
    ctx->pc = 0x2816d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2816d4: 0x34e7ffff
    ctx->pc = 0x2816d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2816d8: 0xc0804c8
    ctx->pc = 0x2816D8u;
    SET_GPR_U32(ctx, 31, 0x2816E0u);
    ctx->pc = 0x2816DCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816E0u; }
    }
    if (ctx->pc != 0x2816E0u) { return; }
    ctx->pc = 0x2816E0u;
    // 0x2816e0: 0x26100001
    ctx->pc = 0x2816e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2816e4:
    // 0x2816e4: 0x2a020004
    ctx->pc = 0x2816e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2816e8: 0x1440ffbd
    ctx->pc = 0x2816E8u;
    {
        const bool branch_taken_0x2816e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2816ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x2816e8) {
            ctx->pc = 0x2815E0u;
            goto label_2815e0;
        }
    }
    ctx->pc = 0x2816F0u;
    // 0x2816f0: 0xdfbf0080
    ctx->pc = 0x2816f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2816f4:
    // 0x2816f4: 0xdfb60070
    ctx->pc = 0x2816f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2816f8: 0xdfb50060
    ctx->pc = 0x2816f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2816fc: 0xdfb40050
    ctx->pc = 0x2816fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281700: 0xdfb30040
    ctx->pc = 0x281700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281704: 0xdfb20030
    ctx->pc = 0x281704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281708: 0xdfb10020
    ctx->pc = 0x281708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28170c: 0xdfb00010
    ctx->pc = 0x28170cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281710: 0x3e00008
    ctx->pc = 0x281710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2815E0u: goto label_2815e0;
            case 0x28161Cu: goto label_28161c;
            case 0x281638u: goto label_281638;
            case 0x28167Cu: goto label_28167c;
            case 0x2816A8u: goto label_2816a8;
            case 0x2816E4u: goto label_2816e4;
            case 0x2816F4u: goto label_2816f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281718u;
}
