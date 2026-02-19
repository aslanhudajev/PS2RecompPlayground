#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WeaponCheckItemCollision
// Address: 0x2585e8 - 0x258734
void WeaponCheckItemCollision_0x2585e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2585e8u;

label_2585e8:
    // 0x2585e8: 0x27bdffd0
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2585ec:
    // 0x2585ec: 0xffbf0020
    ctx->pc = 0x2585ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2585f0:
    // 0x2585f0: 0xffb10010
    ctx->pc = 0x2585f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2585f4:
    // 0x2585f4: 0xffb00000
    ctx->pc = 0x2585f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2585f8:
    // 0x2585f8: 0x80802d
    ctx->pc = 0x2585f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2585fc:
    // 0x2585fc: 0x8e020000
    ctx->pc = 0x2585fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_258600:
    // 0x258600: 0x24440004
    ctx->pc = 0x258600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
label_258604:
    // 0x258604: 0x8c420000
    ctx->pc = 0x258604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258608:
    // 0x258608: 0x24430001
    ctx->pc = 0x258608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_25860c:
    // 0x25860c: 0x2c62000c
    ctx->pc = 0x25860cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_258610:
    // 0x258610: 0x10400042
label_258614:
    if (ctx->pc == 0x258614u) {
        ctx->pc = 0x258614u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258618u;
        goto label_258618;
    }
    ctx->pc = 0x258610u;
    {
        const bool branch_taken_0x258610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x258614u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258610) {
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x3c02003b
    ctx->pc = 0x258618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25861c:
    // 0x25861c: 0x24428be0
    ctx->pc = 0x25861cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937568));
label_258620:
    // 0x258620: 0x31880
    ctx->pc = 0x258620u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_258624:
    // 0x258624: 0x621821
    ctx->pc = 0x258624u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_258628:
    // 0x258628: 0x8c620000
    ctx->pc = 0x258628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25862c:
    // 0x25862c: 0x400008
