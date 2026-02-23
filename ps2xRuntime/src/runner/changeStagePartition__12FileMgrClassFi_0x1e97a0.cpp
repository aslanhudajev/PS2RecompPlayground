#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeStagePartition__12FileMgrClassFi
// Address: 0x1e97a0 - 0x1e98ec
void changeStagePartition__12FileMgrClassFi_0x1e97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeStagePartition__12FileMgrClassFi");


    ctx->pc = 0x1e97a0u;

label_1e97a0:
    // 0x1e97a0: 0x27bdffd0
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e97a4:
    // 0x1e97a4: 0x7fbf0020
    ctx->pc = 0x1e97a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1e97a8:
    // 0x1e97a8: 0x7fb10010
    ctx->pc = 0x1e97a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e97ac:
    // 0x1e97ac: 0x2403ffff
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e97b0:
    // 0x1e97b0: 0x7fb00000
    ctx->pc = 0x1e97b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e97b4:
    // 0x1e97b4: 0x14a3001e
label_1e97b8:
    if (ctx->pc == 0x1E97B8u) {
        ctx->pc = 0x1E97B8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E97BCu;
        goto label_1e97bc;
    }
    ctx->pc = 0x1E97B4u;
    {
        const bool branch_taken_0x1e97b4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E97B8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e97b4) {
            ctx->pc = 0x1E9830u;
            goto label_1e9830;
        }
    }
    ctx->pc = 0x1E97BCu;
label_1e97bc:
    // 0x1e97bc: 0x3c010050
    ctx->pc = 0x1e97bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e97c0:
    // 0x1e97c0: 0x8423e504
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1e97c4:
    // 0x1e97c4: 0x2c610018
    ctx->pc = 0x1e97c4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 24));
label_1e97c8:
    // 0x1e97c8: 0x10200018
label_1e97cc:
    if (ctx->pc == 0x1E97CCu) {
        ctx->pc = 0x1E97CCu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1E97D0u;
        goto label_1e97d0;
    }
    ctx->pc = 0x1E97C8u;
    {
        const bool branch_taken_0x1e97c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E97CCu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1e97c8) {
            ctx->pc = 0x1E982Cu;
            goto label_1e982c;
        }
    }
    ctx->pc = 0x1E97D0u;
label_1e97d0:
    // 0x1e97d0: 0x3c03002c
    ctx->pc = 0x1e97d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_1e97d4:
    // 0x1e97d4: 0x2463f6f0
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964976));
label_1e97d8:
    // 0x1e97d8: 0x831821
    ctx->pc = 0x1e97d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e97dc:
    // 0x1e97dc: 0x8c630000
    ctx->pc = 0x1e97dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e97e0:
    // 0x1e97e0: 0x600008
