#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAdx
// Address: 0x168590 - 0x16865c
void ADXB_ExecOneAdx_0x168590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAdx");


    ctx->pc = 0x168590u;

label_168590:
    // 0x168590: 0x27bdffd0
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_168594:
    // 0x168594: 0x24020001
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168598:
    // 0x168598: 0xffb00000
    ctx->pc = 0x168598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16859c:
    // 0x16859c: 0xffbf0020
    ctx->pc = 0x16859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1685a0:
    // 0x1685a0: 0x80802d
    ctx->pc = 0x1685a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1685a4:
    // 0x1685a4: 0xffb10010
    ctx->pc = 0x1685a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1685a8:
    // 0x1685a8: 0x8e030004
    ctx->pc = 0x1685a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1685ac:
    // 0x1685ac: 0x14620012
label_1685b0:
    if (ctx->pc == 0x1685B0u) {
        ctx->pc = 0x1685B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1685B4u;
        goto label_1685b4;
    }
    ctx->pc = 0x1685ACu;
    {
        const bool branch_taken_0x1685ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1685B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1685ac) {
            ctx->pc = 0x1685F8u;
            goto label_1685f8;
        }
    }
    ctx->pc = 0x1685B4u;
label_1685b4:
    // 0x1685b4: 0xc05cfec
label_1685b8:
    if (ctx->pc == 0x1685B8u) {
        ctx->pc = 0x1685B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1685BCu;
        goto label_1685bc;
    }
    ctx->pc = 0x1685B4u;
    SET_GPR_U32(ctx, 31, 0x1685BCu);
    ctx->pc = 0x1685B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685BCu; }
        else if (ctx->pc != 0x1685BCu) { ctx->pc = 0x1685BCu; }
    }
    if (ctx->pc != 0x1685BCu) { return; }
    ctx->pc = 0x1685BCu;
label_1685bc:
    // 0x1685bc: 0x5440000d
label_1685c0:
    if (ctx->pc == 0x1685C0u) {
        ctx->pc = 0x1685C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1685C4u;
        goto label_1685c4;
    }
    ctx->pc = 0x1685BCu;
    {
        const bool branch_taken_0x1685bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1685bc) {
            ctx->pc = 0x1685C0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1685F4u;
            goto label_1685f4;
        }
    }
    ctx->pc = 0x1685C4u;
label_1685c4:
    // 0x1685c4: 0x8e020088
    ctx->pc = 0x1685c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1685c8:
    // 0x1685c8: 0x26050070
    ctx->pc = 0x1685c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_1685cc:
    // 0x1685cc: 0x8e04008c
    ctx->pc = 0x1685ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1685d0:
    // 0x1685d0: 0x26060074
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_1685d4:
    // 0x1685d4: 0x40f809
