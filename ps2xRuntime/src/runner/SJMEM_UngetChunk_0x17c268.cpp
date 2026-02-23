#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_UngetChunk
// Address: 0x17c268 - 0x17c364
void SJMEM_UngetChunk_0x17c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_UngetChunk");


    ctx->pc = 0x17c268u;

label_17c268:
    // 0x17c268: 0x27bdffc0
    ctx->pc = 0x17c268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17c26c:
    // 0x17c26c: 0xffb20020
    ctx->pc = 0x17c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c270:
    // 0x17c270: 0xffb10010
    ctx->pc = 0x17c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c274:
    // 0x17c274: 0xa0902d
    ctx->pc = 0x17c274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c278:
    // 0x17c278: 0xffb00000
    ctx->pc = 0x17c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c27c:
    // 0x17c27c: 0xc0882d
    ctx->pc = 0x17c27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c280:
    // 0x17c280: 0xffbf0030
    ctx->pc = 0x17c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17c284:
    // 0x17c284: 0x8e220004
    ctx->pc = 0x17c284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c288:
    // 0x17c288: 0x18400030
label_17c28c:
    if (ctx->pc == 0x17C28Cu) {
        ctx->pc = 0x17C28Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C290u;
        goto label_17c290;
    }
    ctx->pc = 0x17C288u;
    {
        const bool branch_taken_0x17c288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C28Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c288) {
            ctx->pc = 0x17C34Cu;
            goto label_17c34c;
        }
    }
    ctx->pc = 0x17C290u;
label_17c290:
    // 0x17c290: 0x8e220000
    ctx->pc = 0x17c290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17c294:
    // 0x17c294: 0x1040002e
label_17c298:
    if (ctx->pc == 0x17C298u) {
        ctx->pc = 0x17C298u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C29Cu;
        goto label_17c29c;
    }
    ctx->pc = 0x17C294u;
    {
        const bool branch_taken_0x17c294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C298u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c294) {
            ctx->pc = 0x17C350u;
            goto label_17c350;
        }
    }
    ctx->pc = 0x17C29Cu;
label_17c29c:
    // 0x17c29c: 0xc05efbc
label_17c2a0:
    if (ctx->pc == 0x17C2A0u) {
        ctx->pc = 0x17C2A4u;
        goto label_17c2a4;
    }
    ctx->pc = 0x17C29Cu;
    SET_GPR_U32(ctx, 31, 0x17C2A4u);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C2A4u; }
        else if (ctx->pc != 0x17C2A4u) { ctx->pc = 0x17C2A4u; }
    }
    if (ctx->pc != 0x17C2A4u) { return; }
    ctx->pc = 0x17C2A4u;
label_17c2a4:
    // 0x17c2a4: 0x12400015
label_17c2a8:
    if (ctx->pc == 0x17C2A8u) {
        ctx->pc = 0x17C2A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C2ACu;
        goto label_17c2ac;
    }
    ctx->pc = 0x17C2A4u;
    {
        const bool branch_taken_0x17c2a4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C2A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c2a4) {
            ctx->pc = 0x17C2FCu;
            goto label_17c2fc;
        }
    }
    ctx->pc = 0x17C2ACu;
label_17c2ac:
    // 0x17c2ac: 0x5642001b
label_17c2b0:
    if (ctx->pc == 0x17C2B0u) {
        ctx->pc = 0x17C2B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x17C2B4u;
        goto label_17c2b4;
    }
    ctx->pc = 0x17C2ACu;
    {
        const bool branch_taken_0x17c2ac = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c2ac) {
            ctx->pc = 0x17C2B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x17C31Cu;
            goto label_17c31c;
        }
    }
    ctx->pc = 0x17C2B4u;