label_1e97e4:
    if (ctx->pc == 0x1E97E4u) {
        ctx->pc = 0x1E97E8u;
        goto label_1e97e8;
    }
    ctx->pc = 0x1E97E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E97A0u: goto label_1e97a0;
            case 0x1E97A4u: goto label_1e97a4;
            case 0x1E97A8u: goto label_1e97a8;
            case 0x1E97ACu: goto label_1e97ac;
            case 0x1E97B0u: goto label_1e97b0;
            case 0x1E97B4u: goto label_1e97b4;
            case 0x1E97B8u: goto label_1e97b8;
            case 0x1E97BCu: goto label_1e97bc;
            case 0x1E97C0u: goto label_1e97c0;
            case 0x1E97C4u: goto label_1e97c4;
            case 0x1E97C8u: goto label_1e97c8;
            case 0x1E97CCu: goto label_1e97cc;
            case 0x1E97D0u: goto label_1e97d0;
            case 0x1E97D4u: goto label_1e97d4;
            case 0x1E97D8u: goto label_1e97d8;
            case 0x1E97DCu: goto label_1e97dc;
            case 0x1E97E0u: goto label_1e97e0;
            case 0x1E97E4u: goto label_1e97e4;
            case 0x1E97E8u: goto label_1e97e8;
            case 0x1E97ECu: goto label_1e97ec;
            case 0x1E97F0u: goto label_1e97f0;
            case 0x1E97F4u: goto label_1e97f4;
            case 0x1E97F8u: goto label_1e97f8;
            case 0x1E97FCu: goto label_1e97fc;
            case 0x1E9800u: goto label_1e9800;
            case 0x1E9804u: goto label_1e9804;
            case 0x1E9808u: goto label_1e9808;
            case 0x1E980Cu: goto label_1e980c;
            case 0x1E9810u: goto label_1e9810;
            case 0x1E9814u: goto label_1e9814;
            case 0x1E9818u: goto label_1e9818;
            case 0x1E981Cu: goto label_1e981c;
            case 0x1E9820u: goto label_1e9820;
            case 0x1E9824u: goto label_1e9824;
            case 0x1E9828u: goto label_1e9828;
            case 0x1E982Cu: goto label_1e982c;
            case 0x1E9830u: goto label_1e9830;
            case 0x1E9834u: goto label_1e9834;
            case 0x1E9838u: goto label_1e9838;
            case 0x1E983Cu: goto label_1e983c;
            case 0x1E9840u: goto label_1e9840;
            case 0x1E9844u: goto label_1e9844;
            case 0x1E9848u: goto label_1e9848;
            case 0x1E984Cu: goto label_1e984c;
            case 0x1E9850u: goto label_1e9850;
            case 0x1E9854u: goto label_1e9854;
            case 0x1E9858u: goto label_1e9858;
            case 0x1E985Cu: goto label_1e985c;
            case 0x1E9860u: goto label_1e9860;
            case 0x1E9864u: goto label_1e9864;
            case 0x1E9868u: goto label_1e9868;
            case 0x1E986Cu: goto label_1e986c;
            case 0x1E9870u: goto label_1e9870;
            case 0x1E9874u: goto label_1e9874;
            case 0x1E9878u: goto label_1e9878;
            case 0x1E987Cu: goto label_1e987c;
            case 0x1E9880u: goto label_1e9880;
            case 0x1E9884u: goto label_1e9884;
            case 0x1E9888u: goto label_1e9888;
            case 0x1E988Cu: goto label_1e988c;
            case 0x1E9890u: goto label_1e9890;
            case 0x1E9894u: goto label_1e9894;
            case 0x1E9898u: goto label_1e9898;
            case 0x1E989Cu: goto label_1e989c;
            case 0x1E98A0u: goto label_1e98a0;
            case 0x1E98A4u: goto label_1e98a4;
            case 0x1E98A8u: goto label_1e98a8;
            case 0x1E98ACu: goto label_1e98ac;
            case 0x1E98B0u: goto label_1e98b0;
            case 0x1E98B4u: goto label_1e98b4;
            case 0x1E98B8u: goto label_1e98b8;
            case 0x1E98BCu: goto label_1e98bc;
            case 0x1E98C0u: goto label_1e98c0;
            case 0x1E98C4u: goto label_1e98c4;
            case 0x1E98C8u: goto label_1e98c8;
            case 0x1E98CCu: goto label_1e98cc;
            case 0x1E98D0u: goto label_1e98d0;
            case 0x1E98D4u: goto label_1e98d4;
            case 0x1E98D8u: goto label_1e98d8;
            case 0x1E98DCu: goto label_1e98dc;
            case 0x1E98E0u: goto label_1e98e0;
            case 0x1E98E4u: goto label_1e98e4;
            case 0x1E98E8u: goto label_1e98e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E97E8u;
label_1e97e8:
    // 0x1e97e8: 0x3c030027
    ctx->pc = 0x1e97e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_1e97ec:
    // 0x1e97ec: 0x2463c000
    ctx->pc = 0x1e97ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950912));
label_1e97f0:
    // 0x1e97f0: 0x641821
    ctx->pc = 0x1e97f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e97f4:
    // 0x1e97f4: 0x1000000e
label_1e97f8:
    if (ctx->pc == 0x1E97F8u) {
        ctx->pc = 0x1E97F8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1E97FCu;
        goto label_1e97fc;
    }
    ctx->pc = 0x1E97F4u;
    {
        const bool branch_taken_0x1e97f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E97F8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1e97f4) {
            ctx->pc = 0x1E9830u;
            goto label_1e9830;
        }
    }
    ctx->pc = 0x1E97FCu;
