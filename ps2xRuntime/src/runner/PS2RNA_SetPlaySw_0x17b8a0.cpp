#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetPlaySw
// Address: 0x17b8a0 - 0x17b948
void PS2RNA_SetPlaySw_0x17b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetPlaySw");


    ctx->pc = 0x17b8a0u;

label_17b8a0:
    // 0x17b8a0: 0x27bdffb0
    ctx->pc = 0x17b8a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17b8a4:
    // 0x17b8a4: 0xffb20020
    ctx->pc = 0x17b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17b8a8:
    // 0x17b8a8: 0xffbf0040
    ctx->pc = 0x17b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17b8ac:
    // 0x17b8ac: 0x80902d
    ctx->pc = 0x17b8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b8b0:
    // 0x17b8b0: 0xffb30030
    ctx->pc = 0x17b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17b8b4:
    // 0x17b8b4: 0xffb10010
    ctx->pc = 0x17b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17b8b8:
    // 0x17b8b8: 0xffb00000
    ctx->pc = 0x17b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17b8bc:
    // 0x17b8bc: 0x14a0001b
label_17b8c0:
    if (ctx->pc == 0x17B8C0u) {
        ctx->pc = 0x17B8C0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x17B8C4u;
        goto label_17b8c4;
    }
    ctx->pc = 0x17B8BCu;
    {
        const bool branch_taken_0x17b8bc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B8C0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x17b8bc) {
            ctx->pc = 0x17B92Cu;
            goto label_17b92c;
        }
    }
    ctx->pc = 0x17B8C4u;
label_17b8c4:
    // 0x17b8c4: 0x8e420004
    ctx->pc = 0x17b8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17b8c8:
    // 0x17b8c8: 0x18400018
label_17b8cc:
    if (ctx->pc == 0x17B8CCu) {
        ctx->pc = 0x17B8CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B8D0u;
        goto label_17b8d0;
    }
    ctx->pc = 0x17B8C8u;
    {
        const bool branch_taken_0x17b8c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17B8CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b8c8) {
            ctx->pc = 0x17B92Cu;
            goto label_17b92c;
        }
    }
    ctx->pc = 0x17B8D0u;
label_17b8d0:
    // 0x17b8d0: 0x26530008
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 8));
label_17b8d4:
    // 0x17b8d4: 0x118080
    ctx->pc = 0x17b8d4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
label_17b8d8:
    // 0x17b8d8: 0x2708021
    ctx->pc = 0x17b8d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_17b8dc:
    // 0x17b8dc: 0x8e020000
    ctx->pc = 0x17b8dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b8e0:
    // 0x17b8e0: 0x8c440008
    ctx->pc = 0x17b8e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17b8e4:
    // 0x17b8e4: 0x8c830000
    ctx->pc = 0x17b8e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b8e8:
    // 0x17b8e8: 0x8c620014
    ctx->pc = 0x17b8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17b8ec:
    // 0x17b8ec: 0x40f809
label_17b8f0:
    if (ctx->pc == 0x17B8F0u) {
        ctx->pc = 0x17B8F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x17B8F4u;
        goto label_17b8f4;
    }
    ctx->pc = 0x17B8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B8F4u);
        ctx->pc = 0x17B8F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B8A0u: goto label_17b8a0;
            case 0x17B8A4u: goto label_17b8a4;
            case 0x17B8A8u: goto label_17b8a8;
            case 0x17B8ACu: goto label_17b8ac;
            case 0x17B8B0u: goto label_17b8b0;
            case 0x17B8B4u: goto label_17b8b4;
            case 0x17B8B8u: goto label_17b8b8;
            case 0x17B8BCu: goto label_17b8bc;
            case 0x17B8C0u: goto label_17b8c0;
            case 0x17B8C4u: goto label_17b8c4;
            case 0x17B8C8u: goto label_17b8c8;
            case 0x17B8CCu: goto label_17b8cc;
            case 0x17B8D0u: goto label_17b8d0;
            case 0x17B8D4u: goto label_17b8d4;
            case 0x17B8D8u: goto label_17b8d8;
            case 0x17B8DCu: goto label_17b8dc;
            case 0x17B8E0u: goto label_17b8e0;
            case 0x17B8E4u: goto label_17b8e4;
            case 0x17B8E8u: goto label_17b8e8;
            case 0x17B8ECu: goto label_17b8ec;
            case 0x17B8F0u: goto label_17b8f0;
            case 0x17B8F4u: goto label_17b8f4;
            case 0x17B8F8u: goto label_17b8f8;
            case 0x17B8FCu: goto label_17b8fc;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B908u: goto label_17b908;
            case 0x17B90Cu: goto label_17b90c;
            case 0x17B910u: goto label_17b910;
            case 0x17B914u: goto label_17b914;
            case 0x17B918u: goto label_17b918;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B920u: goto label_17b920;
            case 0x17B924u: goto label_17b924;
            case 0x17B928u: goto label_17b928;
            case 0x17B92Cu: goto label_17b92c;
            case 0x17B930u: goto label_17b930;
            case 0x17B934u: goto label_17b934;
            case 0x17B938u: goto label_17b938;
            case 0x17B93Cu: goto label_17b93c;
            case 0x17B940u: goto label_17b940;
            case 0x17B944u: goto label_17b944;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B8F4u; }
            if (ctx->pc != 0x17B8F4u) { return; }
        }
    }
    ctx->pc = 0x17B8F4u;
