#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_blocks_new
// Address: 0x2d9638 - 0x2d96f4
void inflate_blocks_new_0x2d9638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d9638u;

label_2d9638:
    // 0x2d9638: 0x27bdffb0
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d963c:
    // 0x2d963c: 0xffbf0040
    ctx->pc = 0x2d963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d9640:
    // 0x2d9640: 0xffb30030
    ctx->pc = 0x2d9640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2d9644:
    // 0x2d9644: 0xffb20020
    ctx->pc = 0x2d9644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d9648:
    // 0x2d9648: 0xffb10010
    ctx->pc = 0x2d9648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2d964c:
    // 0x2d964c: 0xffb00000
    ctx->pc = 0x2d964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9650:
    // 0x2d9650: 0x80882d
    ctx->pc = 0x2d9650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9654:
    // 0x2d9654: 0xa0982d
    ctx->pc = 0x2d9654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9658:
    // 0x2d9658: 0xc0902d
    ctx->pc = 0x2d9658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d965c:
    // 0x2d965c: 0x8e220020
    ctx->pc = 0x2d965cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d9660:
    // 0x2d9660: 0x8e240028
    ctx->pc = 0x2d9660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9664:
    // 0x2d9664: 0x24050001
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2d9668:
    // 0x2d9668: 0x40f809
label_2d966c:
    if (ctx->pc == 0x2D966Cu) {
        ctx->pc = 0x2D966Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2D9670u;
        goto label_2d9670;
    }
    ctx->pc = 0x2D9668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9670u);
        ctx->pc = 0x2D966Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9638u: goto label_2d9638;
            case 0x2D963Cu: goto label_2d963c;
            case 0x2D9640u: goto label_2d9640;
            case 0x2D9644u: goto label_2d9644;
            case 0x2D9648u: goto label_2d9648;
            case 0x2D964Cu: goto label_2d964c;
            case 0x2D9650u: goto label_2d9650;
            case 0x2D9654u: goto label_2d9654;
            case 0x2D9658u: goto label_2d9658;
            case 0x2D965Cu: goto label_2d965c;
            case 0x2D9660u: goto label_2d9660;
            case 0x2D9664u: goto label_2d9664;
            case 0x2D9668u: goto label_2d9668;
            case 0x2D966Cu: goto label_2d966c;
            case 0x2D9670u: goto label_2d9670;
            case 0x2D9674u: goto label_2d9674;
            case 0x2D9678u: goto label_2d9678;
            case 0x2D967Cu: goto label_2d967c;
            case 0x2D9680u: goto label_2d9680;
            case 0x2D9684u: goto label_2d9684;
            case 0x2D9688u: goto label_2d9688;
            case 0x2D968Cu: goto label_2d968c;
            case 0x2D9690u: goto label_2d9690;
            case 0x2D9694u: goto label_2d9694;
            case 0x2D9698u: goto label_2d9698;
            case 0x2D969Cu: goto label_2d969c;
            case 0x2D96A0u: goto label_2d96a0;
            case 0x2D96A4u: goto label_2d96a4;
            case 0x2D96A8u: goto label_2d96a8;
            case 0x2D96ACu: goto label_2d96ac;
            case 0x2D96B0u: goto label_2d96b0;
            case 0x2D96B4u: goto label_2d96b4;
            case 0x2D96B8u: goto label_2d96b8;
            case 0x2D96BCu: goto label_2d96bc;
            case 0x2D96C0u: goto label_2d96c0;
            case 0x2D96C4u: goto label_2d96c4;
            case 0x2D96C8u: goto label_2d96c8;
            case 0x2D96CCu: goto label_2d96cc;
            case 0x2D96D0u: goto label_2d96d0;
            case 0x2D96D4u: goto label_2d96d4;
            case 0x2D96D8u: goto label_2d96d8;
            case 0x2D96DCu: goto label_2d96dc;
            case 0x2D96E0u: goto label_2d96e0;
            case 0x2D96E4u: goto label_2d96e4;
            case 0x2D96E8u: goto label_2d96e8;
            case 0x2D96ECu: goto label_2d96ec;
            case 0x2D96F0u: goto label_2d96f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9670u; }
            if (ctx->pc != 0x2D9670u) { return; }
        }
    }
    ctx->pc = 0x2D9670u;
label_2d9670:
    // 0x2d9670: 0x40802d
    ctx->pc = 0x2d9670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9674:
    // 0x2d9674: 0x12000018