label_258630:
    if (ctx->pc == 0x258630u) {
        ctx->pc = 0x258634u;
        goto label_258634;
    }
    ctx->pc = 0x25862Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2585E8u: goto label_2585e8;
            case 0x2585ECu: goto label_2585ec;
            case 0x2585F0u: goto label_2585f0;
            case 0x2585F4u: goto label_2585f4;
            case 0x2585F8u: goto label_2585f8;
            case 0x2585FCu: goto label_2585fc;
            case 0x258600u: goto label_258600;
            case 0x258604u: goto label_258604;
            case 0x258608u: goto label_258608;
            case 0x25860Cu: goto label_25860c;
            case 0x258610u: goto label_258610;
            case 0x258614u: goto label_258614;
            case 0x258618u: goto label_258618;
            case 0x25861Cu: goto label_25861c;
            case 0x258620u: goto label_258620;
            case 0x258624u: goto label_258624;
            case 0x258628u: goto label_258628;
            case 0x25862Cu: goto label_25862c;
            case 0x258630u: goto label_258630;
            case 0x258634u: goto label_258634;
            case 0x258638u: goto label_258638;
            case 0x25863Cu: goto label_25863c;
            case 0x258640u: goto label_258640;
            case 0x258644u: goto label_258644;
            case 0x258648u: goto label_258648;
            case 0x25864Cu: goto label_25864c;
            case 0x258650u: goto label_258650;
            case 0x258654u: goto label_258654;
            case 0x258658u: goto label_258658;
            case 0x25865Cu: goto label_25865c;
            case 0x258660u: goto label_258660;
            case 0x258664u: goto label_258664;
            case 0x258668u: goto label_258668;
            case 0x25866Cu: goto label_25866c;
            case 0x258670u: goto label_258670;
            case 0x258674u: goto label_258674;
            case 0x258678u: goto label_258678;
            case 0x25867Cu: goto label_25867c;
            case 0x258680u: goto label_258680;
            case 0x258684u: goto label_258684;
            case 0x258688u: goto label_258688;
            case 0x25868Cu: goto label_25868c;
            case 0x258690u: goto label_258690;
            case 0x258694u: goto label_258694;
            case 0x258698u: goto label_258698;
            case 0x25869Cu: goto label_25869c;
            case 0x2586A0u: goto label_2586a0;
            case 0x2586A4u: goto label_2586a4;
            case 0x2586A8u: goto label_2586a8;
            case 0x2586ACu: goto label_2586ac;
            case 0x2586B0u: goto label_2586b0;
            case 0x2586B4u: goto label_2586b4;
            case 0x2586B8u: goto label_2586b8;
            case 0x2586BCu: goto label_2586bc;
            case 0x2586C0u: goto label_2586c0;
            case 0x2586C4u: goto label_2586c4;
            case 0x2586C8u: goto label_2586c8;
            case 0x2586CCu: goto label_2586cc;
            case 0x2586D0u: goto label_2586d0;
            case 0x2586D4u: goto label_2586d4;
            case 0x2586D8u: goto label_2586d8;
            case 0x2586DCu: goto label_2586dc;
            case 0x2586E0u: goto label_2586e0;
            case 0x2586E4u: goto label_2586e4;
            case 0x2586E8u: goto label_2586e8;
            case 0x2586ECu: goto label_2586ec;
            case 0x2586F0u: goto label_2586f0;
            case 0x2586F4u: goto label_2586f4;
            case 0x2586F8u: goto label_2586f8;
            case 0x2586FCu: goto label_2586fc;
            case 0x258700u: goto label_258700;
            case 0x258704u: goto label_258704;
            case 0x258708u: goto label_258708;
            case 0x25870Cu: goto label_25870c;
            case 0x258710u: goto label_258710;
            case 0x258714u: goto label_258714;
            case 0x258718u: goto label_258718;
            case 0x25871Cu: goto label_25871c;
            case 0x258720u: goto label_258720;
            case 0x258724u: goto label_258724;
            case 0x258728u: goto label_258728;
            case 0x25872Cu: goto label_25872c;
            case 0x258730u: goto label_258730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258634u;
label_258634:
    // 0x258634: 0x860200da
    ctx->pc = 0x258634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 218)));
label_258638:
    // 0x258638: 0x5c400038
label_25863c:
    if (ctx->pc == 0x25863Cu) {
        ctx->pc = 0x25863Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258640u;
        goto label_258640;
    }
    ctx->pc = 0x258638u;
    {
        const bool branch_taken_0x258638 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x258638) {
            ctx->pc = 0x25863Cu;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x258640u;
label_258640:
    // 0x258640: 0x8e0200fc
    ctx->pc = 0x258640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_258644:
    // 0x258644: 0x54400035
label_258648:
    if (ctx->pc == 0x258648u) {
        ctx->pc = 0x258648u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25864Cu;
        goto label_25864c;
    }
    ctx->pc = 0x258644u;
    {
        const bool branch_taken_0x258644 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x258644) {
            ctx->pc = 0x258648u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x25864Cu;
label_25864c:
    // 0x25864c: 0x8c820000
    ctx->pc = 0x25864cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258650:
    // 0x258650: 0x24030001
    ctx->pc = 0x258650u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_258654:
    // 0x258654: 0x10000030
label_258658:
    if (ctx->pc == 0x258658u) {
        ctx->pc = 0x258658u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x25865Cu;
        goto label_25865c;
    }
    ctx->pc = 0x258654u;
    {
        const bool branch_taken_0x258654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258658u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x258654) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x25865Cu;
label_25865c:
    // 0x25865c: 0xc096176
label_258660:
    if (ctx->pc == 0x258660u) {
        ctx->pc = 0x258660u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x258664u;
        goto label_258664;
    }
    ctx->pc = 0x25865Cu;
    SET_GPR_U32(ctx, 31, 0x258664u);
    ctx->pc = 0x258660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2585D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlatGenerator_0x2585d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258664u; }
    }
    if (ctx->pc != 0x258664u) { return; }
    ctx->pc = 0x258664u;
