#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyStartMissile
// Address: 0x290350 - 0x290804
void EnemyStartMissile_0x290350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290350u;

label_290350:
    // 0x290350: 0x27bdff20
    ctx->pc = 0x290350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_290354:
    // 0x290354: 0xffbf00b0
    ctx->pc = 0x290354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_290358:
    // 0x290358: 0xffb600a0
    ctx->pc = 0x290358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_29035c:
    // 0x29035c: 0xffb50090
    ctx->pc = 0x29035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_290360:
    // 0x290360: 0xffb40080
    ctx->pc = 0x290360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_290364:
    // 0x290364: 0xffb30070
    ctx->pc = 0x290364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_290368:
    // 0x290368: 0xffb20060
    ctx->pc = 0x290368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_29036c:
    // 0x29036c: 0xffb10050
    ctx->pc = 0x29036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_290370:
    // 0x290370: 0xffb00040
    ctx->pc = 0x290370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_290374:
    // 0x290374: 0xe7b600d0
    ctx->pc = 0x290374u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_290378:
    // 0x290378: 0xe7b500c8
    ctx->pc = 0x290378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_29037c:
    // 0x29037c: 0xe7b400c0
    ctx->pc = 0x29037cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_290380:
    // 0x290380: 0x80a02d
    ctx->pc = 0x290380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290384:
    // 0x290384: 0xa0402d
    ctx->pc = 0x290384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290388:
    // 0x290388: 0xc0902d
    ctx->pc = 0x290388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29038c:
    // 0x29038c: 0xe0802d
    ctx->pc = 0x29038cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_290390:
    // 0x290390: 0x8e850000
    ctx->pc = 0x290390u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_290394:
    // 0x290394: 0x24020090
    ctx->pc = 0x290394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_290398:
    // 0x290398: 0xa29818
    ctx->pc = 0x290398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29039c:
    // 0x29039c: 0x24030030
    ctx->pc = 0x29039cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_2903a0:
    // 0x2903a0: 0x2031818
    ctx->pc = 0x2903a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2903a4:
    // 0x2903a4: 0x3c020035
    ctx->pc = 0x2903a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2903a8:
    // 0x2903a8: 0x2442e4f0
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960368));
label_2903ac:
    // 0x2903ac: 0x621821
    ctx->pc = 0x2903acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2903b0:
    // 0x2903b0: 0x2639821
    ctx->pc = 0x2903b0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2903b4:
    // 0x2903b4: 0x3c040035
    ctx->pc = 0x2903b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2903b8:
    // 0x2903b8: 0x2484f5b0
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964656));
label_2903bc:
    // 0x2903bc: 0x101880
    ctx->pc = 0x2903bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_2903c0:
    // 0x2903c0: 0x2402000c
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2903c4:
    // 0x2903c4: 0xa21018
    ctx->pc = 0x2903c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2903c8:
    // 0x2903c8: 0x621821
    ctx->pc = 0x2903c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2903cc:
    // 0x2903cc: 0x641821
    ctx->pc = 0x2903ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2903d0:
    // 0x2903d0: 0x8c760000
    ctx->pc = 0x2903d0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2903d4:
    // 0x2903d4: 0x16c00007
label_2903d8:
    if (ctx->pc == 0x2903D8u) {
        ctx->pc = 0x2903D8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2903DCu;
        goto label_2903dc;
    }
    ctx->pc = 0x2903D4u;
    {
        const bool branch_taken_0x2903d4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x2903D8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2903d4) {
            ctx->pc = 0x2903F4u;
            goto label_2903f4;
        }
    }
    ctx->pc = 0x2903DCu;
label_2903dc:
    // 0x2903dc: 0x3c04003b
    ctx->pc = 0x2903dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2903e0:
    // 0x2903e0: 0x2484dfb0
    ctx->pc = 0x2903e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959024));
label_2903e4:
    // 0x2903e4: 0xc0b492e
label_2903e8:
    if (ctx->pc == 0x2903E8u) {
        ctx->pc = 0x2903E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2903ECu;
        goto label_2903ec;
    }
    ctx->pc = 0x2903E4u;
    SET_GPR_U32(ctx, 31, 0x2903ECu);
    ctx->pc = 0x2903E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2903ECu; }
    }
    if (ctx->pc != 0x2903ECu) { return; }
    ctx->pc = 0x2903ECu;
label_2903ec:
    // 0x2903ec: 0x100000f8
label_2903f0:
    if (ctx->pc == 0x2903F0u) {
        ctx->pc = 0x2903F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2903F4u;
        goto label_2903f4;
    }
    ctx->pc = 0x2903ECu;
    {
        const bool branch_taken_0x2903ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2903F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2903ec) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x2903F4u;
label_2903f4:
    // 0x2903f4: 0x3c020034
    ctx->pc = 0x2903f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2903f8:
    // 0x2903f8: 0x8c42e7c8
    ctx->pc = 0x2903f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_2903fc:
    // 0x2903fc: 0xc6610008
    ctx->pc = 0x2903fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290400:
    // 0x290400: 0xc44000c4
    ctx->pc = 0x290400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290404:
    // 0x290404: 0x46000d82
    ctx->pc = 0x290404u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_290408:
    // 0x290408: 0x3c013f80
    ctx->pc = 0x290408u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_29040c:
    // 0x29040c: 0x44810000
    ctx->pc = 0x29040cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_290410:
    // 0x290410: 0x0
    ctx->pc = 0x290410u;
    // NOP
label_290414:
    // 0x290414: 0x0
    ctx->pc = 0x290414u;
    // NOP
label_290418:
    // 0x290418: 0x46160543
    ctx->pc = 0x290418u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[22];
label_29041c:
    // 0x29041c: 0xc5000000
    ctx->pc = 0x29041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290420:
    // 0x290420: 0xc6410000
    ctx->pc = 0x290420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290424:
    // 0x290424: 0x46010001
    ctx->pc = 0x290424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290428:
    // 0x290428: 0xe7a00000
    ctx->pc = 0x290428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29042c:
    // 0x29042c: 0xc5000004
    ctx->pc = 0x29042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290430:
    // 0x290430: 0xc6410004
    ctx->pc = 0x290430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290434:
    // 0x290434: 0x46010001
    ctx->pc = 0x290434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290438:
    // 0x290438: 0xe7a00004
    ctx->pc = 0x290438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29043c:
    // 0x29043c: 0xc5000008
    ctx->pc = 0x29043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290440:
    // 0x290440: 0xc6410008
    ctx->pc = 0x290440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290444:
    // 0x290444: 0x46010001
    ctx->pc = 0x290444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290448:
    // 0x290448: 0x24020002
    ctx->pc = 0x290448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_29044c:
    // 0x29044c: 0x16020005
label_290450:
    if (ctx->pc == 0x290450u) {
        ctx->pc = 0x290450u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x290454u;
        goto label_290454;
    }
    ctx->pc = 0x29044Cu;
    {
        const bool branch_taken_0x29044c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x290450u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x29044c) {
            ctx->pc = 0x290464u;
            goto label_290464;
        }
    }
    ctx->pc = 0x290454u;
label_290454:
    // 0x290454: 0xc0b58a4
label_290458:
    if (ctx->pc == 0x290458u) {
        ctx->pc = 0x290458u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29045Cu;
        goto label_29045c;
    }
    ctx->pc = 0x290454u;
    SET_GPR_U32(ctx, 31, 0x29045Cu);
    ctx->pc = 0x290458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29045Cu; }
    }
    if (ctx->pc != 0x29045Cu) { return; }
    ctx->pc = 0x29045Cu;
label_29045c:
    // 0x29045c: 0x1000001a
label_290460:
    if (ctx->pc == 0x290460u) {
        ctx->pc = 0x290460u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x290464u;
        goto label_290464;
    }
    ctx->pc = 0x29045Cu;
    {
        const bool branch_taken_0x29045c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290460u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29045c) {
            ctx->pc = 0x2904C8u;
            goto label_2904c8;
        }
    }
    ctx->pc = 0x290464u;
label_290464:
    // 0x290464: 0x24020001
    ctx->pc = 0x290464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_290468:
    // 0x290468: 0x3c01c060
    ctx->pc = 0x290468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49248 << 16));
label_29046c:
    // 0x29046c: 0x4481a000
    ctx->pc = 0x29046cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_290470:
    // 0x290470: 0x16020003
