#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsLoadDirInfo
// Address: 0x175558 - 0x175624
void cvFsLoadDirInfo_0x175558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsLoadDirInfo");


    ctx->pc = 0x175558u;

label_175558:
    // 0x175558: 0x27bdfd40
    ctx->pc = 0x175558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966592));
label_17555c:
    // 0x17555c: 0xffb30290
    ctx->pc = 0x17555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 19));
label_175560:
    // 0x175560: 0xffb20280
    ctx->pc = 0x175560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
label_175564:
    // 0x175564: 0xc0982d
    ctx->pc = 0x175564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175568:
    // 0x175568: 0xffb10270
    ctx->pc = 0x175568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
label_17556c:
    // 0x17556c: 0xa0902d
    ctx->pc = 0x17556cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175570:
    // 0x175570: 0xffb00260
    ctx->pc = 0x175570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_175574:
    // 0x175574: 0x80882d
    ctx->pc = 0x175574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175578:
    // 0x175578: 0x27b00130
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 304));
label_17557c:
    // 0x17557c: 0xffb402a0
    ctx->pc = 0x17557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 20));
label_175580:
    // 0x175580: 0xffbf02b0
    ctx->pc = 0x175580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
label_175584:
    // 0x175584: 0x3a0202d
    ctx->pc = 0x175584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175588:
    // 0x175588: 0x200282d
    ctx->pc = 0x175588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17558c:
    // 0x17558c: 0xc05d296
label_175590:
    if (ctx->pc == 0x175590u) {
        ctx->pc = 0x175590u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175594u;
        goto label_175594;
    }
    ctx->pc = 0x17558Cu;
    SET_GPR_U32(ctx, 31, 0x175594u);
    ctx->pc = 0x175590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175594u; }
        else if (ctx->pc != 0x175594u) { ctx->pc = 0x175594u; }
    }
    if (ctx->pc != 0x175594u) { return; }
    ctx->pc = 0x175594u;
label_175594:
    // 0x175594: 0x83a20000
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_175598:
    // 0x175598: 0x1440000b
label_17559c:
    if (ctx->pc == 0x17559Cu) {
        ctx->pc = 0x17559Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755A0u;
        goto label_1755a0;
    }
    ctx->pc = 0x175598u;
    {
        const bool branch_taken_0x175598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17559Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175598) {
            ctx->pc = 0x1755C8u;
            goto label_1755c8;
        }
    }
    ctx->pc = 0x1755A0u;
label_1755a0:
    // 0x1755a0: 0xc05d2e8
label_1755a4:
    if (ctx->pc == 0x1755A4u) {
        ctx->pc = 0x1755A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755A8u;
        goto label_1755a8;
    }
    ctx->pc = 0x1755A0u;
    SET_GPR_U32(ctx, 31, 0x1755A8u);
    ctx->pc = 0x1755A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDefDev_0x174ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755A8u; }
        else if (ctx->pc != 0x1755A8u) { ctx->pc = 0x1755A8u; }
    }
    if (ctx->pc != 0x1755A8u) { return; }
    ctx->pc = 0x1755A8u;
label_1755a8:
    // 0x1755a8: 0x83a20000
    ctx->pc = 0x1755a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1755ac:
    // 0x1755ac: 0x14400007
label_1755b0:
    if (ctx->pc == 0x1755B0u) {
        ctx->pc = 0x1755B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755B4u;
        goto label_1755b4;
    }
    ctx->pc = 0x1755ACu;
    {
        const bool branch_taken_0x1755ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1755B0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1755ac) {
            ctx->pc = 0x1755CCu;
            goto label_1755cc;
        }
    }
    ctx->pc = 0x1755B4u;
label_1755b4:
    // 0x1755b4: 0x3c04002c
    ctx->pc = 0x1755b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1755b8:
    // 0x1755b8: 0xc05d076
label_1755bc:
    if (ctx->pc == 0x1755BCu) {
        ctx->pc = 0x1755BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945360));
        ctx->pc = 0x1755C0u;
        goto label_1755c0;
    }
    ctx->pc = 0x1755B8u;
    SET_GPR_U32(ctx, 31, 0x1755C0u);
    ctx->pc = 0x1755BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945360));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755C0u; }
        else if (ctx->pc != 0x1755C0u) { ctx->pc = 0x1755C0u; }
    }
    if (ctx->pc != 0x1755C0u) { return; }
    ctx->pc = 0x1755C0u;
label_1755c0:
    // 0x1755c0: 0x10000010