label_17b8f4:
    // 0x17b8f4: 0x8e020000
    ctx->pc = 0x17b8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b8f8:
    // 0x17b8f8: 0x8c440008
    ctx->pc = 0x17b8f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17b8fc:
    // 0x17b8fc: 0x24460010
    ctx->pc = 0x17b8fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 16));
label_17b900:
    // 0x17b900: 0x8c830000
    ctx->pc = 0x17b900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b904:
    // 0x17b904: 0x8c620020
    ctx->pc = 0x17b904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17b908:
    // 0x17b908: 0x40f809
label_17b90c:
    if (ctx->pc == 0x17B90Cu) {
        ctx->pc = 0x17B90Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B910u;
        goto label_17b910;
    }
    ctx->pc = 0x17B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B910u);
        ctx->pc = 0x17B90Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B8A0u: goto label_17b8a0;
            case 0x17B8A4u: goto label_17b8a4;
            case 0x17B8A8u: goto label_17b8a8;
            case 0x17B8ACu: goto label_17b8ac;
            case 0x17B8B0u: goto label_17b8b0;
            case 0x17B8B4u: goto label_17b8b4;
            case 0x17B8B8u: goto label_17b8b8;
            case 0x17B8BCu: goto label_17b8bc;
            case 0x17B8C0u: goto label_17b8c0;
            case 0x17B8C4u: goto label_17b8c4;
            case 0x17B8C8u: goto label_17b8c8;
            case 0x17B8CCu: goto label_17b8cc;
            case 0x17B8D0u: goto label_17b8d0;
            case 0x17B8D4u: goto label_17b8d4;
            case 0x17B8D8u: goto label_17b8d8;
            case 0x17B8DCu: goto label_17b8dc;
            case 0x17B8E0u: goto label_17b8e0;
            case 0x17B8E4u: goto label_17b8e4;
            case 0x17B8E8u: goto label_17b8e8;
            case 0x17B8ECu: goto label_17b8ec;
            case 0x17B8F0u: goto label_17b8f0;
            case 0x17B8F4u: goto label_17b8f4;
            case 0x17B8F8u: goto label_17b8f8;
            case 0x17B8FCu: goto label_17b8fc;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B908u: goto label_17b908;
            case 0x17B90Cu: goto label_17b90c;
            case 0x17B910u: goto label_17b910;
            case 0x17B914u: goto label_17b914;
            case 0x17B918u: goto label_17b918;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B920u: goto label_17b920;
            case 0x17B924u: goto label_17b924;
            case 0x17B928u: goto label_17b928;
            case 0x17B92Cu: goto label_17b92c;
            case 0x17B930u: goto label_17b930;
            case 0x17B934u: goto label_17b934;
            case 0x17B938u: goto label_17b938;
            case 0x17B93Cu: goto label_17b93c;
            case 0x17B940u: goto label_17b940;
            case 0x17B944u: goto label_17b944;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B910u; }
            if (ctx->pc != 0x17B910u) { return; }
        }
    }
    ctx->pc = 0x17B910u;
label_17b910:
    // 0x17b910: 0x8e030000
    ctx->pc = 0x17b910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b914:
    // 0x17b914: 0xc05f52a
