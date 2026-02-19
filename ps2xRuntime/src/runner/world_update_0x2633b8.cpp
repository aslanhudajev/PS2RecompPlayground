#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: world_update
// Address: 0x2633b8 - 0x263c98
void world_update_0x2633b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2633b8u;

label_2633b8:
    // 0x2633b8: 0x27bdff70
    ctx->pc = 0x2633b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_2633bc:
    // 0x2633bc: 0xffbf0070
    ctx->pc = 0x2633bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2633c0:
    // 0x2633c0: 0xffb50060
    ctx->pc = 0x2633c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2633c4:
    // 0x2633c4: 0xffb40050
    ctx->pc = 0x2633c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2633c8:
    // 0x2633c8: 0xffb30040
    ctx->pc = 0x2633c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2633cc:
    // 0x2633cc: 0xffb20030
    ctx->pc = 0x2633ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2633d0:
    // 0x2633d0: 0xffb10020
    ctx->pc = 0x2633d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2633d4:
    // 0x2633d4: 0xffb00010
    ctx->pc = 0x2633d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2633d8:
    // 0x2633d8: 0xe7b50088
    ctx->pc = 0x2633d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2633dc:
    // 0x2633dc: 0xe7b40080
    ctx->pc = 0x2633dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2633e0:
    // 0x2633e0: 0x3c020034
    ctx->pc = 0x2633e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2633e4:
    // 0x2633e4: 0x2444e81c
    ctx->pc = 0x2633e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961180));
label_2633e8:
    // 0x2633e8: 0x3c020032
    ctx->pc = 0x2633e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2633ec:
    // 0x2633ec: 0x8c42080c
    ctx->pc = 0x2633ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_2633f0:
    // 0x2633f0: 0x10400006
label_2633f4:
    if (ctx->pc == 0x2633F4u) {
        ctx->pc = 0x2633F4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2633F8u;
        goto label_2633f8;
    }
    ctx->pc = 0x2633F0u;
    {
        const bool branch_taken_0x2633f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2633F4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2633f0) {
            ctx->pc = 0x26340Cu;
            goto label_26340c;
        }
    }
    ctx->pc = 0x2633F8u;
label_2633f8:
    // 0x2633f8: 0x3c020034
    ctx->pc = 0x2633f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2633fc:
    // 0x2633fc: 0x8c42e7c8
    ctx->pc = 0x2633fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_263400:
    // 0x263400: 0x8c420048
    ctx->pc = 0x263400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_263404:
    // 0x263404: 0x50400003
label_263408:
    if (ctx->pc == 0x263408u) {
        ctx->pc = 0x263408u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x26340Cu;
        goto label_26340c;
    }
    ctx->pc = 0x263404u;
    {
        const bool branch_taken_0x263404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x263404) {
            ctx->pc = 0x263408u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x263414u;
            goto label_263414;
        }
    }
    ctx->pc = 0x26340Cu;
label_26340c:
    // 0x26340c: 0x24030001
    ctx->pc = 0x26340cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_263410:
    // 0x263410: 0xac830000
    ctx->pc = 0x263410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_263414:
    // 0x263414: 0x3c020031
    ctx->pc = 0x263414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263418:
    // 0x263418: 0x3c030031
    ctx->pc = 0x263418u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_26341c:
    // 0x26341c: 0x8c42ff9c
    ctx->pc = 0x26341cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_263420:
    // 0x263420: 0x8c630024
    ctx->pc = 0x263420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_263424:
    // 0x263424: 0x431025
    ctx->pc = 0x263424u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_263428:
    // 0x263428: 0x14400211
label_26342c:
    if (ctx->pc == 0x26342Cu) {
        ctx->pc = 0x26342Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x263430u;
        goto label_263430;
    }
    ctx->pc = 0x263428u;
    {
        const bool branch_taken_0x263428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26342Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x263428) {
            ctx->pc = 0x263C70u;
            goto label_263c70;
        }
    }
    ctx->pc = 0x263430u;
label_263430:
    // 0x263430: 0xc0991d0
label_263434:
    if (ctx->pc == 0x263434u) {
        ctx->pc = 0x263438u;
        goto label_263438;
    }
    ctx->pc = 0x263430u;
    SET_GPR_U32(ctx, 31, 0x263438u);
    ctx->pc = 0x264740u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoWorldAnimation_0x264740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263438u; }
    }
    if (ctx->pc != 0x263438u) { return; }
    ctx->pc = 0x263438u;
label_263438:
    // 0x263438: 0xc0a005c
label_26343c:
    if (ctx->pc == 0x26343Cu) {
        ctx->pc = 0x263440u;
        goto label_263440;
    }
    ctx->pc = 0x263438u;
    SET_GPR_U32(ctx, 31, 0x263440u);
    ctx->pc = 0x280170u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupDynGrid_0x280170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263440u; }
    }
    if (ctx->pc != 0x263440u) { return; }
    ctx->pc = 0x263440u;
label_263440:
    // 0x263440: 0xc087d8c
label_263444:
    if (ctx->pc == 0x263444u) {
        ctx->pc = 0x263448u;
        goto label_263448;
    }
    ctx->pc = 0x263440u;
    SET_GPR_U32(ctx, 31, 0x263448u);
    ctx->pc = 0x21F630u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDynobjGrid_0x21f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263448u; }
    }
    if (ctx->pc != 0x263448u) { return; }
    ctx->pc = 0x263448u;
label_263448:
    // 0x263448: 0x3c020036
    ctx->pc = 0x263448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_26344c:
    // 0x26344c: 0x8c42d934
    ctx->pc = 0x26344cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_263450:
    // 0x263450: 0x440000d
label_263454:
    if (ctx->pc == 0x263454u) {
        ctx->pc = 0x263454u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x263458u;
        goto label_263458;
    }
    ctx->pc = 0x263450u;
    {
        const bool branch_taken_0x263450 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x263454u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x263450) {
            ctx->pc = 0x263488u;
            goto label_263488;
        }
    }
    ctx->pc = 0x263458u;
label_263458:
    // 0x263458: 0x8c430018
    ctx->pc = 0x263458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_26345c:
    // 0x26345c: 0x24024010
    ctx->pc = 0x26345cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_263460:
    // 0x263460: 0x1462000e
label_263464:
    if (ctx->pc == 0x263464u) {
        ctx->pc = 0x263464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x263468u;
        goto label_263468;
    }
    ctx->pc = 0x263460u;
    {
        const bool branch_taken_0x263460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x263464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x263460) {
            ctx->pc = 0x26349Cu;
            goto label_26349c;
        }
    }
    ctx->pc = 0x263468u;
label_263468:
    // 0x263468: 0x3c020034
    ctx->pc = 0x263468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26346c:
    // 0x26346c: 0x8c42e8fc
    ctx->pc = 0x26346cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961404)));
label_263470:
    // 0x263470: 0x10400003
label_263474:
    if (ctx->pc == 0x263474u) {
        ctx->pc = 0x263478u;
        goto label_263478;
    }
    ctx->pc = 0x263470u;
    {
        const bool branch_taken_0x263470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x263470) {
            ctx->pc = 0x263480u;
            goto label_263480;
        }
    }
    ctx->pc = 0x263478u;
label_263478:
    // 0x263478: 0xc099712
label_26347c:
    if (ctx->pc == 0x26347Cu) {
        ctx->pc = 0x263480u;
        goto label_263480;
    }
    ctx->pc = 0x263478u;
    SET_GPR_U32(ctx, 31, 0x263480u);
    ctx->pc = 0x265C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoGoodWizard_0x265c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263480u; }
    }
    if (ctx->pc != 0x263480u) { return; }
    ctx->pc = 0x263480u;
label_263480:
    // 0x263480: 0xc0a7a80
label_263484:
    if (ctx->pc == 0x263484u) {
        ctx->pc = 0x263488u;
        goto label_263488;
    }
    ctx->pc = 0x263480u;
    SET_GPR_U32(ctx, 31, 0x263488u);
    ctx->pc = 0x29EA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessSpewItems_0x29ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263488u; }
    }
    if (ctx->pc != 0x263488u) { return; }
    ctx->pc = 0x263488u;
label_263488:
    // 0x263488: 0x3c020031
    ctx->pc = 0x263488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26348c:
    // 0x26348c: 0x8c430018
    ctx->pc = 0x26348cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_263490:
    // 0x263490: 0x24024010
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_263494:
    // 0x263494: 0x10620005
label_263498:
    if (ctx->pc == 0x263498u) {
        ctx->pc = 0x263498u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x26349Cu;
        goto label_26349c;
    }
    ctx->pc = 0x263494u;
    {
        const bool branch_taken_0x263494 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x263498u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x263494) {
            ctx->pc = 0x2634ACu;
            goto label_2634ac;
        }
    }
    ctx->pc = 0x26349Cu;
label_26349c:
    // 0x26349c: 0x8c430018
    ctx->pc = 0x26349cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2634a0:
    // 0x2634a0: 0x2402400c
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
label_2634a4:
    // 0x2634a4: 0x14620046
label_2634a8:
    if (ctx->pc == 0x2634A8u) {
        ctx->pc = 0x2634A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2634ACu;
        goto label_2634ac;
    }
    ctx->pc = 0x2634A4u;
    {
        const bool branch_taken_0x2634a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2634A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2634a4) {
            ctx->pc = 0x2635C0u;
            goto label_2635c0;
        }
    }
    ctx->pc = 0x2634ACu;
label_2634ac:
    // 0x2634ac: 0x3c020032
    ctx->pc = 0x2634acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2634b0:
    // 0x2634b0: 0x8c42080c
    ctx->pc = 0x2634b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_2634b4:
    // 0x2634b4: 0x1040003b
label_2634b8:
    if (ctx->pc == 0x2634B8u) {
        ctx->pc = 0x2634B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2634BCu;
        goto label_2634bc;
    }
    ctx->pc = 0x2634B4u;
    {
        const bool branch_taken_0x2634b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2634B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2634b4) {
            ctx->pc = 0x2635A4u;
            goto label_2635a4;
        }
    }
    ctx->pc = 0x2634BCu;
label_2634bc:
    // 0x2634bc: 0x3c03003c
    ctx->pc = 0x2634bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2634c0:
    // 0x2634c0: 0xc441ffa4
    ctx->pc = 0x2634c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2634c4:
    // 0x2634c4: 0xc4603288
    ctx->pc = 0x2634c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634c8:
    // 0x2634c8: 0x46000d01
    ctx->pc = 0x2634c8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2634cc:
    // 0x2634cc: 0x3c013dcc
    ctx->pc = 0x2634ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_2634d0:
    // 0x2634d0: 0x3421cccd
    ctx->pc = 0x2634d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2634d4:
    // 0x2634d4: 0x44810000
    ctx->pc = 0x2634d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2634d8:
    // 0x2634d8: 0x4600a034
    ctx->pc = 0x2634d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2634dc:
    // 0x2634dc: 0x0
    ctx->pc = 0x2634dcu;
    // NOP
label_2634e0:
    // 0x2634e0: 0x45000008
label_2634e4:
    if (ctx->pc == 0x2634E4u) {
        ctx->pc = 0x2634E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2634E8u;
        goto label_2634e8;
    }
    ctx->pc = 0x2634E0u;
    {
        const bool branch_taken_0x2634e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2634E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2634e0) {
            ctx->pc = 0x263504u;
            goto label_263504;
        }
    }
    ctx->pc = 0x2634E8u;
label_2634e8:
    // 0x2634e8: 0x3c013f00
    ctx->pc = 0x2634e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2634ec:
    // 0x2634ec: 0x44816000
    ctx->pc = 0x2634ecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2634f0:
    // 0x2634f0: 0x460ca302
    ctx->pc = 0x2634f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_2634f4:
    // 0x2634f4: 0xc098b46
label_2634f8:
    if (ctx->pc == 0x2634F8u) {
        ctx->pc = 0x2634F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
        ctx->pc = 0x2634FCu;
        goto label_2634fc;
    }
    ctx->pc = 0x2634F4u;
    SET_GPR_U32(ctx, 31, 0x2634FCu);
    ctx->pc = 0x2634F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961128)));
    ctx->pc = 0x262D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogFadeIn_0x262d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634FCu; }
    }
    if (ctx->pc != 0x2634FCu) { return; }
    ctx->pc = 0x2634FCu;
label_2634fc:
    // 0x2634fc: 0x10000030
label_263500:
    if (ctx->pc == 0x263500u) {
        ctx->pc = 0x263500u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263504u;
        goto label_263504;
    }
    ctx->pc = 0x2634FCu;
    {
        const bool branch_taken_0x2634fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263500u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2634fc) {
            ctx->pc = 0x2635C0u;
            goto label_2635c0;
        }
    }
    ctx->pc = 0x263504u;
label_263504:
    // 0x263504: 0x3c020034
    ctx->pc = 0x263504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263508:
    // 0x263508: 0x8c42e7e4
    ctx->pc = 0x263508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961124)));
label_26350c:
    // 0x26350c: 0x14400004
label_263510:
    if (ctx->pc == 0x263510u) {
        ctx->pc = 0x263510u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        ctx->pc = 0x263514u;
        goto label_263514;
    }
    ctx->pc = 0x26350Cu;
    {
        const bool branch_taken_0x26350c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x263510u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x26350c) {
            ctx->pc = 0x263520u;
            goto label_263520;
        }
    }
    ctx->pc = 0x263514u;
label_263514:
    // 0x263514: 0xc098b1e
label_263518:
    if (ctx->pc == 0x263518u) {
        ctx->pc = 0x26351Cu;
        goto label_26351c;
    }
    ctx->pc = 0x263514u;
    SET_GPR_U32(ctx, 31, 0x26351Cu);
    ctx->pc = 0x262C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFog_0x262c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26351Cu; }
    }
    if (ctx->pc != 0x26351Cu) { return; }
    ctx->pc = 0x26351Cu;
label_26351c:
    // 0x26351c: 0x3c040032
    ctx->pc = 0x26351cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_263520:
    // 0x263520: 0x8c83080c
    ctx->pc = 0x263520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2060)));
label_263524:
    // 0x263524: 0x24020001
    ctx->pc = 0x263524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_263528:
    // 0x263528: 0x14620011
label_26352c:
    if (ctx->pc == 0x26352Cu) {
        ctx->pc = 0x26352Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x263530u;
        goto label_263530;
    }
    ctx->pc = 0x263528u;
    {
        const bool branch_taken_0x263528 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26352Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x263528) {
            ctx->pc = 0x263570u;
            goto label_263570;
        }
    }
    ctx->pc = 0x263530u;
label_263530:
    // 0x263530: 0xac82080c
    ctx->pc = 0x263530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2060), GPR_U32(ctx, 2));
label_263534:
    // 0x263534: 0x3a0202d
    ctx->pc = 0x263534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_263538:
    // 0x263538: 0xc085216
label_26353c:
    if (ctx->pc == 0x26353Cu) {
        ctx->pc = 0x26353Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x263540u;
        goto label_263540;
    }
    ctx->pc = 0x263538u;
    SET_GPR_U32(ctx, 31, 0x263540u);
    ctx->pc = 0x26353Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x214858u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamGetPlayerAvgPos_0x214858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263540u; }
    }
    if (ctx->pc != 0x263540u) { return; }
    ctx->pc = 0x263540u;
label_263540:
    // 0x263540: 0x10400007
label_263544:
    if (ctx->pc == 0x263544u) {
        ctx->pc = 0x263544u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        ctx->pc = 0x263548u;
        goto label_263548;
    }
    ctx->pc = 0x263540u;
    {
        const bool branch_taken_0x263540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263544u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x263540) {
            ctx->pc = 0x263560u;
            goto label_263560;
        }
    }
    ctx->pc = 0x263548u;
label_263548:
    // 0x263548: 0xc09fc46
label_26354c:
    if (ctx->pc == 0x26354Cu) {
        ctx->pc = 0x26354Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263550u;
        goto label_263550;
    }
    ctx->pc = 0x263548u;
    SET_GPR_U32(ctx, 31, 0x263550u);
    ctx->pc = 0x26354Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F118u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnterFX_0x27f118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263550u; }
    }
    if (ctx->pc != 0x263550u) { return; }
    ctx->pc = 0x263550u;
label_263550:
    // 0x263550: 0xc0981dc
label_263554:
    if (ctx->pc == 0x263554u) {
        ctx->pc = 0x263554u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263558u;
        goto label_263558;
    }
    ctx->pc = 0x263550u;
    SET_GPR_U32(ctx, 31, 0x263558u);
    ctx->pc = 0x263554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260770u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerEnter_0x260770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263558u; }
    }
    if (ctx->pc != 0x263558u) { return; }
    ctx->pc = 0x263558u;
label_263558:
    // 0x263558: 0x10000005
label_26355c:
    if (ctx->pc == 0x26355Cu) {
        ctx->pc = 0x263560u;
        goto label_263560;
    }
    ctx->pc = 0x263558u;
    {
        const bool branch_taken_0x263558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263558) {
            ctx->pc = 0x263570u;
            goto label_263570;
        }
    }
    ctx->pc = 0x263560u;
label_263560:
    // 0x263560: 0xc09fc46
label_263564:
    if (ctx->pc == 0x263564u) {
        ctx->pc = 0x263564u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952904));
        ctx->pc = 0x263568u;
        goto label_263568;
    }
    ctx->pc = 0x263560u;
    SET_GPR_U32(ctx, 31, 0x263568u);
    ctx->pc = 0x263564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952904));
    ctx->pc = 0x27F118u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnterFX_0x27f118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263568u; }
    }
    if (ctx->pc != 0x263568u) { return; }
    ctx->pc = 0x263568u;
