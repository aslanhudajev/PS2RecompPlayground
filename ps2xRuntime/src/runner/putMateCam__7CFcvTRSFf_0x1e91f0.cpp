#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMateCam__7CFcvTRSFf
// Address: 0x1e91f0 - 0x1e9328
void putMateCam__7CFcvTRSFf_0x1e91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMateCam__7CFcvTRSFf");


    ctx->pc = 0x1e91f0u;

    // 0x1e91f0: 0x27bdffb0
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e91f4: 0x7fbf0020
    ctx->pc = 0x1e91f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e91f8: 0x7fb00010
    ctx->pc = 0x1e91f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e91fc: 0xe7b50004
    ctx->pc = 0x1e91fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e9200: 0xe7b40000
    ctx->pc = 0x1e9200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e9204: 0x84820012
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1e9208: 0x46006546
    ctx->pc = 0x1e9208u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e920c: 0x14400007
    ctx->pc = 0x1E920Cu;
    {
        const bool branch_taken_0x1e920c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E9210u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e920c) {
            ctx->pc = 0x1E922Cu;
            goto label_1e922c;
        }
    }
    ctx->pc = 0x1E9214u;
    // 0x1e9214: 0x86020014
    ctx->pc = 0x1e9214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e9218: 0x14400005
    ctx->pc = 0x1E9218u;
    {
        const bool branch_taken_0x1e9218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E921Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 116));
        if (branch_taken_0x1e9218) {
            ctx->pc = 0x1E9230u;
            goto label_1e9230;
        }
    }
    ctx->pc = 0x1E9220u;
    // 0x1e9220: 0x86020016
    ctx->pc = 0x1e9220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e9224: 0x10400006
    ctx->pc = 0x1E9224u;
    {
        const bool branch_taken_0x1e9224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9228u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
        if (branch_taken_0x1e9224) {
            ctx->pc = 0x1E9240u;
            goto label_1e9240;
        }
    }
    ctx->pc = 0x1E922Cu;
label_1e922c:
    // 0x1e922c: 0x26040074
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 116));
label_1e9230:
    // 0x1e9230: 0x4600ab06
    ctx->pc = 0x1e9230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e9234: 0xc079bd4
    ctx->pc = 0x1E9234u;
    SET_GPR_U32(ctx, 31, 0x1E923Cu);
    ctx->pc = 0x1E9238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E923Cu; }
        else if (ctx->pc != 0x1E923Cu) { ctx->pc = 0x1E923Cu; }
    }
    if (ctx->pc != 0x1E923Cu) { return; }
    ctx->pc = 0x1E923Cu;
    // 0x1e923c: 0x26040090
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
label_1e9240:
    // 0x1e9240: 0x4600ab06
    ctx->pc = 0x1e9240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e9244: 0xc079bd4
    ctx->pc = 0x1E9244u;
    SET_GPR_U32(ctx, 31, 0x1E924Cu);
    ctx->pc = 0x1E9248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E924Cu; }
        else if (ctx->pc != 0x1E924Cu) { ctx->pc = 0x1E924Cu; }
    }
    if (ctx->pc != 0x1E924Cu) { return; }
    ctx->pc = 0x1E924Cu;
    // 0x1e924c: 0x8e0300ec
    ctx->pc = 0x1e924cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1e9250: 0x30620200
    ctx->pc = 0x1e9250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x1e9254: 0x10400003
    ctx->pc = 0x1E9254u;
    {
        const bool branch_taken_0x1e9254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9254) {
            ctx->pc = 0x1E9264u;
            goto label_1e9264;
        }
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0x10000006
    ctx->pc = 0x1E925Cu;
    {
        const bool branch_taken_0x1e925c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9260u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x1e925c) {
            ctx->pc = 0x1E9278u;
            goto label_1e9278;
        }
    }
    ctx->pc = 0x1E9264u;
label_1e9264:
    // 0x1e9264: 0xc7a00030
    ctx->pc = 0x1e9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9268: 0x3c023f80
    ctx->pc = 0x1e9268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e926c: 0x44820800
    ctx->pc = 0x1e926cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e9270: 0x0
    ctx->pc = 0x1e9270u;
    // NOP
    // 0x1e9274: 0x46000d01
    ctx->pc = 0x1e9274u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9278:
    // 0x1e9278: 0x30620010
    ctx->pc = 0x1e9278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x1e927c: 0x10400003
    ctx->pc = 0x1E927Cu;
    {
        const bool branch_taken_0x1e927c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e927c) {
            ctx->pc = 0x1E928Cu;
            goto label_1e928c;
        }
    }
    ctx->pc = 0x1E9284u;
    // 0x1e9284: 0xc60000c4
    ctx->pc = 0x1e9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9288: 0x4600a502
    ctx->pc = 0x1e9288u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1e928c:
    // 0x1e928c: 0x86020012
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1e9290: 0x14400007
    ctx->pc = 0x1E9290u;
    {
        const bool branch_taken_0x1e9290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9290) {
            ctx->pc = 0x1E92B0u;
            goto label_1e92b0;
        }
    }
    ctx->pc = 0x1E9298u;
    // 0x1e9298: 0x86020014
    ctx->pc = 0x1e9298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e929c: 0x14400004
    ctx->pc = 0x1E929Cu;
    {
        const bool branch_taken_0x1e929c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e929c) {
            ctx->pc = 0x1E92B0u;
            goto label_1e92b0;
        }
    }
    ctx->pc = 0x1E92A4u;
    // 0x1e92a4: 0x86020016
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e92a8: 0x1040000b
    ctx->pc = 0x1E92A8u;
    {
        const bool branch_taken_0x1e92a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E92ACu;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x1e92a8) {
            ctx->pc = 0x1E92D8u;
            goto label_1e92d8;
        }
    }
    ctx->pc = 0x1E92B0u;
