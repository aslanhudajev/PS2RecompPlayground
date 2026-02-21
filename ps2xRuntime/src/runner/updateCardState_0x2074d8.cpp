#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: updateCardState
// Address: 0x2074d8 - 0x2076b4
void updateCardState_0x2074d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2074d8u;

    // 0x2074d8: 0x27bdffd0
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2074dc: 0xffbe0020
    ctx->pc = 0x2074dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2074e0: 0x3a0f02d
    ctx->pc = 0x2074e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074e4: 0xafc40000
    ctx->pc = 0x2074e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2074e8: 0xafc50004
    ctx->pc = 0x2074e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2074ec: 0xafc60008
    ctx->pc = 0x2074ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2074f0: 0xafc7000c
    ctx->pc = 0x2074f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x2074f4: 0xafc80010
    ctx->pc = 0x2074f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x2074f8: 0x8fc20008
    ctx->pc = 0x2074f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2074fc: 0x2403ffff
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207500: 0x10430007
    ctx->pc = 0x207500u;
    {
        const bool branch_taken_0x207500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x207500) {
            ctx->pc = 0x207520u;
            goto label_207520;
        }
    }
    ctx->pc = 0x207508u;
    // 0x207508: 0x8fc20008
    ctx->pc = 0x207508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20750c: 0x2403fffe
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x207510: 0x10430003
    ctx->pc = 0x207510u;
    {
        const bool branch_taken_0x207510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x207510) {
            ctx->pc = 0x207520u;
            goto label_207520;
        }
    }
    ctx->pc = 0x207518u;
    // 0x207518: 0x10000021
    ctx->pc = 0x207518u;
    {
        const bool branch_taken_0x207518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207518) {
            ctx->pc = 0x2075A0u;
            goto label_2075a0;
        }
    }
    ctx->pc = 0x207520u;
label_207520:
    // 0x207520: 0x8fc20004
    ctx->pc = 0x207520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207524: 0x40182d
    ctx->pc = 0x207524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207528: 0x31080
    ctx->pc = 0x207528u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20752c: 0x8fc30000
    ctx->pc = 0x20752cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207530: 0x60202d
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207534: 0x41900
    ctx->pc = 0x207534u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207538: 0x431021
    ctx->pc = 0x207538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20753c: 0x3c030031
    ctx->pc = 0x20753cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207540: 0x24632280
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x207544: 0x621021
    ctx->pc = 0x207544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207548: 0x8fc30010
    ctx->pc = 0x207548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x20754c: 0x10600004
    ctx->pc = 0x20754Cu;
    {
        const bool branch_taken_0x20754c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20754c) {
            ctx->pc = 0x207560u;
            goto label_207560;
        }
    }
    ctx->pc = 0x207554u;
    // 0x207554: 0x24030002
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x207558: 0x10000002
    ctx->pc = 0x207558u;
    {
        const bool branch_taken_0x207558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207558) {
            ctx->pc = 0x207564u;
            goto label_207564;
        }
    }
    ctx->pc = 0x207560u;
label_207560:
    // 0x207560: 0x24030001
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_207564:
    // 0x207564: 0xac430000
    ctx->pc = 0x207564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207568: 0x8fc20004
    ctx->pc = 0x207568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20756c: 0x40182d
    ctx->pc = 0x20756cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207570: 0x31080
    ctx->pc = 0x207570u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x207574: 0x8fc30000
    ctx->pc = 0x207574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207578: 0x60202d
    ctx->pc = 0x207578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20757c: 0x41900
    ctx->pc = 0x20757cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207580: 0x431021
    ctx->pc = 0x207580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207584: 0x3c030031
    ctx->pc = 0x207584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207588: 0x246322a0
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x20758c: 0x621021
    ctx->pc = 0x20758cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207590: 0x8fc3000c
    ctx->pc = 0x207590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x207594: 0xac430000
    ctx->pc = 0x207594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207598: 0x10000035
    ctx->pc = 0x207598u;
    {
        const bool branch_taken_0x207598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207598) {
            ctx->pc = 0x207670u;
            goto label_207670;
        }
    }
    ctx->pc = 0x2075A0u;