label_2d9678:
    if (ctx->pc == 0x2D9678u) {
        ctx->pc = 0x2D9678u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D967Cu;
        goto label_2d967c;
    }
    ctx->pc = 0x2D9674u;
    {
        const bool branch_taken_0x2d9674 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D9678u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d9674) {
            ctx->pc = 0x2D96D8u;
            goto label_2d96d8;
        }
    }
    ctx->pc = 0x2D967Cu;
label_2d967c:
    // 0x2d967c: 0x8e220020
    ctx->pc = 0x2d967cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d9680:
    // 0x2d9680: 0x8e240028
    ctx->pc = 0x2d9680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d9684:
    // 0x2d9684: 0x24050001
    ctx->pc = 0x2d9684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2d9688:
    // 0x2d9688: 0x40f809
label_2d968c:
    if (ctx->pc == 0x2D968Cu) {
        ctx->pc = 0x2D968Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9690u;
        goto label_2d9690;
    }
    ctx->pc = 0x2D9688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9690u);
        ctx->pc = 0x2D968Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9638u: goto label_2d9638;
            case 0x2D963Cu: goto label_2d963c;
            case 0x2D9640u: goto label_2d9640;
            case 0x2D9644u: goto label_2d9644;
            case 0x2D9648u: goto label_2d9648;
            case 0x2D964Cu: goto label_2d964c;
            case 0x2D9650u: goto label_2d9650;
            case 0x2D9654u: goto label_2d9654;
            case 0x2D9658u: goto label_2d9658;
            case 0x2D965Cu: goto label_2d965c;
            case 0x2D9660u: goto label_2d9660;
            case 0x2D9664u: goto label_2d9664;
            case 0x2D9668u: goto label_2d9668;
            case 0x2D966Cu: goto label_2d966c;
            case 0x2D9670u: goto label_2d9670;
            case 0x2D9674u: goto label_2d9674;
            case 0x2D9678u: goto label_2d9678;
            case 0x2D967Cu: goto label_2d967c;
            case 0x2D9680u: goto label_2d9680;
            case 0x2D9684u: goto label_2d9684;
            case 0x2D9688u: goto label_2d9688;
            case 0x2D968Cu: goto label_2d968c;
            case 0x2D9690u: goto label_2d9690;
            case 0x2D9694u: goto label_2d9694;
            case 0x2D9698u: goto label_2d9698;
            case 0x2D969Cu: goto label_2d969c;
            case 0x2D96A0u: goto label_2d96a0;
            case 0x2D96A4u: goto label_2d96a4;
            case 0x2D96A8u: goto label_2d96a8;
            case 0x2D96ACu: goto label_2d96ac;
            case 0x2D96B0u: goto label_2d96b0;
            case 0x2D96B4u: goto label_2d96b4;
            case 0x2D96B8u: goto label_2d96b8;
            case 0x2D96BCu: goto label_2d96bc;
            case 0x2D96C0u: goto label_2d96c0;
            case 0x2D96C4u: goto label_2d96c4;
            case 0x2D96C8u: goto label_2d96c8;
            case 0x2D96CCu: goto label_2d96cc;
            case 0x2D96D0u: goto label_2d96d0;
            case 0x2D96D4u: goto label_2d96d4;
            case 0x2D96D8u: goto label_2d96d8;
            case 0x2D96DCu: goto label_2d96dc;
            case 0x2D96E0u: goto label_2d96e0;
            case 0x2D96E4u: goto label_2d96e4;
            case 0x2D96E8u: goto label_2d96e8;
            case 0x2D96ECu: goto label_2d96ec;
            case 0x2D96F0u: goto label_2d96f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9690u; }
            if (ctx->pc != 0x2D9690u) { return; }
        }
    }
    ctx->pc = 0x2D9690u;
label_2d9690:
    // 0x2d9690: 0x14400007
label_2d9694:
    if (ctx->pc == 0x2D9694u) {
        ctx->pc = 0x2D9694u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x2D9698u;
        goto label_2d9698;
    }
    ctx->pc = 0x2D9690u;
    {
        const bool branch_taken_0x2d9690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D9694u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2d9690) {
            ctx->pc = 0x2D96B0u;
            goto label_2d96b0;
        }
    }
    ctx->pc = 0x2D9698u;