label_1755c4:
    if (ctx->pc == 0x1755C4u) {
        ctx->pc = 0x1755C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755C8u;
        goto label_1755c8;
    }
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1755C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x175604u;
            goto label_175604;
        }
    }
    ctx->pc = 0x1755C8u;
label_1755c8:
    // 0x1755c8: 0x200282d
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1755cc:
    // 0x1755cc: 0xc05d768
label_1755d0:
    if (ctx->pc == 0x1755D0u) {
        ctx->pc = 0x1755D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755D4u;
        goto label_1755d4;
    }
    ctx->pc = 0x1755CCu;
    SET_GPR_U32(ctx, 31, 0x1755D4u);
    ctx->pc = 0x1755D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        addDevName_0x175da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755D4u; }
        else if (ctx->pc != 0x1755D4u) { ctx->pc = 0x1755D4u; }
    }
    if (ctx->pc != 0x1755D4u) { return; }
    ctx->pc = 0x1755D4u;
label_1755d4:
    // 0x1755d4: 0xc05d142
label_1755d8:
    if (ctx->pc == 0x1755D8u) {
        ctx->pc = 0x1755D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755DCu;
        goto label_1755dc;
    }
    ctx->pc = 0x1755D4u;
    SET_GPR_U32(ctx, 31, 0x1755DCu);
    ctx->pc = 0x1755D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1755DCu; }
        else if (ctx->pc != 0x1755DCu) { ctx->pc = 0x1755DCu; }
    }
    if (ctx->pc != 0x1755DCu) { return; }
    ctx->pc = 0x1755DCu;
label_1755dc:
    // 0x1755dc: 0x50400009
label_1755e0:
    if (ctx->pc == 0x1755E0u) {
        ctx->pc = 0x1755E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755E4u;
        goto label_1755e4;
    }
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x1755E0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x175604u;
            goto label_175604;
        }
    }
    ctx->pc = 0x1755E4u;
label_1755e4:
    // 0x1755e4: 0x8c420048
    ctx->pc = 0x1755e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1755e8:
    // 0x1755e8: 0x10400005
label_1755ec:
    if (ctx->pc == 0x1755ECu) {
        ctx->pc = 0x1755ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755F0u;
        goto label_1755f0;
    }
    ctx->pc = 0x1755E8u;
    {
        const bool branch_taken_0x1755e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1755ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1755e8) {
            ctx->pc = 0x175600u;
            goto label_175600;
        }
    }
    ctx->pc = 0x1755F0u;
label_1755f0:
    // 0x1755f0: 0x240282d
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1755f4:
    // 0x1755f4: 0x40f809
label_1755f8:
    if (ctx->pc == 0x1755F8u) {
        ctx->pc = 0x1755F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1755FCu;
        goto label_1755fc;
    }
    ctx->pc = 0x1755F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1755FCu);
        ctx->pc = 0x1755F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175558u: goto label_175558;
            case 0x17555Cu: goto label_17555c;
            case 0x175560u: goto label_175560;
            case 0x175564u: goto label_175564;
            case 0x175568u: goto label_175568;
            case 0x17556Cu: goto label_17556c;
            case 0x175570u: goto label_175570;
            case 0x175574u: goto label_175574;
            case 0x175578u: goto label_175578;
            case 0x17557Cu: goto label_17557c;
            case 0x175580u: goto label_175580;
            case 0x175584u: goto label_175584;
            case 0x175588u: goto label_175588;
            case 0x17558Cu: goto label_17558c;
            case 0x175590u: goto label_175590;
            case 0x175594u: goto label_175594;
            case 0x175598u: goto label_175598;
            case 0x17559Cu: goto label_17559c;
            case 0x1755A0u: goto label_1755a0;
            case 0x1755A4u: goto label_1755a4;
            case 0x1755A8u: goto label_1755a8;
            case 0x1755ACu: goto label_1755ac;
            case 0x1755B0u: goto label_1755b0;
            case 0x1755B4u: goto label_1755b4;
            case 0x1755B8u: goto label_1755b8;
            case 0x1755BCu: goto label_1755bc;
            case 0x1755C0u: goto label_1755c0;
            case 0x1755C4u: goto label_1755c4;
            case 0x1755C8u: goto label_1755c8;
            case 0x1755CCu: goto label_1755cc;
            case 0x1755D0u: goto label_1755d0;
            case 0x1755D4u: goto label_1755d4;
            case 0x1755D8u: goto label_1755d8;
            case 0x1755DCu: goto label_1755dc;
            case 0x1755E0u: goto label_1755e0;
            case 0x1755E4u: goto label_1755e4;
            case 0x1755E8u: goto label_1755e8;
            case 0x1755ECu: goto label_1755ec;
            case 0x1755F0u: goto label_1755f0;
            case 0x1755F4u: goto label_1755f4;
            case 0x1755F8u: goto label_1755f8;
            case 0x1755FCu: goto label_1755fc;
            case 0x175600u: goto label_175600;
            case 0x175604u: goto label_175604;
            case 0x175608u: goto label_175608;
            case 0x17560Cu: goto label_17560c;
            case 0x175610u: goto label_175610;
            case 0x175614u: goto label_175614;
            case 0x175618u: goto label_175618;
            case 0x17561Cu: goto label_17561c;
            case 0x175620u: goto label_175620;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1755FCu; }
            if (ctx->pc != 0x1755FCu) { return; }
        }
    }
    ctx->pc = 0x1755FCu;
