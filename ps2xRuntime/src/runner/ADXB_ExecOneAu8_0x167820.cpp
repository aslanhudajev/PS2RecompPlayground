#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAu8
// Address: 0x167820 - 0x167998
void ADXB_ExecOneAu8_0x167820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAu8");


    ctx->pc = 0x167820u;

label_167820:
    // 0x167820: 0x27bdffc0
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_167824:
    // 0x167824: 0x24020001
    ctx->pc = 0x167824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_167828:
    // 0x167828: 0xffb10010
    ctx->pc = 0x167828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16782c:
    // 0x16782c: 0xffb00000
    ctx->pc = 0x16782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_167830:
    // 0x167830: 0xffbf0030
    ctx->pc = 0x167830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_167834:
    // 0x167834: 0x80802d
    ctx->pc = 0x167834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167838:
    // 0x167838: 0xffb20020
    ctx->pc = 0x167838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16783c:
    // 0x16783c: 0x26110050
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_167840:
    // 0x167840: 0x8e030004
    ctx->pc = 0x167840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_167844:
    // 0x167844: 0x14620044
label_167848:
    if (ctx->pc == 0x167848u) {
        ctx->pc = 0x167848u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x16784Cu;
        goto label_16784c;
    }
    ctx->pc = 0x167844u;
    {
        const bool branch_taken_0x167844 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x167848u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x167844) {
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x16784Cu;
label_16784c:
    // 0x16784c: 0xc05cfec
label_167850:
    if (ctx->pc == 0x167850u) {
        ctx->pc = 0x167850u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x167854u;
        goto label_167854;
    }
    ctx->pc = 0x16784Cu;
    SET_GPR_U32(ctx, 31, 0x167854u);
    ctx->pc = 0x167850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167854u; }
        else if (ctx->pc != 0x167854u) { ctx->pc = 0x167854u; }
    }
    if (ctx->pc != 0x167854u) { return; }
    ctx->pc = 0x167854u;
label_167854:
    // 0x167854: 0x54400040
label_167858:
    if (ctx->pc == 0x167858u) {
        ctx->pc = 0x167858u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16785Cu;
        goto label_16785c;
    }
    ctx->pc = 0x167854u;
    {
        const bool branch_taken_0x167854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x167854) {
            ctx->pc = 0x167858u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x16785Cu;
label_16785c:
    // 0x16785c: 0x8e020088
    ctx->pc = 0x16785cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_167860:
    // 0x167860: 0x26050070
    ctx->pc = 0x167860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_167864:
    // 0x167864: 0x8e04008c
    ctx->pc = 0x167864u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_167868:
    // 0x167868: 0x26060074
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_16786c:
    // 0x16786c: 0x40f809
label_167870:
    if (ctx->pc == 0x167870u) {
        ctx->pc = 0x167870u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x167874u;
        goto label_167874;
    }
    ctx->pc = 0x16786Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167874u);
        ctx->pc = 0x167870u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            case 0x1678D8u: goto label_1678d8;
            case 0x1678DCu: goto label_1678dc;
            case 0x1678E0u: goto label_1678e0;
            case 0x1678E4u: goto label_1678e4;
            case 0x1678E8u: goto label_1678e8;
            case 0x1678ECu: goto label_1678ec;
            case 0x1678F0u: goto label_1678f0;
            case 0x1678F4u: goto label_1678f4;
            case 0x1678F8u: goto label_1678f8;
            case 0x1678FCu: goto label_1678fc;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167908u: goto label_167908;
            case 0x16790Cu: goto label_16790c;
            case 0x167910u: goto label_167910;
            case 0x167914u: goto label_167914;
            case 0x167918u: goto label_167918;
            case 0x16791Cu: goto label_16791c;
            case 0x167920u: goto label_167920;
            case 0x167924u: goto label_167924;
            case 0x167928u: goto label_167928;
            case 0x16792Cu: goto label_16792c;
            case 0x167930u: goto label_167930;
            case 0x167934u: goto label_167934;
            case 0x167938u: goto label_167938;
            case 0x16793Cu: goto label_16793c;
            case 0x167940u: goto label_167940;
            case 0x167944u: goto label_167944;
            case 0x167948u: goto label_167948;
            case 0x16794Cu: goto label_16794c;
            case 0x167950u: goto label_167950;
            case 0x167954u: goto label_167954;
            case 0x167958u: goto label_167958;
            case 0x16795Cu: goto label_16795c;
            case 0x167960u: goto label_167960;
            case 0x167964u: goto label_167964;
            case 0x167968u: goto label_167968;
            case 0x16796Cu: goto label_16796c;
            case 0x167970u: goto label_167970;
            case 0x167974u: goto label_167974;
            case 0x167978u: goto label_167978;
            case 0x16797Cu: goto label_16797c;
            case 0x167980u: goto label_167980;
            case 0x167984u: goto label_167984;
            case 0x167988u: goto label_167988;
            case 0x16798Cu: goto label_16798c;
            case 0x167990u: goto label_167990;
            case 0x167994u: goto label_167994;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167874u; }
            if (ctx->pc != 0x167874u) { return; }
        }
    }
    ctx->pc = 0x167874u;