label_258664:
    // 0x258664: 0x1000002c
label_258668:
    if (ctx->pc == 0x258668u) {
        ctx->pc = 0x258668u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25866Cu;
        goto label_25866c;
    }
    ctx->pc = 0x258664u;
    {
        const bool branch_taken_0x258664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258668u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258664) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x25866Cu;
label_25866c:
    // 0x25866c: 0x8c820000
    ctx->pc = 0x25866cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258670:
    // 0x258670: 0x2443ffe2
    ctx->pc = 0x258670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967266));
label_258674:
    // 0x258674: 0x2c620018
    ctx->pc = 0x258674u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 24));
label_258678:
    // 0x258678: 0x10400022
label_25867c:
    if (ctx->pc == 0x25867Cu) {
        ctx->pc = 0x25867Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x258680u;
        goto label_258680;
    }
    ctx->pc = 0x258678u;
    {
        const bool branch_taken_0x258678 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25867Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x258678) {
            ctx->pc = 0x258704u;
            goto label_258704;
        }
    }
    ctx->pc = 0x258680u;
label_258680:
    // 0x258680: 0x24428c10
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937616));
label_258684:
    // 0x258684: 0x31880
    ctx->pc = 0x258684u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_258688:
    // 0x258688: 0x621821
    ctx->pc = 0x258688u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25868c:
    // 0x25868c: 0x8c620000
    ctx->pc = 0x25868cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258690:
    // 0x258690: 0x400008
label_258694:
    if (ctx->pc == 0x258694u) {
        ctx->pc = 0x258698u;
        goto label_258698;
    }
    ctx->pc = 0x258690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2585E8u: goto label_2585e8;
            case 0x2585ECu: goto label_2585ec;
            case 0x2585F0u: goto label_2585f0;
            case 0x2585F4u: goto label_2585f4;
            case 0x2585F8u: goto label_2585f8;
            case 0x2585FCu: goto label_2585fc;
            case 0x258600u: goto label_258600;
            case 0x258604u: goto label_258604;
            case 0x258608u: goto label_258608;
            case 0x25860Cu: goto label_25860c;
            case 0x258610u: goto label_258610;
            case 0x258614u: goto label_258614;
            case 0x258618u: goto label_258618;
            case 0x25861Cu: goto label_25861c;
            case 0x258620u: goto label_258620;
            case 0x258624u: goto label_258624;
            case 0x258628u: goto label_258628;
            case 0x25862Cu: goto label_25862c;
            case 0x258630u: goto label_258630;
            case 0x258634u: goto label_258634;
            case 0x258638u: goto label_258638;
            case 0x25863Cu: goto label_25863c;
            case 0x258640u: goto label_258640;
            case 0x258644u: goto label_258644;
            case 0x258648u: goto label_258648;
            case 0x25864Cu: goto label_25864c;
            case 0x258650u: goto label_258650;
            case 0x258654u: goto label_258654;
            case 0x258658u: goto label_258658;
            case 0x25865Cu: goto label_25865c;
            case 0x258660u: goto label_258660;
            case 0x258664u: goto label_258664;
            case 0x258668u: goto label_258668;
            case 0x25866Cu: goto label_25866c;
            case 0x258670u: goto label_258670;
            case 0x258674u: goto label_258674;
            case 0x258678u: goto label_258678;
            case 0x25867Cu: goto label_25867c;
            case 0x258680u: goto label_258680;
            case 0x258684u: goto label_258684;
            case 0x258688u: goto label_258688;
            case 0x25868Cu: goto label_25868c;
            case 0x258690u: goto label_258690;
            case 0x258694u: goto label_258694;
            case 0x258698u: goto label_258698;
            case 0x25869Cu: goto label_25869c;
            case 0x2586A0u: goto label_2586a0;
            case 0x2586A4u: goto label_2586a4;
            case 0x2586A8u: goto label_2586a8;
            case 0x2586ACu: goto label_2586ac;
            case 0x2586B0u: goto label_2586b0;
            case 0x2586B4u: goto label_2586b4;
            case 0x2586B8u: goto label_2586b8;
            case 0x2586BCu: goto label_2586bc;
            case 0x2586C0u: goto label_2586c0;
            case 0x2586C4u: goto label_2586c4;
            case 0x2586C8u: goto label_2586c8;
            case 0x2586CCu: goto label_2586cc;
            case 0x2586D0u: goto label_2586d0;
            case 0x2586D4u: goto label_2586d4;
            case 0x2586D8u: goto label_2586d8;
            case 0x2586DCu: goto label_2586dc;
            case 0x2586E0u: goto label_2586e0;
            case 0x2586E4u: goto label_2586e4;
            case 0x2586E8u: goto label_2586e8;
            case 0x2586ECu: goto label_2586ec;
            case 0x2586F0u: goto label_2586f0;
            case 0x2586F4u: goto label_2586f4;
            case 0x2586F8u: goto label_2586f8;
            case 0x2586FCu: goto label_2586fc;
            case 0x258700u: goto label_258700;
            case 0x258704u: goto label_258704;
            case 0x258708u: goto label_258708;
            case 0x25870Cu: goto label_25870c;
            case 0x258710u: goto label_258710;
            case 0x258714u: goto label_258714;
            case 0x258718u: goto label_258718;
            case 0x25871Cu: goto label_25871c;
            case 0x258720u: goto label_258720;
            case 0x258724u: goto label_258724;
            case 0x258728u: goto label_258728;
            case 0x25872Cu: goto label_25872c;
            case 0x258730u: goto label_258730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258698u;