label_17c2b4:
    // 0x17c2b4: 0x8e230004
    ctx->pc = 0x17c2b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c2b8:
    // 0x17c2b8: 0x2402ffff
    ctx->pc = 0x17c2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c2bc:
    // 0x17c2bc: 0x8e040010
    ctx->pc = 0x17c2bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c2c0:
    // 0x17c2c0: 0x8e05000c
    ctx->pc = 0x17c2c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c2c4:
    // 0x17c2c4: 0x832023
    ctx->pc = 0x17c2c4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17c2c8:
    // 0x17c2c8: 0x8e260000
    ctx->pc = 0x17c2c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17c2cc:
    // 0x17c2cc: 0x44102a
    ctx->pc = 0x17c2ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_17c2d0:
    // 0x17c2d0: 0x8e030014
    ctx->pc = 0x17c2d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c2d4:
    // 0x17c2d4: 0x2200a
    ctx->pc = 0x17c2d4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_17c2d8:
    // 0x17c2d8: 0x8e070018
    ctx->pc = 0x17c2d8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17c2dc:
    // 0x17c2dc: 0xae040010
    ctx->pc = 0x17c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_17c2e0:
    // 0x17c2e0: 0xc33023
    ctx->pc = 0x17c2e0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17c2e4:
    // 0x17c2e4: 0x8e220004
    ctx->pc = 0x17c2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c2e8:
    // 0x17c2e8: 0xa22821
    ctx->pc = 0x17c2e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17c2ec:
    // 0x17c2ec: 0xe5182a
    ctx->pc = 0x17c2ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
label_17c2f0:
    // 0x17c2f0: 0xe3280b
    ctx->pc = 0x17c2f0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
label_17c2f4:
    // 0x17c2f4: 0x1086000f
label_17c2f8:
    if (ctx->pc == 0x17C2F8u) {
        ctx->pc = 0x17C2F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x17C2FCu;
        goto label_17c2fc;
    }
    ctx->pc = 0x17C2F4u;
    {
        const bool branch_taken_0x17c2f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        ctx->pc = 0x17C2F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x17c2f4) {
            ctx->pc = 0x17C334u;
            goto label_17c334;
        }
    }
    ctx->pc = 0x17C2FCu;
label_17c2fc:
    // 0x17c2fc: 0x8e02001c
    ctx->pc = 0x17c2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c300:
    // 0x17c300: 0x1040000d
label_17c304:
    if (ctx->pc == 0x17C304u) {
        ctx->pc = 0x17C304u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C308u;
        goto label_17c308;
    }
    ctx->pc = 0x17C300u;
    {
        const bool branch_taken_0x17c300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C304u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c300) {
            ctx->pc = 0x17C338u;
            goto label_17c338;
        }
    }
    ctx->pc = 0x17C308u;
label_17c308:
    // 0x17c308: 0x8e040020
    ctx->pc = 0x17c308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c30c:
    // 0x17c30c: 0x40f809