label_290474:
    if (ctx->pc == 0x290474u) {
        ctx->pc = 0x290478u;
        goto label_290478;
    }
    ctx->pc = 0x290470u;
    {
        const bool branch_taken_0x290470 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x290470) {
            ctx->pc = 0x290480u;
            goto label_290480;
        }
    }
    ctx->pc = 0x290478u;
label_290478:
    // 0x290478: 0x3c01c0b0
    ctx->pc = 0x290478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49328 << 16));
label_29047c:
    // 0x29047c: 0x4481a000
    ctx->pc = 0x29047cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_290480:
    // 0x290480: 0x3c0140a0
    ctx->pc = 0x290480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_290484:
    // 0x290484: 0x44816000
    ctx->pc = 0x290484u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_290488:
    // 0x290488: 0xc0b5c06
label_29048c:
    if (ctx->pc == 0x29048Cu) {
        ctx->pc = 0x290490u;
        goto label_290490;
    }
    ctx->pc = 0x290488u;
    SET_GPR_U32(ctx, 31, 0x290490u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290490u; }
    }
    if (ctx->pc != 0x290490u) { return; }
    ctx->pc = 0x290490u;
label_290490:
    // 0x290490: 0x3c020034
    ctx->pc = 0x290490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_290494:
    // 0x290494: 0x8c42e7c8
    ctx->pc = 0x290494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_290498:
    // 0x290498: 0x3c01c020
    ctx->pc = 0x290498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49184 << 16));
label_29049c:
    // 0x29049c: 0x44810800
    ctx->pc = 0x29049cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2904a0:
    // 0x2904a0: 0x46010000
    ctx->pc = 0x2904a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2904a4:
    // 0x2904a4: 0xc44100c8
    ctx->pc = 0x2904a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2904a8:
    // 0x2904a8: 0x46010002
    ctx->pc = 0x2904a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2904ac:
    // 0x2904ac: 0x3a0202d
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2904b0:
    // 0x2904b0: 0x4600b306
    ctx->pc = 0x2904b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2904b4:
    // 0x2904b4: 0x4600ab46
    ctx->pc = 0x2904b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2904b8:
    // 0x2904b8: 0xc66e0020
    ctx->pc = 0x2904b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2904bc:
    // 0x2904bc: 0xc0a3dc2
label_2904c0:
    if (ctx->pc == 0x2904C0u) {
        ctx->pc = 0x2904C0u;
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2904C4u;
        goto label_2904c4;
    }
    ctx->pc = 0x2904BCu;
    SET_GPR_U32(ctx, 31, 0x2904C4u);
    ctx->pc = 0x2904C0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x28F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcTargetDir_0x28f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904C4u; }
    }
    if (ctx->pc != 0x2904C4u) { return; }
    ctx->pc = 0x2904C4u;
label_2904c4:
    // 0x2904c4: 0xc7a00004
    ctx->pc = 0x2904c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2904c8:
    // 0x2904c8: 0x44800800
    ctx->pc = 0x2904c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_2904cc:
    // 0x2904cc: 0x46010034
    ctx->pc = 0x2904ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2904d0:
    // 0x2904d0: 0x0
    ctx->pc = 0x2904d0u;
    // NOP
label_2904d4:
    // 0x2904d4: 0x45030001
label_2904d8:
    if (ctx->pc == 0x2904D8u) {
        ctx->pc = 0x2904D8u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->pc = 0x2904DCu;
        goto label_2904dc;
    }
    ctx->pc = 0x2904D4u;
    {
        const bool branch_taken_0x2904d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2904d4) {
            ctx->pc = 0x2904D8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->pc = 0x2904DCu;
            goto label_2904dc;
        }
    }
    ctx->pc = 0x2904DCu;
label_2904dc:
    // 0x2904dc: 0xc7a00000
    ctx->pc = 0x2904dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2904e0:
    // 0x2904e0: 0xe7a00030
    ctx->pc = 0x2904e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2904e4:
    // 0x2904e4: 0xc7a00004
    ctx->pc = 0x2904e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2904e8:
    // 0x2904e8: 0xe7a00034
    ctx->pc = 0x2904e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2904ec:
    // 0x2904ec: 0xc7a00008
    ctx->pc = 0x2904ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2904f0:
    // 0x2904f0: 0xe7a00038
    ctx->pc = 0x2904f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2904f4:
    // 0x2904f4: 0xc0b58fc
label_2904f8:
    if (ctx->pc == 0x2904F8u) {
        ctx->pc = 0x2904F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2904FCu;
        goto label_2904fc;
    }
    ctx->pc = 0x2904F4u;
    SET_GPR_U32(ctx, 31, 0x2904FCu);
    ctx->pc = 0x2904F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904FCu; }
    }
    if (ctx->pc != 0x2904FCu) { return; }
    ctx->pc = 0x2904FCu;
label_2904fc:
    // 0x2904fc: 0xc7a20030
    ctx->pc = 0x2904fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_290500:
    // 0x290500: 0xc6800030
    ctx->pc = 0x290500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290504:
    // 0x290504: 0x46001082
    ctx->pc = 0x290504u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_290508:
    // 0x290508: 0xc7a00038
    ctx->pc = 0x290508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29050c:
    // 0x29050c: 0xc6810038
    ctx->pc = 0x29050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290510:
    // 0x290510: 0x46010002
    ctx->pc = 0x290510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_290514:
    // 0x290514: 0x46001080
    ctx->pc = 0x290514u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_290518:
    // 0x290518: 0x3c013f34
    ctx->pc = 0x290518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
label_29051c:
    // 0x29051c: 0x3421fdf4
    ctx->pc = 0x29051cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
label_290520:
    // 0x290520: 0x44810000
    ctx->pc = 0x290520u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_290524:
    // 0x290524: 0x46001034
    ctx->pc = 0x290524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290528:
    // 0x290528: 0x0
    ctx->pc = 0x290528u;
    // NOP
label_29052c:
    // 0x29052c: 0x450100a8
label_290530:
    if (ctx->pc == 0x290530u) {
        ctx->pc = 0x290530u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290534u;
        goto label_290534;
    }
    ctx->pc = 0x29052Cu;
    {
        const bool branch_taken_0x29052c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290530u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29052c) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x290534u;
label_290534:
    // 0x290534: 0x8e9100d8
    ctx->pc = 0x290534u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_290538:
    // 0x290538: 0xc6400000
    ctx->pc = 0x290538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29053c:
    // 0x29053c: 0xe7a00010
    ctx->pc = 0x29053cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_290540:
    // 0x290540: 0xc6400004
    ctx->pc = 0x290540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290544:
    // 0x290544: 0xe7a00014
    ctx->pc = 0x290544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_290548:
    // 0x290548: 0xc6400008
    ctx->pc = 0x290548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29054c:
    // 0x29054c: 0x24020002
    ctx->pc = 0x29054cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_290550:
    // 0x290550: 0x3c014020
    ctx->pc = 0x290550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
label_290554:
    // 0x290554: 0x44811800
    ctx->pc = 0x290554u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_290558:
    // 0x290558: 0x16020002
label_29055c:
    if (ctx->pc == 0x29055Cu) {
        ctx->pc = 0x29055Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x290560u;
        goto label_290560;
    }
    ctx->pc = 0x290558u;
    {
        const bool branch_taken_0x290558 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x29055Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x290558) {
            ctx->pc = 0x290564u;
            goto label_290564;
        }
    }
    ctx->pc = 0x290560u;
label_290560:
    // 0x290560: 0x44801800
    ctx->pc = 0x290560u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_290564:
    // 0x290564: 0x8e820000
    ctx->pc = 0x290564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_290568:
    // 0x290568: 0x2443fffc
    ctx->pc = 0x290568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
label_29056c:
    // 0x29056c: 0x2c620018
    ctx->pc = 0x29056cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 24));
label_290570:
    // 0x290570: 0x10400041
label_290574:
    if (ctx->pc == 0x290574u) {
        ctx->pc = 0x290574u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x290578u;
        goto label_290578;
    }
    ctx->pc = 0x290570u;
    {
        const bool branch_taken_0x290570 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x290574u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x290570) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x290578u;