label_1685d8:
    if (ctx->pc == 0x1685D8u) {
        ctx->pc = 0x1685D8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1685DCu;
        goto label_1685dc;
    }
    ctx->pc = 0x1685D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1685DCu);
        ctx->pc = 0x1685D8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168590u: goto label_168590;
            case 0x168594u: goto label_168594;
            case 0x168598u: goto label_168598;
            case 0x16859Cu: goto label_16859c;
            case 0x1685A0u: goto label_1685a0;
            case 0x1685A4u: goto label_1685a4;
            case 0x1685A8u: goto label_1685a8;
            case 0x1685ACu: goto label_1685ac;
            case 0x1685B0u: goto label_1685b0;
            case 0x1685B4u: goto label_1685b4;
            case 0x1685B8u: goto label_1685b8;
            case 0x1685BCu: goto label_1685bc;
            case 0x1685C0u: goto label_1685c0;
            case 0x1685C4u: goto label_1685c4;
            case 0x1685C8u: goto label_1685c8;
            case 0x1685CCu: goto label_1685cc;
            case 0x1685D0u: goto label_1685d0;
            case 0x1685D4u: goto label_1685d4;
            case 0x1685D8u: goto label_1685d8;
            case 0x1685DCu: goto label_1685dc;
            case 0x1685E0u: goto label_1685e0;
            case 0x1685E4u: goto label_1685e4;
            case 0x1685E8u: goto label_1685e8;
            case 0x1685ECu: goto label_1685ec;
            case 0x1685F0u: goto label_1685f0;
            case 0x1685F4u: goto label_1685f4;
            case 0x1685F8u: goto label_1685f8;
            case 0x1685FCu: goto label_1685fc;
            case 0x168600u: goto label_168600;
            case 0x168604u: goto label_168604;
            case 0x168608u: goto label_168608;
            case 0x16860Cu: goto label_16860c;
            case 0x168610u: goto label_168610;
            case 0x168614u: goto label_168614;
            case 0x168618u: goto label_168618;
            case 0x16861Cu: goto label_16861c;
            case 0x168620u: goto label_168620;
            case 0x168624u: goto label_168624;
            case 0x168628u: goto label_168628;
            case 0x16862Cu: goto label_16862c;
            case 0x168630u: goto label_168630;
            case 0x168634u: goto label_168634;
            case 0x168638u: goto label_168638;
            case 0x16863Cu: goto label_16863c;
            case 0x168640u: goto label_168640;
            case 0x168644u: goto label_168644;
            case 0x168648u: goto label_168648;
            case 0x16864Cu: goto label_16864c;
            case 0x168650u: goto label_168650;
            case 0x168654u: goto label_168654;
            case 0x168658u: goto label_168658;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1685DCu; }
            if (ctx->pc != 0x1685DCu) { return; }
        }
    }
    ctx->pc = 0x1685DCu;
label_1685dc:
    // 0x1685dc: 0xc05a0a2
label_1685e0:
    if (ctx->pc == 0x1685E0u) {
        ctx->pc = 0x1685E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685E4u;
        goto label_1685e4;
    }
    ctx->pc = 0x1685DCu;
    SET_GPR_U32(ctx, 31, 0x1685E4u);
    ctx->pc = 0x1685E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_EvokeDecode_0x168288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685E4u; }
        else if (ctx->pc != 0x1685E4u) { ctx->pc = 0x1685E4u; }
    }
    if (ctx->pc != 0x1685E4u) { return; }
    ctx->pc = 0x1685E4u;
label_1685e4:
    // 0x1685e4: 0x24020002
    ctx->pc = 0x1685e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1685e8:
    // 0x1685e8: 0x24030002
    ctx->pc = 0x1685e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1685ec:
    // 0x1685ec: 0x10000002
label_1685f0:
    if (ctx->pc == 0x1685F0u) {
        ctx->pc = 0x1685F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1685F4u;
        goto label_1685f4;
    }
    ctx->pc = 0x1685ECu;
    {
        const bool branch_taken_0x1685ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1685F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1685ec) {
            ctx->pc = 0x1685F8u;
            goto label_1685f8;
        }
    }
    ctx->pc = 0x1685F4u;
label_1685f4:
    // 0x1685f4: 0x24020002
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1685f8:
    // 0x1685f8: 0x14620014
label_1685fc:
    if (ctx->pc == 0x1685FCu) {
        ctx->pc = 0x1685FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x168600u;
        goto label_168600;
    }
    ctx->pc = 0x1685F8u;
    {
        const bool branch_taken_0x1685f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1685FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1685f8) {
            ctx->pc = 0x16864Cu;
            goto label_16864c;
        }
    }
    ctx->pc = 0x168600u;
label_168600:
    // 0x168600: 0xc05d020
label_168604:
    if (ctx->pc == 0x168604u) {
        ctx->pc = 0x168604u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168608u;
        goto label_168608;
    }
    ctx->pc = 0x168600u;
    SET_GPR_U32(ctx, 31, 0x168608u);
    ctx->pc = 0x168604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x174080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_ExecHndl_0x174080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168608u; }
        else if (ctx->pc != 0x168608u) { ctx->pc = 0x168608u; }
    }
    if (ctx->pc != 0x168608u) { return; }
    ctx->pc = 0x168608u;
label_168608:
    // 0x168608: 0xc05cfec