label_17c310:
    if (ctx->pc == 0x17C310u) {
        ctx->pc = 0x17C310u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C314u;
        goto label_17c314;
    }
    ctx->pc = 0x17C30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C314u);
        ctx->pc = 0x17C310u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C268u: goto label_17c268;
            case 0x17C26Cu: goto label_17c26c;
            case 0x17C270u: goto label_17c270;
            case 0x17C274u: goto label_17c274;
            case 0x17C278u: goto label_17c278;
            case 0x17C27Cu: goto label_17c27c;
            case 0x17C280u: goto label_17c280;
            case 0x17C284u: goto label_17c284;
            case 0x17C288u: goto label_17c288;
            case 0x17C28Cu: goto label_17c28c;
            case 0x17C290u: goto label_17c290;
            case 0x17C294u: goto label_17c294;
            case 0x17C298u: goto label_17c298;
            case 0x17C29Cu: goto label_17c29c;
            case 0x17C2A0u: goto label_17c2a0;
            case 0x17C2A4u: goto label_17c2a4;
            case 0x17C2A8u: goto label_17c2a8;
            case 0x17C2ACu: goto label_17c2ac;
            case 0x17C2B0u: goto label_17c2b0;
            case 0x17C2B4u: goto label_17c2b4;
            case 0x17C2B8u: goto label_17c2b8;
            case 0x17C2BCu: goto label_17c2bc;
            case 0x17C2C0u: goto label_17c2c0;
            case 0x17C2C4u: goto label_17c2c4;
            case 0x17C2C8u: goto label_17c2c8;
            case 0x17C2CCu: goto label_17c2cc;
            case 0x17C2D0u: goto label_17c2d0;
            case 0x17C2D4u: goto label_17c2d4;
            case 0x17C2D8u: goto label_17c2d8;
            case 0x17C2DCu: goto label_17c2dc;
            case 0x17C2E0u: goto label_17c2e0;
            case 0x17C2E4u: goto label_17c2e4;
            case 0x17C2E8u: goto label_17c2e8;
            case 0x17C2ECu: goto label_17c2ec;
            case 0x17C2F0u: goto label_17c2f0;
            case 0x17C2F4u: goto label_17c2f4;
            case 0x17C2F8u: goto label_17c2f8;
            case 0x17C2FCu: goto label_17c2fc;
            case 0x17C300u: goto label_17c300;
            case 0x17C304u: goto label_17c304;
            case 0x17C308u: goto label_17c308;
            case 0x17C30Cu: goto label_17c30c;
            case 0x17C310u: goto label_17c310;
            case 0x17C314u: goto label_17c314;
            case 0x17C318u: goto label_17c318;
            case 0x17C31Cu: goto label_17c31c;
            case 0x17C320u: goto label_17c320;
            case 0x17C324u: goto label_17c324;
            case 0x17C328u: goto label_17c328;
            case 0x17C32Cu: goto label_17c32c;
            case 0x17C330u: goto label_17c330;
            case 0x17C334u: goto label_17c334;
            case 0x17C338u: goto label_17c338;
            case 0x17C33Cu: goto label_17c33c;
            case 0x17C340u: goto label_17c340;
            case 0x17C344u: goto label_17c344;
            case 0x17C348u: goto label_17c348;
            case 0x17C34Cu: goto label_17c34c;
            case 0x17C350u: goto label_17c350;
            case 0x17C354u: goto label_17c354;
            case 0x17C358u: goto label_17c358;
            case 0x17C35Cu: goto label_17c35c;
            case 0x17C360u: goto label_17c360;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C314u; }
            if (ctx->pc != 0x17C314u) { return; }
        }
    }
    ctx->pc = 0x17C314u;
label_17c314:
    // 0x17c314: 0x10000008
label_17c318:
    if (ctx->pc == 0x17C318u) {
        ctx->pc = 0x17C318u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C31Cu;
        goto label_17c31c;
    }
    ctx->pc = 0x17C314u;
    {
        const bool branch_taken_0x17c314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C318u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c314) {
            ctx->pc = 0x17C338u;
            goto label_17c338;
        }
    }
    ctx->pc = 0x17C31Cu;
label_17c31c:
    // 0x17c31c: 0xae200000
    ctx->pc = 0x17c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17c320:
    // 0x17c320: 0x10400004
label_17c324:
    if (ctx->pc == 0x17C324u) {
        ctx->pc = 0x17C324u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C328u;
        goto label_17c328;
    }
    ctx->pc = 0x17C320u;
    {
        const bool branch_taken_0x17c320 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C324u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c320) {
            ctx->pc = 0x17C334u;
            goto label_17c334;
        }
    }
    ctx->pc = 0x17C328u;
label_17c328:
    // 0x17c328: 0x8e040020
    ctx->pc = 0x17c328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c32c:
    // 0x17c32c: 0x40f809