label_2d9698:
    // 0x2d9698: 0x8e220024
    ctx->pc = 0x2d9698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d969c:
    // 0x2d969c: 0x8e240028
    ctx->pc = 0x2d969cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d96a0:
    // 0x2d96a0: 0x40f809
label_2d96a4:
    if (ctx->pc == 0x2D96A4u) {
        ctx->pc = 0x2D96A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96A8u;
        goto label_2d96a8;
    }
    ctx->pc = 0x2D96A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96A8u);
        ctx->pc = 0x2D96A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9638u: goto label_2d9638;
            case 0x2D963Cu: goto label_2d963c;
            case 0x2D9640u: goto label_2d9640;
            case 0x2D9644u: goto label_2d9644;
            case 0x2D9648u: goto label_2d9648;
            case 0x2D964Cu: goto label_2d964c;
            case 0x2D9650u: goto label_2d9650;
            case 0x2D9654u: goto label_2d9654;
            case 0x2D9658u: goto label_2d9658;
            case 0x2D965Cu: goto label_2d965c;
            case 0x2D9660u: goto label_2d9660;
            case 0x2D9664u: goto label_2d9664;
            case 0x2D9668u: goto label_2d9668;
            case 0x2D966Cu: goto label_2d966c;
            case 0x2D9670u: goto label_2d9670;
            case 0x2D9674u: goto label_2d9674;
            case 0x2D9678u: goto label_2d9678;
            case 0x2D967Cu: goto label_2d967c;
            case 0x2D9680u: goto label_2d9680;
            case 0x2D9684u: goto label_2d9684;
            case 0x2D9688u: goto label_2d9688;
            case 0x2D968Cu: goto label_2d968c;
            case 0x2D9690u: goto label_2d9690;
            case 0x2D9694u: goto label_2d9694;
            case 0x2D9698u: goto label_2d9698;
            case 0x2D969Cu: goto label_2d969c;
            case 0x2D96A0u: goto label_2d96a0;
            case 0x2D96A4u: goto label_2d96a4;
            case 0x2D96A8u: goto label_2d96a8;
            case 0x2D96ACu: goto label_2d96ac;
            case 0x2D96B0u: goto label_2d96b0;
            case 0x2D96B4u: goto label_2d96b4;
            case 0x2D96B8u: goto label_2d96b8;
            case 0x2D96BCu: goto label_2d96bc;
            case 0x2D96C0u: goto label_2d96c0;
            case 0x2D96C4u: goto label_2d96c4;
            case 0x2D96C8u: goto label_2d96c8;
            case 0x2D96CCu: goto label_2d96cc;
            case 0x2D96D0u: goto label_2d96d0;
            case 0x2D96D4u: goto label_2d96d4;
            case 0x2D96D8u: goto label_2d96d8;
            case 0x2D96DCu: goto label_2d96dc;
            case 0x2D96E0u: goto label_2d96e0;
            case 0x2D96E4u: goto label_2d96e4;
            case 0x2D96E8u: goto label_2d96e8;
            case 0x2D96ECu: goto label_2d96ec;
            case 0x2D96F0u: goto label_2d96f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D96A8u; }
            if (ctx->pc != 0x2D96A8u) { return; }
        }
    }
    ctx->pc = 0x2D96A8u;
label_2d96a8:
    // 0x2d96a8: 0x1000000b
label_2d96ac:
    if (ctx->pc == 0x2D96ACu) {
        ctx->pc = 0x2D96ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96B0u;
        goto label_2d96b0;
    }
    ctx->pc = 0x2D96A8u;
    {
        const bool branch_taken_0x2d96a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D96ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d96a8) {
            ctx->pc = 0x2D96D8u;
            goto label_2d96d8;
        }
    }
    ctx->pc = 0x2D96B0u;
label_2d96b0:
    // 0x2d96b0: 0x8e020024
    ctx->pc = 0x2d96b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d96b4:
    // 0x2d96b4: 0x2421021
    ctx->pc = 0x2d96b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2d96b8:
    // 0x2d96b8: 0xae020028
    ctx->pc = 0x2d96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2d96bc:
    // 0x2d96bc: 0xae130034
    ctx->pc = 0x2d96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
label_2d96c0:
    // 0x2d96c0: 0xae000000
    ctx->pc = 0x2d96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d96c4:
    // 0x2d96c4: 0x200202d
    ctx->pc = 0x2d96c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d96c8:
    // 0x2d96c8: 0x220282d
    ctx->pc = 0x2d96c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d96cc:
    // 0x2d96cc: 0xc0b655a