label_263568:
    // 0x263568: 0xc0981dc
label_26356c:
    if (ctx->pc == 0x26356Cu) {
        ctx->pc = 0x26356Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952904));
        ctx->pc = 0x263570u;
        goto label_263570;
    }
    ctx->pc = 0x263568u;
    SET_GPR_U32(ctx, 31, 0x263570u);
    ctx->pc = 0x26356Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294952904));
    ctx->pc = 0x260770u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerEnter_0x260770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263570u; }
    }
    if (ctx->pc != 0x263570u) { return; }
    ctx->pc = 0x263570u;
label_263570:
    // 0x263570: 0x3c014040
    ctx->pc = 0x263570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_263574:
    // 0x263574: 0x44810000
    ctx->pc = 0x263574u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263578:
    // 0x263578: 0x46140036
    ctx->pc = 0x263578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26357c:
    // 0x26357c: 0x0
    ctx->pc = 0x26357cu;
    // NOP
label_263580:
    // 0x263580: 0x4500000e
label_263584:
    if (ctx->pc == 0x263584u) {
        ctx->pc = 0x263584u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x263588u;
        goto label_263588;
    }
    ctx->pc = 0x263580u;
    {
        const bool branch_taken_0x263580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263584u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x263580) {
            ctx->pc = 0x2635BCu;
            goto label_2635bc;
        }
    }
    ctx->pc = 0x263588u;
label_263588:
    // 0x263588: 0x8c620808
    ctx->pc = 0x263588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
label_26358c:
    // 0x26358c: 0x28420002
    ctx->pc = 0x26358cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_263590:
    // 0x263590: 0x5440000b
label_263594:
    if (ctx->pc == 0x263594u) {
        ctx->pc = 0x263594u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263598u;
        goto label_263598;
    }
    ctx->pc = 0x263590u;
    {
        const bool branch_taken_0x263590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x263590) {
            ctx->pc = 0x263594u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2635C0u;
            goto label_2635c0;
        }
    }
    ctx->pc = 0x263598u;
label_263598:
    // 0x263598: 0x24020001
    ctx->pc = 0x263598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_26359c:
    // 0x26359c: 0x10000007
label_2635a0:
    if (ctx->pc == 0x2635A0u) {
        ctx->pc = 0x2635A0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
        ctx->pc = 0x2635A4u;
        goto label_2635a4;
    }
    ctx->pc = 0x26359Cu;
    {
        const bool branch_taken_0x26359c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2635A0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
        if (branch_taken_0x26359c) {
            ctx->pc = 0x2635BCu;
            goto label_2635bc;
        }
    }
    ctx->pc = 0x2635A4u;
label_2635a4:
    // 0x2635a4: 0x3c020034
    ctx->pc = 0x2635a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2635a8:
    // 0x2635a8: 0x8c42e7e4
    ctx->pc = 0x2635a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961124)));
label_2635ac:
    // 0x2635ac: 0x54400004
label_2635b0:
    if (ctx->pc == 0x2635B0u) {
        ctx->pc = 0x2635B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2635B4u;
        goto label_2635b4;
    }
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x2635B0u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2635C0u;
            goto label_2635c0;
        }
    }
    ctx->pc = 0x2635B4u;
label_2635b4:
    // 0x2635b4: 0xc098b1e
label_2635b8:
    if (ctx->pc == 0x2635B8u) {
        ctx->pc = 0x2635BCu;
        goto label_2635bc;
    }
    ctx->pc = 0x2635B4u;
    SET_GPR_U32(ctx, 31, 0x2635BCu);
    ctx->pc = 0x262C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFog_0x262c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635BCu; }
    }
    if (ctx->pc != 0x2635BCu) { return; }
    ctx->pc = 0x2635BCu;
label_2635bc:
    // 0x2635bc: 0x3c04003b
    ctx->pc = 0x2635bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2635c0:
    // 0x2635c0: 0xc0989bc
label_2635c4:
    if (ctx->pc == 0x2635C4u) {
        ctx->pc = 0x2635C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941360));
        ctx->pc = 0x2635C8u;
        goto label_2635c8;
    }
    ctx->pc = 0x2635C0u;
    SET_GPR_U32(ctx, 31, 0x2635C8u);
    ctx->pc = 0x2635C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941360));
    ctx->pc = 0x2626F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InLevel_0x2626f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2635C8u; }
    }
    if (ctx->pc != 0x2635C8u) { return; }
    ctx->pc = 0x2635C8u;
label_2635c8:
    // 0x2635c8: 0x10400028
label_2635cc:
    if (ctx->pc == 0x2635CCu) {
        ctx->pc = 0x2635CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2635D0u;
        goto label_2635d0;
    }
    ctx->pc = 0x2635C8u;
    {
        const bool branch_taken_0x2635c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2635CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2635c8) {
            ctx->pc = 0x26366Cu;
            goto label_26366c;
        }
    }
    ctx->pc = 0x2635D0u;
label_2635d0:
    // 0x2635d0: 0x8c430018
    ctx->pc = 0x2635d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2635d4:
    // 0x2635d4: 0x24024010
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_2635d8:
    // 0x2635d8: 0x14620025
label_2635dc:
    if (ctx->pc == 0x2635DCu) {
        ctx->pc = 0x2635DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2635E0u;
        goto label_2635e0;
    }
    ctx->pc = 0x2635D8u;
    {
        const bool branch_taken_0x2635d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2635DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2635d8) {
            ctx->pc = 0x263670u;
            goto label_263670;
        }
    }
    ctx->pc = 0x2635E0u;
label_2635e0:
    // 0x2635e0: 0x3c020036
    ctx->pc = 0x2635e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2635e4:
    // 0x2635e4: 0x8c42d930
    ctx->pc = 0x2635e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
label_2635e8:
    // 0x2635e8: 0x50400021
label_2635ec:
    if (ctx->pc == 0x2635ECu) {
        ctx->pc = 0x2635ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2635F0u;
        goto label_2635f0;
    }
    ctx->pc = 0x2635E8u;
    {
        const bool branch_taken_0x2635e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2635e8) {
            ctx->pc = 0x2635ECu;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x263670u;
            goto label_263670;
        }
    }
    ctx->pc = 0x2635F0u;
label_2635f0:
    // 0x2635f0: 0x8c420008
    ctx->pc = 0x2635f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2635f4:
    // 0x2635f4: 0x1040001e
label_2635f8:
    if (ctx->pc == 0x2635F8u) {
        ctx->pc = 0x2635F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2635FCu;
        goto label_2635fc;
    }
    ctx->pc = 0x2635F4u;
    {
        const bool branch_taken_0x2635f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2635F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2635f4) {
            ctx->pc = 0x263670u;
            goto label_263670;
        }
    }
    ctx->pc = 0x2635FCu;
label_2635fc:
    // 0x2635fc: 0x3c04003b
    ctx->pc = 0x2635fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263600:
    // 0x263600: 0xc0870d4
label_263604:
    if (ctx->pc == 0x263604u) {
        ctx->pc = 0x263604u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941368));
        ctx->pc = 0x263608u;
        goto label_263608;
    }
    ctx->pc = 0x263600u;
    SET_GPR_U32(ctx, 31, 0x263608u);
    ctx->pc = 0x263604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941368));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263608u; }
    }
    if (ctx->pc != 0x263608u) { return; }
    ctx->pc = 0x263608u;
label_263608:
    // 0x263608: 0x50400008
label_26360c:
    if (ctx->pc == 0x26360Cu) {
        ctx->pc = 0x26360Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263610u;
        goto label_263610;
    }
    ctx->pc = 0x263608u;
    {
        const bool branch_taken_0x263608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x263608) {
            ctx->pc = 0x26360Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x26362Cu;
            goto label_26362c;
        }
    }
    ctx->pc = 0x263610u;
label_263610:
    // 0x263610: 0x8c430028
    ctx->pc = 0x263610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_263614:
    // 0x263614: 0x50600005
label_263618:
    if (ctx->pc == 0x263618u) {
        ctx->pc = 0x263618u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x26361Cu;
        goto label_26361c;
    }
    ctx->pc = 0x263614u;
    {
        const bool branch_taken_0x263614 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x263614) {
            ctx->pc = 0x263618u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x26362Cu;
            goto label_26362c;
        }
    }
    ctx->pc = 0x26361Cu;
label_26361c:
    // 0x26361c: 0x8c620060
    ctx->pc = 0x26361cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_263620:
    // 0x263620: 0x34420002
    ctx->pc = 0x263620u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_263624:
    // 0x263624: 0x10000003
label_263628:
    if (ctx->pc == 0x263628u) {
        ctx->pc = 0x263628u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x26362Cu;
        goto label_26362c;
    }
    ctx->pc = 0x263624u;
    {
        const bool branch_taken_0x263624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263628u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x263624) {
            ctx->pc = 0x263634u;
            goto label_263634;
        }
    }
    ctx->pc = 0x26362Cu;
label_26362c:
    // 0x26362c: 0xc0b492e
label_263630:
    if (ctx->pc == 0x263630u) {
        ctx->pc = 0x263630u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941384));
        ctx->pc = 0x263634u;
        goto label_263634;
    }
    ctx->pc = 0x26362Cu;
    SET_GPR_U32(ctx, 31, 0x263634u);
    ctx->pc = 0x263630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941384));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263634u; }
    }
    if (ctx->pc != 0x263634u) { return; }
    ctx->pc = 0x263634u;
label_263634:
    // 0x263634: 0x3c04003b
    ctx->pc = 0x263634u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_263638:
    // 0x263638: 0xc0870d4
label_26363c:
    if (ctx->pc == 0x26363Cu) {
        ctx->pc = 0x26363Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941416));
        ctx->pc = 0x263640u;
        goto label_263640;
    }
    ctx->pc = 0x263638u;
    SET_GPR_U32(ctx, 31, 0x263640u);
    ctx->pc = 0x26363Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941416));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263640u; }
    }
    if (ctx->pc != 0x263640u) { return; }
    ctx->pc = 0x263640u;
label_263640:
    // 0x263640: 0x50400008
label_263644:
    if (ctx->pc == 0x263644u) {
        ctx->pc = 0x263644u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263648u;
        goto label_263648;
    }
    ctx->pc = 0x263640u;
    {
        const bool branch_taken_0x263640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x263640) {
            ctx->pc = 0x263644u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x263664u;
            goto label_263664;
        }
    }
    ctx->pc = 0x263648u;
label_263648:
    // 0x263648: 0x8c430028
    ctx->pc = 0x263648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_26364c:
    // 0x26364c: 0x50600005
label_263650:
    if (ctx->pc == 0x263650u) {
        ctx->pc = 0x263650u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263654u;
        goto label_263654;
    }
    ctx->pc = 0x26364Cu;
    {
        const bool branch_taken_0x26364c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x26364c) {
            ctx->pc = 0x263650u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x263664u;
            goto label_263664;
        }
    }
    ctx->pc = 0x263654u;
label_263654:
    // 0x263654: 0x8c620060
    ctx->pc = 0x263654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_263658:
    // 0x263658: 0x34420002
    ctx->pc = 0x263658u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_26365c:
    // 0x26365c: 0x10000003
label_263660:
    if (ctx->pc == 0x263660u) {
        ctx->pc = 0x263660u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x263664u;
        goto label_263664;
    }
    ctx->pc = 0x26365Cu;
    {
        const bool branch_taken_0x26365c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263660u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x26365c) {
            ctx->pc = 0x26366Cu;
            goto label_26366c;
        }
    }
    ctx->pc = 0x263664u;
label_263664:
    // 0x263664: 0xc0b492e
label_263668:
    if (ctx->pc == 0x263668u) {
        ctx->pc = 0x263668u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941432));
        ctx->pc = 0x26366Cu;
        goto label_26366c;
    }
    ctx->pc = 0x263664u;
    SET_GPR_U32(ctx, 31, 0x26366Cu);
    ctx->pc = 0x263668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941432));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26366Cu; }
    }
    if (ctx->pc != 0x26366Cu) { return; }
    ctx->pc = 0x26366Cu;
label_26366c:
    // 0x26366c: 0x3c02003c
    ctx->pc = 0x26366cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263670:
    // 0x263670: 0x8c423214
    ctx->pc = 0x263670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12820)));
label_263674:
    // 0x263674: 0x18400046
label_263678:
    if (ctx->pc == 0x263678u) {
        ctx->pc = 0x263678u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26367Cu;
        goto label_26367c;
    }
    ctx->pc = 0x263674u;
    {
        const bool branch_taken_0x263674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263678u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263674) {
            ctx->pc = 0x263790u;
            goto label_263790;
        }
    }
    ctx->pc = 0x26367Cu;
label_26367c:
    // 0x26367c: 0x3c02003c
    ctx->pc = 0x26367cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263680:
    // 0x263680: 0x24553218
    ctx->pc = 0x263680u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 12824));
label_263684:
    // 0x263684: 0x3c02003c
    ctx->pc = 0x263684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263688:
    // 0x263688: 0x24543228
    ctx->pc = 0x263688u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 12840));
label_26368c:
    // 0x26368c: 0x3c013e4c
    ctx->pc = 0x26368cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
label_263690:
    // 0x263690: 0x3421cccd
    ctx->pc = 0x263690u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_263694:
    // 0x263694: 0x4481a800
    ctx->pc = 0x263694u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_263698:
    // 0x263698: 0x3c0140a0
    ctx->pc = 0x263698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_26369c:
    // 0x26369c: 0x4481a000
    ctx->pc = 0x26369cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2636a0:
    // 0x2636a0: 0x121880
    ctx->pc = 0x2636a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_2636a4:
    // 0x2636a4: 0x0
    ctx->pc = 0x2636a4u;
    // NOP
label_2636a8:
    // 0x2636a8: 0x751021
    ctx->pc = 0x2636a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2636ac:
    // 0x2636ac: 0x8c500000
    ctx->pc = 0x2636acu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2636b0:
    // 0x2636b0: 0x52000032
label_2636b4:
    if (ctx->pc == 0x2636B4u) {
        ctx->pc = 0x2636B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2636B8u;
        goto label_2636b8;
    }
    ctx->pc = 0x2636B0u;
    {
        const bool branch_taken_0x2636b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2636b0) {
            ctx->pc = 0x2636B4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x26377Cu;
            goto label_26377c;
        }
    }
    ctx->pc = 0x2636B8u;
label_2636b8:
    // 0x2636b8: 0x8e020028
    ctx->pc = 0x2636b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2636bc:
    // 0x2636bc: 0x5040002f
label_2636c0:
    if (ctx->pc == 0x2636C0u) {
        ctx->pc = 0x2636C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2636C4u;
        goto label_2636c4;
    }
    ctx->pc = 0x2636BCu;
    {
        const bool branch_taken_0x2636bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2636bc) {
            ctx->pc = 0x2636C0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x26377Cu;
            goto label_26377c;
        }
    }
    ctx->pc = 0x2636C4u;
label_2636c4:
    // 0x2636c4: 0x8c420060
    ctx->pc = 0x2636c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2636c8:
    // 0x2636c8: 0x30420002
    ctx->pc = 0x2636c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2636cc:
    // 0x2636cc: 0x10400017
label_2636d0:
    if (ctx->pc == 0x2636D0u) {
        ctx->pc = 0x2636D0u;
        SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
        ctx->pc = 0x2636D4u;
        goto label_2636d4;
    }
    ctx->pc = 0x2636CCu;
    {
        const bool branch_taken_0x2636cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2636D0u;
        SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
        if (branch_taken_0x2636cc) {
            ctx->pc = 0x26372Cu;
            goto label_26372c;
        }
    }
    ctx->pc = 0x2636D4u;
label_2636d4:
    // 0x2636d4: 0x748821
    ctx->pc = 0x2636d4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2636d8:
    // 0x2636d8: 0xc661ffa4
    ctx->pc = 0x2636d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2636dc:
    // 0x2636dc: 0xc6200000
    ctx->pc = 0x2636dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636e0:
    // 0x2636e0: 0x46010036
    ctx->pc = 0x2636e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2636e4:
    // 0x2636e4: 0x0
    ctx->pc = 0x2636e4u;
    // NOP
label_2636e8:
    // 0x2636e8: 0x45020024
label_2636ec:
    if (ctx->pc == 0x2636ECu) {
        ctx->pc = 0x2636ECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2636F0u;
        goto label_2636f0;
    }
    ctx->pc = 0x2636E8u;
    {
        const bool branch_taken_0x2636e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2636e8) {
            ctx->pc = 0x2636ECu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x26377Cu;
            goto label_26377c;
        }
    }
    ctx->pc = 0x2636F0u;
label_2636f0:
    // 0x2636f0: 0x3c013dcc
    ctx->pc = 0x2636f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_2636f4:
    // 0x2636f4: 0x3421cccd
    ctx->pc = 0x2636f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_2636f8:
    // 0x2636f8: 0x44816000
    ctx->pc = 0x2636f8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2636fc:
    // 0x2636fc: 0x3c013f00
    ctx->pc = 0x2636fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_263700:
    // 0x263700: 0x44816800
    ctx->pc = 0x263700u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_263704:
    // 0x263704: 0xc0a01a4