label_167874:
    // 0x167874: 0x8e290020
    ctx->pc = 0x167874u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_167878:
    // 0x167878: 0x24060002
    ctx->pc = 0x167878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_16787c:
    // 0x16787c: 0x8e230018
    ctx->pc = 0x16787cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_167880:
    // 0x167880: 0x8e2a0014
    ctx->pc = 0x167880u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_167884:
    // 0x167884: 0x91040
    ctx->pc = 0x167884u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
label_167888:
    // 0x167888: 0x8e240024
    ctx->pc = 0x167888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_16788c:
    // 0x16788c: 0x693823
    ctx->pc = 0x16788cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_167890:
    // 0x167890: 0x1425821
    ctx->pc = 0x167890u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_167894:
    // 0x167894: 0x8e250004
    ctx->pc = 0x167894u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_167898:
    // 0x167898: 0x87102a
    ctx->pc = 0x167898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_16789c:
    // 0x16789c: 0x8203000e
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1678a0:
    // 0x1678a0: 0x82380b
    ctx->pc = 0x1678a0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_1678a4:
    // 0x1678a4: 0x9208000e
    ctx->pc = 0x1678a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1678a8:
    // 0x1678a8: 0xa7102a
    ctx->pc = 0x1678a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
label_1678ac:
    // 0x1678ac: 0x14660017
label_1678b0:
    if (ctx->pc == 0x1678B0u) {
        ctx->pc = 0x1678B0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        ctx->pc = 0x1678B4u;
        goto label_1678b4;
    }
    ctx->pc = 0x1678ACu;
    {
        const bool branch_taken_0x1678ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x1678B0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x1678ac) {
            ctx->pc = 0x16790Cu;
            goto label_16790c;
        }
    }
    ctx->pc = 0x1678B4u;
label_1678b4:
    // 0x1678b4: 0x8e22001c
    ctx->pc = 0x1678b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1678b8:
    // 0x1678b8: 0x491021
    ctx->pc = 0x1678b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1678bc:
    // 0x1678bc: 0x21040
    ctx->pc = 0x1678bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1678c0:
    // 0x1678c0: 0x18e0001e
label_1678c4:
    if (ctx->pc == 0x1678C4u) {
        ctx->pc = 0x1678C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x1678C8u;
        goto label_1678c8;
    }
    ctx->pc = 0x1678C0u;
    {
        const bool branch_taken_0x1678c0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1678C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x1678c0) {
            ctx->pc = 0x16793Cu;
            goto label_16793c;
        }
    }
    ctx->pc = 0x1678C8u;