label_16860c:
    if (ctx->pc == 0x16860Cu) {
        ctx->pc = 0x16860Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168610u;
        goto label_168610;
    }
    ctx->pc = 0x168608u;
    SET_GPR_U32(ctx, 31, 0x168610u);
    ctx->pc = 0x16860Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168610u; }
        else if (ctx->pc != 0x168610u) { ctx->pc = 0x168610u; }
    }
    if (ctx->pc != 0x168610u) { return; }
    ctx->pc = 0x168610u;
label_168610:
    // 0x168610: 0x40882d
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168614:
    // 0x168614: 0x24020003
    ctx->pc = 0x168614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_168618:
    // 0x168618: 0x1622000c
label_16861c:
    if (ctx->pc == 0x16861Cu) {
        ctx->pc = 0x16861Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x168620u;
        goto label_168620;
    }
    ctx->pc = 0x168618u;
    {
        const bool branch_taken_0x168618 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16861Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x168618) {
            ctx->pc = 0x16864Cu;
            goto label_16864c;
        }
    }
    ctx->pc = 0x168620u;
label_168620:
    // 0x168620: 0xc05a104
label_168624:
    if (ctx->pc == 0x168624u) {
        ctx->pc = 0x168624u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168628u;
        goto label_168628;
    }
    ctx->pc = 0x168620u;
    SET_GPR_U32(ctx, 31, 0x168628u);
    ctx->pc = 0x168624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168410u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_EndDecode_0x168410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168628u; }
        else if (ctx->pc != 0x168628u) { ctx->pc = 0x168628u; }
    }
    if (ctx->pc != 0x168628u) { return; }
    ctx->pc = 0x168628u;
label_168628:
    // 0x168628: 0xc05d014
label_16862c:
    if (ctx->pc == 0x16862Cu) {
        ctx->pc = 0x16862Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168630u;
        goto label_168630;
    }
    ctx->pc = 0x168628u;
    SET_GPR_U32(ctx, 31, 0x168630u);
    ctx->pc = 0x16862Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x174050u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Reset_0x174050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168630u; }
        else if (ctx->pc != 0x168630u) { ctx->pc = 0x168630u; }
    }
    if (ctx->pc != 0x168630u) { return; }
    ctx->pc = 0x168630u;
label_168630:
    // 0x168630: 0x8e020090
    ctx->pc = 0x168630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_168634:
    // 0x168634: 0x8e040094
    ctx->pc = 0x168634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_168638:
    // 0x168638: 0x8e0500a4
    ctx->pc = 0x168638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_16863c:
    // 0x16863c: 0x40f809
label_168640:
    if (ctx->pc == 0x168640u) {
        ctx->pc = 0x168640u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x168644u;
        goto label_168644;
    }
    ctx->pc = 0x16863Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168644u);
        ctx->pc = 0x168640u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168590u: goto label_168590;
            case 0x168594u: goto label_168594;
            case 0x168598u: goto label_168598;
            case 0x16859Cu: goto label_16859c;
            case 0x1685A0u: goto label_1685a0;
            case 0x1685A4u: goto label_1685a4;
            case 0x1685A8u: goto label_1685a8;
            case 0x1685ACu: goto label_1685ac;
            case 0x1685B0u: goto label_1685b0;
            case 0x1685B4u: goto label_1685b4;
            case 0x1685B8u: goto label_1685b8;
            case 0x1685BCu: goto label_1685bc;
            case 0x1685C0u: goto label_1685c0;
            case 0x1685C4u: goto label_1685c4;
            case 0x1685C8u: goto label_1685c8;
            case 0x1685CCu: goto label_1685cc;
            case 0x1685D0u: goto label_1685d0;
            case 0x1685D4u: goto label_1685d4;
            case 0x1685D8u: goto label_1685d8;
            case 0x1685DCu: goto label_1685dc;
            case 0x1685E0u: goto label_1685e0;
            case 0x1685E4u: goto label_1685e4;
            case 0x1685E8u: goto label_1685e8;
            case 0x1685ECu: goto label_1685ec;
            case 0x1685F0u: goto label_1685f0;
            case 0x1685F4u: goto label_1685f4;
            case 0x1685F8u: goto label_1685f8;
            case 0x1685FCu: goto label_1685fc;
            case 0x168600u: goto label_168600;
            case 0x168604u: goto label_168604;
            case 0x168608u: goto label_168608;
            case 0x16860Cu: goto label_16860c;
            case 0x168610u: goto label_168610;
            case 0x168614u: goto label_168614;
            case 0x168618u: goto label_168618;
            case 0x16861Cu: goto label_16861c;
            case 0x168620u: goto label_168620;
            case 0x168624u: goto label_168624;
            case 0x168628u: goto label_168628;
            case 0x16862Cu: goto label_16862c;
            case 0x168630u: goto label_168630;
            case 0x168634u: goto label_168634;
            case 0x168638u: goto label_168638;
            case 0x16863Cu: goto label_16863c;
            case 0x168640u: goto label_168640;
            case 0x168644u: goto label_168644;
            case 0x168648u: goto label_168648;
            case 0x16864Cu: goto label_16864c;
            case 0x168650u: goto label_168650;
            case 0x168654u: goto label_168654;
            case 0x168658u: goto label_168658;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168644u; }
            if (ctx->pc != 0x168644u) { return; }
        }
    }
    ctx->pc = 0x168644u;
