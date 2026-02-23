#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyPketData
// Address: 0x194370 - 0x194450
void sfmps_CopyPketData_0x194370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyPketData");


    ctx->pc = 0x194370u;

label_194370:
    // 0x194370: 0x27bdff70
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_194374:
    // 0x194374: 0xffb50070
    ctx->pc = 0x194374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_194378:
    // 0x194378: 0xffb40060
    ctx->pc = 0x194378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_19437c:
    // 0x19437c: 0xa0a82d
    ctx->pc = 0x19437cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194380:
    // 0x194380: 0xffb30050
    ctx->pc = 0x194380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_194384:
    // 0x194384: 0xe0a02d
    ctx->pc = 0x194384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_194388:
    // 0x194388: 0xffb20040
    ctx->pc = 0x194388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_19438c:
    // 0x19438c: 0x982d
    ctx->pc = 0x19438cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194390:
    // 0x194390: 0xffb10030
    ctx->pc = 0x194390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_194394:
    // 0x194394: 0xc0902d
    ctx->pc = 0x194394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194398:
    // 0x194398: 0xffbf0080
    ctx->pc = 0x194398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_19439c:
    // 0x19439c: 0x80882d
    ctx->pc = 0x19439cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1943a0:
    // 0x1943a0: 0xffb00020
    ctx->pc = 0x1943a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1943a4:
    // 0x1943a4: 0x3a0282d
    ctx->pc = 0x1943a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1943a8:
    // 0x1943a8: 0xae800000
    ctx->pc = 0x1943a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1943ac:
    // 0x1943ac: 0xc0608fc
label_1943b0:
    if (ctx->pc == 0x1943B0u) {
        ctx->pc = 0x1943B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12384)));
        ctx->pc = 0x1943B4u;
        goto label_1943b4;
    }
    ctx->pc = 0x1943ACu;
    SET_GPR_U32(ctx, 31, 0x1943B4u);
    ctx->pc = 0x1943B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12384)));
    ctx->pc = 0x1823F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetPketHd_0x1823f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943B4u; }
        else if (ctx->pc != 0x1943B4u) { ctx->pc = 0x1943B4u; }
    }
    if (ctx->pc != 0x1943B4u) { return; }
    ctx->pc = 0x1943B4u;
label_1943b4:
    // 0x1943b4: 0x10400005
label_1943b8:
    if (ctx->pc == 0x1943B8u) {
        ctx->pc = 0x1943B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1943BCu;
        goto label_1943bc;
    }
    ctx->pc = 0x1943B4u;
    {
        const bool branch_taken_0x1943b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1943B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1943b4) {
            ctx->pc = 0x1943CCu;
            goto label_1943cc;
        }
    }
    ctx->pc = 0x1943BCu;
label_1943bc:
    // 0x1943bc: 0x3c05ff00
    ctx->pc = 0x1943bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_1943c0:
    // 0x1943c0: 0xc064ea0
label_1943c4:
    if (ctx->pc == 0x1943C4u) {
        ctx->pc = 0x1943C4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3334));
        ctx->pc = 0x1943C8u;
        goto label_1943c8;
    }
    ctx->pc = 0x1943C0u;
    SET_GPR_U32(ctx, 31, 0x1943C8u);
    ctx->pc = 0x1943C4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3334));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943C8u; }
        else if (ctx->pc != 0x1943C8u) { ctx->pc = 0x1943C8u; }
    }
    if (ctx->pc != 0x1943C8u) { return; }
    ctx->pc = 0x1943C8u;
label_1943c8:
    // 0x1943c8: 0x40982d
    ctx->pc = 0x1943c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1943cc:
    // 0x1943cc: 0x8fb0001c
    ctx->pc = 0x1943ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1943d0:
    // 0x1943d0: 0x8fa30004
    ctx->pc = 0x1943d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1943d4:
    // 0x1943d4: 0x250102a
    ctx->pc = 0x1943d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
label_1943d8:
    // 0x1943d8: 0x8fa50008
    ctx->pc = 0x1943d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1943dc:
    // 0x1943dc: 0x10400003
label_1943e0:
    if (ctx->pc == 0x1943E0u) {
        ctx->pc = 0x1943E0u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1943E4u;
        goto label_1943e4;
    }
    ctx->pc = 0x1943DCu;
    {
        const bool branch_taken_0x1943dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1943E0u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x1943dc) {
            ctx->pc = 0x1943ECu;
            goto label_1943ec;
        }
    }
    ctx->pc = 0x1943E4u;