label_2d96d0:
    if (ctx->pc == 0x2D96D0u) {
        ctx->pc = 0x2D96D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 56));
        ctx->pc = 0x2D96D4u;
        goto label_2d96d4;
    }
    ctx->pc = 0x2D96CCu;
    SET_GPR_U32(ctx, 31, 0x2D96D4u);
    ctx->pc = 0x2D96D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 56));
    ctx->pc = 0x2D9568u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x2d9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96D4u; }
    }
    if (ctx->pc != 0x2D96D4u) { return; }
    ctx->pc = 0x2D96D4u;
label_2d96d4:
    // 0x2d96d4: 0x200102d
    ctx->pc = 0x2d96d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d96d8:
    // 0x2d96d8: 0xdfbf0040
    ctx->pc = 0x2d96d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d96dc:
    // 0x2d96dc: 0xdfb30030
    ctx->pc = 0x2d96dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d96e0:
    // 0x2d96e0: 0xdfb20020
    ctx->pc = 0x2d96e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d96e4:
    // 0x2d96e4: 0xdfb10010
    ctx->pc = 0x2d96e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d96e8:
    // 0x2d96e8: 0xdfb00000
    ctx->pc = 0x2d96e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d96ec:
    // 0x2d96ec: 0x3e00008
label_2d96f0:
    if (ctx->pc == 0x2D96F0u) {
        ctx->pc = 0x2D96F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2D96F4u;
        goto label_fallthrough_0x2d96ec;
    }
    ctx->pc = 0x2D96ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D96F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D9638u: goto label_2d9638;
            case 0x2D963Cu: goto label_2d963c;
            case 0x2D9640u: goto label_2d9640;
            case 0x2D9644u: goto label_2d9644;
            case 0x2D9648u: goto label_2d9648;
            case 0x2D964Cu: goto label_2d964c;
            case 0x2D9650u: goto label_2d9650;
            case 0x2D9654u: goto label_2d9654;
            case 0x2D9658u: goto label_2d9658;
            case 0x2D965Cu: goto label_2d965c;
            case 0x2D9660u: goto label_2d9660;
            case 0x2D9664u: goto label_2d9664;
            case 0x2D9668u: goto label_2d9668;
            case 0x2D966Cu: goto label_2d966c;
            case 0x2D9670u: goto label_2d9670;
            case 0x2D9674u: goto label_2d9674;
            case 0x2D9678u: goto label_2d9678;
            case 0x2D967Cu: goto label_2d967c;
            case 0x2D9680u: goto label_2d9680;
            case 0x2D9684u: goto label_2d9684;
            case 0x2D9688u: goto label_2d9688;
            case 0x2D968Cu: goto label_2d968c;
            case 0x2D9690u: goto label_2d9690;
            case 0x2D9694u: goto label_2d9694;
            case 0x2D9698u: goto label_2d9698;
            case 0x2D969Cu: goto label_2d969c;
            case 0x2D96A0u: goto label_2d96a0;
            case 0x2D96A4u: goto label_2d96a4;
            case 0x2D96A8u: goto label_2d96a8;
            case 0x2D96ACu: goto label_2d96ac;
            case 0x2D96B0u: goto label_2d96b0;
            case 0x2D96B4u: goto label_2d96b4;
            case 0x2D96B8u: goto label_2d96b8;
            case 0x2D96BCu: goto label_2d96bc;
            case 0x2D96C0u: goto label_2d96c0;
            case 0x2D96C4u: goto label_2d96c4;
            case 0x2D96C8u: goto label_2d96c8;
            case 0x2D96CCu: goto label_2d96cc;
            case 0x2D96D0u: goto label_2d96d0;
            case 0x2D96D4u: goto label_2d96d4;
            case 0x2D96D8u: goto label_2d96d8;
            case 0x2D96DCu: goto label_2d96dc;
            case 0x2D96E0u: goto label_2d96e0;
            case 0x2D96E4u: goto label_2d96e4;
            case 0x2D96E8u: goto label_2d96e8;
            case 0x2D96ECu: goto label_2d96ec;
            case 0x2D96F0u: goto label_2d96f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d96ec:
    ctx->pc = 0x2D96F4u;
}
