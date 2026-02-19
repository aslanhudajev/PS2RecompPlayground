#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mput_flush
// Address: 0x2235c8 - 0x2237f4
void mput_flush_0x2235c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2235c8u;

label_2235c8:
    // 0x2235c8: 0x27bdff60
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_2235cc:
    // 0x2235cc: 0xffbf0090
    ctx->pc = 0x2235ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2235d0:
    // 0x2235d0: 0xffb70080
    ctx->pc = 0x2235d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2235d4:
    // 0x2235d4: 0xffb60070
    ctx->pc = 0x2235d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2235d8:
    // 0x2235d8: 0xffb50060
    ctx->pc = 0x2235d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2235dc:
    // 0x2235dc: 0xffb40050
    ctx->pc = 0x2235dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2235e0:
    // 0x2235e0: 0xffb30040
    ctx->pc = 0x2235e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2235e4:
    // 0x2235e4: 0xffb20030
    ctx->pc = 0x2235e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2235e8:
    // 0x2235e8: 0xffb10020
    ctx->pc = 0x2235e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2235ec:
    // 0x2235ec: 0xffb00010
    ctx->pc = 0x2235ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2235f0:
    // 0x2235f0: 0xb82d
    ctx->pc = 0x2235f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2235f4:
    // 0x2235f4: 0x3c02003c
    ctx->pc = 0x2235f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2235f8:
    // 0x2235f8: 0x24521400
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 5120));
label_2235fc:
    // 0x2235fc: 0x3c020032
    ctx->pc = 0x2235fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_223600:
    // 0x223600: 0x8c4206fc
    ctx->pc = 0x223600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1788)));
label_223604:
    // 0x223604: 0x10400006
label_223608:
    if (ctx->pc == 0x223608u) {
        ctx->pc = 0x223608u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22360Cu;
        goto label_22360c;
    }
    ctx->pc = 0x223604u;
    {
        const bool branch_taken_0x223604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x223608u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223604) {
            ctx->pc = 0x223620u;
            goto label_223620;
        }
    }
    ctx->pc = 0x22360Cu;
label_22360c:
    // 0x22360c: 0x3c04003a
    ctx->pc = 0x22360cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_223610:
    // 0x223610: 0xc0b4a34
label_223614:
    if (ctx->pc == 0x223614u) {
        ctx->pc = 0x223614u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27088));
        ctx->pc = 0x223618u;
        goto label_223618;
    }
    ctx->pc = 0x223610u;
    SET_GPR_U32(ctx, 31, 0x223618u);
    ctx->pc = 0x223614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27088));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223618u; }
    }
    if (ctx->pc != 0x223618u) { return; }
    ctx->pc = 0x223618u;
label_223618:
    // 0x223618: 0x1000006b
label_22361c:
    if (ctx->pc == 0x22361Cu) {
        ctx->pc = 0x22361Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x223620u;
        goto label_223620;
    }
    ctx->pc = 0x223618u;
    {
        const bool branch_taken_0x223618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22361Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x223618) {
            ctx->pc = 0x2237C8u;
            goto label_2237c8;
        }
    }
    ctx->pc = 0x223620u;
label_223620:
    // 0x223620: 0x3c100032
    ctx->pc = 0x223620u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_223624:
    // 0x223624: 0x24020001
    ctx->pc = 0x223624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_223628:
    // 0x223628: 0xae0206fc
    ctx->pc = 0x223628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 2));
label_22362c:
    // 0x22362c: 0x24040001
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_223630:
    // 0x223630: 0xc088cbc
label_223634:
    if (ctx->pc == 0x223634u) {
        ctx->pc = 0x223634u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223638u;
        goto label_223638;
    }
    ctx->pc = 0x223630u;
    SET_GPR_U32(ctx, 31, 0x223638u);
    ctx->pc = 0x223634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitIOP_0x2232f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223638u; }
    }
    if (ctx->pc != 0x223638u) { return; }
    ctx->pc = 0x223638u;
label_223638:
    // 0x223638: 0x10400003
label_22363c:
    if (ctx->pc == 0x22363Cu) {
        ctx->pc = 0x22363Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x223640u;
        goto label_223640;
    }
    ctx->pc = 0x223638u;
    {
        const bool branch_taken_0x223638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22363Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x223638) {
            ctx->pc = 0x223648u;
            goto label_223648;
        }
    }
    ctx->pc = 0x223640u;