label_263708:
    if (ctx->pc == 0x263708u) {
        ctx->pc = 0x26370Cu;
        goto label_26370c;
    }
    ctx->pc = 0x263704u;
    SET_GPR_U32(ctx, 31, 0x26370Cu);
    ctx->pc = 0x280690u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAmbientSpecial_0x280690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26370Cu; }
    }
    if (ctx->pc != 0x26370Cu) { return; }
    ctx->pc = 0x26370Cu;
label_26370c:
    // 0x26370c: 0x8e040028
    ctx->pc = 0x26370cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_263710:
    // 0x263710: 0x24050002
    ctx->pc = 0x263710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_263714:
    // 0x263714: 0xc0b41e4
label_263718:
    if (ctx->pc == 0x263718u) {
        ctx->pc = 0x263718u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26371Cu;
        goto label_26371c;
    }
    ctx->pc = 0x263714u;
    SET_GPR_U32(ctx, 31, 0x26371Cu);
    ctx->pc = 0x263718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26371Cu; }
    }
    if (ctx->pc != 0x26371Cu) { return; }
    ctx->pc = 0x26371Cu;
label_26371c:
    // 0x26371c: 0xc660ffa4
    ctx->pc = 0x26371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263720:
    // 0x263720: 0x46150000
    ctx->pc = 0x263720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_263724:
    // 0x263724: 0x10000014
label_263728:
    if (ctx->pc == 0x263728u) {
        ctx->pc = 0x263728u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x26372Cu;
        goto label_26372c;
    }
    ctx->pc = 0x263724u;
    {
        const bool branch_taken_0x263724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263728u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x263724) {
            ctx->pc = 0x263778u;
            goto label_263778;
        }
    }
    ctx->pc = 0x26372Cu;
label_26372c:
    // 0x26372c: 0x121080
    ctx->pc = 0x26372cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_263730:
    // 0x263730: 0x548821
    ctx->pc = 0x263730u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_263734:
    // 0x263734: 0xc661ffa4
    ctx->pc = 0x263734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263738:
    // 0x263738: 0xc6200000
    ctx->pc = 0x263738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26373c:
    // 0x26373c: 0x46010036
    ctx->pc = 0x26373cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263740:
    // 0x263740: 0x0
    ctx->pc = 0x263740u;
    // NOP
label_263744:
    // 0x263744: 0x4500000c
label_263748:
    if (ctx->pc == 0x263748u) {
        ctx->pc = 0x263748u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26374Cu;
        goto label_26374c;
    }
    ctx->pc = 0x263744u;
    {
        const bool branch_taken_0x263744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263748u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x263744) {
            ctx->pc = 0x263778u;
            goto label_263778;
        }
    }
    ctx->pc = 0x26374Cu;
label_26374c:
    // 0x26374c: 0x8e040028
    ctx->pc = 0x26374cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_263750:
    // 0x263750: 0xc0b41b8
label_263754:
    if (ctx->pc == 0x263754u) {
        ctx->pc = 0x263754u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263758u;
        goto label_263758;
    }
    ctx->pc = 0x263750u;
    SET_GPR_U32(ctx, 31, 0x263758u);
    ctx->pc = 0x263754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263758u; }
    }
    if (ctx->pc != 0x263758u) { return; }
    ctx->pc = 0x263758u;
label_263758:
    // 0x263758: 0x3c014120
    ctx->pc = 0x263758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_26375c:
    // 0x26375c: 0x44816000
    ctx->pc = 0x26375cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_263760:
    // 0x263760: 0xc0b5c06
label_263764:
    if (ctx->pc == 0x263764u) {
        ctx->pc = 0x263768u;
        goto label_263768;
    }
    ctx->pc = 0x263760u;
    SET_GPR_U32(ctx, 31, 0x263768u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263768u; }
    }
    if (ctx->pc != 0x263768u) { return; }
    ctx->pc = 0x263768u;
label_263768:
    // 0x263768: 0xc661ffa4
    ctx->pc = 0x263768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26376c:
    // 0x26376c: 0x46140840
    ctx->pc = 0x26376cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_263770:
    // 0x263770: 0x46000840
    ctx->pc = 0x263770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_263774:
    // 0x263774: 0xe6210000
    ctx->pc = 0x263774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_263778:
    // 0x263778: 0x26520001
    ctx->pc = 0x263778u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_26377c:
    // 0x26377c: 0x3c02003c
    ctx->pc = 0x26377cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_263780:
    // 0x263780: 0x8c423214
    ctx->pc = 0x263780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12820)));
label_263784:
    // 0x263784: 0x242102a
    ctx->pc = 0x263784u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_263788:
    // 0x263788: 0x1440ffc7
label_26378c:
    if (ctx->pc == 0x26378Cu) {
        ctx->pc = 0x26378Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x263790u;
        goto label_263790;
    }
    ctx->pc = 0x263788u;
    {
        const bool branch_taken_0x263788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26378Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x263788) {
            ctx->pc = 0x2636A8u;
            goto label_2636a8;
        }
    }
    ctx->pc = 0x263790u;
label_263790:
    // 0x263790: 0x3c020031
    ctx->pc = 0x263790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263794:
    // 0x263794: 0x8c430018
    ctx->pc = 0x263794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_263798:
    // 0x263798: 0x24024010
    ctx->pc = 0x263798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_26379c:
    // 0x26379c: 0x1462004a
label_2637a0:
    if (ctx->pc == 0x2637A0u) {
        ctx->pc = 0x2637A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2637A4u;
        goto label_2637a4;
    }
    ctx->pc = 0x26379Cu;
    {
        const bool branch_taken_0x26379c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2637A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26379c) {
            ctx->pc = 0x2638C8u;
            goto label_2638c8;
        }
    }
    ctx->pc = 0x2637A4u;
label_2637a4:
    // 0x2637a4: 0x8c420810
    ctx->pc = 0x2637a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_2637a8:
    // 0x2637a8: 0x10400047
label_2637ac:
    if (ctx->pc == 0x2637ACu) {
        ctx->pc = 0x2637ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x2637B0u;
        goto label_2637b0;
    }
    ctx->pc = 0x2637A8u;
    {
        const bool branch_taken_0x2637a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2637ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2637a8) {
            ctx->pc = 0x2638C8u;
            goto label_2638c8;
        }
    }
    ctx->pc = 0x2637B0u;
label_2637b0:
    // 0x2637b0: 0xc461328c
    ctx->pc = 0x2637b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2637b4:
    // 0x2637b4: 0x44800000
    ctx->pc = 0x2637b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2637b8:
    // 0x2637b8: 0x46000832
    ctx->pc = 0x2637b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2637bc:
    // 0x2637bc: 0x0
    ctx->pc = 0x2637bcu;
    // NOP
label_2637c0:
    // 0x2637c0: 0x45000014
label_2637c4:
    if (ctx->pc == 0x2637C4u) {
        ctx->pc = 0x2637C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2637C8u;
        goto label_2637c8;
    }
    ctx->pc = 0x2637C0u;
    {
        const bool branch_taken_0x2637c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2637C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2637c0) {
            ctx->pc = 0x263814u;
            goto label_263814;
        }
    }
    ctx->pc = 0x2637C8u;
label_2637c8:
    // 0x2637c8: 0xc440ffa4
    ctx->pc = 0x2637c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2637cc:
    // 0x2637cc: 0xe460328c
    ctx->pc = 0x2637ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12940), bits); }
label_2637d0:
    // 0x2637d0: 0x3c020036
    ctx->pc = 0x2637d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2637d4:
    // 0x2637d4: 0x8c43d934
    ctx->pc = 0x2637d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_2637d8:
    // 0x2637d8: 0x2402002c
    ctx->pc = 0x2637d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
label_2637dc:
    // 0x2637dc: 0x10620004
label_2637e0:
    if (ctx->pc == 0x2637E0u) {
        ctx->pc = 0x2637E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2637E4u;
        goto label_2637e4;
    }
    ctx->pc = 0x2637DCu;
    {
        const bool branch_taken_0x2637dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2637E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2637dc) {
            ctx->pc = 0x2637F0u;
            goto label_2637f0;
        }
    }
    ctx->pc = 0x2637E4u;
label_2637e4:
    // 0x2637e4: 0xc089a32
label_2637e8:
    if (ctx->pc == 0x2637E8u) {
        ctx->pc = 0x2637E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2637ECu;
        goto label_2637ec;
    }
    ctx->pc = 0x2637E4u;
    SET_GPR_U32(ctx, 31, 0x2637ECu);
    ctx->pc = 0x2637E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2268C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitShow_0x2268c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2637ECu; }
    }
    if (ctx->pc != 0x2637ECu) { return; }
    ctx->pc = 0x2637ECu;
label_2637ec:
    // 0x2637ec: 0x3c020032
    ctx->pc = 0x2637ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2637f0:
    // 0x2637f0: 0x8c440890
    ctx->pc = 0x2637f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2192)));
label_2637f4:
    // 0x2637f4: 0x10800003
label_2637f8:
    if (ctx->pc == 0x2637F8u) {
        ctx->pc = 0x2637FCu;
        goto label_2637fc;
    }
    ctx->pc = 0x2637F4u;
    {
        const bool branch_taken_0x2637f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2637f4) {
            ctx->pc = 0x263804u;
            goto label_263804;
        }
    }
    ctx->pc = 0x2637FCu;
label_2637fc:
    // 0x2637fc: 0xc0b0f52
label_263800:
    if (ctx->pc == 0x263800u) {
        ctx->pc = 0x263800u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x263804u;
        goto label_263804;
    }
    ctx->pc = 0x2637FCu;
    SET_GPR_U32(ctx, 31, 0x263804u);
    ctx->pc = 0x263800u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263804u; }
    }
    if (ctx->pc != 0x263804u) { return; }
    ctx->pc = 0x263804u;
label_263804:
    // 0x263804: 0xc098b54
label_263808:
    if (ctx->pc == 0x263808u) {
        ctx->pc = 0x26380Cu;
        goto label_26380c;
    }
    ctx->pc = 0x263804u;
    SET_GPR_U32(ctx, 31, 0x26380Cu);
    ctx->pc = 0x262D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff_0x262d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26380Cu; }
    }
    if (ctx->pc != 0x26380Cu) { return; }
    ctx->pc = 0x26380Cu;
label_26380c:
    // 0x26380c: 0x1000002e
label_263810:
    if (ctx->pc == 0x263810u) {
        ctx->pc = 0x263814u;
        goto label_263814;
    }
    ctx->pc = 0x26380Cu;
    {
        const bool branch_taken_0x26380c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26380c) {
            ctx->pc = 0x2638C8u;
            goto label_2638c8;
        }
    }
    ctx->pc = 0x263814u;
label_263814:
    // 0x263814: 0xc441ffa4
    ctx->pc = 0x263814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263818:
    // 0x263818: 0xc460328c
    ctx->pc = 0x263818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26381c:
    // 0x26381c: 0x46000d01
    ctx->pc = 0x26381cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263820:
    // 0x263820: 0x3c014000
    ctx->pc = 0x263820u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_263824:
    // 0x263824: 0x44810000
    ctx->pc = 0x263824u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263828:
    // 0x263828: 0x4600a034
    ctx->pc = 0x263828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26382c:
    // 0x26382c: 0x0
    ctx->pc = 0x26382cu;
    // NOP
label_263830:
    // 0x263830: 0x45000017
label_263834:
    if (ctx->pc == 0x263834u) {
        ctx->pc = 0x263834u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x263838u;
        goto label_263838;
    }
    ctx->pc = 0x263830u;
    {
        const bool branch_taken_0x263830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263834u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x263830) {
            ctx->pc = 0x263890u;
            goto label_263890;
        }
    }
    ctx->pc = 0x263838u;
label_263838:
    // 0x263838: 0x8c440890
    ctx->pc = 0x263838u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2192)));
label_26383c:
    // 0x26383c: 0x1080000f
label_263840:
    if (ctx->pc == 0x263840u) {
        ctx->pc = 0x263840u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x263844u;
        goto label_263844;
    }
    ctx->pc = 0x26383Cu;
    {
        const bool branch_taken_0x26383c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263840u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x26383c) {
            ctx->pc = 0x26387Cu;
            goto label_26387c;
        }
    }
    ctx->pc = 0x263844u;
label_263844:
    // 0x263844: 0x3c013f00
    ctx->pc = 0x263844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_263848:
    // 0x263848: 0x44810000
    ctx->pc = 0x263848u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_26384c:
    // 0x26384c: 0x4600a002
    ctx->pc = 0x26384cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_263850:
    // 0x263850: 0x3c013f80
    ctx->pc = 0x263850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_263854:
    // 0x263854: 0x44810800
    ctx->pc = 0x263854u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_263858:
    // 0x263858: 0x46000841
    ctx->pc = 0x263858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26385c:
    // 0x26385c: 0x3c01437f
    ctx->pc = 0x26385cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
label_263860:
    // 0x263860: 0x44810000
    ctx->pc = 0x263860u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263864:
    // 0x263864: 0x46000842
    ctx->pc = 0x263864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_263868:
    // 0x263868: 0x46000824
    ctx->pc = 0x263868u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
label_26386c:
    // 0x26386c: 0x44050000
    ctx->pc = 0x26386cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
label_263870:
    // 0x263870: 0xc0b0f52
label_263874:
    if (ctx->pc == 0x263874u) {
        ctx->pc = 0x263878u;
        goto label_263878;
    }
    ctx->pc = 0x263870u;
    SET_GPR_U32(ctx, 31, 0x263878u);
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263878u; }
    }
    if (ctx->pc != 0x263878u) { return; }
    ctx->pc = 0x263878u;
label_263878:
    // 0x263878: 0x3c020035
    ctx->pc = 0x263878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_26387c:
    // 0x26387c: 0x3c013f80
    ctx->pc = 0x26387cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_263880:
    // 0x263880: 0x44810000
    ctx->pc = 0x263880u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263884:
    // 0x263884: 0x46140001
    ctx->pc = 0x263884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_263888:
    // 0x263888: 0x1000000f
label_26388c:
    if (ctx->pc == 0x26388Cu) {
        ctx->pc = 0x26388Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
        ctx->pc = 0x263890u;
        goto label_263890;
    }
    ctx->pc = 0x263888u;
    {
        const bool branch_taken_0x263888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26388Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
        if (branch_taken_0x263888) {
            ctx->pc = 0x2638C8u;
            goto label_2638c8;
        }
    }
    ctx->pc = 0x263890u;
label_263890:
    // 0x263890: 0x8c440890
    ctx->pc = 0x263890u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2192)));
label_263894:
    // 0x263894: 0x10800004
label_263898:
    if (ctx->pc == 0x263898u) {
        ctx->pc = 0x263898u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x26389Cu;
        goto label_26389c;
    }
    ctx->pc = 0x263894u;
    {
        const bool branch_taken_0x263894 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263898u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x263894) {
            ctx->pc = 0x2638A8u;
            goto label_2638a8;
        }
    }
    ctx->pc = 0x26389Cu;
label_26389c:
    // 0x26389c: 0xc0b0f52
label_2638a0:
    if (ctx->pc == 0x2638A0u) {
        ctx->pc = 0x2638A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2638A4u;
        goto label_2638a4;
    }
    ctx->pc = 0x26389Cu;
    SET_GPR_U32(ctx, 31, 0x2638A4u);
    ctx->pc = 0x2638A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638A4u; }
    }
    if (ctx->pc != 0x2638A4u) { return; }
    ctx->pc = 0x2638A4u;
label_2638a4:
    // 0x2638a4: 0x3c020035
    ctx->pc = 0x2638a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2638a8:
    // 0x2638a8: 0x3c01bf80
    ctx->pc = 0x2638a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_2638ac:
    // 0x2638ac: 0x44810000
    ctx->pc = 0x2638acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2638b0:
    // 0x2638b0: 0xc088ad6
label_2638b4:
    if (ctx->pc == 0x2638B4u) {
        ctx->pc = 0x2638B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
        ctx->pc = 0x2638B8u;
        goto label_2638b8;
    }
    ctx->pc = 0x2638B0u;
    SET_GPR_U32(ctx, 31, 0x2638B8u);
    ctx->pc = 0x2638B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638B8u; }
    }
    if (ctx->pc != 0x2638B8u) { return; }
    ctx->pc = 0x2638B8u;
label_2638b8:
    // 0x2638b8: 0x14400003
label_2638bc:
    if (ctx->pc == 0x2638BCu) {
        ctx->pc = 0x2638BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x2638C0u;
        goto label_2638c0;
    }
    ctx->pc = 0x2638B8u;
    {
        const bool branch_taken_0x2638b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2638BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2638b8) {
            ctx->pc = 0x2638C8u;
            goto label_2638c8;
        }
    }
    ctx->pc = 0x2638C0u;
label_2638c0:
    // 0x2638c0: 0x24020002
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2638c4:
    // 0x2638c4: 0xac620810
    ctx->pc = 0x2638c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2064), GPR_U32(ctx, 2));
label_2638c8:
    // 0x2638c8: 0xc098ab0
label_2638cc:
    if (ctx->pc == 0x2638CCu) {
        ctx->pc = 0x2638D0u;
        goto label_2638d0;
    }
    ctx->pc = 0x2638C8u;
    SET_GPR_U32(ctx, 31, 0x2638D0u);
    ctx->pc = 0x262AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrintWorldMemSizes_0x262ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2638D0u; }
    }
    if (ctx->pc != 0x2638D0u) { return; }
    ctx->pc = 0x2638D0u;
label_2638d0:
    // 0x2638d0: 0x3c020036
    ctx->pc = 0x2638d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2638d4:
    // 0x2638d4: 0x8c42d804
    ctx->pc = 0x2638d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957060)));