label_258698:
    // 0x258698: 0x860200f2
    ctx->pc = 0x258698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_25869c:
    // 0x25869c: 0x24030001
    ctx->pc = 0x25869cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2586a0:
    // 0x2586a0: 0x1000001d
label_2586a4:
    if (ctx->pc == 0x2586A4u) {
        ctx->pc = 0x2586A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x2586A8u;
        goto label_2586a8;
    }
    ctx->pc = 0x2586A0u;
    {
        const bool branch_taken_0x2586a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2586A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2586a0) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586A8u;
label_2586a8:
    // 0x2586a8: 0x4a0001c
label_2586ac:
    if (ctx->pc == 0x2586ACu) {
        ctx->pc = 0x2586ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2586B0u;
        goto label_2586b0;
    }
    ctx->pc = 0x2586A8u;
    {
        const bool branch_taken_0x2586a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2586ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2586a8) {
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x2586B0u;
label_2586b0:
    // 0x2586b0: 0x960200d8
    ctx->pc = 0x2586b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_2586b4:
    // 0x2586b4: 0x30420001
    ctx->pc = 0x2586b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2586b8:
    // 0x2586b8: 0x14400019
label_2586bc:
    if (ctx->pc == 0x2586BCu) {
        ctx->pc = 0x2586BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2586C0u;
        goto label_2586c0;
    }
    ctx->pc = 0x2586B8u;
    {
        const bool branch_taken_0x2586b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2586BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2586b8) {
            ctx->pc = 0x258720u;
            goto label_258720;
        }
    }
    ctx->pc = 0x2586C0u;
label_2586c0:
    // 0x2586c0: 0xc097fcc
label_2586c4:
    if (ctx->pc == 0x2586C4u) {
        ctx->pc = 0x2586C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2586C8u;
        goto label_2586c8;
    }
    ctx->pc = 0x2586C0u;
    SET_GPR_U32(ctx, 31, 0x2586C8u);
    ctx->pc = 0x2586C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25FF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioRockFall_0x25ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586C8u; }
    }
    if (ctx->pc != 0x2586C8u) { return; }
    ctx->pc = 0x2586C8u;