label_223640:
    // 0x223640: 0x10000061
label_223644:
    if (ctx->pc == 0x223644u) {
        ctx->pc = 0x223644u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 0));
        ctx->pc = 0x223648u;
        goto label_223648;
    }
    ctx->pc = 0x223640u;
    {
        const bool branch_taken_0x223640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223644u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 0));
        if (branch_taken_0x223640) {
            ctx->pc = 0x2237C8u;
            goto label_2237c8;
        }
    }
    ctx->pc = 0x223648u;
label_223648:
    // 0x223648: 0x8e500000
    ctx->pc = 0x223648u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22364c:
    // 0x22364c: 0x26520004
    ctx->pc = 0x22364cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_223650:
    // 0x223650: 0x200102d
    ctx->pc = 0x223650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223654:
    // 0x223654: 0x18400024
label_223658:
    if (ctx->pc == 0x223658u) {
        ctx->pc = 0x223658u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x22365Cu;
        goto label_22365c;
    }
    ctx->pc = 0x223654u;
    {
        const bool branch_taken_0x223654 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x223658u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x223654) {
            ctx->pc = 0x2236E8u;
            goto label_2236e8;
        }
    }
    ctx->pc = 0x22365Cu;
label_22365c:
    // 0x22365c: 0x3c160032
    ctx->pc = 0x22365cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
label_223660:
    // 0x223660: 0x3c15003a
    ctx->pc = 0x223660u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
label_223664:
    // 0x223664: 0x3c02003c
    ctx->pc = 0x223664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_223668:
    // 0x223668: 0x24530f78
    ctx->pc = 0x223668u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 3960));
label_22366c:
    // 0x22366c: 0x3c14003a
    ctx->pc = 0x22366cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
label_223670:
    // 0x223670: 0x8ec206f4
    ctx->pc = 0x223670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 1780)));
label_223674:
    // 0x223674: 0x222102a
    ctx->pc = 0x223674u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_223678:
    // 0x223678: 0x14400005
label_22367c:
    if (ctx->pc == 0x22367Cu) {
        ctx->pc = 0x22367Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x223680u;
        goto label_223680;
    }
    ctx->pc = 0x223678u;
    {
        const bool branch_taken_0x223678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22367Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x223678) {
            ctx->pc = 0x223690u;
            goto label_223690;
        }
    }
    ctx->pc = 0x223680u;
label_223680:
    // 0x223680: 0xc0b492e
label_223684:
    if (ctx->pc == 0x223684u) {
        ctx->pc = 0x223684u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 27120));
        ctx->pc = 0x223688u;
        goto label_223688;
    }
    ctx->pc = 0x223680u;
    SET_GPR_U32(ctx, 31, 0x223688u);
    ctx->pc = 0x223684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 27120));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223688u; }
    }
    if (ctx->pc != 0x223688u) { return; }
    ctx->pc = 0x223688u;
label_223688:
    // 0x223688: 0x10000013
label_22368c:
    if (ctx->pc == 0x22368Cu) {
        ctx->pc = 0x22368Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x223690u;
        goto label_223690;
    }
    ctx->pc = 0x223688u;
    {
        const bool branch_taken_0x223688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22368Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x223688) {
            ctx->pc = 0x2236D8u;
            goto label_2236d8;
        }
    }
    ctx->pc = 0x223690u;
label_223690:
    // 0x223690: 0x531021
    ctx->pc = 0x223690u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_223694:
    // 0x223694: 0x8c440000
    ctx->pc = 0x223694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_223698:
    // 0x223698: 0x14800006
label_22369c:
    if (ctx->pc == 0x22369Cu) {
        ctx->pc = 0x22369Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2236A0u;
        goto label_2236a0;
    }
    ctx->pc = 0x223698u;
    {
        const bool branch_taken_0x223698 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x22369Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x223698) {
            ctx->pc = 0x2236B4u;
            goto label_2236b4;
        }
    }
    ctx->pc = 0x2236A0u;
label_2236a0:
    // 0x2236a0: 0x26846a18
    ctx->pc = 0x2236a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 27160));
