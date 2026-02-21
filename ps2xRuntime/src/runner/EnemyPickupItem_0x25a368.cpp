#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyPickupItem
// Address: 0x25a368 - 0x25a500
void EnemyPickupItem_0x25a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a368u;

    // 0x25a368: 0x27bdff60
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25a36c: 0xffbf0080
    ctx->pc = 0x25a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25a370: 0xffb60070
    ctx->pc = 0x25a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25a374: 0xffb50060
    ctx->pc = 0x25a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25a378: 0xffb40050
    ctx->pc = 0x25a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25a37c: 0xffb30040
    ctx->pc = 0x25a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25a380: 0xffb20030
    ctx->pc = 0x25a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25a384: 0xffb10020
    ctx->pc = 0x25a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25a388: 0xffb00010
    ctx->pc = 0x25a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25a38c: 0xe7b50098
    ctx->pc = 0x25a38cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x25a390: 0xe7b40090
    ctx->pc = 0x25a390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25a394: 0xa0882d
    ctx->pc = 0x25a394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a398: 0x3c014000
    ctx->pc = 0x25a398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x25a39c: 0x4481a000
    ctx->pc = 0x25a39cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x25a3a0: 0x3c014040
    ctx->pc = 0x25a3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x25a3a4: 0x4481a800
    ctx->pc = 0x25a3a4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x25a3a8: 0x2482ffe0
    ctx->pc = 0x25a3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x25a3ac: 0x2c420002
    ctx->pc = 0x25a3acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x25a3b0: 0x14400004
    ctx->pc = 0x25A3B0u;
    {
        const bool branch_taken_0x25a3b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25A3B4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25a3b0) {
            ctx->pc = 0x25A3C4u;
            goto label_25a3c4;
        }
    }
    ctx->pc = 0x25A3B8u;
    // 0x25a3b8: 0x2402001d
    ctx->pc = 0x25a3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x25a3bc: 0x14820044
    ctx->pc = 0x25A3BCu;
    {
        const bool branch_taken_0x25a3bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A3C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25a3bc) {
            ctx->pc = 0x25A4D0u;
            goto label_25a4d0;
        }
    }
    ctx->pc = 0x25A3C4u;
label_25a3c4:
    // 0x25a3c4: 0x3c01bf80
    ctx->pc = 0x25a3c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25a3c8: 0x44816000
    ctx->pc = 0x25a3c8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25a3cc: 0xc0a0120
    ctx->pc = 0x25A3CCu;
    SET_GPR_U32(ctx, 31, 0x25A3D4u);
    ctx->pc = 0x25A3D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3D4u; }
    }
    if (ctx->pc != 0x25A3D4u) { return; }
    ctx->pc = 0x25A3D4u;
    // 0x25a3d4: 0x3c160034
    ctx->pc = 0x25a3d4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x25a3d8: 0x24150110
    ctx->pc = 0x25a3d8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25a3dc: 0x2414ffff
    ctx->pc = 0x25a3dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a3e0: 0x10000027
    ctx->pc = 0x25A3E0u;
    {
        const bool branch_taken_0x25a3e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A3E4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25a3e0) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A3E8u;