label_2638d8:
    // 0x2638d8: 0x10400003
label_2638dc:
    if (ctx->pc == 0x2638DCu) {
        ctx->pc = 0x2638DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2638E0u;
        goto label_2638e0;
    }
    ctx->pc = 0x2638D8u;
    {
        const bool branch_taken_0x2638d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2638DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2638d8) {
            ctx->pc = 0x2638E8u;
            goto label_2638e8;
        }
    }
    ctx->pc = 0x2638E0u;
label_2638e0:
    // 0x2638e0: 0x24020063
    ctx->pc = 0x2638e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
label_2638e4:
    // 0x2638e4: 0xac62e880
    ctx->pc = 0x2638e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
label_2638e8:
    // 0x2638e8: 0x3c020034
    ctx->pc = 0x2638e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2638ec:
    // 0x2638ec: 0x8c43e880
    ctx->pc = 0x2638ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_2638f0:
    // 0x2638f0: 0x24020003
    ctx->pc = 0x2638f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2638f4:
    // 0x2638f4: 0x10620041
label_2638f8:
    if (ctx->pc == 0x2638F8u) {
        ctx->pc = 0x2638F8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x2638FCu;
        goto label_2638fc;
    }
    ctx->pc = 0x2638F4u;
    {
        const bool branch_taken_0x2638f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2638F8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x2638f4) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x2638FCu;
label_2638fc:
    // 0x2638fc: 0x10400005
label_263900:
    if (ctx->pc == 0x263900u) {
        ctx->pc = 0x263900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x263904u;
        goto label_263904;
    }
    ctx->pc = 0x2638FCu;
    {
        const bool branch_taken_0x2638fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2638fc) {
            ctx->pc = 0x263914u;
            goto label_263914;
        }
    }
    ctx->pc = 0x263904u;
label_263904:
    // 0x263904: 0x1062000a
label_263908:
    if (ctx->pc == 0x263908u) {
        ctx->pc = 0x263908u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x26390Cu;
        goto label_26390c;
    }
    ctx->pc = 0x263904u;
    {
        const bool branch_taken_0x263904 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x263908u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x263904) {
            ctx->pc = 0x263930u;
            goto label_263930;
        }
    }
    ctx->pc = 0x26390Cu;
label_26390c:
    // 0x26390c: 0x100000d9
label_263910:
    if (ctx->pc == 0x263910u) {
        ctx->pc = 0x263910u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x263914u;
        goto label_263914;
    }
    ctx->pc = 0x26390Cu;
    {
        const bool branch_taken_0x26390c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263910u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x26390c) {
            ctx->pc = 0x263C74u;
            goto label_263c74;
        }
    }
    ctx->pc = 0x263914u;
label_263914:
    // 0x263914: 0x24020004
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_263918:
    // 0x263918: 0x10620042
label_26391c:
    if (ctx->pc == 0x26391Cu) {
        ctx->pc = 0x26391Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x263920u;
        goto label_263920;
    }
    ctx->pc = 0x263918u;
    {
        const bool branch_taken_0x263918 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26391Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x263918) {
            ctx->pc = 0x263A24u;
            goto label_263a24;
        }
    }
    ctx->pc = 0x263920u;
label_263920:
    // 0x263920: 0x10620047
label_263924:
    if (ctx->pc == 0x263924u) {
        ctx->pc = 0x263924u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x263928u;
        goto label_263928;
    }
    ctx->pc = 0x263920u;
    {
        const bool branch_taken_0x263920 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x263924u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x263920) {
            ctx->pc = 0x263A40u;
            goto label_263a40;
        }
    }
    ctx->pc = 0x263928u;
label_263928:
    // 0x263928: 0x100000d2
label_26392c:
    if (ctx->pc == 0x26392Cu) {
        ctx->pc = 0x26392Cu;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x263930u;
        goto label_263930;
    }
    ctx->pc = 0x263928u;
    {
        const bool branch_taken_0x263928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26392Cu;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x263928) {
            ctx->pc = 0x263C74u;
            goto label_263c74;
        }
    }
    ctx->pc = 0x263930u;
label_263930:
    // 0x263930: 0x3c040034
    ctx->pc = 0x263930u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_263934:
    // 0x263934: 0xc481e884
    ctx->pc = 0x263934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263938:
    // 0x263938: 0x44800000
    ctx->pc = 0x263938u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_26393c:
    // 0x26393c: 0x46000832
    ctx->pc = 0x26393cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263940:
    // 0x263940: 0x0
    ctx->pc = 0x263940u;
    // NOP
label_263944:
    // 0x263944: 0x45000022
label_263948:
    if (ctx->pc == 0x263948u) {
        ctx->pc = 0x263948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x26394Cu;
        goto label_26394c;
    }
    ctx->pc = 0x263944u;
    {
        const bool branch_taken_0x263944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x263944) {
            ctx->pc = 0x2639D0u;
            goto label_2639d0;
        }
    }
    ctx->pc = 0x26394Cu;
label_26394c:
    // 0x26394c: 0x8c43d934
    ctx->pc = 0x26394cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_263950:
    // 0x263950: 0x24020023
    ctx->pc = 0x263950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
label_263954:
    // 0x263954: 0x1062000f
label_263958:
    if (ctx->pc == 0x263958u) {
        ctx->pc = 0x263958u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 35));
        ctx->pc = 0x26395Cu;
        goto label_26395c;
    }
    ctx->pc = 0x263954u;
    {
        const bool branch_taken_0x263954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x263958u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 35));
        if (branch_taken_0x263954) {
            ctx->pc = 0x263994u;
            goto label_263994;
        }
    }
    ctx->pc = 0x26395Cu;
label_26395c:
    // 0x26395c: 0x54400015
label_263960:
    if (ctx->pc == 0x263960u) {
        ctx->pc = 0x263960u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x263964u;
        goto label_263964;
    }
    ctx->pc = 0x26395Cu;
    {
        const bool branch_taken_0x26395c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26395c) {
            ctx->pc = 0x263960u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x2639B4u;
            goto label_2639b4;
        }
    }
    ctx->pc = 0x263964u;
label_263964:
    // 0x263964: 0x2862002b
    ctx->pc = 0x263964u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 43));
label_263968:
    // 0x263968: 0x10400011
label_26396c:
    if (ctx->pc == 0x26396Cu) {
        ctx->pc = 0x26396Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 41));
        ctx->pc = 0x263970u;
        goto label_263970;
    }
    ctx->pc = 0x263968u;
    {
        const bool branch_taken_0x263968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26396Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 41));
        if (branch_taken_0x263968) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x263970u;
label_263970:
    // 0x263970: 0x14400010
label_263974:
    if (ctx->pc == 0x263974u) {
        ctx->pc = 0x263974u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x263978u;
        goto label_263978;
    }
    ctx->pc = 0x263970u;
    {
        const bool branch_taken_0x263970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x263974u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x263970) {
            ctx->pc = 0x2639B4u;
            goto label_2639b4;
        }
    }
    ctx->pc = 0x263978u;
label_263978:
    // 0x263978: 0x3c020031
    ctx->pc = 0x263978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26397c:
    // 0x26397c: 0xc440ffa4
    ctx->pc = 0x26397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263980:
    // 0x263980: 0x3c013f80
    ctx->pc = 0x263980u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_263984:
    // 0x263984: 0x44810800
    ctx->pc = 0x263984u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_263988:
    // 0x263988: 0x46010000
    ctx->pc = 0x263988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26398c:
    // 0x26398c: 0x1000001b
label_263990:
    if (ctx->pc == 0x263990u) {
        ctx->pc = 0x263990u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961284), bits); }
        ctx->pc = 0x263994u;
        goto label_263994;
    }
    ctx->pc = 0x26398Cu;
    {
        const bool branch_taken_0x26398c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263990u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961284), bits); }
        if (branch_taken_0x26398c) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x263994u;
label_263994:
    // 0x263994: 0x3c030034
    ctx->pc = 0x263994u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263998:
    // 0x263998: 0x3c020031
    ctx->pc = 0x263998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26399c:
    // 0x26399c: 0xc440ffa4
    ctx->pc = 0x26399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639a0:
    // 0x2639a0: 0x3c013f80
    ctx->pc = 0x2639a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2639a4:
    // 0x2639a4: 0x44810800
    ctx->pc = 0x2639a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2639a8:
    // 0x2639a8: 0x10000007
label_2639ac:
    if (ctx->pc == 0x2639ACu) {
        ctx->pc = 0x2639ACu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2639B0u;
        goto label_2639b0;
    }
    ctx->pc = 0x2639A8u;
    {
        const bool branch_taken_0x2639a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2639ACu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2639a8) {
            ctx->pc = 0x2639C8u;
            goto label_2639c8;
        }
    }
    ctx->pc = 0x2639B0u;
label_2639b0:
    // 0x2639b0: 0x3c030034
    ctx->pc = 0x2639b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2639b4:
    // 0x2639b4: 0x3c020031
    ctx->pc = 0x2639b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2639b8:
    // 0x2639b8: 0xc440ffa4
    ctx->pc = 0x2639b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639bc:
    // 0x2639bc: 0x3c014040
    ctx->pc = 0x2639bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_2639c0:
    // 0x2639c0: 0x44810800
    ctx->pc = 0x2639c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2639c4:
    // 0x2639c4: 0x46010000
    ctx->pc = 0x2639c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2639c8:
    // 0x2639c8: 0x1000000c
label_2639cc:
    if (ctx->pc == 0x2639CCu) {
        ctx->pc = 0x2639CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961284), bits); }
        ctx->pc = 0x2639D0u;
        goto label_2639d0;
    }
    ctx->pc = 0x2639C8u;
    {
        const bool branch_taken_0x2639c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2639CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961284), bits); }
        if (branch_taken_0x2639c8) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x2639D0u;
label_2639d0:
    // 0x2639d0: 0x3c020031
    ctx->pc = 0x2639d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2639d4:
    // 0x2639d4: 0x3c040034
    ctx->pc = 0x2639d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_2639d8:
    // 0x2639d8: 0xc441ffa4
    ctx->pc = 0x2639d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2639dc:
    // 0x2639dc: 0xc480e884
    ctx->pc = 0x2639dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639e0:
    // 0x2639e0: 0x46010036
    ctx->pc = 0x2639e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2639e4:
    // 0x2639e4: 0x0
    ctx->pc = 0x2639e4u;
    // NOP
label_2639e8:
    // 0x2639e8: 0x45000004
label_2639ec:
    if (ctx->pc == 0x2639ECu) {
        ctx->pc = 0x2639ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2639F0u;
        goto label_2639f0;
    }
    ctx->pc = 0x2639E8u;
    {
        const bool branch_taken_0x2639e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2639ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2639e8) {
            ctx->pc = 0x2639FCu;
            goto label_2639fc;
        }
    }
    ctx->pc = 0x2639F0u;
label_2639f0:
    // 0x2639f0: 0x24020003
    ctx->pc = 0x2639f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2639f4:
    // 0x2639f4: 0xac62e880
    ctx->pc = 0x2639f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
label_2639f8:
    // 0x2639f8: 0xac80e884
    ctx->pc = 0x2639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961284), GPR_U32(ctx, 0));
label_2639fc:
    // 0x2639fc: 0x3c013dcc
    ctx->pc = 0x2639fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_263a00:
    // 0x263a00: 0x3421cccd
    ctx->pc = 0x263a00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_263a04:
    // 0x263a04: 0x44816000
    ctx->pc = 0x263a04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_263a08:
    // 0x263a08: 0x3c01bf4c
    ctx->pc = 0x263a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48972 << 16));
label_263a0c:
    // 0x263a0c: 0x3421cccd
    ctx->pc = 0x263a0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_263a10:
    // 0x263a10: 0x44816800
    ctx->pc = 0x263a10u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_263a14:
    // 0x263a14: 0xc0a01a4
label_263a18:
    if (ctx->pc == 0x263A18u) {
        ctx->pc = 0x263A1Cu;
        goto label_263a1c;
    }
    ctx->pc = 0x263A14u;
    SET_GPR_U32(ctx, 31, 0x263A1Cu);
    ctx->pc = 0x280690u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAmbientSpecial_0x280690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A1Cu; }
    }
    if (ctx->pc != 0x263A1Cu) { return; }
    ctx->pc = 0x263A1Cu;
label_263a1c:
    // 0x263a1c: 0x10000094
label_263a20:
    if (ctx->pc == 0x263A20u) {
        ctx->pc = 0x263A20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x263A24u;
        goto label_263a24;
    }
    ctx->pc = 0x263A1Cu;
    {
        const bool branch_taken_0x263a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263A20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x263a1c) {
            ctx->pc = 0x263C70u;
            goto label_263c70;
        }
    }
    ctx->pc = 0x263A24u;
label_263a24:
    // 0x263a24: 0x3c030034
    ctx->pc = 0x263a24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263a28:
    // 0x263a28: 0xac62e880
    ctx->pc = 0x263a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
label_263a2c:
    // 0x263a2c: 0x3c030034
    ctx->pc = 0x263a2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263a30:
    // 0x263a30: 0x3c020031
    ctx->pc = 0x263a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263a34:
    // 0x263a34: 0xc440ffa4
    ctx->pc = 0x263a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a38:
    // 0x263a38: 0x1000008c
label_263a3c:
    if (ctx->pc == 0x263A3Cu) {
        ctx->pc = 0x263A3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961284), bits); }
        ctx->pc = 0x263A40u;
        goto label_263a40;
    }
    ctx->pc = 0x263A38u;
    {
        const bool branch_taken_0x263a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263A3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961284), bits); }
        if (branch_taken_0x263a38) {
            ctx->pc = 0x263C6Cu;
            goto label_263c6c;
        }
    }
    ctx->pc = 0x263A40u;
label_263a40:
    // 0x263a40: 0x802d
    ctx->pc = 0x263a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263a44:
    // 0x263a44: 0x3c020031
    ctx->pc = 0x263a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263a48:
    // 0x263a48: 0x3c030034
    ctx->pc = 0x263a48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263a4c:
    // 0x263a4c: 0xc441ffa4
    ctx->pc = 0x263a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a50:
    // 0x263a50: 0xc460e884
    ctx->pc = 0x263a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a54:
    // 0x263a54: 0x3c020036
    ctx->pc = 0x263a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_263a58:
    // 0x263a58: 0x8c42d934
    ctx->pc = 0x263a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_263a5c:
    // 0x263a5c: 0x2443ffdc
    ctx->pc = 0x263a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967260));
label_263a60:
    // 0x263a60: 0x2c620007
    ctx->pc = 0x263a60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_263a64:
    // 0x263a64: 0x10400039
label_263a68:
    if (ctx->pc == 0x263A68u) {
        ctx->pc = 0x263A68u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x263A6Cu;
        goto label_263a6c;
    }
    ctx->pc = 0x263A64u;
    {
        const bool branch_taken_0x263a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263A68u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x263a64) {
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263A6Cu;
label_263a6c:
    // 0x263a6c: 0x3c02003b
    ctx->pc = 0x263a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_263a70:
    // 0x263a70: 0x24429b30
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941488));
label_263a74:
    // 0x263a74: 0x31880
    ctx->pc = 0x263a74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_263a78:
    // 0x263a78: 0x621821
    ctx->pc = 0x263a78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263a7c:
    // 0x263a7c: 0x8c620000
    ctx->pc = 0x263a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_263a80:
    // 0x263a80: 0x400008