label_2586c8:
    // 0x2586c8: 0x960200d8
    ctx->pc = 0x2586c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_2586cc:
    // 0x2586cc: 0x34420001
    ctx->pc = 0x2586ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2586d0:
    // 0x2586d0: 0xa60200d8
    ctx->pc = 0x2586d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
label_2586d4:
    // 0x2586d4: 0x10000011
label_2586d8:
    if (ctx->pc == 0x2586D8u) {
        ctx->pc = 0x2586D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2586DCu;
        goto label_2586dc;
    }
    ctx->pc = 0x2586D4u;
    {
        const bool branch_taken_0x2586d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2586D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2586d4) {
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x2586DCu;
label_2586dc:
    // 0x2586dc: 0x8c830000
    ctx->pc = 0x2586dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2586e0:
    // 0x2586e0: 0x24020005
    ctx->pc = 0x2586e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2586e4:
    // 0x2586e4: 0x1462000e
label_2586e8:
    if (ctx->pc == 0x2586E8u) {
        ctx->pc = 0x2586E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2586ECu;
        goto label_2586ec;
    }
    ctx->pc = 0x2586E4u;
    {
        const bool branch_taken_0x2586e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2586E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2586e4) {
            ctx->pc = 0x258720u;
            goto label_258720;
        }
    }
    ctx->pc = 0x2586ECu;
label_2586ec:
    // 0x2586ec: 0x920200dc
    ctx->pc = 0x2586ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_2586f0:
    // 0x2586f0: 0x2442ffff
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2586f4:
    // 0x2586f4: 0x2c420002
    ctx->pc = 0x2586f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_2586f8:
    // 0x2586f8: 0x10400008
label_2586fc:
    if (ctx->pc == 0x2586FCu) {
        ctx->pc = 0x2586FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x258700u;
        goto label_258700;
    }
    ctx->pc = 0x2586F8u;
    {
        const bool branch_taken_0x2586f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2586FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2586f8) {
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x258700u;
label_258700:
    // 0x258700: 0xa20200de
    ctx->pc = 0x258700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 222), (uint8_t)GPR_U32(ctx, 2));
label_258704:
    // 0x258704: 0x10000005
label_258708:
    if (ctx->pc == 0x258708u) {
        ctx->pc = 0x258708u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25870Cu;
        goto label_25870c;
    }
    ctx->pc = 0x258704u;
    {
        const bool branch_taken_0x258704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x258708u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x258704) {
            ctx->pc = 0x25871Cu;
            goto label_25871c;
        }
    }
    ctx->pc = 0x25870Cu;
label_25870c:
    // 0x25870c: 0x8c820000
    ctx->pc = 0x25870cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_258710:
    // 0x258710: 0x24030001
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_258714:
    // 0x258714: 0x3842001f
    ctx->pc = 0x258714u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 31));
label_258718:
    // 0x258718: 0x62880a
    ctx->pc = 0x258718u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_25871c:
    // 0x25871c: 0x220102d
    ctx->pc = 0x25871cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258720:
    // 0x258720: 0xdfbf0020
    ctx->pc = 0x258720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_258724:
    // 0x258724: 0xdfb10010
    ctx->pc = 0x258724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258728:
    // 0x258728: 0xdfb00000
    ctx->pc = 0x258728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25872c:
    // 0x25872c: 0x3e00008