label_290578:
    // 0x290578: 0x2442dfd0
    ctx->pc = 0x290578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_29057c:
    // 0x29057c: 0x31880
    ctx->pc = 0x29057cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_290580:
    // 0x290580: 0x621821
    ctx->pc = 0x290580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_290584:
    // 0x290584: 0x8c620000
    ctx->pc = 0x290584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_290588:
    // 0x290588: 0x400008
label_29058c:
    if (ctx->pc == 0x29058Cu) {
        ctx->pc = 0x290590u;
        goto label_290590;
    }
    ctx->pc = 0x290588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290350u: goto label_290350;
            case 0x290354u: goto label_290354;
            case 0x290358u: goto label_290358;
            case 0x29035Cu: goto label_29035c;
            case 0x290360u: goto label_290360;
            case 0x290364u: goto label_290364;
            case 0x290368u: goto label_290368;
            case 0x29036Cu: goto label_29036c;
            case 0x290370u: goto label_290370;
            case 0x290374u: goto label_290374;
            case 0x290378u: goto label_290378;
            case 0x29037Cu: goto label_29037c;
            case 0x290380u: goto label_290380;
            case 0x290384u: goto label_290384;
            case 0x290388u: goto label_290388;
            case 0x29038Cu: goto label_29038c;
            case 0x290390u: goto label_290390;
            case 0x290394u: goto label_290394;
            case 0x290398u: goto label_290398;
            case 0x29039Cu: goto label_29039c;
            case 0x2903A0u: goto label_2903a0;
            case 0x2903A4u: goto label_2903a4;
            case 0x2903A8u: goto label_2903a8;
            case 0x2903ACu: goto label_2903ac;
            case 0x2903B0u: goto label_2903b0;
            case 0x2903B4u: goto label_2903b4;
            case 0x2903B8u: goto label_2903b8;
            case 0x2903BCu: goto label_2903bc;
            case 0x2903C0u: goto label_2903c0;
            case 0x2903C4u: goto label_2903c4;
            case 0x2903C8u: goto label_2903c8;
            case 0x2903CCu: goto label_2903cc;
            case 0x2903D0u: goto label_2903d0;
            case 0x2903D4u: goto label_2903d4;
            case 0x2903D8u: goto label_2903d8;
            case 0x2903DCu: goto label_2903dc;
            case 0x2903E0u: goto label_2903e0;
            case 0x2903E4u: goto label_2903e4;
            case 0x2903E8u: goto label_2903e8;
            case 0x2903ECu: goto label_2903ec;
            case 0x2903F0u: goto label_2903f0;
            case 0x2903F4u: goto label_2903f4;
            case 0x2903F8u: goto label_2903f8;
            case 0x2903FCu: goto label_2903fc;
            case 0x290400u: goto label_290400;
            case 0x290404u: goto label_290404;
            case 0x290408u: goto label_290408;
            case 0x29040Cu: goto label_29040c;
            case 0x290410u: goto label_290410;
            case 0x290414u: goto label_290414;
            case 0x290418u: goto label_290418;
            case 0x29041Cu: goto label_29041c;
            case 0x290420u: goto label_290420;
            case 0x290424u: goto label_290424;
            case 0x290428u: goto label_290428;
            case 0x29042Cu: goto label_29042c;
            case 0x290430u: goto label_290430;
            case 0x290434u: goto label_290434;
            case 0x290438u: goto label_290438;
            case 0x29043Cu: goto label_29043c;
            case 0x290440u: goto label_290440;
            case 0x290444u: goto label_290444;
            case 0x290448u: goto label_290448;
            case 0x29044Cu: goto label_29044c;
            case 0x290450u: goto label_290450;
            case 0x290454u: goto label_290454;
            case 0x290458u: goto label_290458;
            case 0x29045Cu: goto label_29045c;
            case 0x290460u: goto label_290460;
            case 0x290464u: goto label_290464;
            case 0x290468u: goto label_290468;
            case 0x29046Cu: goto label_29046c;
            case 0x290470u: goto label_290470;
            case 0x290474u: goto label_290474;
            case 0x290478u: goto label_290478;
            case 0x29047Cu: goto label_29047c;
            case 0x290480u: goto label_290480;
            case 0x290484u: goto label_290484;
            case 0x290488u: goto label_290488;
            case 0x29048Cu: goto label_29048c;
            case 0x290490u: goto label_290490;
            case 0x290494u: goto label_290494;
            case 0x290498u: goto label_290498;
            case 0x29049Cu: goto label_29049c;
            case 0x2904A0u: goto label_2904a0;
            case 0x2904A4u: goto label_2904a4;
            case 0x2904A8u: goto label_2904a8;
            case 0x2904ACu: goto label_2904ac;
            case 0x2904B0u: goto label_2904b0;
            case 0x2904B4u: goto label_2904b4;
            case 0x2904B8u: goto label_2904b8;
            case 0x2904BCu: goto label_2904bc;
            case 0x2904C0u: goto label_2904c0;
            case 0x2904C4u: goto label_2904c4;
            case 0x2904C8u: goto label_2904c8;
            case 0x2904CCu: goto label_2904cc;
            case 0x2904D0u: goto label_2904d0;
            case 0x2904D4u: goto label_2904d4;
            case 0x2904D8u: goto label_2904d8;
            case 0x2904DCu: goto label_2904dc;
            case 0x2904E0u: goto label_2904e0;
            case 0x2904E4u: goto label_2904e4;
            case 0x2904E8u: goto label_2904e8;
            case 0x2904ECu: goto label_2904ec;
            case 0x2904F0u: goto label_2904f0;
            case 0x2904F4u: goto label_2904f4;
            case 0x2904F8u: goto label_2904f8;
            case 0x2904FCu: goto label_2904fc;
            case 0x290500u: goto label_290500;
            case 0x290504u: goto label_290504;
            case 0x290508u: goto label_290508;
            case 0x29050Cu: goto label_29050c;
            case 0x290510u: goto label_290510;
            case 0x290514u: goto label_290514;
            case 0x290518u: goto label_290518;
            case 0x29051Cu: goto label_29051c;
            case 0x290520u: goto label_290520;
            case 0x290524u: goto label_290524;
            case 0x290528u: goto label_290528;
            case 0x29052Cu: goto label_29052c;
            case 0x290530u: goto label_290530;
            case 0x290534u: goto label_290534;
            case 0x290538u: goto label_290538;
            case 0x29053Cu: goto label_29053c;
            case 0x290540u: goto label_290540;
            case 0x290544u: goto label_290544;
            case 0x290548u: goto label_290548;
            case 0x29054Cu: goto label_29054c;
            case 0x290550u: goto label_290550;
            case 0x290554u: goto label_290554;
            case 0x290558u: goto label_290558;
            case 0x29055Cu: goto label_29055c;
            case 0x290560u: goto label_290560;
            case 0x290564u: goto label_290564;
            case 0x290568u: goto label_290568;
            case 0x29056Cu: goto label_29056c;
            case 0x290570u: goto label_290570;
            case 0x290574u: goto label_290574;
            case 0x290578u: goto label_290578;
            case 0x29057Cu: goto label_29057c;
            case 0x290580u: goto label_290580;
            case 0x290584u: goto label_290584;
            case 0x290588u: goto label_290588;
            case 0x29058Cu: goto label_29058c;
            case 0x290590u: goto label_290590;
            case 0x290594u: goto label_290594;
            case 0x290598u: goto label_290598;
            case 0x29059Cu: goto label_29059c;
            case 0x2905A0u: goto label_2905a0;
            case 0x2905A4u: goto label_2905a4;
            case 0x2905A8u: goto label_2905a8;
            case 0x2905ACu: goto label_2905ac;
            case 0x2905B0u: goto label_2905b0;
            case 0x2905B4u: goto label_2905b4;
            case 0x2905B8u: goto label_2905b8;
            case 0x2905BCu: goto label_2905bc;
            case 0x2905C0u: goto label_2905c0;
            case 0x2905C4u: goto label_2905c4;
            case 0x2905C8u: goto label_2905c8;
            case 0x2905CCu: goto label_2905cc;
            case 0x2905D0u: goto label_2905d0;
            case 0x2905D4u: goto label_2905d4;
            case 0x2905D8u: goto label_2905d8;
            case 0x2905DCu: goto label_2905dc;
            case 0x2905E0u: goto label_2905e0;
            case 0x2905E4u: goto label_2905e4;
            case 0x2905E8u: goto label_2905e8;
            case 0x2905ECu: goto label_2905ec;
            case 0x2905F0u: goto label_2905f0;
            case 0x2905F4u: goto label_2905f4;
            case 0x2905F8u: goto label_2905f8;
            case 0x2905FCu: goto label_2905fc;
            case 0x290600u: goto label_290600;
            case 0x290604u: goto label_290604;
            case 0x290608u: goto label_290608;
            case 0x29060Cu: goto label_29060c;
            case 0x290610u: goto label_290610;
            case 0x290614u: goto label_290614;
            case 0x290618u: goto label_290618;
            case 0x29061Cu: goto label_29061c;
            case 0x290620u: goto label_290620;
            case 0x290624u: goto label_290624;
            case 0x290628u: goto label_290628;
            case 0x29062Cu: goto label_29062c;
            case 0x290630u: goto label_290630;
            case 0x290634u: goto label_290634;
            case 0x290638u: goto label_290638;
            case 0x29063Cu: goto label_29063c;
            case 0x290640u: goto label_290640;
            case 0x290644u: goto label_290644;
            case 0x290648u: goto label_290648;
            case 0x29064Cu: goto label_29064c;
            case 0x290650u: goto label_290650;
            case 0x290654u: goto label_290654;
            case 0x290658u: goto label_290658;
            case 0x29065Cu: goto label_29065c;
            case 0x290660u: goto label_290660;
            case 0x290664u: goto label_290664;
            case 0x290668u: goto label_290668;
            case 0x29066Cu: goto label_29066c;
            case 0x290670u: goto label_290670;
            case 0x290674u: goto label_290674;
            case 0x290678u: goto label_290678;
            case 0x29067Cu: goto label_29067c;
            case 0x290680u: goto label_290680;
            case 0x290684u: goto label_290684;
            case 0x290688u: goto label_290688;
            case 0x29068Cu: goto label_29068c;
            case 0x290690u: goto label_290690;
            case 0x290694u: goto label_290694;
            case 0x290698u: goto label_290698;
            case 0x29069Cu: goto label_29069c;
            case 0x2906A0u: goto label_2906a0;
            case 0x2906A4u: goto label_2906a4;
            case 0x2906A8u: goto label_2906a8;
            case 0x2906ACu: goto label_2906ac;
            case 0x2906B0u: goto label_2906b0;
            case 0x2906B4u: goto label_2906b4;
            case 0x2906B8u: goto label_2906b8;
            case 0x2906BCu: goto label_2906bc;
            case 0x2906C0u: goto label_2906c0;
            case 0x2906C4u: goto label_2906c4;
            case 0x2906C8u: goto label_2906c8;
            case 0x2906CCu: goto label_2906cc;
            case 0x2906D0u: goto label_2906d0;
            case 0x2906D4u: goto label_2906d4;
            case 0x2906D8u: goto label_2906d8;
            case 0x2906DCu: goto label_2906dc;
            case 0x2906E0u: goto label_2906e0;
            case 0x2906E4u: goto label_2906e4;
            case 0x2906E8u: goto label_2906e8;
            case 0x2906ECu: goto label_2906ec;
            case 0x2906F0u: goto label_2906f0;
            case 0x2906F4u: goto label_2906f4;
            case 0x2906F8u: goto label_2906f8;
            case 0x2906FCu: goto label_2906fc;
            case 0x290700u: goto label_290700;
            case 0x290704u: goto label_290704;
            case 0x290708u: goto label_290708;
            case 0x29070Cu: goto label_29070c;
            case 0x290710u: goto label_290710;
            case 0x290714u: goto label_290714;
            case 0x290718u: goto label_290718;
            case 0x29071Cu: goto label_29071c;
            case 0x290720u: goto label_290720;
            case 0x290724u: goto label_290724;
            case 0x290728u: goto label_290728;
            case 0x29072Cu: goto label_29072c;
            case 0x290730u: goto label_290730;
            case 0x290734u: goto label_290734;
            case 0x290738u: goto label_290738;
            case 0x29073Cu: goto label_29073c;
            case 0x290740u: goto label_290740;
            case 0x290744u: goto label_290744;
            case 0x290748u: goto label_290748;
            case 0x29074Cu: goto label_29074c;
            case 0x290750u: goto label_290750;
            case 0x290754u: goto label_290754;
            case 0x290758u: goto label_290758;
            case 0x29075Cu: goto label_29075c;
            case 0x290760u: goto label_290760;
            case 0x290764u: goto label_290764;
            case 0x290768u: goto label_290768;
            case 0x29076Cu: goto label_29076c;
            case 0x290770u: goto label_290770;
            case 0x290774u: goto label_290774;
            case 0x290778u: goto label_290778;
            case 0x29077Cu: goto label_29077c;
            case 0x290780u: goto label_290780;
            case 0x290784u: goto label_290784;
            case 0x290788u: goto label_290788;
            case 0x29078Cu: goto label_29078c;
            case 0x290790u: goto label_290790;
            case 0x290794u: goto label_290794;
            case 0x290798u: goto label_290798;
            case 0x29079Cu: goto label_29079c;
            case 0x2907A0u: goto label_2907a0;
            case 0x2907A4u: goto label_2907a4;
            case 0x2907A8u: goto label_2907a8;
            case 0x2907ACu: goto label_2907ac;
            case 0x2907B0u: goto label_2907b0;
            case 0x2907B4u: goto label_2907b4;
            case 0x2907B8u: goto label_2907b8;
            case 0x2907BCu: goto label_2907bc;
            case 0x2907C0u: goto label_2907c0;
            case 0x2907C4u: goto label_2907c4;
            case 0x2907C8u: goto label_2907c8;
            case 0x2907CCu: goto label_2907cc;
            case 0x2907D0u: goto label_2907d0;
            case 0x2907D4u: goto label_2907d4;
            case 0x2907D8u: goto label_2907d8;
            case 0x2907DCu: goto label_2907dc;
            case 0x2907E0u: goto label_2907e0;
            case 0x2907E4u: goto label_2907e4;
            case 0x2907E8u: goto label_2907e8;
            case 0x2907ECu: goto label_2907ec;
            case 0x2907F0u: goto label_2907f0;
            case 0x2907F4u: goto label_2907f4;
            case 0x2907F8u: goto label_2907f8;
            case 0x2907FCu: goto label_2907fc;
            case 0x290800u: goto label_290800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290590u;