label_263a84:
    if (ctx->pc == 0x263A84u) {
        ctx->pc = 0x263A88u;
        goto label_263a88;
    }
    ctx->pc = 0x263A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2633B8u: goto label_2633b8;
            case 0x2633BCu: goto label_2633bc;
            case 0x2633C0u: goto label_2633c0;
            case 0x2633C4u: goto label_2633c4;
            case 0x2633C8u: goto label_2633c8;
            case 0x2633CCu: goto label_2633cc;
            case 0x2633D0u: goto label_2633d0;
            case 0x2633D4u: goto label_2633d4;
            case 0x2633D8u: goto label_2633d8;
            case 0x2633DCu: goto label_2633dc;
            case 0x2633E0u: goto label_2633e0;
            case 0x2633E4u: goto label_2633e4;
            case 0x2633E8u: goto label_2633e8;
            case 0x2633ECu: goto label_2633ec;
            case 0x2633F0u: goto label_2633f0;
            case 0x2633F4u: goto label_2633f4;
            case 0x2633F8u: goto label_2633f8;
            case 0x2633FCu: goto label_2633fc;
            case 0x263400u: goto label_263400;
            case 0x263404u: goto label_263404;
            case 0x263408u: goto label_263408;
            case 0x26340Cu: goto label_26340c;
            case 0x263410u: goto label_263410;
            case 0x263414u: goto label_263414;
            case 0x263418u: goto label_263418;
            case 0x26341Cu: goto label_26341c;
            case 0x263420u: goto label_263420;
            case 0x263424u: goto label_263424;
            case 0x263428u: goto label_263428;
            case 0x26342Cu: goto label_26342c;
            case 0x263430u: goto label_263430;
            case 0x263434u: goto label_263434;
            case 0x263438u: goto label_263438;
            case 0x26343Cu: goto label_26343c;
            case 0x263440u: goto label_263440;
            case 0x263444u: goto label_263444;
            case 0x263448u: goto label_263448;
            case 0x26344Cu: goto label_26344c;
            case 0x263450u: goto label_263450;
            case 0x263454u: goto label_263454;
            case 0x263458u: goto label_263458;
            case 0x26345Cu: goto label_26345c;
            case 0x263460u: goto label_263460;
            case 0x263464u: goto label_263464;
            case 0x263468u: goto label_263468;
            case 0x26346Cu: goto label_26346c;
            case 0x263470u: goto label_263470;
            case 0x263474u: goto label_263474;
            case 0x263478u: goto label_263478;
            case 0x26347Cu: goto label_26347c;
            case 0x263480u: goto label_263480;
            case 0x263484u: goto label_263484;
            case 0x263488u: goto label_263488;
            case 0x26348Cu: goto label_26348c;
            case 0x263490u: goto label_263490;
            case 0x263494u: goto label_263494;
            case 0x263498u: goto label_263498;
            case 0x26349Cu: goto label_26349c;
            case 0x2634A0u: goto label_2634a0;
            case 0x2634A4u: goto label_2634a4;
            case 0x2634A8u: goto label_2634a8;
            case 0x2634ACu: goto label_2634ac;
            case 0x2634B0u: goto label_2634b0;
            case 0x2634B4u: goto label_2634b4;
            case 0x2634B8u: goto label_2634b8;
            case 0x2634BCu: goto label_2634bc;
            case 0x2634C0u: goto label_2634c0;
            case 0x2634C4u: goto label_2634c4;
            case 0x2634C8u: goto label_2634c8;
            case 0x2634CCu: goto label_2634cc;
            case 0x2634D0u: goto label_2634d0;
            case 0x2634D4u: goto label_2634d4;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634DCu: goto label_2634dc;
            case 0x2634E0u: goto label_2634e0;
            case 0x2634E4u: goto label_2634e4;
            case 0x2634E8u: goto label_2634e8;
            case 0x2634ECu: goto label_2634ec;
            case 0x2634F0u: goto label_2634f0;
            case 0x2634F4u: goto label_2634f4;
            case 0x2634F8u: goto label_2634f8;
            case 0x2634FCu: goto label_2634fc;
            case 0x263500u: goto label_263500;
            case 0x263504u: goto label_263504;
            case 0x263508u: goto label_263508;
            case 0x26350Cu: goto label_26350c;
            case 0x263510u: goto label_263510;
            case 0x263514u: goto label_263514;
            case 0x263518u: goto label_263518;
            case 0x26351Cu: goto label_26351c;
            case 0x263520u: goto label_263520;
            case 0x263524u: goto label_263524;
            case 0x263528u: goto label_263528;
            case 0x26352Cu: goto label_26352c;
            case 0x263530u: goto label_263530;
            case 0x263534u: goto label_263534;
            case 0x263538u: goto label_263538;
            case 0x26353Cu: goto label_26353c;
            case 0x263540u: goto label_263540;
            case 0x263544u: goto label_263544;
            case 0x263548u: goto label_263548;
            case 0x26354Cu: goto label_26354c;
            case 0x263550u: goto label_263550;
            case 0x263554u: goto label_263554;
            case 0x263558u: goto label_263558;
            case 0x26355Cu: goto label_26355c;
            case 0x263560u: goto label_263560;
            case 0x263564u: goto label_263564;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x263570u: goto label_263570;
            case 0x263574u: goto label_263574;
            case 0x263578u: goto label_263578;
            case 0x26357Cu: goto label_26357c;
            case 0x263580u: goto label_263580;
            case 0x263584u: goto label_263584;
            case 0x263588u: goto label_263588;
            case 0x26358Cu: goto label_26358c;
            case 0x263590u: goto label_263590;
            case 0x263594u: goto label_263594;
            case 0x263598u: goto label_263598;
            case 0x26359Cu: goto label_26359c;
            case 0x2635A0u: goto label_2635a0;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635ACu: goto label_2635ac;
            case 0x2635B0u: goto label_2635b0;
            case 0x2635B4u: goto label_2635b4;
            case 0x2635B8u: goto label_2635b8;
            case 0x2635BCu: goto label_2635bc;
            case 0x2635C0u: goto label_2635c0;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635C8u: goto label_2635c8;
            case 0x2635CCu: goto label_2635cc;
            case 0x2635D0u: goto label_2635d0;
            case 0x2635D4u: goto label_2635d4;
            case 0x2635D8u: goto label_2635d8;
            case 0x2635DCu: goto label_2635dc;
            case 0x2635E0u: goto label_2635e0;
            case 0x2635E4u: goto label_2635e4;
            case 0x2635E8u: goto label_2635e8;
            case 0x2635ECu: goto label_2635ec;
            case 0x2635F0u: goto label_2635f0;
            case 0x2635F4u: goto label_2635f4;
            case 0x2635F8u: goto label_2635f8;
            case 0x2635FCu: goto label_2635fc;
            case 0x263600u: goto label_263600;
            case 0x263604u: goto label_263604;
            case 0x263608u: goto label_263608;
            case 0x26360Cu: goto label_26360c;
            case 0x263610u: goto label_263610;
            case 0x263614u: goto label_263614;
            case 0x263618u: goto label_263618;
            case 0x26361Cu: goto label_26361c;
            case 0x263620u: goto label_263620;
            case 0x263624u: goto label_263624;
            case 0x263628u: goto label_263628;
            case 0x26362Cu: goto label_26362c;
            case 0x263630u: goto label_263630;
            case 0x263634u: goto label_263634;
            case 0x263638u: goto label_263638;
            case 0x26363Cu: goto label_26363c;
            case 0x263640u: goto label_263640;
            case 0x263644u: goto label_263644;
            case 0x263648u: goto label_263648;
            case 0x26364Cu: goto label_26364c;
            case 0x263650u: goto label_263650;
            case 0x263654u: goto label_263654;
            case 0x263658u: goto label_263658;
            case 0x26365Cu: goto label_26365c;
            case 0x263660u: goto label_263660;
            case 0x263664u: goto label_263664;
            case 0x263668u: goto label_263668;
            case 0x26366Cu: goto label_26366c;
            case 0x263670u: goto label_263670;
            case 0x263674u: goto label_263674;
            case 0x263678u: goto label_263678;
            case 0x26367Cu: goto label_26367c;
            case 0x263680u: goto label_263680;
            case 0x263684u: goto label_263684;
            case 0x263688u: goto label_263688;
            case 0x26368Cu: goto label_26368c;
            case 0x263690u: goto label_263690;
            case 0x263694u: goto label_263694;
            case 0x263698u: goto label_263698;
            case 0x26369Cu: goto label_26369c;
            case 0x2636A0u: goto label_2636a0;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636A8u: goto label_2636a8;
            case 0x2636ACu: goto label_2636ac;
            case 0x2636B0u: goto label_2636b0;
            case 0x2636B4u: goto label_2636b4;
            case 0x2636B8u: goto label_2636b8;
            case 0x2636BCu: goto label_2636bc;
            case 0x2636C0u: goto label_2636c0;
            case 0x2636C4u: goto label_2636c4;
            case 0x2636C8u: goto label_2636c8;
            case 0x2636CCu: goto label_2636cc;
            case 0x2636D0u: goto label_2636d0;
            case 0x2636D4u: goto label_2636d4;
            case 0x2636D8u: goto label_2636d8;
            case 0x2636DCu: goto label_2636dc;
            case 0x2636E0u: goto label_2636e0;
            case 0x2636E4u: goto label_2636e4;
            case 0x2636E8u: goto label_2636e8;
            case 0x2636ECu: goto label_2636ec;
            case 0x2636F0u: goto label_2636f0;
            case 0x2636F4u: goto label_2636f4;
            case 0x2636F8u: goto label_2636f8;
            case 0x2636FCu: goto label_2636fc;
            case 0x263700u: goto label_263700;
            case 0x263704u: goto label_263704;
            case 0x263708u: goto label_263708;
            case 0x26370Cu: goto label_26370c;
            case 0x263710u: goto label_263710;
            case 0x263714u: goto label_263714;
            case 0x263718u: goto label_263718;
            case 0x26371Cu: goto label_26371c;
            case 0x263720u: goto label_263720;
            case 0x263724u: goto label_263724;
            case 0x263728u: goto label_263728;
            case 0x26372Cu: goto label_26372c;
            case 0x263730u: goto label_263730;
            case 0x263734u: goto label_263734;
            case 0x263738u: goto label_263738;
            case 0x26373Cu: goto label_26373c;
            case 0x263740u: goto label_263740;
            case 0x263744u: goto label_263744;
            case 0x263748u: goto label_263748;
            case 0x26374Cu: goto label_26374c;
            case 0x263750u: goto label_263750;
            case 0x263754u: goto label_263754;
            case 0x263758u: goto label_263758;
            case 0x26375Cu: goto label_26375c;
            case 0x263760u: goto label_263760;
            case 0x263764u: goto label_263764;
            case 0x263768u: goto label_263768;
            case 0x26376Cu: goto label_26376c;
            case 0x263770u: goto label_263770;
            case 0x263774u: goto label_263774;
            case 0x263778u: goto label_263778;
            case 0x26377Cu: goto label_26377c;
            case 0x263780u: goto label_263780;
            case 0x263784u: goto label_263784;
            case 0x263788u: goto label_263788;
            case 0x26378Cu: goto label_26378c;
            case 0x263790u: goto label_263790;
            case 0x263794u: goto label_263794;
            case 0x263798u: goto label_263798;
            case 0x26379Cu: goto label_26379c;
            case 0x2637A0u: goto label_2637a0;
            case 0x2637A4u: goto label_2637a4;
            case 0x2637A8u: goto label_2637a8;
            case 0x2637ACu: goto label_2637ac;
            case 0x2637B0u: goto label_2637b0;
            case 0x2637B4u: goto label_2637b4;
            case 0x2637B8u: goto label_2637b8;
            case 0x2637BCu: goto label_2637bc;
            case 0x2637C0u: goto label_2637c0;
            case 0x2637C4u: goto label_2637c4;
            case 0x2637C8u: goto label_2637c8;
            case 0x2637CCu: goto label_2637cc;
            case 0x2637D0u: goto label_2637d0;
            case 0x2637D4u: goto label_2637d4;
            case 0x2637D8u: goto label_2637d8;
            case 0x2637DCu: goto label_2637dc;
            case 0x2637E0u: goto label_2637e0;
            case 0x2637E4u: goto label_2637e4;
            case 0x2637E8u: goto label_2637e8;
            case 0x2637ECu: goto label_2637ec;
            case 0x2637F0u: goto label_2637f0;
            case 0x2637F4u: goto label_2637f4;
            case 0x2637F8u: goto label_2637f8;
            case 0x2637FCu: goto label_2637fc;
            case 0x263800u: goto label_263800;
            case 0x263804u: goto label_263804;
            case 0x263808u: goto label_263808;
            case 0x26380Cu: goto label_26380c;
            case 0x263810u: goto label_263810;
            case 0x263814u: goto label_263814;
            case 0x263818u: goto label_263818;
            case 0x26381Cu: goto label_26381c;
            case 0x263820u: goto label_263820;
            case 0x263824u: goto label_263824;
            case 0x263828u: goto label_263828;
            case 0x26382Cu: goto label_26382c;
            case 0x263830u: goto label_263830;
            case 0x263834u: goto label_263834;
            case 0x263838u: goto label_263838;
            case 0x26383Cu: goto label_26383c;
            case 0x263840u: goto label_263840;
            case 0x263844u: goto label_263844;
            case 0x263848u: goto label_263848;
            case 0x26384Cu: goto label_26384c;
            case 0x263850u: goto label_263850;
            case 0x263854u: goto label_263854;
            case 0x263858u: goto label_263858;
            case 0x26385Cu: goto label_26385c;
            case 0x263860u: goto label_263860;
            case 0x263864u: goto label_263864;
            case 0x263868u: goto label_263868;
            case 0x26386Cu: goto label_26386c;
            case 0x263870u: goto label_263870;
            case 0x263874u: goto label_263874;
            case 0x263878u: goto label_263878;
            case 0x26387Cu: goto label_26387c;
            case 0x263880u: goto label_263880;
            case 0x263884u: goto label_263884;
            case 0x263888u: goto label_263888;
            case 0x26388Cu: goto label_26388c;
            case 0x263890u: goto label_263890;
            case 0x263894u: goto label_263894;
            case 0x263898u: goto label_263898;
            case 0x26389Cu: goto label_26389c;
            case 0x2638A0u: goto label_2638a0;
            case 0x2638A4u: goto label_2638a4;
            case 0x2638A8u: goto label_2638a8;
            case 0x2638ACu: goto label_2638ac;
            case 0x2638B0u: goto label_2638b0;
            case 0x2638B4u: goto label_2638b4;
            case 0x2638B8u: goto label_2638b8;
            case 0x2638BCu: goto label_2638bc;
            case 0x2638C0u: goto label_2638c0;
            case 0x2638C4u: goto label_2638c4;
            case 0x2638C8u: goto label_2638c8;
            case 0x2638CCu: goto label_2638cc;
            case 0x2638D0u: goto label_2638d0;
            case 0x2638D4u: goto label_2638d4;
            case 0x2638D8u: goto label_2638d8;
            case 0x2638DCu: goto label_2638dc;
            case 0x2638E0u: goto label_2638e0;
            case 0x2638E4u: goto label_2638e4;
            case 0x2638E8u: goto label_2638e8;
            case 0x2638ECu: goto label_2638ec;
            case 0x2638F0u: goto label_2638f0;
            case 0x2638F4u: goto label_2638f4;
            case 0x2638F8u: goto label_2638f8;
            case 0x2638FCu: goto label_2638fc;
            case 0x263900u: goto label_263900;
            case 0x263904u: goto label_263904;
            case 0x263908u: goto label_263908;
            case 0x26390Cu: goto label_26390c;
            case 0x263910u: goto label_263910;
            case 0x263914u: goto label_263914;
            case 0x263918u: goto label_263918;
            case 0x26391Cu: goto label_26391c;
            case 0x263920u: goto label_263920;
            case 0x263924u: goto label_263924;
            case 0x263928u: goto label_263928;
            case 0x26392Cu: goto label_26392c;
            case 0x263930u: goto label_263930;
            case 0x263934u: goto label_263934;
            case 0x263938u: goto label_263938;
            case 0x26393Cu: goto label_26393c;
            case 0x263940u: goto label_263940;
            case 0x263944u: goto label_263944;
            case 0x263948u: goto label_263948;
            case 0x26394Cu: goto label_26394c;
            case 0x263950u: goto label_263950;
            case 0x263954u: goto label_263954;
            case 0x263958u: goto label_263958;
            case 0x26395Cu: goto label_26395c;
            case 0x263960u: goto label_263960;
            case 0x263964u: goto label_263964;
            case 0x263968u: goto label_263968;
            case 0x26396Cu: goto label_26396c;
            case 0x263970u: goto label_263970;
            case 0x263974u: goto label_263974;
            case 0x263978u: goto label_263978;
            case 0x26397Cu: goto label_26397c;
            case 0x263980u: goto label_263980;
            case 0x263984u: goto label_263984;
            case 0x263988u: goto label_263988;
            case 0x26398Cu: goto label_26398c;
            case 0x263990u: goto label_263990;
            case 0x263994u: goto label_263994;
            case 0x263998u: goto label_263998;
            case 0x26399Cu: goto label_26399c;
            case 0x2639A0u: goto label_2639a0;
            case 0x2639A4u: goto label_2639a4;
            case 0x2639A8u: goto label_2639a8;
            case 0x2639ACu: goto label_2639ac;
            case 0x2639B0u: goto label_2639b0;
            case 0x2639B4u: goto label_2639b4;
            case 0x2639B8u: goto label_2639b8;
            case 0x2639BCu: goto label_2639bc;
            case 0x2639C0u: goto label_2639c0;
            case 0x2639C4u: goto label_2639c4;
            case 0x2639C8u: goto label_2639c8;
            case 0x2639CCu: goto label_2639cc;
            case 0x2639D0u: goto label_2639d0;
            case 0x2639D4u: goto label_2639d4;
            case 0x2639D8u: goto label_2639d8;
            case 0x2639DCu: goto label_2639dc;
            case 0x2639E0u: goto label_2639e0;
            case 0x2639E4u: goto label_2639e4;
            case 0x2639E8u: goto label_2639e8;
            case 0x2639ECu: goto label_2639ec;
            case 0x2639F0u: goto label_2639f0;
            case 0x2639F4u: goto label_2639f4;
            case 0x2639F8u: goto label_2639f8;
            case 0x2639FCu: goto label_2639fc;
            case 0x263A00u: goto label_263a00;
            case 0x263A04u: goto label_263a04;
            case 0x263A08u: goto label_263a08;
            case 0x263A0Cu: goto label_263a0c;
            case 0x263A10u: goto label_263a10;
            case 0x263A14u: goto label_263a14;
            case 0x263A18u: goto label_263a18;
            case 0x263A1Cu: goto label_263a1c;
            case 0x263A20u: goto label_263a20;
            case 0x263A24u: goto label_263a24;
            case 0x263A28u: goto label_263a28;
            case 0x263A2Cu: goto label_263a2c;
            case 0x263A30u: goto label_263a30;
            case 0x263A34u: goto label_263a34;
            case 0x263A38u: goto label_263a38;
            case 0x263A3Cu: goto label_263a3c;
            case 0x263A40u: goto label_263a40;
            case 0x263A44u: goto label_263a44;
            case 0x263A48u: goto label_263a48;
            case 0x263A4Cu: goto label_263a4c;
            case 0x263A50u: goto label_263a50;
            case 0x263A54u: goto label_263a54;
            case 0x263A58u: goto label_263a58;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A60u: goto label_263a60;
            case 0x263A64u: goto label_263a64;
            case 0x263A68u: goto label_263a68;
            case 0x263A6Cu: goto label_263a6c;
            case 0x263A70u: goto label_263a70;
            case 0x263A74u: goto label_263a74;
            case 0x263A78u: goto label_263a78;
            case 0x263A7Cu: goto label_263a7c;
            case 0x263A80u: goto label_263a80;
            case 0x263A84u: goto label_263a84;
            case 0x263A88u: goto label_263a88;
            case 0x263A8Cu: goto label_263a8c;
            case 0x263A90u: goto label_263a90;
            case 0x263A94u: goto label_263a94;
            case 0x263A98u: goto label_263a98;
            case 0x263A9Cu: goto label_263a9c;
            case 0x263AA0u: goto label_263aa0;
            case 0x263AA4u: goto label_263aa4;
            case 0x263AA8u: goto label_263aa8;
            case 0x263AACu: goto label_263aac;
            case 0x263AB0u: goto label_263ab0;
            case 0x263AB4u: goto label_263ab4;
            case 0x263AB8u: goto label_263ab8;
            case 0x263ABCu: goto label_263abc;
            case 0x263AC0u: goto label_263ac0;
            case 0x263AC4u: goto label_263ac4;
            case 0x263AC8u: goto label_263ac8;
            case 0x263ACCu: goto label_263acc;
            case 0x263AD0u: goto label_263ad0;
            case 0x263AD4u: goto label_263ad4;
            case 0x263AD8u: goto label_263ad8;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE0u: goto label_263ae0;
            case 0x263AE4u: goto label_263ae4;
            case 0x263AE8u: goto label_263ae8;
            case 0x263AECu: goto label_263aec;
            case 0x263AF0u: goto label_263af0;
            case 0x263AF4u: goto label_263af4;
            case 0x263AF8u: goto label_263af8;
            case 0x263AFCu: goto label_263afc;
            case 0x263B00u: goto label_263b00;
            case 0x263B04u: goto label_263b04;
            case 0x263B08u: goto label_263b08;
            case 0x263B0Cu: goto label_263b0c;
            case 0x263B10u: goto label_263b10;
            case 0x263B14u: goto label_263b14;
            case 0x263B18u: goto label_263b18;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B20u: goto label_263b20;
            case 0x263B24u: goto label_263b24;
            case 0x263B28u: goto label_263b28;
            case 0x263B2Cu: goto label_263b2c;
            case 0x263B30u: goto label_263b30;
            case 0x263B34u: goto label_263b34;
            case 0x263B38u: goto label_263b38;
            case 0x263B3Cu: goto label_263b3c;
            case 0x263B40u: goto label_263b40;
            case 0x263B44u: goto label_263b44;
            case 0x263B48u: goto label_263b48;
            case 0x263B4Cu: goto label_263b4c;
            case 0x263B50u: goto label_263b50;
            case 0x263B54u: goto label_263b54;
            case 0x263B58u: goto label_263b58;
            case 0x263B5Cu: goto label_263b5c;
            case 0x263B60u: goto label_263b60;
            case 0x263B64u: goto label_263b64;
            case 0x263B68u: goto label_263b68;
            case 0x263B6Cu: goto label_263b6c;
            case 0x263B70u: goto label_263b70;
            case 0x263B74u: goto label_263b74;
            case 0x263B78u: goto label_263b78;
            case 0x263B7Cu: goto label_263b7c;
            case 0x263B80u: goto label_263b80;
            case 0x263B84u: goto label_263b84;
            case 0x263B88u: goto label_263b88;
            case 0x263B8Cu: goto label_263b8c;
            case 0x263B90u: goto label_263b90;
            case 0x263B94u: goto label_263b94;
            case 0x263B98u: goto label_263b98;
            case 0x263B9Cu: goto label_263b9c;
            case 0x263BA0u: goto label_263ba0;
            case 0x263BA4u: goto label_263ba4;
            case 0x263BA8u: goto label_263ba8;
            case 0x263BACu: goto label_263bac;
            case 0x263BB0u: goto label_263bb0;
            case 0x263BB4u: goto label_263bb4;
            case 0x263BB8u: goto label_263bb8;
            case 0x263BBCu: goto label_263bbc;
            case 0x263BC0u: goto label_263bc0;
            case 0x263BC4u: goto label_263bc4;
            case 0x263BC8u: goto label_263bc8;
            case 0x263BCCu: goto label_263bcc;
            case 0x263BD0u: goto label_263bd0;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BD8u: goto label_263bd8;
            case 0x263BDCu: goto label_263bdc;
            case 0x263BE0u: goto label_263be0;
            case 0x263BE4u: goto label_263be4;
            case 0x263BE8u: goto label_263be8;
            case 0x263BECu: goto label_263bec;
            case 0x263BF0u: goto label_263bf0;
            case 0x263BF4u: goto label_263bf4;
            case 0x263BF8u: goto label_263bf8;
            case 0x263BFCu: goto label_263bfc;
            case 0x263C00u: goto label_263c00;
            case 0x263C04u: goto label_263c04;
            case 0x263C08u: goto label_263c08;
            case 0x263C0Cu: goto label_263c0c;
            case 0x263C10u: goto label_263c10;
            case 0x263C14u: goto label_263c14;
            case 0x263C18u: goto label_263c18;
            case 0x263C1Cu: goto label_263c1c;
            case 0x263C20u: goto label_263c20;
            case 0x263C24u: goto label_263c24;
            case 0x263C28u: goto label_263c28;
            case 0x263C2Cu: goto label_263c2c;
            case 0x263C30u: goto label_263c30;
            case 0x263C34u: goto label_263c34;
            case 0x263C38u: goto label_263c38;
            case 0x263C3Cu: goto label_263c3c;
            case 0x263C40u: goto label_263c40;
            case 0x263C44u: goto label_263c44;
            case 0x263C48u: goto label_263c48;
            case 0x263C4Cu: goto label_263c4c;
            case 0x263C50u: goto label_263c50;
            case 0x263C54u: goto label_263c54;
            case 0x263C58u: goto label_263c58;
            case 0x263C5Cu: goto label_263c5c;
            case 0x263C60u: goto label_263c60;
            case 0x263C64u: goto label_263c64;
            case 0x263C68u: goto label_263c68;
            case 0x263C6Cu: goto label_263c6c;
            case 0x263C70u: goto label_263c70;
            case 0x263C74u: goto label_263c74;
            case 0x263C78u: goto label_263c78;
            case 0x263C7Cu: goto label_263c7c;
            case 0x263C80u: goto label_263c80;
            case 0x263C84u: goto label_263c84;
            case 0x263C88u: goto label_263c88;
            case 0x263C8Cu: goto label_263c8c;
            case 0x263C90u: goto label_263c90;
            case 0x263C94u: goto label_263c94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263A88u;