label_1e97fc:
    // 0x1e97fc: 0x3c020050
    ctx->pc = 0x1e97fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e9800:
    // 0x1e9800: 0xc2839a0
label_1e9804:
    if (ctx->pc == 0x1E9804u) {
        ctx->pc = 0x1E9804u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
        ctx->pc = 0x1E9808u;
        goto label_1e9808;
    }
    ctx->pc = 0x1E9800u;
    SET_GPR_U32(ctx, 31, 0x1E9808u);
    ctx->pc = 0x1E9804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E680u;
    {
        const uint32_t __entryPc = ctx->pc;
        getStartPtid__12DemoMgrClassFv_0xa0e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9808u; }
        else if (ctx->pc != 0x1E9808u) { ctx->pc = 0x1E9808u; }
    }
    if (ctx->pc != 0x1E9808u) { return; }
    ctx->pc = 0x1E9808u;
label_1e9808:
    // 0x1e9808: 0x10000009
label_1e980c:
    if (ctx->pc == 0x1E980Cu) {
        ctx->pc = 0x1E980Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E9810u;
        goto label_1e9810;
    }
    ctx->pc = 0x1E9808u;
    {
        const bool branch_taken_0x1e9808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E980Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e9808) {
            ctx->pc = 0x1E9830u;
            goto label_1e9830;
        }
    }
    ctx->pc = 0x1E9810u;
label_1e9810:
    // 0x1e9810: 0x83848ba8
    ctx->pc = 0x1e9810u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1e9814:
    // 0x1e9814: 0x3c030027
    ctx->pc = 0x1e9814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_1e9818:
    // 0x1e9818: 0x2463bfe0
    ctx->pc = 0x1e9818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950880));
label_1e981c:
    // 0x1e981c: 0x42080
    ctx->pc = 0x1e981cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_1e9820:
    // 0x1e9820: 0x641821
    ctx->pc = 0x1e9820u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e9824:
    // 0x1e9824: 0x10000002
label_1e9828:
    if (ctx->pc == 0x1E9828u) {
        ctx->pc = 0x1E9828u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1E982Cu;
        goto label_1e982c;
    }
    ctx->pc = 0x1E9824u;
    {
        const bool branch_taken_0x1e9824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9828u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1e9824) {
            ctx->pc = 0x1E9830u;
            goto label_1e9830;
        }
    }
    ctx->pc = 0x1E982Cu;
label_1e982c:
    // 0x1e982c: 0xd
    ctx->pc = 0x1e982cu;
    runtime->handleBreak(rdram, ctx);
label_1e9830:
    // 0x1e9830: 0x8223010c
    ctx->pc = 0x1e9830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_1e9834:
    // 0x1e9834: 0x10650028
label_1e9838:
    if (ctx->pc == 0x1E9838u) {
        ctx->pc = 0x1E983Cu;
        goto label_1e983c;
    }
    ctx->pc = 0x1E9834u;
    {
        const bool branch_taken_0x1e9834 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1e9834) {
            ctx->pc = 0x1E98D8u;
            goto label_1e98d8;
        }
    }
    ctx->pc = 0x1E983Cu;
label_1e983c:
    // 0x1e983c: 0xa225010c
    ctx->pc = 0x1e983cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 5));
label_1e9840:
    // 0x1e9840: 0x3c02004a
    ctx->pc = 0x1e9840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_1e9844:
    // 0x1e9844: 0x2451d070
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294955120));
label_1e9848:
    // 0x1e9848: 0x24020015
    ctx->pc = 0x1e9848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
label_1e984c:
    // 0x1e984c: 0x14a20004
label_1e9850:
    if (ctx->pc == 0x1E9850u) {
        ctx->pc = 0x1E9850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        ctx->pc = 0x1E9854u;
        goto label_1e9854;
    }
    ctx->pc = 0x1E984Cu;
    {
        const bool branch_taken_0x1e984c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E9850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x1e984c) {
            ctx->pc = 0x1E9860u;
            goto label_1e9860;
        }
    }
    ctx->pc = 0x1E9854u;