label_2236a4:
    // 0x2236a4: 0xc0b492e
label_2236a8:
    if (ctx->pc == 0x2236A8u) {
        ctx->pc = 0x2236A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2236ACu;
        goto label_2236ac;
    }
    ctx->pc = 0x2236A4u;
    SET_GPR_U32(ctx, 31, 0x2236ACu);
    ctx->pc = 0x2236A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236ACu; }
    }
    if (ctx->pc != 0x2236ACu) { return; }
    ctx->pc = 0x2236ACu;
label_2236ac:
    // 0x2236ac: 0x1000000a
label_2236b0:
    if (ctx->pc == 0x2236B0u) {
        ctx->pc = 0x2236B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x2236B4u;
        goto label_2236b4;
    }
    ctx->pc = 0x2236ACu;
    {
        const bool branch_taken_0x2236ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2236B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x2236ac) {
            ctx->pc = 0x2236D8u;
            goto label_2236d8;
        }
    }
    ctx->pc = 0x2236B4u;
label_2236b4:
    // 0x2236b4: 0x531021
    ctx->pc = 0x2236b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2236b8:
    // 0x2236b8: 0xac400000
    ctx->pc = 0x2236b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2236bc:
    // 0x2236bc: 0x8e420004
    ctx->pc = 0x2236bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2236c0:
    // 0x2236c0: 0xac820008
    ctx->pc = 0x2236c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2236c4:
    // 0x2236c4: 0x8e420008
    ctx->pc = 0x2236c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2236c8:
    // 0x2236c8: 0xac82000c
    ctx->pc = 0x2236c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2236cc:
    // 0x2236cc: 0x8c820010
    ctx->pc = 0x2236ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2236d0:
    // 0x2236d0: 0x40f809