label_263a88:
    // 0x263a88: 0x3c0141e8
    ctx->pc = 0x263a88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16872 << 16));
label_263a8c:
    // 0x263a8c: 0x44810000
    ctx->pc = 0x263a8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263a90:
    // 0x263a90: 0x46010041
    ctx->pc = 0x263a90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_263a94:
    // 0x263a94: 0x44800000
    ctx->pc = 0x263a94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_263a98:
    // 0x263a98: 0x46000836
    ctx->pc = 0x263a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263a9c:
    // 0x263a9c: 0x0
    ctx->pc = 0x263a9cu;
    // NOP
label_263aa0:
    // 0x263aa0: 0x4500002a
label_263aa4:
    if (ctx->pc == 0x263AA4u) {
        ctx->pc = 0x263AA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x263AA8u;
        goto label_263aa8;
    }
    ctx->pc = 0x263AA0u;
    {
        const bool branch_taken_0x263aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263AA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x263aa0) {
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263AA8u;
label_263aa8:
    // 0x263aa8: 0x8c42d930
    ctx->pc = 0x263aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
label_263aac:
    // 0x263aac: 0xe4400b50
    ctx->pc = 0x263aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2896), bits); }
label_263ab0:
    // 0x263ab0: 0x10000026
label_263ab4:
    if (ctx->pc == 0x263AB4u) {
        ctx->pc = 0x263AB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263AB8u;
        goto label_263ab8;
    }
    ctx->pc = 0x263AB0u;
    {
        const bool branch_taken_0x263ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263AB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x263ab0) {
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263AB8u;
label_263ab8:
    // 0x263ab8: 0x3c0141e8
    ctx->pc = 0x263ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16872 << 16));
label_263abc:
    // 0x263abc: 0x44810000
    ctx->pc = 0x263abcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263ac0:
    // 0x263ac0: 0x46010041
    ctx->pc = 0x263ac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_263ac4:
    // 0x263ac4: 0x44800000
    ctx->pc = 0x263ac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_263ac8:
    // 0x263ac8: 0x46000836
    ctx->pc = 0x263ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263acc:
    // 0x263acc: 0x0
    ctx->pc = 0x263accu;
    // NOP
label_263ad0:
    // 0x263ad0: 0x4503001e
label_263ad4:
    if (ctx->pc == 0x263AD4u) {
        ctx->pc = 0x263AD4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263AD8u;
        goto label_263ad8;
    }
    ctx->pc = 0x263AD0u;
    {
        const bool branch_taken_0x263ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263ad0) {
            ctx->pc = 0x263AD4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263AD8u;
label_263ad8:
    // 0x263ad8: 0x1000001c
label_263adc:
    if (ctx->pc == 0x263ADCu) {
        ctx->pc = 0x263AE0u;
        goto label_263ae0;
    }
    ctx->pc = 0x263AD8u;
    {
        const bool branch_taken_0x263ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x263ad8) {
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263AE0u;
label_263ae0:
    // 0x263ae0: 0x3c0141e8
    ctx->pc = 0x263ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16872 << 16));
label_263ae4:
    // 0x263ae4: 0x44810000
    ctx->pc = 0x263ae4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263ae8:
    // 0x263ae8: 0x46010041
    ctx->pc = 0x263ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_263aec:
    // 0x263aec: 0x44800000
    ctx->pc = 0x263aecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_263af0:
    // 0x263af0: 0x46000836
    ctx->pc = 0x263af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263af4:
    // 0x263af4: 0x0
    ctx->pc = 0x263af4u;
    // NOP
label_263af8:
    // 0x263af8: 0x45000014
label_263afc:
    if (ctx->pc == 0x263AFCu) {
        ctx->pc = 0x263AFCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x263B00u;
        goto label_263b00;
    }
    ctx->pc = 0x263AF8u;
    {
        const bool branch_taken_0x263af8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263AFCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x263af8) {
            ctx->pc = 0x263B4Cu;
            goto label_263b4c;
        }
    }
    ctx->pc = 0x263B00u;
label_263b00:
    // 0x263b00: 0xc0b1a8e
label_263b04:
    if (ctx->pc == 0x263B04u) {
        ctx->pc = 0x263B04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941464));
        ctx->pc = 0x263B08u;
        goto label_263b08;
    }
    ctx->pc = 0x263B00u;
    SET_GPR_U32(ctx, 31, 0x263B08u);
    ctx->pc = 0x263B04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941464));
    ctx->pc = 0x2C6A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_0x2c6a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B08u; }
    }
    if (ctx->pc != 0x263B08u) { return; }
    ctx->pc = 0x263B08u;
label_263b08:
    // 0x263b08: 0x40282d
    ctx->pc = 0x263b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263b0c:
    // 0x263b0c: 0x3c020036
    ctx->pc = 0x263b0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_263b10:
    // 0x263b10: 0x8c42d930
    ctx->pc = 0x263b10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
label_263b14:
    // 0x263b14: 0x8c4400d8
    ctx->pc = 0x263b14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_263b18:
    // 0x263b18: 0x10800007
label_263b1c:
    if (ctx->pc == 0x263B1Cu) {
        ctx->pc = 0x263B1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x263B20u;
        goto label_263b20;
    }
    ctx->pc = 0x263B18u;
    {
        const bool branch_taken_0x263b18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263B1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x263b18) {
            ctx->pc = 0x263B38u;
            goto label_263b38;
        }
    }
    ctx->pc = 0x263B20u;
label_263b20:
    // 0x263b20: 0x8c840078
    ctx->pc = 0x263b20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_263b24:
    // 0x263b24: 0x10800005
label_263b28:
    if (ctx->pc == 0x263B28u) {
        ctx->pc = 0x263B28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
        ctx->pc = 0x263B2Cu;
        goto label_263b2c;
    }
    ctx->pc = 0x263B24u;
    {
        const bool branch_taken_0x263b24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x263B28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
        if (branch_taken_0x263b24) {
            ctx->pc = 0x263B3Cu;
            goto label_263b3c;
        }
    }
    ctx->pc = 0x263B2Cu;
label_263b2c:
    // 0x263b2c: 0xc0b220e
label_263b30:
    if (ctx->pc == 0x263B30u) {
        ctx->pc = 0x263B34u;
        goto label_263b34;
    }
    ctx->pc = 0x263B2Cu;
    SET_GPR_U32(ctx, 31, 0x263B34u);
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B34u; }
    }
    if (ctx->pc != 0x263B34u) { return; }
    ctx->pc = 0x263B34u;
label_263b34:
    // 0x263b34: 0x3c020036
    ctx->pc = 0x263b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_263b38:
    // 0x263b38: 0x8c42d930
    ctx->pc = 0x263b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
label_263b3c:
    // 0x263b3c: 0xa4400b4e
    ctx->pc = 0x263b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2894), (uint16_t)GPR_U32(ctx, 0));
label_263b40:
    // 0x263b40: 0x3c030034
    ctx->pc = 0x263b40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263b44:
    // 0x263b44: 0x24020006
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_263b48:
    // 0x263b48: 0xac62e880
    ctx->pc = 0x263b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
label_263b4c:
    // 0x263b4c: 0x12000013
label_263b50:
    if (ctx->pc == 0x263B50u) {
        ctx->pc = 0x263B50u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        ctx->pc = 0x263B54u;
        goto label_263b54;
    }
    ctx->pc = 0x263B4Cu;
    {
        const bool branch_taken_0x263b4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x263B50u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x263b4c) {
            ctx->pc = 0x263B9Cu;
            goto label_263b9c;
        }
    }
    ctx->pc = 0x263B54u;
label_263b54:
    // 0x263b54: 0x8e04e888
    ctx->pc = 0x263b54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961288)));
label_263b58:
    // 0x263b58: 0x480000e
label_263b5c:
    if (ctx->pc == 0x263B5Cu) {
        ctx->pc = 0x263B5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x263B60u;
        goto label_263b60;
    }
    ctx->pc = 0x263B58u;
    {
        const bool branch_taken_0x263b58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x263B5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x263b58) {
            ctx->pc = 0x263B94u;
            goto label_263b94;
        }
    }
    ctx->pc = 0x263B60u;
label_263b60:
    // 0x263b60: 0xc09e964
label_263b64:
    if (ctx->pc == 0x263B64u) {
        ctx->pc = 0x263B64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263B68u;
        goto label_263b68;
    }
    ctx->pc = 0x263B60u;
    SET_GPR_U32(ctx, 31, 0x263B68u);
    ctx->pc = 0x263B64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B68u; }
    }
    if (ctx->pc != 0x263B68u) { return; }
    ctx->pc = 0x263B68u;
label_263b68:
    // 0x263b68: 0xae02e888
    ctx->pc = 0x263b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961288), GPR_U32(ctx, 2));
label_263b6c:
    // 0x263b6c: 0x3c100036
    ctx->pc = 0x263b6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
label_263b70:
    // 0x263b70: 0x8e05d930
    ctx->pc = 0x263b70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294957360)));
label_263b74:
    // 0x263b74: 0x24040003
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_263b78:
    // 0x263b78: 0xc098382
label_263b7c:
    if (ctx->pc == 0x263B7Cu) {
        ctx->pc = 0x263B7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
        ctx->pc = 0x263B80u;
        goto label_263b80;
    }
    ctx->pc = 0x263B78u;
    SET_GPR_U32(ctx, 31, 0x263B80u);
    ctx->pc = 0x263B7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    ctx->pc = 0x260E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLegendItem_0x260e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B80u; }
    }
    if (ctx->pc != 0x263B80u) { return; }
    ctx->pc = 0x263B80u;
label_263b80:
    // 0x263b80: 0x8e05d930
    ctx->pc = 0x263b80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294957360)));
label_263b84:
    // 0x263b84: 0x24040004
    ctx->pc = 0x263b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_263b88:
    // 0x263b88: 0xc098382
label_263b8c:
    if (ctx->pc == 0x263B8Cu) {
        ctx->pc = 0x263B8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
        ctx->pc = 0x263B90u;
        goto label_263b90;
    }
    ctx->pc = 0x263B88u;
    SET_GPR_U32(ctx, 31, 0x263B90u);
    ctx->pc = 0x263B8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    ctx->pc = 0x260E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLegendItem_0x260e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B90u; }
    }
    if (ctx->pc != 0x263B90u) { return; }
    ctx->pc = 0x263B90u;
label_263b90:
    // 0x263b90: 0x3c030034
    ctx->pc = 0x263b90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_263b94:
    // 0x263b94: 0x24020006
    ctx->pc = 0x263b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_263b98:
    // 0x263b98: 0xac62e880
    ctx->pc = 0x263b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961280), GPR_U32(ctx, 2));