label_258730:
    if (ctx->pc == 0x258730u) {
        ctx->pc = 0x258730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x258734u;
        goto label_fallthrough_0x25872c;
    }
    ctx->pc = 0x25872Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2585E8u: goto label_2585e8;
            case 0x2585ECu: goto label_2585ec;
            case 0x2585F0u: goto label_2585f0;
            case 0x2585F4u: goto label_2585f4;
            case 0x2585F8u: goto label_2585f8;
            case 0x2585FCu: goto label_2585fc;
            case 0x258600u: goto label_258600;
            case 0x258604u: goto label_258604;
            case 0x258608u: goto label_258608;
            case 0x25860Cu: goto label_25860c;
            case 0x258610u: goto label_258610;
            case 0x258614u: goto label_258614;
            case 0x258618u: goto label_258618;
            case 0x25861Cu: goto label_25861c;
            case 0x258620u: goto label_258620;
            case 0x258624u: goto label_258624;
            case 0x258628u: goto label_258628;
            case 0x25862Cu: goto label_25862c;
            case 0x258630u: goto label_258630;
            case 0x258634u: goto label_258634;
            case 0x258638u: goto label_258638;
            case 0x25863Cu: goto label_25863c;
            case 0x258640u: goto label_258640;
            case 0x258644u: goto label_258644;
            case 0x258648u: goto label_258648;
            case 0x25864Cu: goto label_25864c;
            case 0x258650u: goto label_258650;
            case 0x258654u: goto label_258654;
            case 0x258658u: goto label_258658;
            case 0x25865Cu: goto label_25865c;
            case 0x258660u: goto label_258660;
            case 0x258664u: goto label_258664;
            case 0x258668u: goto label_258668;
            case 0x25866Cu: goto label_25866c;
            case 0x258670u: goto label_258670;
            case 0x258674u: goto label_258674;
            case 0x258678u: goto label_258678;
            case 0x25867Cu: goto label_25867c;
            case 0x258680u: goto label_258680;
            case 0x258684u: goto label_258684;
            case 0x258688u: goto label_258688;
            case 0x25868Cu: goto label_25868c;
            case 0x258690u: goto label_258690;
            case 0x258694u: goto label_258694;
            case 0x258698u: goto label_258698;
            case 0x25869Cu: goto label_25869c;
            case 0x2586A0u: goto label_2586a0;
            case 0x2586A4u: goto label_2586a4;
            case 0x2586A8u: goto label_2586a8;
            case 0x2586ACu: goto label_2586ac;
            case 0x2586B0u: goto label_2586b0;
            case 0x2586B4u: goto label_2586b4;
            case 0x2586B8u: goto label_2586b8;
            case 0x2586BCu: goto label_2586bc;
            case 0x2586C0u: goto label_2586c0;
            case 0x2586C4u: goto label_2586c4;
            case 0x2586C8u: goto label_2586c8;
            case 0x2586CCu: goto label_2586cc;
            case 0x2586D0u: goto label_2586d0;
            case 0x2586D4u: goto label_2586d4;
            case 0x2586D8u: goto label_2586d8;
            case 0x2586DCu: goto label_2586dc;
            case 0x2586E0u: goto label_2586e0;
            case 0x2586E4u: goto label_2586e4;
            case 0x2586E8u: goto label_2586e8;
            case 0x2586ECu: goto label_2586ec;
            case 0x2586F0u: goto label_2586f0;
            case 0x2586F4u: goto label_2586f4;
            case 0x2586F8u: goto label_2586f8;
            case 0x2586FCu: goto label_2586fc;
            case 0x258700u: goto label_258700;
            case 0x258704u: goto label_258704;
            case 0x258708u: goto label_258708;
            case 0x25870Cu: goto label_25870c;
            case 0x258710u: goto label_258710;
            case 0x258714u: goto label_258714;
            case 0x258718u: goto label_258718;
            case 0x25871Cu: goto label_25871c;
            case 0x258720u: goto label_258720;
            case 0x258724u: goto label_258724;
            case 0x258728u: goto label_258728;
            case 0x25872Cu: goto label_25872c;
            case 0x258730u: goto label_258730;
            default: break;
        }
        return;
    }
label_fallthrough_0x25872c:
    ctx->pc = 0x258734u;
}