label_168644:
    // 0x168644: 0xae110004
    ctx->pc = 0x168644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_168648:
    // 0x168648: 0xdfbf0020
    ctx->pc = 0x168648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16864c:
    // 0x16864c: 0xdfb10010
    ctx->pc = 0x16864cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_168650:
    // 0x168650: 0xdfb00000
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168654:
    // 0x168654: 0x3e00008
label_168658:
    if (ctx->pc == 0x168658u) {
        ctx->pc = 0x168658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16865Cu;
        goto label_fallthrough_0x168654;
    }
    ctx->pc = 0x168654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168590u: goto label_168590;
            case 0x168594u: goto label_168594;
            case 0x168598u: goto label_168598;
            case 0x16859Cu: goto label_16859c;
            case 0x1685A0u: goto label_1685a0;
            case 0x1685A4u: goto label_1685a4;
            case 0x1685A8u: goto label_1685a8;
            case 0x1685ACu: goto label_1685ac;
            case 0x1685B0u: goto label_1685b0;
            case 0x1685B4u: goto label_1685b4;
            case 0x1685B8u: goto label_1685b8;
            case 0x1685BCu: goto label_1685bc;
            case 0x1685C0u: goto label_1685c0;
            case 0x1685C4u: goto label_1685c4;
            case 0x1685C8u: goto label_1685c8;
            case 0x1685CCu: goto label_1685cc;
            case 0x1685D0u: goto label_1685d0;
            case 0x1685D4u: goto label_1685d4;
            case 0x1685D8u: goto label_1685d8;
            case 0x1685DCu: goto label_1685dc;
            case 0x1685E0u: goto label_1685e0;
            case 0x1685E4u: goto label_1685e4;
            case 0x1685E8u: goto label_1685e8;
            case 0x1685ECu: goto label_1685ec;
            case 0x1685F0u: goto label_1685f0;
            case 0x1685F4u: goto label_1685f4;
            case 0x1685F8u: goto label_1685f8;
            case 0x1685FCu: goto label_1685fc;
            case 0x168600u: goto label_168600;
            case 0x168604u: goto label_168604;
            case 0x168608u: goto label_168608;
            case 0x16860Cu: goto label_16860c;
            case 0x168610u: goto label_168610;
            case 0x168614u: goto label_168614;
            case 0x168618u: goto label_168618;
            case 0x16861Cu: goto label_16861c;
            case 0x168620u: goto label_168620;
            case 0x168624u: goto label_168624;
            case 0x168628u: goto label_168628;
            case 0x16862Cu: goto label_16862c;
            case 0x168630u: goto label_168630;
            case 0x168634u: goto label_168634;
            case 0x168638u: goto label_168638;
            case 0x16863Cu: goto label_16863c;
            case 0x168640u: goto label_168640;
            case 0x168644u: goto label_168644;
            case 0x168648u: goto label_168648;
            case 0x16864Cu: goto label_16864c;
            case 0x168650u: goto label_168650;
            case 0x168654u: goto label_168654;
            case 0x168658u: goto label_168658;
            default: break;
        }
        return;
    }
label_fallthrough_0x168654:
    ctx->pc = 0x16865Cu;
}