label_2236d4:
    if (ctx->pc == 0x2236D4u) {
        ctx->pc = 0x2236D4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x2236D8u;
        goto label_2236d8;
    }
    ctx->pc = 0x2236D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2236D8u);
        ctx->pc = 0x2236D4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2235C8u: goto label_2235c8;
            case 0x2235CCu: goto label_2235cc;
            case 0x2235D0u: goto label_2235d0;
            case 0x2235D4u: goto label_2235d4;
            case 0x2235D8u: goto label_2235d8;
            case 0x2235DCu: goto label_2235dc;
            case 0x2235E0u: goto label_2235e0;
            case 0x2235E4u: goto label_2235e4;
            case 0x2235E8u: goto label_2235e8;
            case 0x2235ECu: goto label_2235ec;
            case 0x2235F0u: goto label_2235f0;
            case 0x2235F4u: goto label_2235f4;
            case 0x2235F8u: goto label_2235f8;
            case 0x2235FCu: goto label_2235fc;
            case 0x223600u: goto label_223600;
            case 0x223604u: goto label_223604;
            case 0x223608u: goto label_223608;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223614u: goto label_223614;
            case 0x223618u: goto label_223618;
            case 0x22361Cu: goto label_22361c;
            case 0x223620u: goto label_223620;
            case 0x223624u: goto label_223624;
            case 0x223628u: goto label_223628;
            case 0x22362Cu: goto label_22362c;
            case 0x223630u: goto label_223630;
            case 0x223634u: goto label_223634;
            case 0x223638u: goto label_223638;
            case 0x22363Cu: goto label_22363c;
            case 0x223640u: goto label_223640;
            case 0x223644u: goto label_223644;
            case 0x223648u: goto label_223648;
            case 0x22364Cu: goto label_22364c;
            case 0x223650u: goto label_223650;
            case 0x223654u: goto label_223654;
            case 0x223658u: goto label_223658;
            case 0x22365Cu: goto label_22365c;
            case 0x223660u: goto label_223660;
            case 0x223664u: goto label_223664;
            case 0x223668u: goto label_223668;
            case 0x22366Cu: goto label_22366c;
            case 0x223670u: goto label_223670;
            case 0x223674u: goto label_223674;
            case 0x223678u: goto label_223678;
            case 0x22367Cu: goto label_22367c;
            case 0x223680u: goto label_223680;
            case 0x223684u: goto label_223684;
            case 0x223688u: goto label_223688;
            case 0x22368Cu: goto label_22368c;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x223698u: goto label_223698;
            case 0x22369Cu: goto label_22369c;
            case 0x2236A0u: goto label_2236a0;
            case 0x2236A4u: goto label_2236a4;
            case 0x2236A8u: goto label_2236a8;
            case 0x2236ACu: goto label_2236ac;
            case 0x2236B0u: goto label_2236b0;
            case 0x2236B4u: goto label_2236b4;
            case 0x2236B8u: goto label_2236b8;
            case 0x2236BCu: goto label_2236bc;
            case 0x2236C0u: goto label_2236c0;
            case 0x2236C4u: goto label_2236c4;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236D0u: goto label_2236d0;
            case 0x2236D4u: goto label_2236d4;
            case 0x2236D8u: goto label_2236d8;
            case 0x2236DCu: goto label_2236dc;
            case 0x2236E0u: goto label_2236e0;
            case 0x2236E4u: goto label_2236e4;
            case 0x2236E8u: goto label_2236e8;
            case 0x2236ECu: goto label_2236ec;
            case 0x2236F0u: goto label_2236f0;
            case 0x2236F4u: goto label_2236f4;
            case 0x2236F8u: goto label_2236f8;
            case 0x2236FCu: goto label_2236fc;
            case 0x223700u: goto label_223700;
            case 0x223704u: goto label_223704;
            case 0x223708u: goto label_223708;
            case 0x22370Cu: goto label_22370c;
            case 0x223710u: goto label_223710;
            case 0x223714u: goto label_223714;
            case 0x223718u: goto label_223718;
            case 0x22371Cu: goto label_22371c;
            case 0x223720u: goto label_223720;
            case 0x223724u: goto label_223724;
            case 0x223728u: goto label_223728;
            case 0x22372Cu: goto label_22372c;
            case 0x223730u: goto label_223730;
            case 0x223734u: goto label_223734;
            case 0x223738u: goto label_223738;
            case 0x22373Cu: goto label_22373c;
            case 0x223740u: goto label_223740;
            case 0x223744u: goto label_223744;
            case 0x223748u: goto label_223748;
            case 0x22374Cu: goto label_22374c;
            case 0x223750u: goto label_223750;
            case 0x223754u: goto label_223754;
            case 0x223758u: goto label_223758;
            case 0x22375Cu: goto label_22375c;
            case 0x223760u: goto label_223760;
            case 0x223764u: goto label_223764;
            case 0x223768u: goto label_223768;
            case 0x22376Cu: goto label_22376c;
            case 0x223770u: goto label_223770;
            case 0x223774u: goto label_223774;
            case 0x223778u: goto label_223778;
            case 0x22377Cu: goto label_22377c;
            case 0x223780u: goto label_223780;
            case 0x223784u: goto label_223784;
            case 0x223788u: goto label_223788;
            case 0x22378Cu: goto label_22378c;
            case 0x223790u: goto label_223790;
            case 0x223794u: goto label_223794;
            case 0x223798u: goto label_223798;
            case 0x22379Cu: goto label_22379c;
            case 0x2237A0u: goto label_2237a0;
            case 0x2237A4u: goto label_2237a4;
            case 0x2237A8u: goto label_2237a8;
            case 0x2237ACu: goto label_2237ac;
            case 0x2237B0u: goto label_2237b0;
            case 0x2237B4u: goto label_2237b4;
            case 0x2237B8u: goto label_2237b8;
            case 0x2237BCu: goto label_2237bc;
            case 0x2237C0u: goto label_2237c0;
            case 0x2237C4u: goto label_2237c4;
            case 0x2237C8u: goto label_2237c8;
            case 0x2237CCu: goto label_2237cc;
            case 0x2237D0u: goto label_2237d0;
            case 0x2237D4u: goto label_2237d4;
            case 0x2237D8u: goto label_2237d8;
            case 0x2237DCu: goto label_2237dc;
            case 0x2237E0u: goto label_2237e0;
            case 0x2237E4u: goto label_2237e4;
            case 0x2237E8u: goto label_2237e8;
            case 0x2237ECu: goto label_2237ec;
            case 0x2237F0u: goto label_2237f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2236D8u; }
            if (ctx->pc != 0x2236D8u) { return; }
        }
    }
    ctx->pc = 0x2236D8u;