label_290590:
    // 0x290590: 0x1600003a
label_290594:
    if (ctx->pc == 0x290594u) {
        ctx->pc = 0x290594u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x290598u;
        goto label_290598;
    }
    ctx->pc = 0x290590u;
    {
        const bool branch_taken_0x290590 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x290594u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x290590) {
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x290598u;
label_290598:
    // 0x290598: 0x3c013f80
    ctx->pc = 0x290598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_29059c:
    // 0x29059c: 0x44811800
    ctx->pc = 0x29059cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_2905a0:
    // 0x2905a0: 0x10000036
label_2905a4:
    if (ctx->pc == 0x2905A4u) {
        ctx->pc = 0x2905A4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2905A8u;
        goto label_2905a8;
    }
    ctx->pc = 0x2905A0u;
    {
        const bool branch_taken_0x2905a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2905A4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2905a0) {
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x2905A8u;
label_2905a8:
    // 0x2905a8: 0x24020002
    ctx->pc = 0x2905a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2905ac:
    // 0x2905ac: 0x16020033
label_2905b0:
    if (ctx->pc == 0x2905B0u) {
        ctx->pc = 0x2905B0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2905B4u;
        goto label_2905b4;
    }
    ctx->pc = 0x2905ACu;
    {
        const bool branch_taken_0x2905ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2905B0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2905ac) {
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x2905B4u;
label_2905b4:
    // 0x2905b4: 0x3c013fc0
    ctx->pc = 0x2905b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_2905b8:
    // 0x2905b8: 0x44811800
    ctx->pc = 0x2905b8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_2905bc:
    // 0x2905bc: 0x10000030
label_2905c0:
    if (ctx->pc == 0x2905C0u) {
        ctx->pc = 0x2905C0u;
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x2905C4u;
        goto label_2905c4;
    }
    ctx->pc = 0x2905BCu;
    {
        const bool branch_taken_0x2905bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2905C0u;
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        if (branch_taken_0x2905bc) {
            ctx->pc = 0x290680u;
            goto label_290680;
        }
    }
    ctx->pc = 0x2905C4u;
label_2905c4:
    // 0x2905c4: 0x24020002
    ctx->pc = 0x2905c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2905c8:
    // 0x2905c8: 0x1202fff3
label_2905cc:
    if (ctx->pc == 0x2905CCu) {
        ctx->pc = 0x2905D0u;
        goto label_2905d0;
    }
    ctx->pc = 0x2905C8u;
    {
        const bool branch_taken_0x2905c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x2905c8) {
            ctx->pc = 0x290598u;
            goto label_290598;
        }
    }
    ctx->pc = 0x2905D0u;
label_2905d0:
    // 0x2905d0: 0x1600002a
label_2905d4:
    if (ctx->pc == 0x2905D4u) {
        ctx->pc = 0x2905D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2905D8u;
        goto label_2905d8;
    }
    ctx->pc = 0x2905D0u;
    {
        const bool branch_taken_0x2905d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2905D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x2905d0) {
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x2905D8u;
label_2905d8:
    // 0x2905d8: 0x3c013fc0
    ctx->pc = 0x2905d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_2905dc:
    // 0x2905dc: 0x44811800
    ctx->pc = 0x2905dcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_2905e0:
    // 0x2905e0: 0x10000027
label_2905e4:
    if (ctx->pc == 0x2905E4u) {
        ctx->pc = 0x2905E4u;
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x2905E8u;
        goto label_2905e8;
    }
    ctx->pc = 0x2905E0u;
    {
        const bool branch_taken_0x2905e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2905E4u;
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        if (branch_taken_0x2905e0) {
            ctx->pc = 0x290680u;
            goto label_290680;
        }
    }
    ctx->pc = 0x2905E8u;
label_2905e8:
    // 0x2905e8: 0x3c014000
    ctx->pc = 0x2905e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_2905ec:
    // 0x2905ec: 0x44811800
    ctx->pc = 0x2905ecu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_2905f0:
    // 0x2905f0: 0xc7a00000
    ctx->pc = 0x2905f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2905f4:
    // 0x2905f4: 0x46000000
    ctx->pc = 0x2905f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2905f8:
    // 0x2905f8: 0xc7a10010
    ctx->pc = 0x2905f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2905fc:
    // 0x2905fc: 0x46010000
    ctx->pc = 0x2905fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_290600:
    // 0x290600: 0xe7a00010
    ctx->pc = 0x290600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_290604:
    // 0x290604: 0xc7a00008
    ctx->pc = 0x290604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290608:
    // 0x290608: 0x46000000
    ctx->pc = 0x290608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29060c:
    // 0x29060c: 0xc7a10018
    ctx->pc = 0x29060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290610:
    // 0x290610: 0x46010000
    ctx->pc = 0x290610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_290614:
    // 0x290614: 0x10000018
label_290618:
    if (ctx->pc == 0x290618u) {
        ctx->pc = 0x290618u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x29061Cu;
        goto label_29061c;
    }
    ctx->pc = 0x290614u;
    {
        const bool branch_taken_0x290614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290618u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x290614) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x29061Cu;
label_29061c:
    // 0x29061c: 0x12000015
label_290620:
    if (ctx->pc == 0x290620u) {
        ctx->pc = 0x290620u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x290624u;
        goto label_290624;
    }
    ctx->pc = 0x29061Cu;
    {
        const bool branch_taken_0x29061c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x290620u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29061c) {
            ctx->pc = 0x290674u;
            goto label_290674;
        }
    }
    ctx->pc = 0x290624u;
label_290624:
    // 0x290624: 0x16020015
label_290628:
    if (ctx->pc == 0x290628u) {
        ctx->pc = 0x290628u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x29062Cu;
        goto label_29062c;
    }
    ctx->pc = 0x290624u;
    {
        const bool branch_taken_0x290624 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x290628u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x290624) {
            ctx->pc = 0x29067Cu;
            goto label_29067c;
        }
    }
    ctx->pc = 0x29062Cu;
label_29062c:
    // 0x29062c: 0x44801800
    ctx->pc = 0x29062cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_290630:
    // 0x290630: 0xc7a10000
    ctx->pc = 0x290630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290634:
    // 0x290634: 0x3c014020
    ctx->pc = 0x290634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
label_290638:
    // 0x290638: 0x44811000
    ctx->pc = 0x290638u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_29063c:
    // 0x29063c: 0x46020842
    ctx->pc = 0x29063cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_290640:
    // 0x290640: 0xc7a00010
    ctx->pc = 0x290640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290644:
    // 0x290644: 0x46010001
    ctx->pc = 0x290644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290648:
    // 0x290648: 0xe7a00010
    ctx->pc = 0x290648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_29064c:
    // 0x29064c: 0xc7a10008
    ctx->pc = 0x29064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290650:
    // 0x290650: 0x46020842
    ctx->pc = 0x290650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_290654:
    // 0x290654: 0xc7a00018
    ctx->pc = 0x290654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290658:
    // 0x290658: 0x46010001
    ctx->pc = 0x290658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29065c:
    // 0x29065c: 0x10000006
label_290660:
    if (ctx->pc == 0x290660u) {
        ctx->pc = 0x290660u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x290664u;
        goto label_290664;
    }
    ctx->pc = 0x29065Cu;
    {
        const bool branch_taken_0x29065c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290660u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x29065c) {
            ctx->pc = 0x290678u;
            goto label_290678;
        }
    }
    ctx->pc = 0x290664u;