label_1943e4:
    // 0x1943e4: 0x10000011
label_1943e8:
    if (ctx->pc == 0x1943E8u) {
        ctx->pc = 0x1943E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1943ECu;
        goto label_1943ec;
    }
    ctx->pc = 0x1943E4u;
    {
        const bool branch_taken_0x1943e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1943E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1943e4) {
            ctx->pc = 0x19442Cu;
            goto label_19442c;
        }
    }
    ctx->pc = 0x1943ECu;
label_1943ec:
    // 0x1943ec: 0x3c02002c
    ctx->pc = 0x1943ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1943f0:
    // 0x1943f0: 0x31880
    ctx->pc = 0x1943f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1943f4:
    // 0x1943f4: 0x2442d3f8
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956024));
label_1943f8:
    // 0x1943f8: 0x220202d
    ctx->pc = 0x1943f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1943fc:
    // 0x1943fc: 0x621821
    ctx->pc = 0x1943fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_194400:
    // 0x194400: 0x2a0302d
    ctx->pc = 0x194400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_194404:
    // 0x194404: 0x8c620000
    ctx->pc = 0x194404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_194408:
    // 0x194408: 0x40f809
label_19440c:
    if (ctx->pc == 0x19440Cu) {
        ctx->pc = 0x19440Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194410u;
        goto label_194410;
    }
    ctx->pc = 0x194408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194410u);
        ctx->pc = 0x19440Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194370u: goto label_194370;
            case 0x194374u: goto label_194374;
            case 0x194378u: goto label_194378;
            case 0x19437Cu: goto label_19437c;
            case 0x194380u: goto label_194380;
            case 0x194384u: goto label_194384;
            case 0x194388u: goto label_194388;
            case 0x19438Cu: goto label_19438c;
            case 0x194390u: goto label_194390;
            case 0x194394u: goto label_194394;
            case 0x194398u: goto label_194398;
            case 0x19439Cu: goto label_19439c;
            case 0x1943A0u: goto label_1943a0;
            case 0x1943A4u: goto label_1943a4;
            case 0x1943A8u: goto label_1943a8;
            case 0x1943ACu: goto label_1943ac;
            case 0x1943B0u: goto label_1943b0;
            case 0x1943B4u: goto label_1943b4;
            case 0x1943B8u: goto label_1943b8;
            case 0x1943BCu: goto label_1943bc;
            case 0x1943C0u: goto label_1943c0;
            case 0x1943C4u: goto label_1943c4;
            case 0x1943C8u: goto label_1943c8;
            case 0x1943CCu: goto label_1943cc;
            case 0x1943D0u: goto label_1943d0;
            case 0x1943D4u: goto label_1943d4;
            case 0x1943D8u: goto label_1943d8;
            case 0x1943DCu: goto label_1943dc;
            case 0x1943E0u: goto label_1943e0;
            case 0x1943E4u: goto label_1943e4;
            case 0x1943E8u: goto label_1943e8;
            case 0x1943ECu: goto label_1943ec;
            case 0x1943F0u: goto label_1943f0;
            case 0x1943F4u: goto label_1943f4;
            case 0x1943F8u: goto label_1943f8;
            case 0x1943FCu: goto label_1943fc;
            case 0x194400u: goto label_194400;
            case 0x194404u: goto label_194404;
            case 0x194408u: goto label_194408;
            case 0x19440Cu: goto label_19440c;
            case 0x194410u: goto label_194410;
            case 0x194414u: goto label_194414;
            case 0x194418u: goto label_194418;
            case 0x19441Cu: goto label_19441c;
            case 0x194420u: goto label_194420;
            case 0x194424u: goto label_194424;
            case 0x194428u: goto label_194428;
            case 0x19442Cu: goto label_19442c;
            case 0x194430u: goto label_194430;
            case 0x194434u: goto label_194434;
            case 0x194438u: goto label_194438;
            case 0x19443Cu: goto label_19443c;
            case 0x194440u: goto label_194440;
            case 0x194444u: goto label_194444;
            case 0x194448u: goto label_194448;
            case 0x19444Cu: goto label_19444c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194410u; }
            if (ctx->pc != 0x194410u) { return; }
        }
    }
    ctx->pc = 0x194410u;
label_194410:
    // 0x194410: 0x40182d
    ctx->pc = 0x194410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194414:
    // 0x194414: 0x10600004