label_25a3e8:
    // 0x25a3e8: 0x8ec2cd94
    ctx->pc = 0x25a3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294954388)));
    // 0x25a3ec: 0x621821
    ctx->pc = 0x25a3ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a3f0: 0x846200d8
    ctx->pc = 0x25a3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x25a3f4: 0x10540022
    ctx->pc = 0x25A3F4u;
    {
        const bool branch_taken_0x25a3f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x25A3F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 33024));
        if (branch_taken_0x25a3f4) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A3FCu;
    // 0x25a3fc: 0x14400020
    ctx->pc = 0x25A3FCu;
    {
        const bool branch_taken_0x25a3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25a3fc) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A404u;
    // 0x25a404: 0x806200e1
    ctx->pc = 0x25a404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 225)));
    // 0x25a408: 0x1440001d
    ctx->pc = 0x25A408u;
    {
        const bool branch_taken_0x25a408 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25a408) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A410u;
    // 0x25a410: 0x8c620000
    ctx->pc = 0x25a410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a414: 0x8c420000
    ctx->pc = 0x25a414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a418: 0x14530019
    ctx->pc = 0x25A418u;
    {
        const bool branch_taken_0x25a418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x25a418) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A420u;
    // 0x25a420: 0xc46c0040
    ctx->pc = 0x25a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25a424: 0xc6200000
    ctx->pc = 0x25a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a428: 0x46006301
    ctx->pc = 0x25a428u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x25a42c: 0xe7ac0000
    ctx->pc = 0x25a42cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a430: 0xc4600044
    ctx->pc = 0x25a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a434: 0xc6210004
    ctx->pc = 0x25a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a438: 0x46010001
    ctx->pc = 0x25a438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a43c: 0xe7a00004
    ctx->pc = 0x25a43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a440: 0xc46d0048
    ctx->pc = 0x25a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a444: 0xc6200008
    ctx->pc = 0x25a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a448: 0x46006b41
    ctx->pc = 0x25a448u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x25a44c: 0xc0b5c34
    ctx->pc = 0x25A44Cu;
    SET_GPR_U32(ctx, 31, 0x25A454u);
    ctx->pc = 0x25A450u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A454u; }
    }
    if (ctx->pc != 0x25A454u) { return; }
    ctx->pc = 0x25A454u;
    // 0x25a454: 0x46000046
    ctx->pc = 0x25a454u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25a458: 0x46140834
    ctx->pc = 0x25a458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a45c: 0x0
    ctx->pc = 0x25a45cu;
    // NOP
    // 0x25a460: 0x45000007
    ctx->pc = 0x25A460u;
    {
        const bool branch_taken_0x25a460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A464u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x25a460) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A468u;
    // 0x25a468: 0x46000005
    ctx->pc = 0x25a468u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25a46c: 0x46150034
    ctx->pc = 0x25a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a470: 0x45000003
    ctx->pc = 0x25A470u;
    {
        const bool branch_taken_0x25a470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25a470) {
            ctx->pc = 0x25A480u;
            goto label_25a480;
        }
    }
    ctx->pc = 0x25A478u;
    // 0x25a478: 0x46000d06
    ctx->pc = 0x25a478u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x25a47c: 0x200902d
    ctx->pc = 0x25a47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a480:
    // 0x25a480: 0xc0a015a
    ctx->pc = 0x25A480u;
    SET_GPR_U32(ctx, 31, 0x25A488u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A488u; }
    }
    if (ctx->pc != 0x25A488u) { return; }
    ctx->pc = 0x25A488u;
    // 0x25a488: 0x40802d
    ctx->pc = 0x25a488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a48c: 0x601ffd6
    ctx->pc = 0x25A48Cu;
    {
        const bool branch_taken_0x25a48c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x25A490u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25a48c) {
            ctx->pc = 0x25A3E8u;
            goto label_25a3e8;
        }
    }
    ctx->pc = 0x25A494u;
    // 0x25a494: 0x640000d
    ctx->pc = 0x25A494u;
    {
        const bool branch_taken_0x25a494 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x25A498u;
        SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
        if (branch_taken_0x25a494) {
            ctx->pc = 0x25A4CCu;
            goto label_25a4cc;
        }
    }
    ctx->pc = 0x25A49Cu;
    // 0x25a49c: 0x8ca4cd94
    ctx->pc = 0x25a49cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294954388)));
    // 0x25a4a0: 0x24020110
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25a4a4: 0x2421018
    ctx->pc = 0x25a4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25a4a8: 0x442021
    ctx->pc = 0x25a4a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25a4ac: 0x2403000a
    ctx->pc = 0x25a4acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x25a4b0: 0xa08300e1
    ctx->pc = 0x25a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 225), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a4b4: 0x8ca3cd94
    ctx->pc = 0x25a4b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294954388)));
    // 0x25a4b8: 0x431021
    ctx->pc = 0x25a4b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a4bc: 0x8c440070
    ctx->pc = 0x25a4bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x25a4c0: 0x24050002
    ctx->pc = 0x25a4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a4c4: 0xc0b41b8
    ctx->pc = 0x25A4C4u;
    SET_GPR_U32(ctx, 31, 0x25A4CCu);
    ctx->pc = 0x25A4C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A4CCu; }
    }
    if (ctx->pc != 0x25A4CCu) { return; }
    ctx->pc = 0x25A4CCu;
label_25a4cc:
    // 0x25a4cc: 0x240102d
    ctx->pc = 0x25a4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a4d0:
    // 0x25a4d0: 0xdfbf0080
    ctx->pc = 0x25a4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a4d4: 0xdfb60070
    ctx->pc = 0x25a4d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a4d8: 0xdfb50060
    ctx->pc = 0x25a4d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a4dc: 0xdfb40050
    ctx->pc = 0x25a4dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a4e0: 0xdfb30040
    ctx->pc = 0x25a4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a4e4: 0xdfb20030
    ctx->pc = 0x25a4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a4e8: 0xdfb10020
    ctx->pc = 0x25a4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4ec: 0xdfb00010
    ctx->pc = 0x25a4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a4f0: 0xc7b50098
    ctx->pc = 0x25a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a4f4: 0xc7b40090
    ctx->pc = 0x25a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a4f8: 0x3e00008
    ctx->pc = 0x25A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A4FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A3C4u: goto label_25a3c4;
            case 0x25A3E8u: goto label_25a3e8;
            case 0x25A480u: goto label_25a480;
            case 0x25A4CCu: goto label_25a4cc;
            case 0x25A4D0u: goto label_25a4d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A500u;
}