label_2075a0:
    // 0x2075a0: 0x8fc20008
    ctx->pc = 0x2075a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2075a4: 0x2403ffed
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967277));
    // 0x2075a8: 0x1443001b
    ctx->pc = 0x2075A8u;
    {
        const bool branch_taken_0x2075a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2075a8) {
            ctx->pc = 0x207618u;
            goto label_207618;
        }
    }
    ctx->pc = 0x2075B0u;
    // 0x2075b0: 0x8fc20004
    ctx->pc = 0x2075b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2075b4: 0x40182d
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075b8: 0x31080
    ctx->pc = 0x2075b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2075bc: 0x8fc30000
    ctx->pc = 0x2075bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2075c0: 0x60202d
    ctx->pc = 0x2075c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075c4: 0x41900
    ctx->pc = 0x2075c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2075c8: 0x431021
    ctx->pc = 0x2075c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2075cc: 0x3c030031
    ctx->pc = 0x2075ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2075d0: 0x24632280
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x2075d4: 0x621021
    ctx->pc = 0x2075d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2075d8: 0x24030001
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2075dc: 0xac430000
    ctx->pc = 0x2075dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2075e0: 0x8fc20004
    ctx->pc = 0x2075e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2075e4: 0x40182d
    ctx->pc = 0x2075e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e8: 0x31080
    ctx->pc = 0x2075e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2075ec: 0x8fc30000
    ctx->pc = 0x2075ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2075f0: 0x60202d
    ctx->pc = 0x2075f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075f4: 0x41900
    ctx->pc = 0x2075f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2075f8: 0x431021
    ctx->pc = 0x2075f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2075fc: 0x3c030031
    ctx->pc = 0x2075fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207600: 0x246322a0
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x207604: 0x621021
    ctx->pc = 0x207604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207608: 0x24030001
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20760c: 0xac430000
    ctx->pc = 0x20760cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207610: 0x10000017
    ctx->pc = 0x207610u;
    {
        const bool branch_taken_0x207610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207610) {
            ctx->pc = 0x207670u;
            goto label_207670;
        }
    }
    ctx->pc = 0x207618u;
label_207618:
    // 0x207618: 0x8fc20004
    ctx->pc = 0x207618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20761c: 0x40182d
    ctx->pc = 0x20761cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207620: 0x31080
    ctx->pc = 0x207620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x207624: 0x8fc30000
    ctx->pc = 0x207624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207628: 0x60202d
    ctx->pc = 0x207628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20762c: 0x41900
    ctx->pc = 0x20762cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207630: 0x431021
    ctx->pc = 0x207630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207634: 0x3c030031
    ctx->pc = 0x207634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207638: 0x24632280
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x20763c: 0x621021
    ctx->pc = 0x20763cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207640: 0xac400000
    ctx->pc = 0x207640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x207644: 0x8fc20004
    ctx->pc = 0x207644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207648: 0x40182d
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20764c: 0x31080
    ctx->pc = 0x20764cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x207650: 0x8fc30000
    ctx->pc = 0x207650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207654: 0x60202d
    ctx->pc = 0x207654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207658: 0x41900
    ctx->pc = 0x207658u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20765c: 0x431021
    ctx->pc = 0x20765cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207660: 0x3c030031
    ctx->pc = 0x207660u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207664: 0x246322a0
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x207668: 0x621021
    ctx->pc = 0x207668u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20766c: 0xac400000
    ctx->pc = 0x20766cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_207670:
    // 0x207670: 0x8fc20004
    ctx->pc = 0x207670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207674: 0x40182d
    ctx->pc = 0x207674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207678: 0x31080
    ctx->pc = 0x207678u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20767c: 0x8fc30000
    ctx->pc = 0x20767cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207680: 0x60202d
    ctx->pc = 0x207680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207684: 0x41900
    ctx->pc = 0x207684u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x207688: 0x431021
    ctx->pc = 0x207688u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20768c: 0x3c030031
    ctx->pc = 0x20768cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x207690: 0x246322c0
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
    // 0x207694: 0x621021
    ctx->pc = 0x207694u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207698: 0x2403ffff
    ctx->pc = 0x207698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20769c: 0xac430000
    ctx->pc = 0x20769cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2076a0: 0x3c0e82d
    ctx->pc = 0x2076a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2076a4: 0xdfbe0020
    ctx->pc = 0x2076a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2076a8: 0x27bd0030
    ctx->pc = 0x2076a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2076ac: 0x3e00008
    ctx->pc = 0x2076ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207520u: goto label_207520;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x2075A0u: goto label_2075a0;
            case 0x207618u: goto label_207618;
            case 0x207670u: goto label_207670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2076B4u;
}