label_290664:
    // 0x290664: 0x3c020800
    ctx->pc = 0x290664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
label_290668:
    // 0x290668: 0x2a2a825
    ctx->pc = 0x290668u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29066c:
    // 0x29066c: 0x3c020010
    ctx->pc = 0x29066cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_290670:
    // 0x290670: 0x2228825
    ctx->pc = 0x290670u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_290674:
    // 0x290674: 0x44801800
    ctx->pc = 0x290674u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_290678:
    // 0x290678: 0xc7a20014
    ctx->pc = 0x290678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29067c:
    // 0x29067c: 0x46021880
    ctx->pc = 0x29067cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_290680:
    // 0x290680: 0xe7a20014
    ctx->pc = 0x290680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_290684:
    // 0x290684: 0xc7a00000
    ctx->pc = 0x290684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290688:
    // 0x290688: 0x3c014040
    ctx->pc = 0x290688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_29068c:
    // 0x29068c: 0x44811800
    ctx->pc = 0x29068cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
label_290690:
    // 0x290690: 0x46030002
    ctx->pc = 0x290690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_290694:
    // 0x290694: 0xc7a10010
    ctx->pc = 0x290694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290698:
    // 0x290698: 0x46010000
    ctx->pc = 0x290698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29069c:
    // 0x29069c: 0xe7a00020
    ctx->pc = 0x29069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2906a0:
    // 0x2906a0: 0xc7a00004
    ctx->pc = 0x2906a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2906a4:
    // 0x2906a4: 0x46030002
    ctx->pc = 0x2906a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2906a8:
    // 0x2906a8: 0x46020000
    ctx->pc = 0x2906a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2906ac:
    // 0x2906ac: 0xe7a00024
    ctx->pc = 0x2906acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2906b0:
    // 0x2906b0: 0xc7a00008
    ctx->pc = 0x2906b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2906b4:
    // 0x2906b4: 0x46030002
    ctx->pc = 0x2906b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2906b8:
    // 0x2906b8: 0xc7a10018
    ctx->pc = 0x2906b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2906bc:
    // 0x2906bc: 0x46010000
    ctx->pc = 0x2906bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2906c0:
    // 0x2906c0: 0xe7a00028
    ctx->pc = 0x2906c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2906c4:
    // 0x2906c4: 0x27a40010
    ctx->pc = 0x2906c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_2906c8:
    // 0x2906c8: 0x27a50020
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
label_2906cc:
    // 0x2906cc: 0x302d
    ctx->pc = 0x2906ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2906d0:
    // 0x2906d0: 0xc087caa