label_2236d8:
    // 0x2236d8: 0x26310001
    ctx->pc = 0x2236d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2236dc:
    // 0x2236dc: 0x200102d
    ctx->pc = 0x2236dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2236e0:
    // 0x2236e0: 0x1c40ffe3
label_2236e4:
    if (ctx->pc == 0x2236E4u) {
        ctx->pc = 0x2236E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x2236E8u;
        goto label_2236e8;
    }
    ctx->pc = 0x2236E0u;
    {
        const bool branch_taken_0x2236e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2236E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x2236e0) {
            ctx->pc = 0x223670u;
            goto label_223670;
        }
    }
    ctx->pc = 0x2236E8u;
label_2236e8:
    // 0x2236e8: 0x12200012
label_2236ec:
    if (ctx->pc == 0x2236ECu) {
        ctx->pc = 0x2236ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2236F0u;
        goto label_2236f0;
    }
    ctx->pc = 0x2236E8u;
    {
        const bool branch_taken_0x2236e8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2236ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2236e8) {
            ctx->pc = 0x223734u;
            goto label_223734;
        }
    }
    ctx->pc = 0x2236F0u;
label_2236f0:
    // 0x2236f0: 0xac401400
    ctx->pc = 0x2236f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5120), GPR_U32(ctx, 0));
label_2236f4:
    // 0x2236f4: 0x3c020032
    ctx->pc = 0x2236f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2236f8:
    // 0x2236f8: 0x8c4606f4
    ctx->pc = 0x2236f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 1780)));
label_2236fc:
    // 0x2236fc: 0x226102a
    ctx->pc = 0x2236fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 6)));
label_223700:
    // 0x223700: 0x10400008
label_223704:
    if (ctx->pc == 0x223704u) {
        ctx->pc = 0x223704u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x223708u;
        goto label_223708;
    }
    ctx->pc = 0x223700u;
    {
        const bool branch_taken_0x223700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x223704u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x223700) {
            ctx->pc = 0x223724u;
            goto label_223724;
        }
    }
    ctx->pc = 0x223708u;
label_223708:
    // 0x223708: 0x3c02003c
    ctx->pc = 0x223708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22370c:
    // 0x22370c: 0x24420f78
    ctx->pc = 0x22370cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3960));
label_223710:
    // 0x223710: 0xd13023
    ctx->pc = 0x223710u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_223714:
    // 0x223714: 0x40202d
    ctx->pc = 0x223714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223718:
    // 0x223718: 0xa22821
    ctx->pc = 0x223718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22371c:
    // 0x22371c: 0xc0bec85
label_223720:
    if (ctx->pc == 0x223720u) {
        ctx->pc = 0x223720u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x223724u;
        goto label_223724;
    }
    ctx->pc = 0x22371Cu;
    SET_GPR_U32(ctx, 31, 0x223724u);
    ctx->pc = 0x223720u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x2FB214u;
    {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x2fb214(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223724u; }
    }
    if (ctx->pc != 0x223724u) { return; }
    ctx->pc = 0x223724u;
label_223724:
    // 0x223724: 0x3c030032
    ctx->pc = 0x223724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_223728:
    // 0x223728: 0x8c6206f4
    ctx->pc = 0x223728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1780)));
label_22372c:
    // 0x22372c: 0x511023
    ctx->pc = 0x22372cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_223730:
    // 0x223730: 0xac6206f4
    ctx->pc = 0x223730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1780), GPR_U32(ctx, 2));
label_223734:
    // 0x223734: 0x3c110032
    ctx->pc = 0x223734u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
label_223738:
    // 0x223738: 0x8e2206f8
    ctx->pc = 0x223738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1784)));
label_22373c:
    // 0x22373c: 0x10400017
label_223740:
    if (ctx->pc == 0x223740u) {
        ctx->pc = 0x223740u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x223744u;
        goto label_223744;
    }
    ctx->pc = 0x22373Cu;
    {
        const bool branch_taken_0x22373c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x223740u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x22373c) {
            ctx->pc = 0x22379Cu;
            goto label_22379c;
        }
    }
    ctx->pc = 0x223744u;
label_223744:
    // 0x223744: 0x26101000
    ctx->pc = 0x223744u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4096));