label_1e9854:
    // 0x1e9854: 0xd
    ctx->pc = 0x1e9854u;
    runtime->handleBreak(rdram, ctx);
label_1e9858:
    // 0x1e9858: 0x1000000c
label_1e985c:
    if (ctx->pc == 0x1E985Cu) {
        ctx->pc = 0x1E985Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E9860u;
        goto label_1e9860;
    }
    ctx->pc = 0x1E9858u;
    {
        const bool branch_taken_0x1e9858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E985Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e9858) {
            ctx->pc = 0x1E988Cu;
            goto label_1e988c;
        }
    }
    ctx->pc = 0x1E9860u;
label_1e9860:
    // 0x1e9860: 0x51880
    ctx->pc = 0x1e9860u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_1e9864:
    // 0x1e9864: 0x2442bf10
    ctx->pc = 0x1e9864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950672));
label_1e9868:
    // 0x1e9868: 0x431021
    ctx->pc = 0x1e9868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e986c:
    // 0x1e986c: 0x8c460000
    ctx->pc = 0x1e986cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9870:
    // 0x1e9870: 0x3c020050
    ctx->pc = 0x1e9870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1e9874:
    // 0x1e9874: 0x24440b40
    ctx->pc = 0x1e9874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
label_1e9878:
    // 0x1e9878: 0x3c020027
    ctx->pc = 0x1e9878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1e987c:
    // 0x1e987c: 0xc07a5ac
label_1e9880:
    if (ctx->pc == 0x1E9880u) {
        ctx->pc = 0x1E9880u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950480));
        ctx->pc = 0x1E9884u;
        goto label_1e9884;
    }
    ctx->pc = 0x1E987Cu;
    SET_GPR_U32(ctx, 31, 0x1E9884u);
    ctx->pc = 0x1E9880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294950480));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9884u; }
        else if (ctx->pc != 0x1E9884u) { ctx->pc = 0x1E9884u; }
    }
    if (ctx->pc != 0x1E9884u) { return; }
    ctx->pc = 0x1E9884u;
label_1e9884:
    // 0x1e9884: 0x70408628
    ctx->pc = 0x1e9884u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e9888:
    // 0x1e9888: 0x72002e28
    ctx->pc = 0x1e9888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1e988c:
    // 0x1e988c: 0x72203e28
    ctx->pc = 0x1e988cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1e9890:
    // 0x1e9890: 0x70002628
    ctx->pc = 0x1e9890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9894:
    // 0x1e9894: 0xc05ab34
label_1e9898:
    if (ctx->pc == 0x1E9898u) {
        ctx->pc = 0x1E9898u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E989Cu;
        goto label_1e989c;
    }
    ctx->pc = 0x1E9894u;
    SET_GPR_U32(ctx, 31, 0x1E989Cu);
    ctx->pc = 0x1E9898u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16ACD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_LoadPartitionNw_0x16acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E989Cu; }
        else if (ctx->pc != 0x1E989Cu) { ctx->pc = 0x1E989Cu; }
    }
    if (ctx->pc != 0x1E989Cu) { return; }
    ctx->pc = 0x1E989Cu;
label_1e989c:
    // 0x1e989c: 0xc05abb0
label_1e98a0:
    if (ctx->pc == 0x1E98A0u) {
        ctx->pc = 0x1E98A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E98A4u;
        goto label_1e98a4;
    }
    ctx->pc = 0x1E989Cu;
    SET_GPR_U32(ctx, 31, 0x1E98A4u);
    ctx->pc = 0x1E98A0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98A4u; }
        else if (ctx->pc != 0x1E98A4u) { ctx->pc = 0x1E98A4u; }
    }
    if (ctx->pc != 0x1E98A4u) { return; }
    ctx->pc = 0x1E98A4u;
label_1e98a4:
    // 0x1e98a4: 0x10000007