label_2906d4:
    if (ctx->pc == 0x2906D4u) {
        ctx->pc = 0x2906D4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2906D8u;
        goto label_2906d8;
    }
    ctx->pc = 0x2906D0u;
    SET_GPR_U32(ctx, 31, 0x2906D8u);
    ctx->pc = 0x2906D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21F2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponWallCollide_0x21f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906D8u; }
    }
    if (ctx->pc != 0x2906D8u) { return; }
    ctx->pc = 0x2906D8u;
label_2906d8:
    // 0x2906d8: 0x1440003d
label_2906dc:
    if (ctx->pc == 0x2906DCu) {
        ctx->pc = 0x2906DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2906E0u;
        goto label_2906e0;
    }
    ctx->pc = 0x2906D8u;
    {
        const bool branch_taken_0x2906d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2906DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2906d8) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x2906E0u;
label_2906e0:
    // 0x2906e0: 0x27a40010
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_2906e4:
    // 0x2906e4: 0x27a50020
    ctx->pc = 0x2906e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
label_2906e8:
    // 0x2906e8: 0x302d
    ctx->pc = 0x2906e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2906ec:
    // 0x2906ec: 0xc66c000c
    ctx->pc = 0x2906ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2906f0:
    // 0x2906f0: 0x382d
    ctx->pc = 0x2906f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2906f4:
    // 0x2906f4: 0xc0961ce
label_2906f8:
    if (ctx->pc == 0x2906F8u) {
        ctx->pc = 0x2906F8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2906FCu;
        goto label_2906fc;
    }
    ctx->pc = 0x2906F4u;
    SET_GPR_U32(ctx, 31, 0x2906FCu);
    ctx->pc = 0x2906F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x258738u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponItemCollide_0x258738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906FCu; }
    }
    if (ctx->pc != 0x2906FCu) { return; }
    ctx->pc = 0x2906FCu;
label_2906fc:
    // 0x2906fc: 0x14400034
label_290700:
    if (ctx->pc == 0x290700u) {
        ctx->pc = 0x290700u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290704u;
        goto label_290704;
    }
    ctx->pc = 0x2906FCu;
    {
        const bool branch_taken_0x2906fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x290700u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2906fc) {
            ctx->pc = 0x2907D0u;
            goto label_2907d0;
        }
    }
    ctx->pc = 0x290704u;
label_290704:
    // 0x290704: 0x3c020032
    ctx->pc = 0x290704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_290708:
    // 0x290708: 0xc44107fc
    ctx->pc = 0x290708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29070c:
    // 0x29070c: 0x3c013f80
    ctx->pc = 0x29070cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_290710:
    // 0x290710: 0x44810000
    ctx->pc = 0x290710u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_290714:
    // 0x290714: 0x46000834
    ctx->pc = 0x290714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290718:
    // 0x290718: 0x0
    ctx->pc = 0x290718u;
    // NOP
label_29071c:
    // 0x29071c: 0x45000004
label_290720:
    if (ctx->pc == 0x290720u) {
        ctx->pc = 0x290720u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x290724u;
        goto label_290724;
    }
    ctx->pc = 0x29071Cu;
    {
        const bool branch_taken_0x29071c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290720u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        if (branch_taken_0x29071c) {
            ctx->pc = 0x290730u;
            goto label_290730;
        }
    }
    ctx->pc = 0x290724u;
label_290724:
    // 0x290724: 0x3c013f00
    ctx->pc = 0x290724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_290728:
    // 0x290728: 0x44810000
    ctx->pc = 0x290728u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_29072c:
    // 0x29072c: 0x46006b42
    ctx->pc = 0x29072cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_290730:
    // 0x290730: 0x16000004
label_290734:
    if (ctx->pc == 0x290734u) {
        ctx->pc = 0x290734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x290738u;
        goto label_290738;
    }
    ctx->pc = 0x290730u;
    {
        const bool branch_taken_0x290730 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x290734u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x290730) {
            ctx->pc = 0x290744u;
            goto label_290744;
        }
    }
    ctx->pc = 0x290738u;
label_290738:
    // 0x290738: 0x3c020002
    ctx->pc = 0x290738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_29073c:
    // 0x29073c: 0x2228825
    ctx->pc = 0x29073cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_290740:
    // 0x290740: 0x24020002
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_290744:
    // 0x290744: 0x16020003
label_290748:
    if (ctx->pc == 0x290748u) {
        ctx->pc = 0x290748u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29074Cu;
        goto label_29074c;
    }
    ctx->pc = 0x290744u;
    {
        const bool branch_taken_0x290744 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x290748u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290744) {
            ctx->pc = 0x290754u;
            goto label_290754;
        }
    }
    ctx->pc = 0x29074Cu;
label_29074c:
    // 0x29074c: 0x3c020004
    ctx->pc = 0x29074cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
label_290750:
    // 0x290750: 0x2228825
    ctx->pc = 0x290750u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_290754:
    // 0x290754: 0x27a50020
    ctx->pc = 0x290754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
label_290758:
    // 0x290758: 0x3a0302d
    ctx->pc = 0x290758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29075c:
    // 0x29075c: 0x4600b306
    ctx->pc = 0x29075cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_290760:
    // 0x290760: 0x220382d
    ctx->pc = 0x290760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_290764:
    // 0x290764: 0x260402d
    ctx->pc = 0x290764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290768:
    // 0x290768: 0x2c0482d
    ctx->pc = 0x290768u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29076c:
    // 0x29076c: 0x502d
    ctx->pc = 0x29076cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290770:
    // 0x290770: 0xc0a3df8
label_290774:
    if (ctx->pc == 0x290774u) {
        ctx->pc = 0x290774u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x290778u;
        goto label_290778;
    }
    ctx->pc = 0x290770u;
    SET_GPR_U32(ctx, 31, 0x290778u);
    ctx->pc = 0x290774u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28F7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartMissile_0x28f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290778u; }
    }
    if (ctx->pc != 0x290778u) { return; }
    ctx->pc = 0x290778u;
label_290778:
    // 0x290778: 0x40882d
    ctx->pc = 0x290778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29077c:
    // 0x29077c: 0x3c020032
    ctx->pc = 0x29077cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_290780:
    // 0x290780: 0xc44e07fc
    ctx->pc = 0x290780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_290784:
    // 0x290784: 0x3c013f80
    ctx->pc = 0x290784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_290788:
    // 0x290788: 0x44810000
    ctx->pc = 0x290788u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_29078c:
    // 0x29078c: 0x46007034
    ctx->pc = 0x29078cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290790:
    // 0x290790: 0x0
    ctx->pc = 0x290790u;
    // NOP
label_290794:
    // 0x290794: 0x45000004
label_290798:
    if (ctx->pc == 0x290798u) {
        ctx->pc = 0x290798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29079Cu;
        goto label_29079c;
    }
    ctx->pc = 0x290794u;
    {
        const bool branch_taken_0x290794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290794) {
            ctx->pc = 0x2907A8u;
            goto label_2907a8;
        }
    }
    ctx->pc = 0x29079Cu;
label_29079c:
    // 0x29079c: 0x46007306
    ctx->pc = 0x29079cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
label_2907a0:
    // 0x2907a0: 0xc09f63e
label_2907a4:
    if (ctx->pc == 0x2907A4u) {
        ctx->pc = 0x2907A4u;
        ctx->f[13] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x2907A8u;
        goto label_2907a8;
    }
    ctx->pc = 0x2907A0u;
    SET_GPR_U32(ctx, 31, 0x2907A8u);
    ctx->pc = 0x2907A4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907A8u; }
    }
    if (ctx->pc != 0x2907A8u) { return; }
    ctx->pc = 0x2907A8u;
label_2907a8:
    // 0x2907a8: 0x24020001
    ctx->pc = 0x2907a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2907ac:
    // 0x2907ac: 0x16020009
label_2907b0:
    if (ctx->pc == 0x2907B0u) {
        ctx->pc = 0x2907B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x2907B4u;
        goto label_2907b4;
    }
    ctx->pc = 0x2907ACu;
    {
        const bool branch_taken_0x2907ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2907B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2907ac) {
            ctx->pc = 0x2907D4u;
            goto label_2907d4;
        }
    }
    ctx->pc = 0x2907B4u;