label_223748:
    // 0x223748: 0x21080
    ctx->pc = 0x223748u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_22374c:
    // 0x22374c: 0x501021
    ctx->pc = 0x22374cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_223750:
    // 0x223750: 0xac400000
    ctx->pc = 0x223750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_223754:
    // 0x223754: 0xc0c0e18
label_223758:
    if (ctx->pc == 0x223758u) {
        ctx->pc = 0x223758u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22375Cu;
        goto label_22375c;
    }
    ctx->pc = 0x223754u;
    SET_GPR_U32(ctx, 31, 0x22375Cu);
    ctx->pc = 0x223758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22375Cu; }
    }
    if (ctx->pc != 0x22375Cu) { return; }
    ctx->pc = 0x22375Cu;
label_22375c:
    // 0x22375c: 0xafa00000
    ctx->pc = 0x22375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_223760:
    // 0x223760: 0x3c04003c
    ctx->pc = 0x223760u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_223764:
    // 0x223764: 0x24840f40
    ctx->pc = 0x223764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3904));
label_223768:
    // 0x223768: 0x24050011
    ctx->pc = 0x223768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
label_22376c:
    // 0x22376c: 0x24060001
    ctx->pc = 0x22376cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_223770:
    // 0x223770: 0x200382d
    ctx->pc = 0x223770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223774:
    // 0x223774: 0x24080400
    ctx->pc = 0x223774u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1024));
label_223778:
    // 0x223778: 0x3c09003c
    ctx->pc = 0x223778u;
    SET_GPR_U32(ctx, 9, ((uint32_t)60 << 16));
label_22377c:
    // 0x22377c: 0x25291400
    ctx->pc = 0x22377cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5120));
label_223780:
    // 0x223780: 0x240a0400
    ctx->pc = 0x223780u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1024));
label_223784:
    // 0x223784: 0xc0c18aa
label_223788:
    if (ctx->pc == 0x223788u) {
        ctx->pc = 0x223788u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22378Cu;
        goto label_22378c;
    }
    ctx->pc = 0x223784u;
    SET_GPR_U32(ctx, 31, 0x22378Cu);
    ctx->pc = 0x223788u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3062A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x3062a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22378Cu; }
    }
    if (ctx->pc != 0x22378Cu) { return; }
    ctx->pc = 0x22378Cu;
label_22378c:
    // 0x22378c: 0x14400004
label_223790:
    if (ctx->pc == 0x223790u) {
        ctx->pc = 0x223790u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x223794u;
        goto label_223794;
    }
    ctx->pc = 0x22378Cu;
    {
        const bool branch_taken_0x22378c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223790u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x22378c) {
            ctx->pc = 0x2237A0u;
            goto label_2237a0;
        }
    }
    ctx->pc = 0x223794u;
label_223794:
    // 0x223794: 0xae2006f8
    ctx->pc = 0x223794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_223798:
    // 0x223798: 0x24170001
    ctx->pc = 0x223798u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_22379c:
    // 0x22379c: 0x3c030032
    ctx->pc = 0x22379cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2237a0:
    // 0x2237a0: 0x8c6206fc
    ctx->pc = 0x2237a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1788)));
label_2237a4:
    // 0x2237a4: 0x28420002
    ctx->pc = 0x2237a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2237a8:
    // 0x2237a8: 0x14400005
label_2237ac:
    if (ctx->pc == 0x2237ACu) {
        ctx->pc = 0x2237ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2237B0u;
        goto label_2237b0;
    }
    ctx->pc = 0x2237A8u;
    {
        const bool branch_taken_0x2237a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2237ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2237a8) {
            ctx->pc = 0x2237C0u;
            goto label_2237c0;
        }
    }
    ctx->pc = 0x2237B0u;
label_2237b0:
    // 0x2237b0: 0xc088d32
label_2237b4:
    if (ctx->pc == 0x2237B4u) {
        ctx->pc = 0x2237B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1788), GPR_U32(ctx, 0));
        ctx->pc = 0x2237B8u;
        goto label_2237b8;
    }
    ctx->pc = 0x2237B0u;
    SET_GPR_U32(ctx, 31, 0x2237B8u);
    ctx->pc = 0x2237B4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1788), GPR_U32(ctx, 0));
    ctx->pc = 0x2234C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_reset_0x2234c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2237B8u; }
    }
    if (ctx->pc != 0x2237B8u) { return; }
    ctx->pc = 0x2237B8u;
