#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMate__7CFcvTRSFf
// Address: 0x1e90b0 - 0x1e91e8
void putMate__7CFcvTRSFf_0x1e90b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMate__7CFcvTRSFf");


    ctx->pc = 0x1e90b0u;

    // 0x1e90b0: 0x27bdffb0
    ctx->pc = 0x1e90b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e90b4: 0x7fbf0020
    ctx->pc = 0x1e90b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e90b8: 0x7fb00010
    ctx->pc = 0x1e90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e90bc: 0xe7b50004
    ctx->pc = 0x1e90bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e90c0: 0xe7b40000
    ctx->pc = 0x1e90c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e90c4: 0x84820012
    ctx->pc = 0x1e90c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1e90c8: 0x46006546
    ctx->pc = 0x1e90c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e90cc: 0x14400007
    ctx->pc = 0x1E90CCu;
    {
        const bool branch_taken_0x1e90cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E90D0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e90cc) {
            ctx->pc = 0x1E90ECu;
            goto label_1e90ec;
        }
    }
    ctx->pc = 0x1E90D4u;
    // 0x1e90d4: 0x86020014
    ctx->pc = 0x1e90d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e90d8: 0x14400005
    ctx->pc = 0x1E90D8u;
    {
        const bool branch_taken_0x1e90d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E90DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 116));
        if (branch_taken_0x1e90d8) {
            ctx->pc = 0x1E90F0u;
            goto label_1e90f0;
        }
    }
    ctx->pc = 0x1E90E0u;
    // 0x1e90e0: 0x86020016
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e90e4: 0x10400006
    ctx->pc = 0x1E90E4u;
    {
        const bool branch_taken_0x1e90e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E90E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
        if (branch_taken_0x1e90e4) {
            ctx->pc = 0x1E9100u;
            goto label_1e9100;
        }
    }
    ctx->pc = 0x1E90ECu;
label_1e90ec:
    // 0x1e90ec: 0x26040074
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 116));
label_1e90f0:
    // 0x1e90f0: 0x4600ab06
    ctx->pc = 0x1e90f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e90f4: 0xc079bd4
    ctx->pc = 0x1E90F4u;
    SET_GPR_U32(ctx, 31, 0x1E90FCu);
    ctx->pc = 0x1E90F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90FCu; }
        else if (ctx->pc != 0x1E90FCu) { ctx->pc = 0x1E90FCu; }
    }
    if (ctx->pc != 0x1E90FCu) { return; }
    ctx->pc = 0x1E90FCu;
    // 0x1e90fc: 0x26040090
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 144));
label_1e9100:
    // 0x1e9100: 0x4600ab06
    ctx->pc = 0x1e9100u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e9104: 0xc079bd4
    ctx->pc = 0x1E9104u;
    SET_GPR_U32(ctx, 31, 0x1E910Cu);
    ctx->pc = 0x1E9108u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E910Cu; }
        else if (ctx->pc != 0x1E910Cu) { ctx->pc = 0x1E910Cu; }
    }
    if (ctx->pc != 0x1E910Cu) { return; }
    ctx->pc = 0x1E910Cu;
    // 0x1e910c: 0x8e0300ec
    ctx->pc = 0x1e910cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1e9110: 0x30620200
    ctx->pc = 0x1e9110u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
    // 0x1e9114: 0x10400003
    ctx->pc = 0x1E9114u;
    {
        const bool branch_taken_0x1e9114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9114) {
            ctx->pc = 0x1E9124u;
            goto label_1e9124;
        }
    }
    ctx->pc = 0x1E911Cu;
    // 0x1e911c: 0x10000006
    ctx->pc = 0x1E911Cu;
    {
        const bool branch_taken_0x1e911c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9120u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x1e911c) {
            ctx->pc = 0x1E9138u;
            goto label_1e9138;
        }
    }
    ctx->pc = 0x1E9124u;
label_1e9124:
    // 0x1e9124: 0xc7a00030
    ctx->pc = 0x1e9124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9128: 0x3c023f80
    ctx->pc = 0x1e9128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e912c: 0x44820800
    ctx->pc = 0x1e912cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e9130: 0x0
    ctx->pc = 0x1e9130u;
    // NOP
    // 0x1e9134: 0x46000d01
    ctx->pc = 0x1e9134u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e9138:
    // 0x1e9138: 0x30620010
    ctx->pc = 0x1e9138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x1e913c: 0x10400003
    ctx->pc = 0x1E913Cu;
    {
        const bool branch_taken_0x1e913c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e913c) {
            ctx->pc = 0x1E914Cu;
            goto label_1e914c;
        }
    }
    ctx->pc = 0x1E9144u;
    // 0x1e9144: 0xc60000c4
    ctx->pc = 0x1e9144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9148: 0x4600a502
    ctx->pc = 0x1e9148u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1e914c:
    // 0x1e914c: 0x86020012
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1e9150: 0x14400007
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E9170u;
            goto label_1e9170;
        }
    }
    ctx->pc = 0x1E9158u;
    // 0x1e9158: 0x86020014
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e915c: 0x14400004
    ctx->pc = 0x1E915Cu;
    {
        const bool branch_taken_0x1e915c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e915c) {
            ctx->pc = 0x1E9170u;
            goto label_1e9170;
        }
    }
    ctx->pc = 0x1E9164u;
    // 0x1e9164: 0x86020016
    ctx->pc = 0x1e9164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e9168: 0x1040000b
    ctx->pc = 0x1E9168u;
    {
        const bool branch_taken_0x1e9168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E916Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x1e9168) {
            ctx->pc = 0x1E9198u;
            goto label_1e9198;
        }
    }
    ctx->pc = 0x1E9170u;