label_17b918:
    if (ctx->pc == 0x17B918u) {
        ctx->pc = 0x17B918u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x17B91Cu;
        goto label_17b91c;
    }
    ctx->pc = 0x17B914u;
    SET_GPR_U32(ctx, 31, 0x17B91Cu);
    ctx->pc = 0x17B918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x17D4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Reset_0x17d4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B91Cu; }
        else if (ctx->pc != 0x17B91Cu) { ctx->pc = 0x17B91Cu; }
    }
    if (ctx->pc != 0x17B91Cu) { return; }
    ctx->pc = 0x17B91Cu;
label_17b91c:
    // 0x17b91c: 0x8e420004
    ctx->pc = 0x17b91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17b920:
    // 0x17b920: 0x222102a
    ctx->pc = 0x17b920u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_17b924:
    // 0x17b924: 0x1440ffec
label_17b928:
    if (ctx->pc == 0x17B928u) {
        ctx->pc = 0x17B928u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x17B92Cu;
        goto label_17b92c;
    }
    ctx->pc = 0x17B924u;
    {
        const bool branch_taken_0x17b924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B928u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x17b924) {
            ctx->pc = 0x17B8D8u;
            goto label_17b8d8;
        }
    }
    ctx->pc = 0x17B92Cu;
label_17b92c:
    // 0x17b92c: 0xdfbf0040
    ctx->pc = 0x17b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17b930:
    // 0x17b930: 0xdfb30030
    ctx->pc = 0x17b930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b934:
    // 0x17b934: 0xdfb20020
    ctx->pc = 0x17b934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b938:
    // 0x17b938: 0xdfb10010
    ctx->pc = 0x17b938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b93c:
    // 0x17b93c: 0xdfb00000
    ctx->pc = 0x17b93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b940:
    // 0x17b940: 0x3e00008
label_17b944:
    if (ctx->pc == 0x17B944u) {
        ctx->pc = 0x17B944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17B948u;
        goto label_fallthrough_0x17b940;
    }
    ctx->pc = 0x17B940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B8A0u: goto label_17b8a0;
            case 0x17B8A4u: goto label_17b8a4;
            case 0x17B8A8u: goto label_17b8a8;
            case 0x17B8ACu: goto label_17b8ac;
            case 0x17B8B0u: goto label_17b8b0;
            case 0x17B8B4u: goto label_17b8b4;
            case 0x17B8B8u: goto label_17b8b8;
            case 0x17B8BCu: goto label_17b8bc;
            case 0x17B8C0u: goto label_17b8c0;
            case 0x17B8C4u: goto label_17b8c4;
            case 0x17B8C8u: goto label_17b8c8;
            case 0x17B8CCu: goto label_17b8cc;
            case 0x17B8D0u: goto label_17b8d0;
            case 0x17B8D4u: goto label_17b8d4;
            case 0x17B8D8u: goto label_17b8d8;
            case 0x17B8DCu: goto label_17b8dc;
            case 0x17B8E0u: goto label_17b8e0;
            case 0x17B8E4u: goto label_17b8e4;
            case 0x17B8E8u: goto label_17b8e8;
            case 0x17B8ECu: goto label_17b8ec;
            case 0x17B8F0u: goto label_17b8f0;
            case 0x17B8F4u: goto label_17b8f4;
            case 0x17B8F8u: goto label_17b8f8;
            case 0x17B8FCu: goto label_17b8fc;
            case 0x17B900u: goto label_17b900;
            case 0x17B904u: goto label_17b904;
            case 0x17B908u: goto label_17b908;
            case 0x17B90Cu: goto label_17b90c;
            case 0x17B910u: goto label_17b910;
            case 0x17B914u: goto label_17b914;
            case 0x17B918u: goto label_17b918;
            case 0x17B91Cu: goto label_17b91c;
            case 0x17B920u: goto label_17b920;
            case 0x17B924u: goto label_17b924;
            case 0x17B928u: goto label_17b928;
            case 0x17B92Cu: goto label_17b92c;
            case 0x17B930u: goto label_17b930;
            case 0x17B934u: goto label_17b934;
            case 0x17B938u: goto label_17b938;
            case 0x17B93Cu: goto label_17b93c;
            case 0x17B940u: goto label_17b940;
            case 0x17B944u: goto label_17b944;
            default: break;
        }
        return;
    }
label_fallthrough_0x17b940:
    ctx->pc = 0x17B948u;
}