label_2907b4:
    // 0x2907b4: 0x220202d
    ctx->pc = 0x2907b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2907b8:
    // 0x2907b8: 0x3c0140a0
    ctx->pc = 0x2907b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_2907bc:
    // 0x2907bc: 0x44816000
    ctx->pc = 0x2907bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2907c0:
    // 0x2907c0: 0x3c050035
    ctx->pc = 0x2907c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
label_2907c4:
    // 0x2907c4: 0xc09fdc2
label_2907c8:
    if (ctx->pc == 0x2907C8u) {
        ctx->pc = 0x2907C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->pc = 0x2907CCu;
        goto label_2907cc;
    }
    ctx->pc = 0x2907C4u;
    SET_GPR_U32(ctx, 31, 0x2907CCu);
    ctx->pc = 0x2907C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964608));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907CCu; }
    }
    if (ctx->pc != 0x2907CCu) { return; }
    ctx->pc = 0x2907CCu;
label_2907cc:
    // 0x2907cc: 0x24020001
    ctx->pc = 0x2907ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2907d0:
    // 0x2907d0: 0xdfbf00b0
    ctx->pc = 0x2907d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2907d4:
    // 0x2907d4: 0xdfb600a0
    ctx->pc = 0x2907d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2907d8:
    // 0x2907d8: 0xdfb50090
    ctx->pc = 0x2907d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2907dc:
    // 0x2907dc: 0xdfb40080
    ctx->pc = 0x2907dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2907e0:
    // 0x2907e0: 0xdfb30070
    ctx->pc = 0x2907e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2907e4:
    // 0x2907e4: 0xdfb20060
    ctx->pc = 0x2907e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2907e8:
    // 0x2907e8: 0xdfb10050
    ctx->pc = 0x2907e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2907ec:
    // 0x2907ec: 0xdfb00040
    ctx->pc = 0x2907ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2907f0:
    // 0x2907f0: 0xc7b600d0
    ctx->pc = 0x2907f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2907f4:
    // 0x2907f4: 0xc7b500c8
    ctx->pc = 0x2907f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2907f8:
    // 0x2907f8: 0xc7b400c0
    ctx->pc = 0x2907f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2907fc:
    // 0x2907fc: 0x3e00008