label_17c330:
    if (ctx->pc == 0x17C330u) {
        ctx->pc = 0x17C330u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C334u;
        goto label_17c334;
    }
    ctx->pc = 0x17C32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C334u);
        ctx->pc = 0x17C330u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C268u: goto label_17c268;
            case 0x17C26Cu: goto label_17c26c;
            case 0x17C270u: goto label_17c270;
            case 0x17C274u: goto label_17c274;
            case 0x17C278u: goto label_17c278;
            case 0x17C27Cu: goto label_17c27c;
            case 0x17C280u: goto label_17c280;
            case 0x17C284u: goto label_17c284;
            case 0x17C288u: goto label_17c288;
            case 0x17C28Cu: goto label_17c28c;
            case 0x17C290u: goto label_17c290;
            case 0x17C294u: goto label_17c294;
            case 0x17C298u: goto label_17c298;
            case 0x17C29Cu: goto label_17c29c;
            case 0x17C2A0u: goto label_17c2a0;
            case 0x17C2A4u: goto label_17c2a4;
            case 0x17C2A8u: goto label_17c2a8;
            case 0x17C2ACu: goto label_17c2ac;
            case 0x17C2B0u: goto label_17c2b0;
            case 0x17C2B4u: goto label_17c2b4;
            case 0x17C2B8u: goto label_17c2b8;
            case 0x17C2BCu: goto label_17c2bc;
            case 0x17C2C0u: goto label_17c2c0;
            case 0x17C2C4u: goto label_17c2c4;
            case 0x17C2C8u: goto label_17c2c8;
            case 0x17C2CCu: goto label_17c2cc;
            case 0x17C2D0u: goto label_17c2d0;
            case 0x17C2D4u: goto label_17c2d4;
            case 0x17C2D8u: goto label_17c2d8;
            case 0x17C2DCu: goto label_17c2dc;
            case 0x17C2E0u: goto label_17c2e0;
            case 0x17C2E4u: goto label_17c2e4;
            case 0x17C2E8u: goto label_17c2e8;
            case 0x17C2ECu: goto label_17c2ec;
            case 0x17C2F0u: goto label_17c2f0;
            case 0x17C2F4u: goto label_17c2f4;
            case 0x17C2F8u: goto label_17c2f8;
            case 0x17C2FCu: goto label_17c2fc;
            case 0x17C300u: goto label_17c300;
            case 0x17C304u: goto label_17c304;
            case 0x17C308u: goto label_17c308;
            case 0x17C30Cu: goto label_17c30c;
            case 0x17C310u: goto label_17c310;
            case 0x17C314u: goto label_17c314;
            case 0x17C318u: goto label_17c318;
            case 0x17C31Cu: goto label_17c31c;
            case 0x17C320u: goto label_17c320;
            case 0x17C324u: goto label_17c324;
            case 0x17C328u: goto label_17c328;
            case 0x17C32Cu: goto label_17c32c;
            case 0x17C330u: goto label_17c330;
            case 0x17C334u: goto label_17c334;
            case 0x17C338u: goto label_17c338;
            case 0x17C33Cu: goto label_17c33c;
            case 0x17C340u: goto label_17c340;
            case 0x17C344u: goto label_17c344;
            case 0x17C348u: goto label_17c348;
            case 0x17C34Cu: goto label_17c34c;
            case 0x17C350u: goto label_17c350;
            case 0x17C354u: goto label_17c354;
            case 0x17C358u: goto label_17c358;
            case 0x17C35Cu: goto label_17c35c;
            case 0x17C360u: goto label_17c360;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C334u; }
            if (ctx->pc != 0x17C334u) { return; }
        }
    }
    ctx->pc = 0x17C334u;
label_17c334:
    // 0x17c334: 0xdfbf0030
    ctx->pc = 0x17c334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c338:
    // 0x17c338: 0xdfb20020
    ctx->pc = 0x17c338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c33c:
    // 0x17c33c: 0xdfb10010
    ctx->pc = 0x17c33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c340:
    // 0x17c340: 0xdfb00000
    ctx->pc = 0x17c340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c344:
    // 0x17c344: 0x805efc2
label_17c348:
    if (ctx->pc == 0x17C348u) {
        ctx->pc = 0x17C348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C34Cu;
        goto label_17c34c;
    }
    ctx->pc = 0x17C344u;
    ctx->pc = 0x17C348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17C34Cu;