label_1e98a8:
    if (ctx->pc == 0x1E98A8u) {
        ctx->pc = 0x1E98A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E98ACu;
        goto label_1e98ac;
    }
    ctx->pc = 0x1E98A4u;
    {
        const bool branch_taken_0x1e98a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E98A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e98a4) {
            ctx->pc = 0x1E98C4u;
            goto label_1e98c4;
        }
    }
    ctx->pc = 0x1E98ACu;
label_1e98ac:
    // 0x1e98ac: 0xc07a720
label_1e98b0:
    if (ctx->pc == 0x1E98B0u) {
        ctx->pc = 0x1E98B4u;
        goto label_1e98b4;
    }
    ctx->pc = 0x1E98ACu;
    SET_GPR_U32(ctx, 31, 0x1E98B4u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98B4u; }
        else if (ctx->pc != 0x1E98B4u) { ctx->pc = 0x1E98B4u; }
    }
    if (ctx->pc != 0x1E98B4u) { return; }
    ctx->pc = 0x1E98B4u;
label_1e98b4:
    // 0x1e98b4: 0xc05abb0
label_1e98b8:
    if (ctx->pc == 0x1E98B8u) {
        ctx->pc = 0x1E98B8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E98BCu;
        goto label_1e98bc;
    }
    ctx->pc = 0x1E98B4u;
    SET_GPR_U32(ctx, 31, 0x1E98BCu);
    ctx->pc = 0x1E98B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16AEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetPtStat_0x16aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98BCu; }
        else if (ctx->pc != 0x1E98BCu) { ctx->pc = 0x1E98BCu; }
    }
    if (ctx->pc != 0x1E98BCu) { return; }
    ctx->pc = 0x1E98BCu;
label_1e98bc:
    // 0x1e98bc: 0x0
    ctx->pc = 0x1e98bcu;
    // NOP
label_1e98c0:
    // 0x1e98c0: 0x24030001
    ctx->pc = 0x1e98c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e98c4:
    // 0x1e98c4: 0x10430004
label_1e98c8:
    if (ctx->pc == 0x1E98C8u) {
        ctx->pc = 0x1E98C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E98CCu;
        goto label_1e98cc;
    }
    ctx->pc = 0x1E98C4u;
    {
        const bool branch_taken_0x1e98c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E98C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e98c4) {
            ctx->pc = 0x1E98D8u;
            goto label_1e98d8;
        }
    }
    ctx->pc = 0x1E98CCu;
label_1e98cc:
    // 0x1e98cc: 0x1443fff7
label_1e98d0:
    if (ctx->pc == 0x1E98D0u) {
        ctx->pc = 0x1E98D4u;
        goto label_1e98d4;
    }
    ctx->pc = 0x1E98CCu;
    {
        const bool branch_taken_0x1e98cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e98cc) {
            ctx->pc = 0x1E98ACu;
            goto label_1e98ac;
        }
    }
    ctx->pc = 0x1E98D4u;
label_1e98d4:
    // 0x1e98d4: 0x0
    ctx->pc = 0x1e98d4u;
    // NOP
label_1e98d8:
    // 0x1e98d8: 0x7bbf0020
    ctx->pc = 0x1e98d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e98dc:
    // 0x1e98dc: 0x7bb10010
    ctx->pc = 0x1e98dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e98e0:
    // 0x1e98e0: 0x7bb00000
    ctx->pc = 0x1e98e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e98e4:
    // 0x1e98e4: 0x3e00008