label_1678c8:
    // 0x1678c8: 0x40302d
    ctx->pc = 0x1678c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1678cc:
    // 0x1678cc: 0x160282d
    ctx->pc = 0x1678ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1678d0:
    // 0x1678d0: 0x240182d
    ctx->pc = 0x1678d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1678d4:
    // 0x1678d4: 0xe0202d
    ctx->pc = 0x1678d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1678d8:
    // 0x1678d8: 0x90620000
    ctx->pc = 0x1678d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1678dc:
    // 0x1678dc: 0x2484ffff
    ctx->pc = 0x1678dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1678e0:
    // 0x1678e0: 0x21200
    ctx->pc = 0x1678e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1678e4:
    // 0x1678e4: 0xa4a20000
    ctx->pc = 0x1678e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1678e8:
    // 0x1678e8: 0x24a50002
    ctx->pc = 0x1678e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_1678ec:
    // 0x1678ec: 0x90620001
    ctx->pc = 0x1678ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1678f0:
    // 0x1678f0: 0x24630002
    ctx->pc = 0x1678f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1678f4:
    // 0x1678f4: 0x21200
    ctx->pc = 0x1678f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1678f8:
    // 0x1678f8: 0xa4c20000
    ctx->pc = 0x1678f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1678fc:
    // 0x1678fc: 0x1480fff6
label_167900:
    if (ctx->pc == 0x167900u) {
        ctx->pc = 0x167900u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x167904u;
        goto label_167904;
    }
    ctx->pc = 0x1678FCu;
    {
        const bool branch_taken_0x1678fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x167900u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1678fc) {
            ctx->pc = 0x1678D8u;
            goto label_1678d8;
        }
    }
    ctx->pc = 0x167904u;
label_167904:
    // 0x167904: 0x1000000d
label_167908:
    if (ctx->pc == 0x167908u) {
        ctx->pc = 0x167908u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16790Cu;
        goto label_16790c;
    }
    ctx->pc = 0x167904u;
    {
        const bool branch_taken_0x167904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167908u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x167904) {
            ctx->pc = 0x16793Cu;
            goto label_16793c;
        }
    }
    ctx->pc = 0x16790Cu;
label_16790c:
    // 0x16790c: 0x18e0000b
label_167910:
    if (ctx->pc == 0x167910u) {
        ctx->pc = 0x167910u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167914u;
        goto label_167914;
    }
    ctx->pc = 0x16790Cu;
    {
        const bool branch_taken_0x16790c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x167910u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16790c) {
            ctx->pc = 0x16793Cu;
            goto label_16793c;
        }
    }
    ctx->pc = 0x167914u;
label_167914:
    // 0x167914: 0x160282d
    ctx->pc = 0x167914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_167918:
    // 0x167918: 0x2441021
    ctx->pc = 0x167918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_16791c:
    // 0x16791c: 0x90430000
    ctx->pc = 0x16791cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_167920:
    // 0x167920: 0x24840001
    ctx->pc = 0x167920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_167924:
    // 0x167924: 0x87102a
    ctx->pc = 0x167924u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_167928:
    // 0x167928: 0x31a00
    ctx->pc = 0x167928u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_16792c:
    // 0x16792c: 0xa4a30000
    ctx->pc = 0x16792cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_167930:
    // 0x167930: 0x1440fff9
label_167934:
    if (ctx->pc == 0x167934u) {
        ctx->pc = 0x167934u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167938u;
        goto label_167938;
    }
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167934u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167918u;
            goto label_167918;
        }
    }
    ctx->pc = 0x167938u;
label_167938:
    // 0x167938: 0x9208000e
    ctx->pc = 0x167938u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_16793c:
    // 0x16793c: 0x81600
    ctx->pc = 0x16793cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
label_167940:
    // 0x167940: 0x24030002
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_167944:
    // 0x167944: 0x21603
    ctx->pc = 0x167944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_167948:
    // 0x167948: 0xae030004
    ctx->pc = 0x167948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_16794c:
    // 0x16794c: 0xe21018
    ctx->pc = 0x16794cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_167950:
    // 0x167950: 0xae0700a0
    ctx->pc = 0x167950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_167954:
    // 0x167954: 0xae0200a4
    ctx->pc = 0x167954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_167958:
    // 0x167958: 0x24020002
    ctx->pc = 0x167958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_16795c:
    // 0x16795c: 0x14620009
label_167960:
    if (ctx->pc == 0x167960u) {
        ctx->pc = 0x167960u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x167964u;
        goto label_167964;
    }
    ctx->pc = 0x16795Cu;
    {
        const bool branch_taken_0x16795c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x167960u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x16795c) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167964u;