label_1e9170:
    // 0x1e9170: 0xc06aafc
    ctx->pc = 0x1E9170u;
    SET_GPR_U32(ctx, 31, 0x1E9178u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9178u; }
        else if (ctx->pc != 0x1E9178u) { ctx->pc = 0x1E9178u; }
    }
    if (ctx->pc != 0x1E9178u) { return; }
    ctx->pc = 0x1E9178u;
    // 0x1e9178: 0xc7ae0048
    ctx->pc = 0x1e9178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e917c: 0xc7ad0044
    ctx->pc = 0x1e917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e9180: 0xc7ac0040
    ctx->pc = 0x1e9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e9184: 0x46007446
    ctx->pc = 0x1e9184u;
    ctx->f[17] = FPU_MOV_S(ctx->f[14]);
    // 0x1e9188: 0x46006c06
    ctx->pc = 0x1e9188u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1e918c: 0xc06aac8
    ctx->pc = 0x1E918Cu;
    SET_GPR_U32(ctx, 31, 0x1E9194u);
    ctx->pc = 0x1E9190u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9194u; }
        else if (ctx->pc != 0x1E9194u) { ctx->pc = 0x1E9194u; }
    }
    if (ctx->pc != 0x1E9194u) { return; }
    ctx->pc = 0x1E9194u;
    // 0x1e9194: 0x4600ab06
    ctx->pc = 0x1e9194u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e9198:
    // 0x1e9198: 0x4600a346
    ctx->pc = 0x1e9198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e919c: 0xc079f30
    ctx->pc = 0x1E919Cu;
    SET_GPR_U32(ctx, 31, 0x1E91A4u);
    ctx->pc = 0x1E91A0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91A4u; }
        else if (ctx->pc != 0x1E91A4u) { ctx->pc = 0x1E91A4u; }
    }
    if (ctx->pc != 0x1E91A4u) { return; }
    ctx->pc = 0x1E91A4u;
    // 0x1e91a4: 0x86030012
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1e91a8: 0x14600007
    ctx->pc = 0x1E91A8u;
    {
        const bool branch_taken_0x1e91a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e91a8) {
            ctx->pc = 0x1E91C8u;
            goto label_1e91c8;
        }
    }
    ctx->pc = 0x1E91B0u;
    // 0x1e91b0: 0x86030014
    ctx->pc = 0x1e91b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e91b4: 0x14600004
    ctx->pc = 0x1E91B4u;
    {
        const bool branch_taken_0x1e91b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e91b4) {
            ctx->pc = 0x1E91C8u;
            goto label_1e91c8;
        }
    }
    ctx->pc = 0x1E91BCu;
    // 0x1e91bc: 0x86030016
    ctx->pc = 0x1e91bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1e91c0: 0x10600003
    ctx->pc = 0x1E91C0u;
    {
        const bool branch_taken_0x1e91c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e91c0) {
            ctx->pc = 0x1E91D0u;
            goto label_1e91d0;
        }
    }
    ctx->pc = 0x1E91C8u;
label_1e91c8:
    // 0x1e91c8: 0xc06ab18
    ctx->pc = 0x1E91C8u;
    SET_GPR_U32(ctx, 31, 0x1E91D0u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91D0u; }
        else if (ctx->pc != 0x1E91D0u) { ctx->pc = 0x1E91D0u; }
    }
    if (ctx->pc != 0x1E91D0u) { return; }
    ctx->pc = 0x1E91D0u;
label_1e91d0:
    // 0x1e91d0: 0x7bbf0020
    ctx->pc = 0x1e91d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e91d4: 0x7bb00010
    ctx->pc = 0x1e91d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e91d8: 0xc7b50004
    ctx->pc = 0x1e91d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e91dc: 0xc7b40000
    ctx->pc = 0x1e91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e91e0: 0x3e00008
    ctx->pc = 0x1E91E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E91E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E90ECu: goto label_1e90ec;
            case 0x1E90F0u: goto label_1e90f0;
            case 0x1E9100u: goto label_1e9100;
            case 0x1E9124u: goto label_1e9124;
            case 0x1E9138u: goto label_1e9138;
            case 0x1E914Cu: goto label_1e914c;
            case 0x1E9170u: goto label_1e9170;
            case 0x1E9198u: goto label_1e9198;
            case 0x1E91C8u: goto label_1e91c8;
            case 0x1E91D0u: goto label_1e91d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E91E8u;
}