label_2237b8:
    // 0x2237b8: 0x10000003
label_2237bc:
    if (ctx->pc == 0x2237BCu) {
        ctx->pc = 0x2237BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2237C0u;
        goto label_2237c0;
    }
    ctx->pc = 0x2237B8u;
    {
        const bool branch_taken_0x2237b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2237BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2237b8) {
            ctx->pc = 0x2237C8u;
            goto label_2237c8;
        }
    }
    ctx->pc = 0x2237C0u;
label_2237c0:
    // 0x2237c0: 0xac4006fc
    ctx->pc = 0x2237c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1788), GPR_U32(ctx, 0));
label_2237c4:
    // 0x2237c4: 0x2e0102d
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2237c8:
    // 0x2237c8: 0xdfbf0090
    ctx->pc = 0x2237c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2237cc:
    // 0x2237cc: 0xdfb70080
    ctx->pc = 0x2237ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2237d0:
    // 0x2237d0: 0xdfb60070
    ctx->pc = 0x2237d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2237d4:
    // 0x2237d4: 0xdfb50060
    ctx->pc = 0x2237d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2237d8:
    // 0x2237d8: 0xdfb40050
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2237dc:
    // 0x2237dc: 0xdfb30040
    ctx->pc = 0x2237dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2237e0:
    // 0x2237e0: 0xdfb20030
    ctx->pc = 0x2237e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2237e4:
    // 0x2237e4: 0xdfb10020
    ctx->pc = 0x2237e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2237e8:
    // 0x2237e8: 0xdfb00010
    ctx->pc = 0x2237e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2237ec:
    // 0x2237ec: 0x3e00008