label_194418:
    if (ctx->pc == 0x194418u) {
        ctx->pc = 0x194418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19441Cu;
        goto label_19441c;
    }
    ctx->pc = 0x194414u;
    {
        const bool branch_taken_0x194414 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x194418u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194414) {
            ctx->pc = 0x194428u;
            goto label_194428;
        }
    }
    ctx->pc = 0x19441Cu;
label_19441c:
    // 0x19441c: 0x54620002
label_194420:
    if (ctx->pc == 0x194420u) {
        ctx->pc = 0x194420u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194424u;
        goto label_194424;
    }
    ctx->pc = 0x19441Cu;
    {
        const bool branch_taken_0x19441c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19441c) {
            ctx->pc = 0x194420u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x194428u;
            goto label_194428;
        }
    }
    ctx->pc = 0x194424u;
label_194424:
    // 0x194424: 0xae900000
    ctx->pc = 0x194424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_194428:
    // 0x194428: 0x260102d
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19442c:
    // 0x19442c: 0xdfbf0080
    ctx->pc = 0x19442cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_194430:
    // 0x194430: 0xdfb50070
    ctx->pc = 0x194430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_194434:
    // 0x194434: 0xdfb40060
    ctx->pc = 0x194434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_194438:
    // 0x194438: 0xdfb30050
    ctx->pc = 0x194438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19443c:
    // 0x19443c: 0xdfb20040
    ctx->pc = 0x19443cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194440:
    // 0x194440: 0xdfb10030
    ctx->pc = 0x194440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194444:
    // 0x194444: 0xdfb00020
    ctx->pc = 0x194444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194448:
    // 0x194448: 0x3e00008
label_19444c:
    if (ctx->pc == 0x19444Cu) {
        ctx->pc = 0x19444Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x194450u;
        goto label_fallthrough_0x194448;
    }
    ctx->pc = 0x194448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19444Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194370u: goto label_194370;
            case 0x194374u: goto label_194374;
            case 0x194378u: goto label_194378;
            case 0x19437Cu: goto label_19437c;
            case 0x194380u: goto label_194380;
            case 0x194384u: goto label_194384;
            case 0x194388u: goto label_194388;
            case 0x19438Cu: goto label_19438c;
            case 0x194390u: goto label_194390;
            case 0x194394u: goto label_194394;
            case 0x194398u: goto label_194398;
            case 0x19439Cu: goto label_19439c;
            case 0x1943A0u: goto label_1943a0;
            case 0x1943A4u: goto label_1943a4;
            case 0x1943A8u: goto label_1943a8;
            case 0x1943ACu: goto label_1943ac;
            case 0x1943B0u: goto label_1943b0;
            case 0x1943B4u: goto label_1943b4;
            case 0x1943B8u: goto label_1943b8;
            case 0x1943BCu: goto label_1943bc;
            case 0x1943C0u: goto label_1943c0;
            case 0x1943C4u: goto label_1943c4;
            case 0x1943C8u: goto label_1943c8;
            case 0x1943CCu: goto label_1943cc;
            case 0x1943D0u: goto label_1943d0;
            case 0x1943D4u: goto label_1943d4;
            case 0x1943D8u: goto label_1943d8;
            case 0x1943DCu: goto label_1943dc;
            case 0x1943E0u: goto label_1943e0;
            case 0x1943E4u: goto label_1943e4;
            case 0x1943E8u: goto label_1943e8;
            case 0x1943ECu: goto label_1943ec;
            case 0x1943F0u: goto label_1943f0;
            case 0x1943F4u: goto label_1943f4;
            case 0x1943F8u: goto label_1943f8;
            case 0x1943FCu: goto label_1943fc;
            case 0x194400u: goto label_194400;
            case 0x194404u: goto label_194404;
            case 0x194408u: goto label_194408;
            case 0x19440Cu: goto label_19440c;
            case 0x194410u: goto label_194410;
            case 0x194414u: goto label_194414;
            case 0x194418u: goto label_194418;
            case 0x19441Cu: goto label_19441c;
            case 0x194420u: goto label_194420;
            case 0x194424u: goto label_194424;
            case 0x194428u: goto label_194428;
            case 0x19442Cu: goto label_19442c;
            case 0x194430u: goto label_194430;
            case 0x194434u: goto label_194434;
            case 0x194438u: goto label_194438;
            case 0x19443Cu: goto label_19443c;
            case 0x194440u: goto label_194440;
            case 0x194444u: goto label_194444;
            case 0x194448u: goto label_194448;
            case 0x19444Cu: goto label_19444c;
            default: break;
        }
        return;
    }
label_fallthrough_0x194448:
    ctx->pc = 0x194450u;
}