label_263b9c:
    // 0x263b9c: 0x3c020034
    ctx->pc = 0x263b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263ba0:
    // 0x263ba0: 0x8c44e8a4
    ctx->pc = 0x263ba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_263ba4:
    // 0x263ba4: 0x4800031
label_263ba8:
    if (ctx->pc == 0x263BA8u) {
        ctx->pc = 0x263BA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x263BACu;
        goto label_263bac;
    }
    ctx->pc = 0x263BA4u;
    {
        const bool branch_taken_0x263ba4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x263BA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x263ba4) {
            ctx->pc = 0x263C6Cu;
            goto label_263c6c;
        }
    }
    ctx->pc = 0x263BACu;
label_263bac:
    // 0x263bac: 0x24630eb0
    ctx->pc = 0x263bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_263bb0:
    // 0x263bb0: 0x240200f0
    ctx->pc = 0x263bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_263bb4:
    // 0x263bb4: 0x821018
    ctx->pc = 0x263bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_263bb8:
    // 0x263bb8: 0x431821
    ctx->pc = 0x263bb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_263bbc:
    // 0x263bbc: 0x3c020031
    ctx->pc = 0x263bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_263bc0:
    // 0x263bc0: 0xc4610068
    ctx->pc = 0x263bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263bc4:
    // 0x263bc4: 0xc440ffb4
    ctx->pc = 0x263bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263bc8:
    // 0x263bc8: 0x46000841
    ctx->pc = 0x263bc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263bcc:
    // 0x263bcc: 0x3c014040
    ctx->pc = 0x263bccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_263bd0:
    // 0x263bd0: 0x44810000
    ctx->pc = 0x263bd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263bd4:
    // 0x263bd4: 0x46000834
    ctx->pc = 0x263bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263bd8:
    // 0x263bd8: 0x0
    ctx->pc = 0x263bd8u;
    // NOP
label_263bdc:
    // 0x263bdc: 0x45000024
label_263be0:
    if (ctx->pc == 0x263BE0u) {
        ctx->pc = 0x263BE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x263BE4u;
        goto label_263be4;
    }
    ctx->pc = 0x263BDCu;
    {
        const bool branch_taken_0x263bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263BE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x263bdc) {
            ctx->pc = 0x263C70u;
            goto label_263c70;
        }
    }
    ctx->pc = 0x263BE4u;
label_263be4:
    // 0x263be4: 0x8c620064
    ctx->pc = 0x263be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_263be8:
    // 0x263be8: 0x30424020
    ctx->pc = 0x263be8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16416));
label_263bec:
    // 0x263bec: 0x14400021
label_263bf0:
    if (ctx->pc == 0x263BF0u) {
        ctx->pc = 0x263BF0u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x263BF4u;
        goto label_263bf4;
    }
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x263BF0u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x263bec) {
            ctx->pc = 0x263C74u;
            goto label_263c74;
        }
    }
    ctx->pc = 0x263BF4u;
label_263bf4:
    // 0x263bf4: 0x8c620014
    ctx->pc = 0x263bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_263bf8:
    // 0x263bf8: 0x1040001f
label_263bfc:
    if (ctx->pc == 0x263BFCu) {
        ctx->pc = 0x263BFCu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x263C00u;
        goto label_263c00;
    }
    ctx->pc = 0x263BF8u;
    {
        const bool branch_taken_0x263bf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x263BFCu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x263bf8) {
            ctx->pc = 0x263C78u;
            goto label_263c78;
        }
    }
    ctx->pc = 0x263C00u;
label_263c00:
    // 0x263c00: 0x3c01437f
    ctx->pc = 0x263c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
label_263c04:
    // 0x263c04: 0x44810000
    ctx->pc = 0x263c04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_263c08:
    // 0x263c08: 0x46000802
    ctx->pc = 0x263c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_263c0c:
    // 0x263c0c: 0x46000064
    ctx->pc = 0x263c0cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_263c10:
    // 0x263c10: 0x44050800
    ctx->pc = 0x263c10u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_263c14:
    // 0x263c14: 0x28a20100
    ctx->pc = 0x263c14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
label_263c18:
    // 0x263c18: 0x14400009
label_263c1c:
    if (ctx->pc == 0x263C1Cu) {
        ctx->pc = 0x263C1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x263C20u;
        goto label_263c20;
    }
    ctx->pc = 0x263C18u;
    {
        const bool branch_taken_0x263c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x263C1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x263c18) {
            ctx->pc = 0x263C40u;
            goto label_263c40;
        }
    }
    ctx->pc = 0x263C20u;
label_263c20:
    // 0x263c20: 0x24a5ff01
    ctx->pc = 0x263c20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967041));
label_263c24:
    // 0x263c24: 0x28a20100
    ctx->pc = 0x263c24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
label_263c28:
    // 0x263c28: 0x0
    ctx->pc = 0x263c28u;
    // NOP
label_263c2c:
    // 0x263c2c: 0x0
    ctx->pc = 0x263c2cu;
    // NOP
label_263c30:
    // 0x263c30: 0x0
    ctx->pc = 0x263c30u;
    // NOP
label_263c34:
    // 0x263c34: 0x1040fffa
label_263c38:
    if (ctx->pc == 0x263C38u) {
        ctx->pc = 0x263C3Cu;
        goto label_263c3c;
    }
    ctx->pc = 0x263C34u;
    {
        const bool branch_taken_0x263c34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x263c34) {
            ctx->pc = 0x263C20u;
            goto label_263c20;
        }
    }
    ctx->pc = 0x263C3Cu;
label_263c3c:
    // 0x263c3c: 0x3c040034
    ctx->pc = 0x263c3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_263c40:
    // 0x263c40: 0x24840eb0
    ctx->pc = 0x263c40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3760));
label_263c44:
    // 0x263c44: 0x3c020034
    ctx->pc = 0x263c44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_263c48:
    // 0x263c48: 0x8c42e8a4
    ctx->pc = 0x263c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_263c4c:
    // 0x263c4c: 0x240300f0
    ctx->pc = 0x263c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_263c50:
    // 0x263c50: 0x431018
    ctx->pc = 0x263c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_263c54:
    // 0x263c54: 0x441021
    ctx->pc = 0x263c54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_263c58:
    // 0x263c58: 0x8c420014
    ctx->pc = 0x263c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_263c5c:
    // 0x263c5c: 0x8c420078
    ctx->pc = 0x263c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_263c60:
    // 0x263c60: 0x8c440078
    ctx->pc = 0x263c60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_263c64:
    // 0x263c64: 0xc0b40c0
label_263c68:
    if (ctx->pc == 0x263C68u) {
        ctx->pc = 0x263C68u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x263C6Cu;
        goto label_263c6c;
    }
    ctx->pc = 0x263C64u;
    SET_GPR_U32(ctx, 31, 0x263C6Cu);
    ctx->pc = 0x263C68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C6Cu; }
    }
    if (ctx->pc != 0x263C6Cu) { return; }
    ctx->pc = 0x263C6Cu;
label_263c6c:
    // 0x263c6c: 0xdfbf0070
    ctx->pc = 0x263c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_263c70:
    // 0x263c70: 0xdfb50060
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_263c74:
    // 0x263c74: 0xdfb40050
    ctx->pc = 0x263c74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_263c78:
    // 0x263c78: 0xdfb30040
    ctx->pc = 0x263c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_263c7c:
    // 0x263c7c: 0xdfb20030
    ctx->pc = 0x263c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_263c80:
    // 0x263c80: 0xdfb10020
    ctx->pc = 0x263c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_263c84:
    // 0x263c84: 0xdfb00010
    ctx->pc = 0x263c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_263c88:
    // 0x263c88: 0xc7b50088
    ctx->pc = 0x263c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_263c8c:
    // 0x263c8c: 0xc7b40080
    ctx->pc = 0x263c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_263c90:
    // 0x263c90: 0x3e00008