label_1e92b0:
    // 0x1e92b0: 0xc06aafc
    ctx->pc = 0x1E92B0u;
    SET_GPR_U32(ctx, 31, 0x1E92B8u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92B8u; }
        else if (ctx->pc != 0x1E92B8u) { ctx->pc = 0x1E92B8u; }
    }
    if (ctx->pc != 0x1E92B8u) { return; }
    ctx->pc = 0x1E92B8u;
    // 0x1e92b8: 0xc7ae0048
    ctx->pc = 0x1e92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e92bc: 0xc7ad0044
    ctx->pc = 0x1e92bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e92c0: 0xc7ac0040
    ctx->pc = 0x1e92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e92c4: 0x46007446
    ctx->pc = 0x1e92c4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    // 0x1e92c8: 0x46006c06
    ctx->pc = 0x1e92c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1e92cc: 0xc06aac8
    ctx->pc = 0x1E92CCu;
    SET_GPR_U32(ctx, 31, 0x1E92D4u);
    ctx->pc = 0x1E92D0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92D4u; }
        else if (ctx->pc != 0x1E92D4u) { ctx->pc = 0x1E92D4u; }
    }
    if (ctx->pc != 0x1E92D4u) { return; }
    ctx->pc = 0x1E92D4u;
    // 0x1e92d4: 0x4600ab06
    ctx->pc = 0x1e92d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e92d8:
    // 0x1e92d8: 0x4600a346
    ctx->pc = 0x1e92d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e92dc: 0xc07a2e0
    ctx->pc = 0x1E92DCu;
    SET_GPR_U32(ctx, 31, 0x1E92E4u);
    ctx->pc = 0x1E92E0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92E4u; }
        else if (ctx->pc != 0x1E92E4u) { ctx->pc = 0x1E92E4u; }
    }
    if (ctx->pc != 0x1E92E4u) { return; }
    ctx->pc = 0x1E92E4u;
    // 0x1e92e4: 0x86030012
    ctx->pc = 0x1e92e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1e92e8: 0x14600007
    ctx->pc = 0x1E92E8u;
    {
        const bool branch_taken_0x1e92e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e92e8) {
            ctx->pc = 0x1E9308u;
            goto label_1e9308;
        }
    }
    ctx->pc = 0x1E92F0u;
    // 0x1e92f0: 0x86030014
    ctx->pc = 0x1e92f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e92f4: 0x14600004
    ctx->pc = 0x1E92F4u;
    {
        const bool branch_taken_0x1e92f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e92f4) {
            ctx->pc = 0x1E9308u;
            goto label_1e9308;
        }
    }
    ctx->pc = 0x1E92FCu;
    // 0x1e92fc: 0x86030016
    ctx->pc = 0x1e92fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e9300: 0x10600003
    ctx->pc = 0x1E9300u;
    {
        const bool branch_taken_0x1e9300 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9300) {
            ctx->pc = 0x1E9310u;
            goto label_1e9310;
        }
    }
    ctx->pc = 0x1E9308u;
label_1e9308:
    // 0x1e9308: 0xc06ab18
    ctx->pc = 0x1E9308u;
    SET_GPR_U32(ctx, 31, 0x1E9310u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9310u; }
        else if (ctx->pc != 0x1E9310u) { ctx->pc = 0x1E9310u; }
    }
    if (ctx->pc != 0x1E9310u) { return; }
    ctx->pc = 0x1E9310u;
label_1e9310:
    // 0x1e9310: 0x7bbf0020
    ctx->pc = 0x1e9310u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9314: 0x7bb00010
    ctx->pc = 0x1e9314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9318: 0xc7b50004
    ctx->pc = 0x1e9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e931c: 0xc7b40000
    ctx->pc = 0x1e931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9320: 0x3e00008
    ctx->pc = 0x1E9320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E922Cu: goto label_1e922c;
            case 0x1E9230u: goto label_1e9230;
            case 0x1E9240u: goto label_1e9240;
            case 0x1E9264u: goto label_1e9264;
            case 0x1E9278u: goto label_1e9278;
            case 0x1E928Cu: goto label_1e928c;
            case 0x1E92B0u: goto label_1e92b0;
            case 0x1E92D8u: goto label_1e92d8;
            case 0x1E9308u: goto label_1e9308;
            case 0x1E9310u: goto label_1e9310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9328u;
}