label_1755fc:
    // 0x1755fc: 0x40a02d
    ctx->pc = 0x1755fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175600:
    // 0x175600: 0x280102d
    ctx->pc = 0x175600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_175604:
    // 0x175604: 0xdfbf02b0
    ctx->pc = 0x175604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_175608:
    // 0x175608: 0xdfb402a0
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_17560c:
    // 0x17560c: 0xdfb30290
    ctx->pc = 0x17560cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_175610:
    // 0x175610: 0xdfb20280
    ctx->pc = 0x175610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_175614:
    // 0x175614: 0xdfb10270
    ctx->pc = 0x175614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_175618:
    // 0x175618: 0xdfb00260
    ctx->pc = 0x175618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_17561c:
    // 0x17561c: 0x3e00008
label_175620:
    if (ctx->pc == 0x175620u) {
        ctx->pc = 0x175620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x175624u;
        goto label_fallthrough_0x17561c;
    }
    ctx->pc = 0x17561Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175620u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175558u: goto label_175558;
            case 0x17555Cu: goto label_17555c;
            case 0x175560u: goto label_175560;
            case 0x175564u: goto label_175564;
            case 0x175568u: goto label_175568;
            case 0x17556Cu: goto label_17556c;
            case 0x175570u: goto label_175570;
            case 0x175574u: goto label_175574;
            case 0x175578u: goto label_175578;
            case 0x17557Cu: goto label_17557c;
            case 0x175580u: goto label_175580;
            case 0x175584u: goto label_175584;
            case 0x175588u: goto label_175588;
            case 0x17558Cu: goto label_17558c;
            case 0x175590u: goto label_175590;
            case 0x175594u: goto label_175594;
            case 0x175598u: goto label_175598;
            case 0x17559Cu: goto label_17559c;
            case 0x1755A0u: goto label_1755a0;
            case 0x1755A4u: goto label_1755a4;
            case 0x1755A8u: goto label_1755a8;
            case 0x1755ACu: goto label_1755ac;
            case 0x1755B0u: goto label_1755b0;
            case 0x1755B4u: goto label_1755b4;
            case 0x1755B8u: goto label_1755b8;
            case 0x1755BCu: goto label_1755bc;
            case 0x1755C0u: goto label_1755c0;
            case 0x1755C4u: goto label_1755c4;
            case 0x1755C8u: goto label_1755c8;
            case 0x1755CCu: goto label_1755cc;
            case 0x1755D0u: goto label_1755d0;
            case 0x1755D4u: goto label_1755d4;
            case 0x1755D8u: goto label_1755d8;
            case 0x1755DCu: goto label_1755dc;
            case 0x1755E0u: goto label_1755e0;
            case 0x1755E4u: goto label_1755e4;
            case 0x1755E8u: goto label_1755e8;
            case 0x1755ECu: goto label_1755ec;
            case 0x1755F0u: goto label_1755f0;
            case 0x1755F4u: goto label_1755f4;
            case 0x1755F8u: goto label_1755f8;
            case 0x1755FCu: goto label_1755fc;
            case 0x175600u: goto label_175600;
            case 0x175604u: goto label_175604;
            case 0x175608u: goto label_175608;
            case 0x17560Cu: goto label_17560c;
            case 0x175610u: goto label_175610;
            case 0x175614u: goto label_175614;
            case 0x175618u: goto label_175618;
            case 0x17561Cu: goto label_17561c;
            case 0x175620u: goto label_175620;
            default: break;
        }
        return;
    }
label_fallthrough_0x17561c:
    ctx->pc = 0x175624u;
}