label_263c94:
    if (ctx->pc == 0x263C94u) {
        ctx->pc = 0x263C94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x263C98u;
        goto label_fallthrough_0x263c90;
    }
    ctx->pc = 0x263C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263C94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2633B8u: goto label_2633b8;
            case 0x2633BCu: goto label_2633bc;
            case 0x2633C0u: goto label_2633c0;
            case 0x2633C4u: goto label_2633c4;
            case 0x2633C8u: goto label_2633c8;
            case 0x2633CCu: goto label_2633cc;
            case 0x2633D0u: goto label_2633d0;
            case 0x2633D4u: goto label_2633d4;
            case 0x2633D8u: goto label_2633d8;
            case 0x2633DCu: goto label_2633dc;
            case 0x2633E0u: goto label_2633e0;
            case 0x2633E4u: goto label_2633e4;
            case 0x2633E8u: goto label_2633e8;
            case 0x2633ECu: goto label_2633ec;
            case 0x2633F0u: goto label_2633f0;
            case 0x2633F4u: goto label_2633f4;
            case 0x2633F8u: goto label_2633f8;
            case 0x2633FCu: goto label_2633fc;
            case 0x263400u: goto label_263400;
            case 0x263404u: goto label_263404;
            case 0x263408u: goto label_263408;
            case 0x26340Cu: goto label_26340c;
            case 0x263410u: goto label_263410;
            case 0x263414u: goto label_263414;
            case 0x263418u: goto label_263418;
            case 0x26341Cu: goto label_26341c;
            case 0x263420u: goto label_263420;
            case 0x263424u: goto label_263424;
            case 0x263428u: goto label_263428;
            case 0x26342Cu: goto label_26342c;
            case 0x263430u: goto label_263430;
            case 0x263434u: goto label_263434;
            case 0x263438u: goto label_263438;
            case 0x26343Cu: goto label_26343c;
            case 0x263440u: goto label_263440;
            case 0x263444u: goto label_263444;
            case 0x263448u: goto label_263448;
            case 0x26344Cu: goto label_26344c;
            case 0x263450u: goto label_263450;
            case 0x263454u: goto label_263454;
            case 0x263458u: goto label_263458;
            case 0x26345Cu: goto label_26345c;
            case 0x263460u: goto label_263460;
            case 0x263464u: goto label_263464;
            case 0x263468u: goto label_263468;
            case 0x26346Cu: goto label_26346c;
            case 0x263470u: goto label_263470;
            case 0x263474u: goto label_263474;
            case 0x263478u: goto label_263478;
            case 0x26347Cu: goto label_26347c;
            case 0x263480u: goto label_263480;
            case 0x263484u: goto label_263484;
            case 0x263488u: goto label_263488;
            case 0x26348Cu: goto label_26348c;
            case 0x263490u: goto label_263490;
            case 0x263494u: goto label_263494;
            case 0x263498u: goto label_263498;
            case 0x26349Cu: goto label_26349c;
            case 0x2634A0u: goto label_2634a0;
            case 0x2634A4u: goto label_2634a4;
            case 0x2634A8u: goto label_2634a8;
            case 0x2634ACu: goto label_2634ac;
            case 0x2634B0u: goto label_2634b0;
            case 0x2634B4u: goto label_2634b4;
            case 0x2634B8u: goto label_2634b8;
            case 0x2634BCu: goto label_2634bc;
            case 0x2634C0u: goto label_2634c0;
            case 0x2634C4u: goto label_2634c4;
            case 0x2634C8u: goto label_2634c8;
            case 0x2634CCu: goto label_2634cc;
            case 0x2634D0u: goto label_2634d0;
            case 0x2634D4u: goto label_2634d4;
            case 0x2634D8u: goto label_2634d8;
            case 0x2634DCu: goto label_2634dc;
            case 0x2634E0u: goto label_2634e0;
            case 0x2634E4u: goto label_2634e4;
            case 0x2634E8u: goto label_2634e8;
            case 0x2634ECu: goto label_2634ec;
            case 0x2634F0u: goto label_2634f0;
            case 0x2634F4u: goto label_2634f4;
            case 0x2634F8u: goto label_2634f8;
            case 0x2634FCu: goto label_2634fc;
            case 0x263500u: goto label_263500;
            case 0x263504u: goto label_263504;
            case 0x263508u: goto label_263508;
            case 0x26350Cu: goto label_26350c;
            case 0x263510u: goto label_263510;
            case 0x263514u: goto label_263514;
            case 0x263518u: goto label_263518;
            case 0x26351Cu: goto label_26351c;
            case 0x263520u: goto label_263520;
            case 0x263524u: goto label_263524;
            case 0x263528u: goto label_263528;
            case 0x26352Cu: goto label_26352c;
            case 0x263530u: goto label_263530;
            case 0x263534u: goto label_263534;
            case 0x263538u: goto label_263538;
            case 0x26353Cu: goto label_26353c;
            case 0x263540u: goto label_263540;
            case 0x263544u: goto label_263544;
            case 0x263548u: goto label_263548;
            case 0x26354Cu: goto label_26354c;
            case 0x263550u: goto label_263550;
            case 0x263554u: goto label_263554;
            case 0x263558u: goto label_263558;
            case 0x26355Cu: goto label_26355c;
            case 0x263560u: goto label_263560;
            case 0x263564u: goto label_263564;
            case 0x263568u: goto label_263568;
            case 0x26356Cu: goto label_26356c;
            case 0x263570u: goto label_263570;
            case 0x263574u: goto label_263574;
            case 0x263578u: goto label_263578;
            case 0x26357Cu: goto label_26357c;
            case 0x263580u: goto label_263580;
            case 0x263584u: goto label_263584;
            case 0x263588u: goto label_263588;
            case 0x26358Cu: goto label_26358c;
            case 0x263590u: goto label_263590;
            case 0x263594u: goto label_263594;
            case 0x263598u: goto label_263598;
            case 0x26359Cu: goto label_26359c;
            case 0x2635A0u: goto label_2635a0;
            case 0x2635A4u: goto label_2635a4;
            case 0x2635A8u: goto label_2635a8;
            case 0x2635ACu: goto label_2635ac;
            case 0x2635B0u: goto label_2635b0;
            case 0x2635B4u: goto label_2635b4;
            case 0x2635B8u: goto label_2635b8;
            case 0x2635BCu: goto label_2635bc;
            case 0x2635C0u: goto label_2635c0;
            case 0x2635C4u: goto label_2635c4;
            case 0x2635C8u: goto label_2635c8;
            case 0x2635CCu: goto label_2635cc;
            case 0x2635D0u: goto label_2635d0;
            case 0x2635D4u: goto label_2635d4;
            case 0x2635D8u: goto label_2635d8;
            case 0x2635DCu: goto label_2635dc;
            case 0x2635E0u: goto label_2635e0;
            case 0x2635E4u: goto label_2635e4;
            case 0x2635E8u: goto label_2635e8;
            case 0x2635ECu: goto label_2635ec;
            case 0x2635F0u: goto label_2635f0;
            case 0x2635F4u: goto label_2635f4;
            case 0x2635F8u: goto label_2635f8;
            case 0x2635FCu: goto label_2635fc;
            case 0x263600u: goto label_263600;
            case 0x263604u: goto label_263604;
            case 0x263608u: goto label_263608;
            case 0x26360Cu: goto label_26360c;
            case 0x263610u: goto label_263610;
            case 0x263614u: goto label_263614;
            case 0x263618u: goto label_263618;
            case 0x26361Cu: goto label_26361c;
            case 0x263620u: goto label_263620;
            case 0x263624u: goto label_263624;
            case 0x263628u: goto label_263628;
            case 0x26362Cu: goto label_26362c;
            case 0x263630u: goto label_263630;
            case 0x263634u: goto label_263634;
            case 0x263638u: goto label_263638;
            case 0x26363Cu: goto label_26363c;
            case 0x263640u: goto label_263640;
            case 0x263644u: goto label_263644;
            case 0x263648u: goto label_263648;
            case 0x26364Cu: goto label_26364c;
            case 0x263650u: goto label_263650;
            case 0x263654u: goto label_263654;
            case 0x263658u: goto label_263658;
            case 0x26365Cu: goto label_26365c;
            case 0x263660u: goto label_263660;
            case 0x263664u: goto label_263664;
            case 0x263668u: goto label_263668;
            case 0x26366Cu: goto label_26366c;
            case 0x263670u: goto label_263670;
            case 0x263674u: goto label_263674;
            case 0x263678u: goto label_263678;
            case 0x26367Cu: goto label_26367c;
            case 0x263680u: goto label_263680;
            case 0x263684u: goto label_263684;
            case 0x263688u: goto label_263688;
            case 0x26368Cu: goto label_26368c;
            case 0x263690u: goto label_263690;
            case 0x263694u: goto label_263694;
            case 0x263698u: goto label_263698;
            case 0x26369Cu: goto label_26369c;
            case 0x2636A0u: goto label_2636a0;
            case 0x2636A4u: goto label_2636a4;
            case 0x2636A8u: goto label_2636a8;
            case 0x2636ACu: goto label_2636ac;
            case 0x2636B0u: goto label_2636b0;
            case 0x2636B4u: goto label_2636b4;
            case 0x2636B8u: goto label_2636b8;
            case 0x2636BCu: goto label_2636bc;
            case 0x2636C0u: goto label_2636c0;
            case 0x2636C4u: goto label_2636c4;
            case 0x2636C8u: goto label_2636c8;
            case 0x2636CCu: goto label_2636cc;
            case 0x2636D0u: goto label_2636d0;
            case 0x2636D4u: goto label_2636d4;
            case 0x2636D8u: goto label_2636d8;
            case 0x2636DCu: goto label_2636dc;
            case 0x2636E0u: goto label_2636e0;
            case 0x2636E4u: goto label_2636e4;
            case 0x2636E8u: goto label_2636e8;
            case 0x2636ECu: goto label_2636ec;
            case 0x2636F0u: goto label_2636f0;
            case 0x2636F4u: goto label_2636f4;
            case 0x2636F8u: goto label_2636f8;
            case 0x2636FCu: goto label_2636fc;
            case 0x263700u: goto label_263700;
            case 0x263704u: goto label_263704;
            case 0x263708u: goto label_263708;
            case 0x26370Cu: goto label_26370c;
            case 0x263710u: goto label_263710;
            case 0x263714u: goto label_263714;
            case 0x263718u: goto label_263718;
            case 0x26371Cu: goto label_26371c;
            case 0x263720u: goto label_263720;
            case 0x263724u: goto label_263724;
            case 0x263728u: goto label_263728;
            case 0x26372Cu: goto label_26372c;
            case 0x263730u: goto label_263730;
            case 0x263734u: goto label_263734;
            case 0x263738u: goto label_263738;
            case 0x26373Cu: goto label_26373c;
            case 0x263740u: goto label_263740;
            case 0x263744u: goto label_263744;
            case 0x263748u: goto label_263748;
            case 0x26374Cu: goto label_26374c;
            case 0x263750u: goto label_263750;
            case 0x263754u: goto label_263754;
            case 0x263758u: goto label_263758;
            case 0x26375Cu: goto label_26375c;
            case 0x263760u: goto label_263760;
            case 0x263764u: goto label_263764;
            case 0x263768u: goto label_263768;
            case 0x26376Cu: goto label_26376c;
            case 0x263770u: goto label_263770;
            case 0x263774u: goto label_263774;
            case 0x263778u: goto label_263778;
            case 0x26377Cu: goto label_26377c;
            case 0x263780u: goto label_263780;
            case 0x263784u: goto label_263784;
            case 0x263788u: goto label_263788;
            case 0x26378Cu: goto label_26378c;
            case 0x263790u: goto label_263790;
            case 0x263794u: goto label_263794;
            case 0x263798u: goto label_263798;
            case 0x26379Cu: goto label_26379c;
            case 0x2637A0u: goto label_2637a0;
            case 0x2637A4u: goto label_2637a4;
            case 0x2637A8u: goto label_2637a8;
            case 0x2637ACu: goto label_2637ac;
            case 0x2637B0u: goto label_2637b0;
            case 0x2637B4u: goto label_2637b4;
            case 0x2637B8u: goto label_2637b8;
            case 0x2637BCu: goto label_2637bc;
            case 0x2637C0u: goto label_2637c0;
            case 0x2637C4u: goto label_2637c4;
            case 0x2637C8u: goto label_2637c8;
            case 0x2637CCu: goto label_2637cc;
            case 0x2637D0u: goto label_2637d0;
            case 0x2637D4u: goto label_2637d4;
            case 0x2637D8u: goto label_2637d8;
            case 0x2637DCu: goto label_2637dc;
            case 0x2637E0u: goto label_2637e0;
            case 0x2637E4u: goto label_2637e4;
            case 0x2637E8u: goto label_2637e8;
            case 0x2637ECu: goto label_2637ec;
            case 0x2637F0u: goto label_2637f0;
            case 0x2637F4u: goto label_2637f4;
            case 0x2637F8u: goto label_2637f8;
            case 0x2637FCu: goto label_2637fc;
            case 0x263800u: goto label_263800;
            case 0x263804u: goto label_263804;
            case 0x263808u: goto label_263808;
            case 0x26380Cu: goto label_26380c;
            case 0x263810u: goto label_263810;
            case 0x263814u: goto label_263814;
            case 0x263818u: goto label_263818;
            case 0x26381Cu: goto label_26381c;
            case 0x263820u: goto label_263820;
            case 0x263824u: goto label_263824;
            case 0x263828u: goto label_263828;
            case 0x26382Cu: goto label_26382c;
            case 0x263830u: goto label_263830;
            case 0x263834u: goto label_263834;
            case 0x263838u: goto label_263838;
            case 0x26383Cu: goto label_26383c;
            case 0x263840u: goto label_263840;
            case 0x263844u: goto label_263844;
            case 0x263848u: goto label_263848;
            case 0x26384Cu: goto label_26384c;
            case 0x263850u: goto label_263850;
            case 0x263854u: goto label_263854;
            case 0x263858u: goto label_263858;
            case 0x26385Cu: goto label_26385c;
            case 0x263860u: goto label_263860;
            case 0x263864u: goto label_263864;
            case 0x263868u: goto label_263868;
            case 0x26386Cu: goto label_26386c;
            case 0x263870u: goto label_263870;
            case 0x263874u: goto label_263874;
            case 0x263878u: goto label_263878;
            case 0x26387Cu: goto label_26387c;
            case 0x263880u: goto label_263880;
            case 0x263884u: goto label_263884;
            case 0x263888u: goto label_263888;
            case 0x26388Cu: goto label_26388c;
            case 0x263890u: goto label_263890;
            case 0x263894u: goto label_263894;
            case 0x263898u: goto label_263898;
            case 0x26389Cu: goto label_26389c;
            case 0x2638A0u: goto label_2638a0;
            case 0x2638A4u: goto label_2638a4;
            case 0x2638A8u: goto label_2638a8;
            case 0x2638ACu: goto label_2638ac;
            case 0x2638B0u: goto label_2638b0;
            case 0x2638B4u: goto label_2638b4;
            case 0x2638B8u: goto label_2638b8;
            case 0x2638BCu: goto label_2638bc;
            case 0x2638C0u: goto label_2638c0;
            case 0x2638C4u: goto label_2638c4;
            case 0x2638C8u: goto label_2638c8;
            case 0x2638CCu: goto label_2638cc;
            case 0x2638D0u: goto label_2638d0;
            case 0x2638D4u: goto label_2638d4;
            case 0x2638D8u: goto label_2638d8;
            case 0x2638DCu: goto label_2638dc;
            case 0x2638E0u: goto label_2638e0;
            case 0x2638E4u: goto label_2638e4;
            case 0x2638E8u: goto label_2638e8;
            case 0x2638ECu: goto label_2638ec;
            case 0x2638F0u: goto label_2638f0;
            case 0x2638F4u: goto label_2638f4;
            case 0x2638F8u: goto label_2638f8;
            case 0x2638FCu: goto label_2638fc;
            case 0x263900u: goto label_263900;
            case 0x263904u: goto label_263904;
            case 0x263908u: goto label_263908;
            case 0x26390Cu: goto label_26390c;
            case 0x263910u: goto label_263910;
            case 0x263914u: goto label_263914;
            case 0x263918u: goto label_263918;
            case 0x26391Cu: goto label_26391c;
            case 0x263920u: goto label_263920;
            case 0x263924u: goto label_263924;
            case 0x263928u: goto label_263928;
            case 0x26392Cu: goto label_26392c;
            case 0x263930u: goto label_263930;
            case 0x263934u: goto label_263934;
            case 0x263938u: goto label_263938;
            case 0x26393Cu: goto label_26393c;
            case 0x263940u: goto label_263940;
            case 0x263944u: goto label_263944;
            case 0x263948u: goto label_263948;
            case 0x26394Cu: goto label_26394c;
            case 0x263950u: goto label_263950;
            case 0x263954u: goto label_263954;
            case 0x263958u: goto label_263958;
            case 0x26395Cu: goto label_26395c;
            case 0x263960u: goto label_263960;
            case 0x263964u: goto label_263964;
            case 0x263968u: goto label_263968;
            case 0x26396Cu: goto label_26396c;
            case 0x263970u: goto label_263970;
            case 0x263974u: goto label_263974;
            case 0x263978u: goto label_263978;
            case 0x26397Cu: goto label_26397c;
            case 0x263980u: goto label_263980;
            case 0x263984u: goto label_263984;
            case 0x263988u: goto label_263988;
            case 0x26398Cu: goto label_26398c;
            case 0x263990u: goto label_263990;
            case 0x263994u: goto label_263994;
            case 0x263998u: goto label_263998;
            case 0x26399Cu: goto label_26399c;
            case 0x2639A0u: goto label_2639a0;
            case 0x2639A4u: goto label_2639a4;
            case 0x2639A8u: goto label_2639a8;
            case 0x2639ACu: goto label_2639ac;
            case 0x2639B0u: goto label_2639b0;
            case 0x2639B4u: goto label_2639b4;
            case 0x2639B8u: goto label_2639b8;
            case 0x2639BCu: goto label_2639bc;
            case 0x2639C0u: goto label_2639c0;
            case 0x2639C4u: goto label_2639c4;
            case 0x2639C8u: goto label_2639c8;
            case 0x2639CCu: goto label_2639cc;
            case 0x2639D0u: goto label_2639d0;
            case 0x2639D4u: goto label_2639d4;
            case 0x2639D8u: goto label_2639d8;
            case 0x2639DCu: goto label_2639dc;
            case 0x2639E0u: goto label_2639e0;
            case 0x2639E4u: goto label_2639e4;
            case 0x2639E8u: goto label_2639e8;
            case 0x2639ECu: goto label_2639ec;
            case 0x2639F0u: goto label_2639f0;
            case 0x2639F4u: goto label_2639f4;
            case 0x2639F8u: goto label_2639f8;
            case 0x2639FCu: goto label_2639fc;
            case 0x263A00u: goto label_263a00;
            case 0x263A04u: goto label_263a04;
            case 0x263A08u: goto label_263a08;
            case 0x263A0Cu: goto label_263a0c;
            case 0x263A10u: goto label_263a10;
            case 0x263A14u: goto label_263a14;
            case 0x263A18u: goto label_263a18;
            case 0x263A1Cu: goto label_263a1c;
            case 0x263A20u: goto label_263a20;
            case 0x263A24u: goto label_263a24;
            case 0x263A28u: goto label_263a28;
            case 0x263A2Cu: goto label_263a2c;
            case 0x263A30u: goto label_263a30;
            case 0x263A34u: goto label_263a34;
            case 0x263A38u: goto label_263a38;
            case 0x263A3Cu: goto label_263a3c;
            case 0x263A40u: goto label_263a40;
            case 0x263A44u: goto label_263a44;
            case 0x263A48u: goto label_263a48;
            case 0x263A4Cu: goto label_263a4c;
            case 0x263A50u: goto label_263a50;
            case 0x263A54u: goto label_263a54;
            case 0x263A58u: goto label_263a58;
            case 0x263A5Cu: goto label_263a5c;
            case 0x263A60u: goto label_263a60;
            case 0x263A64u: goto label_263a64;
            case 0x263A68u: goto label_263a68;
            case 0x263A6Cu: goto label_263a6c;
            case 0x263A70u: goto label_263a70;
            case 0x263A74u: goto label_263a74;
            case 0x263A78u: goto label_263a78;
            case 0x263A7Cu: goto label_263a7c;
            case 0x263A80u: goto label_263a80;
            case 0x263A84u: goto label_263a84;
            case 0x263A88u: goto label_263a88;
            case 0x263A8Cu: goto label_263a8c;
            case 0x263A90u: goto label_263a90;
            case 0x263A94u: goto label_263a94;
            case 0x263A98u: goto label_263a98;
            case 0x263A9Cu: goto label_263a9c;
            case 0x263AA0u: goto label_263aa0;
            case 0x263AA4u: goto label_263aa4;
            case 0x263AA8u: goto label_263aa8;
            case 0x263AACu: goto label_263aac;
            case 0x263AB0u: goto label_263ab0;
            case 0x263AB4u: goto label_263ab4;
            case 0x263AB8u: goto label_263ab8;
            case 0x263ABCu: goto label_263abc;
            case 0x263AC0u: goto label_263ac0;
            case 0x263AC4u: goto label_263ac4;
            case 0x263AC8u: goto label_263ac8;
            case 0x263ACCu: goto label_263acc;
            case 0x263AD0u: goto label_263ad0;
            case 0x263AD4u: goto label_263ad4;
            case 0x263AD8u: goto label_263ad8;
            case 0x263ADCu: goto label_263adc;
            case 0x263AE0u: goto label_263ae0;
            case 0x263AE4u: goto label_263ae4;
            case 0x263AE8u: goto label_263ae8;
            case 0x263AECu: goto label_263aec;
            case 0x263AF0u: goto label_263af0;
            case 0x263AF4u: goto label_263af4;
            case 0x263AF8u: goto label_263af8;
            case 0x263AFCu: goto label_263afc;
            case 0x263B00u: goto label_263b00;
            case 0x263B04u: goto label_263b04;
            case 0x263B08u: goto label_263b08;
            case 0x263B0Cu: goto label_263b0c;
            case 0x263B10u: goto label_263b10;
            case 0x263B14u: goto label_263b14;
            case 0x263B18u: goto label_263b18;
            case 0x263B1Cu: goto label_263b1c;
            case 0x263B20u: goto label_263b20;
            case 0x263B24u: goto label_263b24;
            case 0x263B28u: goto label_263b28;
            case 0x263B2Cu: goto label_263b2c;
            case 0x263B30u: goto label_263b30;
            case 0x263B34u: goto label_263b34;
            case 0x263B38u: goto label_263b38;
            case 0x263B3Cu: goto label_263b3c;
            case 0x263B40u: goto label_263b40;
            case 0x263B44u: goto label_263b44;
            case 0x263B48u: goto label_263b48;
            case 0x263B4Cu: goto label_263b4c;
            case 0x263B50u: goto label_263b50;
            case 0x263B54u: goto label_263b54;
            case 0x263B58u: goto label_263b58;
            case 0x263B5Cu: goto label_263b5c;
            case 0x263B60u: goto label_263b60;
            case 0x263B64u: goto label_263b64;
            case 0x263B68u: goto label_263b68;
            case 0x263B6Cu: goto label_263b6c;
            case 0x263B70u: goto label_263b70;
            case 0x263B74u: goto label_263b74;
            case 0x263B78u: goto label_263b78;
            case 0x263B7Cu: goto label_263b7c;
            case 0x263B80u: goto label_263b80;
            case 0x263B84u: goto label_263b84;
            case 0x263B88u: goto label_263b88;
            case 0x263B8Cu: goto label_263b8c;
            case 0x263B90u: goto label_263b90;
            case 0x263B94u: goto label_263b94;
            case 0x263B98u: goto label_263b98;
            case 0x263B9Cu: goto label_263b9c;
            case 0x263BA0u: goto label_263ba0;
            case 0x263BA4u: goto label_263ba4;
            case 0x263BA8u: goto label_263ba8;
            case 0x263BACu: goto label_263bac;
            case 0x263BB0u: goto label_263bb0;
            case 0x263BB4u: goto label_263bb4;
            case 0x263BB8u: goto label_263bb8;
            case 0x263BBCu: goto label_263bbc;
            case 0x263BC0u: goto label_263bc0;
            case 0x263BC4u: goto label_263bc4;
            case 0x263BC8u: goto label_263bc8;
            case 0x263BCCu: goto label_263bcc;
            case 0x263BD0u: goto label_263bd0;
            case 0x263BD4u: goto label_263bd4;
            case 0x263BD8u: goto label_263bd8;
            case 0x263BDCu: goto label_263bdc;
            case 0x263BE0u: goto label_263be0;
            case 0x263BE4u: goto label_263be4;
            case 0x263BE8u: goto label_263be8;
            case 0x263BECu: goto label_263bec;
            case 0x263BF0u: goto label_263bf0;
            case 0x263BF4u: goto label_263bf4;
            case 0x263BF8u: goto label_263bf8;
            case 0x263BFCu: goto label_263bfc;
            case 0x263C00u: goto label_263c00;
            case 0x263C04u: goto label_263c04;
            case 0x263C08u: goto label_263c08;
            case 0x263C0Cu: goto label_263c0c;
            case 0x263C10u: goto label_263c10;
            case 0x263C14u: goto label_263c14;
            case 0x263C18u: goto label_263c18;
            case 0x263C1Cu: goto label_263c1c;
            case 0x263C20u: goto label_263c20;
            case 0x263C24u: goto label_263c24;
            case 0x263C28u: goto label_263c28;
            case 0x263C2Cu: goto label_263c2c;
            case 0x263C30u: goto label_263c30;
            case 0x263C34u: goto label_263c34;
            case 0x263C38u: goto label_263c38;
            case 0x263C3Cu: goto label_263c3c;
            case 0x263C40u: goto label_263c40;
            case 0x263C44u: goto label_263c44;
            case 0x263C48u: goto label_263c48;
            case 0x263C4Cu: goto label_263c4c;
            case 0x263C50u: goto label_263c50;
            case 0x263C54u: goto label_263c54;
            case 0x263C58u: goto label_263c58;
            case 0x263C5Cu: goto label_263c5c;
            case 0x263C60u: goto label_263c60;
            case 0x263C64u: goto label_263c64;
            case 0x263C68u: goto label_263c68;
            case 0x263C6Cu: goto label_263c6c;
            case 0x263C70u: goto label_263c70;
            case 0x263C74u: goto label_263c74;
            case 0x263C78u: goto label_263c78;
            case 0x263C7Cu: goto label_263c7c;
            case 0x263C80u: goto label_263c80;
            case 0x263C84u: goto label_263c84;
            case 0x263C88u: goto label_263c88;
            case 0x263C8Cu: goto label_263c8c;
            case 0x263C90u: goto label_263c90;
            case 0x263C94u: goto label_263c94;
            default: break;
        }
        return;
    }
label_fallthrough_0x263c90:
    ctx->pc = 0x263C98u;
}