label_290800:
    if (ctx->pc == 0x290800u) {
        ctx->pc = 0x290800u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x290804u;
        goto label_fallthrough_0x2907fc;
    }
    ctx->pc = 0x2907FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290800u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290350u: goto label_290350;
            case 0x290354u: goto label_290354;
            case 0x290358u: goto label_290358;
            case 0x29035Cu: goto label_29035c;
            case 0x290360u: goto label_290360;
            case 0x290364u: goto label_290364;
            case 0x290368u: goto label_290368;
            case 0x29036Cu: goto label_29036c;
            case 0x290370u: goto label_290370;
            case 0x290374u: goto label_290374;
            case 0x290378u: goto label_290378;
            case 0x29037Cu: goto label_29037c;
            case 0x290380u: goto label_290380;
            case 0x290384u: goto label_290384;
            case 0x290388u: goto label_290388;
            case 0x29038Cu: goto label_29038c;
            case 0x290390u: goto label_290390;
            case 0x290394u: goto label_290394;
            case 0x290398u: goto label_290398;
            case 0x29039Cu: goto label_29039c;
            case 0x2903A0u: goto label_2903a0;
            case 0x2903A4u: goto label_2903a4;
            case 0x2903A8u: goto label_2903a8;
            case 0x2903ACu: goto label_2903ac;
            case 0x2903B0u: goto label_2903b0;
            case 0x2903B4u: goto label_2903b4;
            case 0x2903B8u: goto label_2903b8;
            case 0x2903BCu: goto label_2903bc;
            case 0x2903C0u: goto label_2903c0;
            case 0x2903C4u: goto label_2903c4;
            case 0x2903C8u: goto label_2903c8;
            case 0x2903CCu: goto label_2903cc;
            case 0x2903D0u: goto label_2903d0;
            case 0x2903D4u: goto label_2903d4;
            case 0x2903D8u: goto label_2903d8;
            case 0x2903DCu: goto label_2903dc;
            case 0x2903E0u: goto label_2903e0;
            case 0x2903E4u: goto label_2903e4;
            case 0x2903E8u: goto label_2903e8;
            case 0x2903ECu: goto label_2903ec;
            case 0x2903F0u: goto label_2903f0;
            case 0x2903F4u: goto label_2903f4;
            case 0x2903F8u: goto label_2903f8;
            case 0x2903FCu: goto label_2903fc;
            case 0x290400u: goto label_290400;
            case 0x290404u: goto label_290404;
            case 0x290408u: goto label_290408;
            case 0x29040Cu: goto label_29040c;
            case 0x290410u: goto label_290410;
            case 0x290414u: goto label_290414;
            case 0x290418u: goto label_290418;
            case 0x29041Cu: goto label_29041c;
            case 0x290420u: goto label_290420;
            case 0x290424u: goto label_290424;
            case 0x290428u: goto label_290428;
            case 0x29042Cu: goto label_29042c;
            case 0x290430u: goto label_290430;
            case 0x290434u: goto label_290434;
            case 0x290438u: goto label_290438;
            case 0x29043Cu: goto label_29043c;
            case 0x290440u: goto label_290440;
            case 0x290444u: goto label_290444;
            case 0x290448u: goto label_290448;
            case 0x29044Cu: goto label_29044c;
            case 0x290450u: goto label_290450;
            case 0x290454u: goto label_290454;
            case 0x290458u: goto label_290458;
            case 0x29045Cu: goto label_29045c;
            case 0x290460u: goto label_290460;
            case 0x290464u: goto label_290464;
            case 0x290468u: goto label_290468;
            case 0x29046Cu: goto label_29046c;
            case 0x290470u: goto label_290470;
            case 0x290474u: goto label_290474;
            case 0x290478u: goto label_290478;
            case 0x29047Cu: goto label_29047c;
            case 0x290480u: goto label_290480;
            case 0x290484u: goto label_290484;
            case 0x290488u: goto label_290488;
            case 0x29048Cu: goto label_29048c;
            case 0x290490u: goto label_290490;
            case 0x290494u: goto label_290494;
            case 0x290498u: goto label_290498;
            case 0x29049Cu: goto label_29049c;
            case 0x2904A0u: goto label_2904a0;
            case 0x2904A4u: goto label_2904a4;
            case 0x2904A8u: goto label_2904a8;
            case 0x2904ACu: goto label_2904ac;
            case 0x2904B0u: goto label_2904b0;
            case 0x2904B4u: goto label_2904b4;
            case 0x2904B8u: goto label_2904b8;
            case 0x2904BCu: goto label_2904bc;
            case 0x2904C0u: goto label_2904c0;
            case 0x2904C4u: goto label_2904c4;
            case 0x2904C8u: goto label_2904c8;
            case 0x2904CCu: goto label_2904cc;
            case 0x2904D0u: goto label_2904d0;
            case 0x2904D4u: goto label_2904d4;
            case 0x2904D8u: goto label_2904d8;
            case 0x2904DCu: goto label_2904dc;
            case 0x2904E0u: goto label_2904e0;
            case 0x2904E4u: goto label_2904e4;
            case 0x2904E8u: goto label_2904e8;
            case 0x2904ECu: goto label_2904ec;
            case 0x2904F0u: goto label_2904f0;
            case 0x2904F4u: goto label_2904f4;
            case 0x2904F8u: goto label_2904f8;
            case 0x2904FCu: goto label_2904fc;
            case 0x290500u: goto label_290500;
            case 0x290504u: goto label_290504;
            case 0x290508u: goto label_290508;
            case 0x29050Cu: goto label_29050c;
            case 0x290510u: goto label_290510;
            case 0x290514u: goto label_290514;
            case 0x290518u: goto label_290518;
            case 0x29051Cu: goto label_29051c;
            case 0x290520u: goto label_290520;
            case 0x290524u: goto label_290524;
            case 0x290528u: goto label_290528;
            case 0x29052Cu: goto label_29052c;
            case 0x290530u: goto label_290530;
            case 0x290534u: goto label_290534;
            case 0x290538u: goto label_290538;
            case 0x29053Cu: goto label_29053c;
            case 0x290540u: goto label_290540;
            case 0x290544u: goto label_290544;
            case 0x290548u: goto label_290548;
            case 0x29054Cu: goto label_29054c;
            case 0x290550u: goto label_290550;
            case 0x290554u: goto label_290554;
            case 0x290558u: goto label_290558;
            case 0x29055Cu: goto label_29055c;
            case 0x290560u: goto label_290560;
            case 0x290564u: goto label_290564;
            case 0x290568u: goto label_290568;
            case 0x29056Cu: goto label_29056c;
            case 0x290570u: goto label_290570;
            case 0x290574u: goto label_290574;
            case 0x290578u: goto label_290578;
            case 0x29057Cu: goto label_29057c;
            case 0x290580u: goto label_290580;
            case 0x290584u: goto label_290584;
            case 0x290588u: goto label_290588;
            case 0x29058Cu: goto label_29058c;
            case 0x290590u: goto label_290590;
            case 0x290594u: goto label_290594;
            case 0x290598u: goto label_290598;
            case 0x29059Cu: goto label_29059c;
            case 0x2905A0u: goto label_2905a0;
            case 0x2905A4u: goto label_2905a4;
            case 0x2905A8u: goto label_2905a8;
            case 0x2905ACu: goto label_2905ac;
            case 0x2905B0u: goto label_2905b0;
            case 0x2905B4u: goto label_2905b4;
            case 0x2905B8u: goto label_2905b8;
            case 0x2905BCu: goto label_2905bc;
            case 0x2905C0u: goto label_2905c0;
            case 0x2905C4u: goto label_2905c4;
            case 0x2905C8u: goto label_2905c8;
            case 0x2905CCu: goto label_2905cc;
            case 0x2905D0u: goto label_2905d0;
            case 0x2905D4u: goto label_2905d4;
            case 0x2905D8u: goto label_2905d8;
            case 0x2905DCu: goto label_2905dc;
            case 0x2905E0u: goto label_2905e0;
            case 0x2905E4u: goto label_2905e4;
            case 0x2905E8u: goto label_2905e8;
            case 0x2905ECu: goto label_2905ec;
            case 0x2905F0u: goto label_2905f0;
            case 0x2905F4u: goto label_2905f4;
            case 0x2905F8u: goto label_2905f8;
            case 0x2905FCu: goto label_2905fc;
            case 0x290600u: goto label_290600;
            case 0x290604u: goto label_290604;
            case 0x290608u: goto label_290608;
            case 0x29060Cu: goto label_29060c;
            case 0x290610u: goto label_290610;
            case 0x290614u: goto label_290614;
            case 0x290618u: goto label_290618;
            case 0x29061Cu: goto label_29061c;
            case 0x290620u: goto label_290620;
            case 0x290624u: goto label_290624;
            case 0x290628u: goto label_290628;
            case 0x29062Cu: goto label_29062c;
            case 0x290630u: goto label_290630;
            case 0x290634u: goto label_290634;
            case 0x290638u: goto label_290638;
            case 0x29063Cu: goto label_29063c;
            case 0x290640u: goto label_290640;
            case 0x290644u: goto label_290644;
            case 0x290648u: goto label_290648;
            case 0x29064Cu: goto label_29064c;
            case 0x290650u: goto label_290650;
            case 0x290654u: goto label_290654;
            case 0x290658u: goto label_290658;
            case 0x29065Cu: goto label_29065c;
            case 0x290660u: goto label_290660;
            case 0x290664u: goto label_290664;
            case 0x290668u: goto label_290668;
            case 0x29066Cu: goto label_29066c;
            case 0x290670u: goto label_290670;
            case 0x290674u: goto label_290674;
            case 0x290678u: goto label_290678;
            case 0x29067Cu: goto label_29067c;
            case 0x290680u: goto label_290680;
            case 0x290684u: goto label_290684;
            case 0x290688u: goto label_290688;
            case 0x29068Cu: goto label_29068c;
            case 0x290690u: goto label_290690;
            case 0x290694u: goto label_290694;
            case 0x290698u: goto label_290698;
            case 0x29069Cu: goto label_29069c;
            case 0x2906A0u: goto label_2906a0;
            case 0x2906A4u: goto label_2906a4;
            case 0x2906A8u: goto label_2906a8;
            case 0x2906ACu: goto label_2906ac;
            case 0x2906B0u: goto label_2906b0;
            case 0x2906B4u: goto label_2906b4;
            case 0x2906B8u: goto label_2906b8;
            case 0x2906BCu: goto label_2906bc;
            case 0x2906C0u: goto label_2906c0;
            case 0x2906C4u: goto label_2906c4;
            case 0x2906C8u: goto label_2906c8;
            case 0x2906CCu: goto label_2906cc;
            case 0x2906D0u: goto label_2906d0;
            case 0x2906D4u: goto label_2906d4;
            case 0x2906D8u: goto label_2906d8;
            case 0x2906DCu: goto label_2906dc;
            case 0x2906E0u: goto label_2906e0;
            case 0x2906E4u: goto label_2906e4;
            case 0x2906E8u: goto label_2906e8;
            case 0x2906ECu: goto label_2906ec;
            case 0x2906F0u: goto label_2906f0;
            case 0x2906F4u: goto label_2906f4;
            case 0x2906F8u: goto label_2906f8;
            case 0x2906FCu: goto label_2906fc;
            case 0x290700u: goto label_290700;
            case 0x290704u: goto label_290704;
            case 0x290708u: goto label_290708;
            case 0x29070Cu: goto label_29070c;
            case 0x290710u: goto label_290710;
            case 0x290714u: goto label_290714;
            case 0x290718u: goto label_290718;
            case 0x29071Cu: goto label_29071c;
            case 0x290720u: goto label_290720;
            case 0x290724u: goto label_290724;
            case 0x290728u: goto label_290728;
            case 0x29072Cu: goto label_29072c;
            case 0x290730u: goto label_290730;
            case 0x290734u: goto label_290734;
            case 0x290738u: goto label_290738;
            case 0x29073Cu: goto label_29073c;
            case 0x290740u: goto label_290740;
            case 0x290744u: goto label_290744;
            case 0x290748u: goto label_290748;
            case 0x29074Cu: goto label_29074c;
            case 0x290750u: goto label_290750;
            case 0x290754u: goto label_290754;
            case 0x290758u: goto label_290758;
            case 0x29075Cu: goto label_29075c;
            case 0x290760u: goto label_290760;
            case 0x290764u: goto label_290764;
            case 0x290768u: goto label_290768;
            case 0x29076Cu: goto label_29076c;
            case 0x290770u: goto label_290770;
            case 0x290774u: goto label_290774;
            case 0x290778u: goto label_290778;
            case 0x29077Cu: goto label_29077c;
            case 0x290780u: goto label_290780;
            case 0x290784u: goto label_290784;
            case 0x290788u: goto label_290788;
            case 0x29078Cu: goto label_29078c;
            case 0x290790u: goto label_290790;
            case 0x290794u: goto label_290794;
            case 0x290798u: goto label_290798;
            case 0x29079Cu: goto label_29079c;
            case 0x2907A0u: goto label_2907a0;
            case 0x2907A4u: goto label_2907a4;
            case 0x2907A8u: goto label_2907a8;
            case 0x2907ACu: goto label_2907ac;
            case 0x2907B0u: goto label_2907b0;
            case 0x2907B4u: goto label_2907b4;
            case 0x2907B8u: goto label_2907b8;
            case 0x2907BCu: goto label_2907bc;
            case 0x2907C0u: goto label_2907c0;
            case 0x2907C4u: goto label_2907c4;
            case 0x2907C8u: goto label_2907c8;
            case 0x2907CCu: goto label_2907cc;
            case 0x2907D0u: goto label_2907d0;
            case 0x2907D4u: goto label_2907d4;
            case 0x2907D8u: goto label_2907d8;
            case 0x2907DCu: goto label_2907dc;
            case 0x2907E0u: goto label_2907e0;
            case 0x2907E4u: goto label_2907e4;
            case 0x2907E8u: goto label_2907e8;
            case 0x2907ECu: goto label_2907ec;
            case 0x2907F0u: goto label_2907f0;
            case 0x2907F4u: goto label_2907f4;
            case 0x2907F8u: goto label_2907f8;
            case 0x2907FCu: goto label_2907fc;
            case 0x290800u: goto label_290800;
            default: break;
        }
        return;
    }
label_fallthrough_0x2907fc:
    ctx->pc = 0x290804u;
}