label_2237f0:
    if (ctx->pc == 0x2237F0u) {
        ctx->pc = 0x2237F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2237F4u;
        goto label_fallthrough_0x2237ec;
    }
    ctx->pc = 0x2237ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2237F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2235C8u: goto label_2235c8;
            case 0x2235CCu: goto label_2235cc;
            case 0x2235D0u: goto label_2235d0;
            case 0x2235D4u: goto label_2235d4;
            case 0x2235D8u: goto label_2235d8;
            case 0x2235DCu: goto label_2235dc;
            case 0x2235E0u: goto label_2235e0;
            case 0x2235E4u: goto label_2235e4;
            case 0x2235E8u: goto label_2235e8;
            case 0x2235ECu: goto label_2235ec;
            case 0x2235F0u: goto label_2235f0;
            case 0x2235F4u: goto label_2235f4;
            case 0x2235F8u: goto label_2235f8;
            case 0x2235FCu: goto label_2235fc;
            case 0x223600u: goto label_223600;
            case 0x223604u: goto label_223604;
            case 0x223608u: goto label_223608;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223614u: goto label_223614;
            case 0x223618u: goto label_223618;
            case 0x22361Cu: goto label_22361c;
            case 0x223620u: goto label_223620;
            case 0x223624u: goto label_223624;
            case 0x223628u: goto label_223628;
            case 0x22362Cu: goto label_22362c;
            case 0x223630u: goto label_223630;
            case 0x223634u: goto label_223634;
            case 0x223638u: goto label_223638;
            case 0x22363Cu: goto label_22363c;
            case 0x223640u: goto label_223640;
            case 0x223644u: goto label_223644;
            case 0x223648u: goto label_223648;
            case 0x22364Cu: goto label_22364c;
            case 0x223650u: goto label_223650;
            case 0x223654u: goto label_223654;
            case 0x223658u: goto label_223658;
            case 0x22365Cu: goto label_22365c;
            case 0x223660u: goto label_223660;
            case 0x223664u: goto label_223664;
            case 0x223668u: goto label_223668;
            case 0x22366Cu: goto label_22366c;
            case 0x223670u: goto label_223670;
            case 0x223674u: goto label_223674;
            case 0x223678u: goto label_223678;
            case 0x22367Cu: goto label_22367c;
            case 0x223680u: goto label_223680;
            case 0x223684u: goto label_223684;
            case 0x223688u: goto label_223688;
            case 0x22368Cu: goto label_22368c;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x223698u: goto label_223698;
            case 0x22369Cu: goto label_22369c;
            case 0x2236A0u: goto label_2236a0;
            case 0x2236A4u: goto label_2236a4;
            case 0x2236A8u: goto label_2236a8;
            case 0x2236ACu: goto label_2236ac;
            case 0x2236B0u: goto label_2236b0;
            case 0x2236B4u: goto label_2236b4;
            case 0x2236B8u: goto label_2236b8;
            case 0x2236BCu: goto label_2236bc;
            case 0x2236C0u: goto label_2236c0;
            case 0x2236C4u: goto label_2236c4;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236D0u: goto label_2236d0;
            case 0x2236D4u: goto label_2236d4;
            case 0x2236D8u: goto label_2236d8;
            case 0x2236DCu: goto label_2236dc;
            case 0x2236E0u: goto label_2236e0;
            case 0x2236E4u: goto label_2236e4;
            case 0x2236E8u: goto label_2236e8;
            case 0x2236ECu: goto label_2236ec;
            case 0x2236F0u: goto label_2236f0;
            case 0x2236F4u: goto label_2236f4;
            case 0x2236F8u: goto label_2236f8;
            case 0x2236FCu: goto label_2236fc;
            case 0x223700u: goto label_223700;
            case 0x223704u: goto label_223704;
            case 0x223708u: goto label_223708;
            case 0x22370Cu: goto label_22370c;
            case 0x223710u: goto label_223710;
            case 0x223714u: goto label_223714;
            case 0x223718u: goto label_223718;
            case 0x22371Cu: goto label_22371c;
            case 0x223720u: goto label_223720;
            case 0x223724u: goto label_223724;
            case 0x223728u: goto label_223728;
            case 0x22372Cu: goto label_22372c;
            case 0x223730u: goto label_223730;
            case 0x223734u: goto label_223734;
            case 0x223738u: goto label_223738;
            case 0x22373Cu: goto label_22373c;
            case 0x223740u: goto label_223740;
            case 0x223744u: goto label_223744;
            case 0x223748u: goto label_223748;
            case 0x22374Cu: goto label_22374c;
            case 0x223750u: goto label_223750;
            case 0x223754u: goto label_223754;
            case 0x223758u: goto label_223758;
            case 0x22375Cu: goto label_22375c;
            case 0x223760u: goto label_223760;
            case 0x223764u: goto label_223764;
            case 0x223768u: goto label_223768;
            case 0x22376Cu: goto label_22376c;
            case 0x223770u: goto label_223770;
            case 0x223774u: goto label_223774;
            case 0x223778u: goto label_223778;
            case 0x22377Cu: goto label_22377c;
            case 0x223780u: goto label_223780;
            case 0x223784u: goto label_223784;
            case 0x223788u: goto label_223788;
            case 0x22378Cu: goto label_22378c;
            case 0x223790u: goto label_223790;
            case 0x223794u: goto label_223794;
            case 0x223798u: goto label_223798;
            case 0x22379Cu: goto label_22379c;
            case 0x2237A0u: goto label_2237a0;
            case 0x2237A4u: goto label_2237a4;
            case 0x2237A8u: goto label_2237a8;
            case 0x2237ACu: goto label_2237ac;
            case 0x2237B0u: goto label_2237b0;
            case 0x2237B4u: goto label_2237b4;
            case 0x2237B8u: goto label_2237b8;
            case 0x2237BCu: goto label_2237bc;
            case 0x2237C0u: goto label_2237c0;
            case 0x2237C4u: goto label_2237c4;
            case 0x2237C8u: goto label_2237c8;
            case 0x2237CCu: goto label_2237cc;
            case 0x2237D0u: goto label_2237d0;
            case 0x2237D4u: goto label_2237d4;
            case 0x2237D8u: goto label_2237d8;
            case 0x2237DCu: goto label_2237dc;
            case 0x2237E0u: goto label_2237e0;
            case 0x2237E4u: goto label_2237e4;
            case 0x2237E8u: goto label_2237e8;
            case 0x2237ECu: goto label_2237ec;
            case 0x2237F0u: goto label_2237f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2237ec:
    ctx->pc = 0x2237F4u;
}