label_17c34c:
    // 0x17c34c: 0xdfbf0030
    ctx->pc = 0x17c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17c350:
    // 0x17c350: 0xdfb20020
    ctx->pc = 0x17c350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c354:
    // 0x17c354: 0xdfb10010
    ctx->pc = 0x17c354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c358:
    // 0x17c358: 0xdfb00000
    ctx->pc = 0x17c358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c35c:
    // 0x17c35c: 0x3e00008
label_17c360:
    if (ctx->pc == 0x17C360u) {
        ctx->pc = 0x17C360u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17C364u;
        goto label_fallthrough_0x17c35c;
    }
    ctx->pc = 0x17C35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C360u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C268u: goto label_17c268;
            case 0x17C26Cu: goto label_17c26c;
            case 0x17C270u: goto label_17c270;
            case 0x17C274u: goto label_17c274;
            case 0x17C278u: goto label_17c278;
            case 0x17C27Cu: goto label_17c27c;
            case 0x17C280u: goto label_17c280;
            case 0x17C284u: goto label_17c284;
            case 0x17C288u: goto label_17c288;
            case 0x17C28Cu: goto label_17c28c;
            case 0x17C290u: goto label_17c290;
            case 0x17C294u: goto label_17c294;
            case 0x17C298u: goto label_17c298;
            case 0x17C29Cu: goto label_17c29c;
            case 0x17C2A0u: goto label_17c2a0;
            case 0x17C2A4u: goto label_17c2a4;
            case 0x17C2A8u: goto label_17c2a8;
            case 0x17C2ACu: goto label_17c2ac;
            case 0x17C2B0u: goto label_17c2b0;
            case 0x17C2B4u: goto label_17c2b4;
            case 0x17C2B8u: goto label_17c2b8;
            case 0x17C2BCu: goto label_17c2bc;
            case 0x17C2C0u: goto label_17c2c0;
            case 0x17C2C4u: goto label_17c2c4;
            case 0x17C2C8u: goto label_17c2c8;
            case 0x17C2CCu: goto label_17c2cc;
            case 0x17C2D0u: goto label_17c2d0;
            case 0x17C2D4u: goto label_17c2d4;
            case 0x17C2D8u: goto label_17c2d8;
            case 0x17C2DCu: goto label_17c2dc;
            case 0x17C2E0u: goto label_17c2e0;
            case 0x17C2E4u: goto label_17c2e4;
            case 0x17C2E8u: goto label_17c2e8;
            case 0x17C2ECu: goto label_17c2ec;
            case 0x17C2F0u: goto label_17c2f0;
            case 0x17C2F4u: goto label_17c2f4;
            case 0x17C2F8u: goto label_17c2f8;
            case 0x17C2FCu: goto label_17c2fc;
            case 0x17C300u: goto label_17c300;
            case 0x17C304u: goto label_17c304;
            case 0x17C308u: goto label_17c308;
            case 0x17C30Cu: goto label_17c30c;
            case 0x17C310u: goto label_17c310;
            case 0x17C314u: goto label_17c314;
            case 0x17C318u: goto label_17c318;
            case 0x17C31Cu: goto label_17c31c;
            case 0x17C320u: goto label_17c320;
            case 0x17C324u: goto label_17c324;
            case 0x17C328u: goto label_17c328;
            case 0x17C32Cu: goto label_17c32c;
            case 0x17C330u: goto label_17c330;
            case 0x17C334u: goto label_17c334;
            case 0x17C338u: goto label_17c338;
            case 0x17C33Cu: goto label_17c33c;
            case 0x17C340u: goto label_17c340;
            case 0x17C344u: goto label_17c344;
            case 0x17C348u: goto label_17c348;
            case 0x17C34Cu: goto label_17c34c;
            case 0x17C350u: goto label_17c350;
            case 0x17C354u: goto label_17c354;
            case 0x17C358u: goto label_17c358;
            case 0x17C35Cu: goto label_17c35c;
            case 0x17C360u: goto label_17c360;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c35c:
    ctx->pc = 0x17C364u;
}