label_167964:
    // 0x167964: 0x8e030090
    ctx->pc = 0x167964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_167968:
    // 0x167968: 0x8e040094
    ctx->pc = 0x167968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_16796c:
    // 0x16796c: 0x8e0500a4
    ctx->pc = 0x16796cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_167970:
    // 0x167970: 0x60f809
label_167974:
    if (ctx->pc == 0x167974u) {
        ctx->pc = 0x167974u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x167978u;
        goto label_167978;
    }
    ctx->pc = 0x167970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167978u);
        ctx->pc = 0x167974u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            case 0x1678D8u: goto label_1678d8;
            case 0x1678DCu: goto label_1678dc;
            case 0x1678E0u: goto label_1678e0;
            case 0x1678E4u: goto label_1678e4;
            case 0x1678E8u: goto label_1678e8;
            case 0x1678ECu: goto label_1678ec;
            case 0x1678F0u: goto label_1678f0;
            case 0x1678F4u: goto label_1678f4;
            case 0x1678F8u: goto label_1678f8;
            case 0x1678FCu: goto label_1678fc;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167908u: goto label_167908;
            case 0x16790Cu: goto label_16790c;
            case 0x167910u: goto label_167910;
            case 0x167914u: goto label_167914;
            case 0x167918u: goto label_167918;
            case 0x16791Cu: goto label_16791c;
            case 0x167920u: goto label_167920;
            case 0x167924u: goto label_167924;
            case 0x167928u: goto label_167928;
            case 0x16792Cu: goto label_16792c;
            case 0x167930u: goto label_167930;
            case 0x167934u: goto label_167934;
            case 0x167938u: goto label_167938;
            case 0x16793Cu: goto label_16793c;
            case 0x167940u: goto label_167940;
            case 0x167944u: goto label_167944;
            case 0x167948u: goto label_167948;
            case 0x16794Cu: goto label_16794c;
            case 0x167950u: goto label_167950;
            case 0x167954u: goto label_167954;
            case 0x167958u: goto label_167958;
            case 0x16795Cu: goto label_16795c;
            case 0x167960u: goto label_167960;
            case 0x167964u: goto label_167964;
            case 0x167968u: goto label_167968;
            case 0x16796Cu: goto label_16796c;
            case 0x167970u: goto label_167970;
            case 0x167974u: goto label_167974;
            case 0x167978u: goto label_167978;
            case 0x16797Cu: goto label_16797c;
            case 0x167980u: goto label_167980;
            case 0x167984u: goto label_167984;
            case 0x167988u: goto label_167988;
            case 0x16798Cu: goto label_16798c;
            case 0x167990u: goto label_167990;
            case 0x167994u: goto label_167994;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167978u; }
            if (ctx->pc != 0x167978u) { return; }
        }
    }
    ctx->pc = 0x167978u;
label_167978:
    // 0x167978: 0x24020003
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_16797c:
    // 0x16797c: 0xae020004
    ctx->pc = 0x16797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_167980:
    // 0x167980: 0xdfbf0030
    ctx->pc = 0x167980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_167984:
    // 0x167984: 0xdfb20020
    ctx->pc = 0x167984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167988:
    // 0x167988: 0xdfb10010
    ctx->pc = 0x167988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16798c:
    // 0x16798c: 0xdfb00000
    ctx->pc = 0x16798cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167990:
    // 0x167990: 0x3e00008