label_1e98e8:
    if (ctx->pc == 0x1E98E8u) {
        ctx->pc = 0x1E98E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E98ECu;
        goto label_fallthrough_0x1e98e4;
    }
    ctx->pc = 0x1E98E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E97A0u: goto label_1e97a0;
            case 0x1E97A4u: goto label_1e97a4;
            case 0x1E97A8u: goto label_1e97a8;
            case 0x1E97ACu: goto label_1e97ac;
            case 0x1E97B0u: goto label_1e97b0;
            case 0x1E97B4u: goto label_1e97b4;
            case 0x1E97B8u: goto label_1e97b8;
            case 0x1E97BCu: goto label_1e97bc;
            case 0x1E97C0u: goto label_1e97c0;
            case 0x1E97C4u: goto label_1e97c4;
            case 0x1E97C8u: goto label_1e97c8;
            case 0x1E97CCu: goto label_1e97cc;
            case 0x1E97D0u: goto label_1e97d0;
            case 0x1E97D4u: goto label_1e97d4;
            case 0x1E97D8u: goto label_1e97d8;
            case 0x1E97DCu: goto label_1e97dc;
            case 0x1E97E0u: goto label_1e97e0;
            case 0x1E97E4u: goto label_1e97e4;
            case 0x1E97E8u: goto label_1e97e8;
            case 0x1E97ECu: goto label_1e97ec;
            case 0x1E97F0u: goto label_1e97f0;
            case 0x1E97F4u: goto label_1e97f4;
            case 0x1E97F8u: goto label_1e97f8;
            case 0x1E97FCu: goto label_1e97fc;
            case 0x1E9800u: goto label_1e9800;
            case 0x1E9804u: goto label_1e9804;
            case 0x1E9808u: goto label_1e9808;
            case 0x1E980Cu: goto label_1e980c;
            case 0x1E9810u: goto label_1e9810;
            case 0x1E9814u: goto label_1e9814;
            case 0x1E9818u: goto label_1e9818;
            case 0x1E981Cu: goto label_1e981c;
            case 0x1E9820u: goto label_1e9820;
            case 0x1E9824u: goto label_1e9824;
            case 0x1E9828u: goto label_1e9828;
            case 0x1E982Cu: goto label_1e982c;
            case 0x1E9830u: goto label_1e9830;
            case 0x1E9834u: goto label_1e9834;
            case 0x1E9838u: goto label_1e9838;
            case 0x1E983Cu: goto label_1e983c;
            case 0x1E9840u: goto label_1e9840;
            case 0x1E9844u: goto label_1e9844;
            case 0x1E9848u: goto label_1e9848;
            case 0x1E984Cu: goto label_1e984c;
            case 0x1E9850u: goto label_1e9850;
            case 0x1E9854u: goto label_1e9854;
            case 0x1E9858u: goto label_1e9858;
            case 0x1E985Cu: goto label_1e985c;
            case 0x1E9860u: goto label_1e9860;
            case 0x1E9864u: goto label_1e9864;
            case 0x1E9868u: goto label_1e9868;
            case 0x1E986Cu: goto label_1e986c;
            case 0x1E9870u: goto label_1e9870;
            case 0x1E9874u: goto label_1e9874;
            case 0x1E9878u: goto label_1e9878;
            case 0x1E987Cu: goto label_1e987c;
            case 0x1E9880u: goto label_1e9880;
            case 0x1E9884u: goto label_1e9884;
            case 0x1E9888u: goto label_1e9888;
            case 0x1E988Cu: goto label_1e988c;
            case 0x1E9890u: goto label_1e9890;
            case 0x1E9894u: goto label_1e9894;
            case 0x1E9898u: goto label_1e9898;
            case 0x1E989Cu: goto label_1e989c;
            case 0x1E98A0u: goto label_1e98a0;
            case 0x1E98A4u: goto label_1e98a4;
            case 0x1E98A8u: goto label_1e98a8;
            case 0x1E98ACu: goto label_1e98ac;
            case 0x1E98B0u: goto label_1e98b0;
            case 0x1E98B4u: goto label_1e98b4;
            case 0x1E98B8u: goto label_1e98b8;
            case 0x1E98BCu: goto label_1e98bc;
            case 0x1E98C0u: goto label_1e98c0;
            case 0x1E98C4u: goto label_1e98c4;
            case 0x1E98C8u: goto label_1e98c8;
            case 0x1E98CCu: goto label_1e98cc;
            case 0x1E98D0u: goto label_1e98d0;
            case 0x1E98D4u: goto label_1e98d4;
            case 0x1E98D8u: goto label_1e98d8;
            case 0x1E98DCu: goto label_1e98dc;
            case 0x1E98E0u: goto label_1e98e0;
            case 0x1E98E4u: goto label_1e98e4;
            case 0x1E98E8u: goto label_1e98e8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e98e4:
    ctx->pc = 0x1E98ECu;
}