label_167994:
    if (ctx->pc == 0x167994u) {
        ctx->pc = 0x167994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x167998u;
        goto label_fallthrough_0x167990;
    }
    ctx->pc = 0x167990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167820u: goto label_167820;
            case 0x167824u: goto label_167824;
            case 0x167828u: goto label_167828;
            case 0x16782Cu: goto label_16782c;
            case 0x167830u: goto label_167830;
            case 0x167834u: goto label_167834;
            case 0x167838u: goto label_167838;
            case 0x16783Cu: goto label_16783c;
            case 0x167840u: goto label_167840;
            case 0x167844u: goto label_167844;
            case 0x167848u: goto label_167848;
            case 0x16784Cu: goto label_16784c;
            case 0x167850u: goto label_167850;
            case 0x167854u: goto label_167854;
            case 0x167858u: goto label_167858;
            case 0x16785Cu: goto label_16785c;
            case 0x167860u: goto label_167860;
            case 0x167864u: goto label_167864;
            case 0x167868u: goto label_167868;
            case 0x16786Cu: goto label_16786c;
            case 0x167870u: goto label_167870;
            case 0x167874u: goto label_167874;
            case 0x167878u: goto label_167878;
            case 0x16787Cu: goto label_16787c;
            case 0x167880u: goto label_167880;
            case 0x167884u: goto label_167884;
            case 0x167888u: goto label_167888;
            case 0x16788Cu: goto label_16788c;
            case 0x167890u: goto label_167890;
            case 0x167894u: goto label_167894;
            case 0x167898u: goto label_167898;
            case 0x16789Cu: goto label_16789c;
            case 0x1678A0u: goto label_1678a0;
            case 0x1678A4u: goto label_1678a4;
            case 0x1678A8u: goto label_1678a8;
            case 0x1678ACu: goto label_1678ac;
            case 0x1678B0u: goto label_1678b0;
            case 0x1678B4u: goto label_1678b4;
            case 0x1678B8u: goto label_1678b8;
            case 0x1678BCu: goto label_1678bc;
            case 0x1678C0u: goto label_1678c0;
            case 0x1678C4u: goto label_1678c4;
            case 0x1678C8u: goto label_1678c8;
            case 0x1678CCu: goto label_1678cc;
            case 0x1678D0u: goto label_1678d0;
            case 0x1678D4u: goto label_1678d4;
            case 0x1678D8u: goto label_1678d8;
            case 0x1678DCu: goto label_1678dc;
            case 0x1678E0u: goto label_1678e0;
            case 0x1678E4u: goto label_1678e4;
            case 0x1678E8u: goto label_1678e8;
            case 0x1678ECu: goto label_1678ec;
            case 0x1678F0u: goto label_1678f0;
            case 0x1678F4u: goto label_1678f4;
            case 0x1678F8u: goto label_1678f8;
            case 0x1678FCu: goto label_1678fc;
            case 0x167900u: goto label_167900;
            case 0x167904u: goto label_167904;
            case 0x167908u: goto label_167908;
            case 0x16790Cu: goto label_16790c;
            case 0x167910u: goto label_167910;
            case 0x167914u: goto label_167914;
            case 0x167918u: goto label_167918;
            case 0x16791Cu: goto label_16791c;
            case 0x167920u: goto label_167920;
            case 0x167924u: goto label_167924;
            case 0x167928u: goto label_167928;
            case 0x16792Cu: goto label_16792c;
            case 0x167930u: goto label_167930;
            case 0x167934u: goto label_167934;
            case 0x167938u: goto label_167938;
            case 0x16793Cu: goto label_16793c;
            case 0x167940u: goto label_167940;
            case 0x167944u: goto label_167944;
            case 0x167948u: goto label_167948;
            case 0x16794Cu: goto label_16794c;
            case 0x167950u: goto label_167950;
            case 0x167954u: goto label_167954;
            case 0x167958u: goto label_167958;
            case 0x16795Cu: goto label_16795c;
            case 0x167960u: goto label_167960;
            case 0x167964u: goto label_167964;
            case 0x167968u: goto label_167968;
            case 0x16796Cu: goto label_16796c;
            case 0x167970u: goto label_167970;
            case 0x167974u: goto label_167974;
            case 0x167978u: goto label_167978;
            case 0x16797Cu: goto label_16797c;
            case 0x167980u: goto label_167980;
            case 0x167984u: goto label_167984;
            case 0x167988u: goto label_167988;
            case 0x16798Cu: goto label_16798c;
            case 0x167990u: goto label_167990;
            case 0x167994u: goto label_167994;
            default: break;
        }
        return;
    }
label_fallthrough_0x167990:
    ctx->pc = 0x167998u;
}
