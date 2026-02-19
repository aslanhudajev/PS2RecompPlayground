#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: closest_enemy
// Address: 0x2442e8 - 0x244508
void closest_enemy_0x2442e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2442e8u;

    // 0x2442e8: 0x27bdff10
    ctx->pc = 0x2442e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2442ec: 0xffbf00b0
    ctx->pc = 0x2442ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2442f0: 0xffbe00a0
    ctx->pc = 0x2442f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2442f4: 0xffb70090
    ctx->pc = 0x2442f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2442f8: 0xffb60080
    ctx->pc = 0x2442f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2442fc: 0xffb50070
    ctx->pc = 0x2442fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x244300: 0xffb40060
    ctx->pc = 0x244300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x244304: 0xffb30050
    ctx->pc = 0x244304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x244308: 0xffb20040
    ctx->pc = 0x244308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24430c: 0xffb10030
    ctx->pc = 0x24430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x244310: 0xffb00020
    ctx->pc = 0x244310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x244314: 0xe7b800e0
    ctx->pc = 0x244314u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x244318: 0xe7b700d8
    ctx->pc = 0x244318u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x24431c: 0xe7b600d0
    ctx->pc = 0x24431cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x244320: 0xe7b500c8
    ctx->pc = 0x244320u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x244324: 0xe7b400c0
    ctx->pc = 0x244324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x244328: 0x80902d
    ctx->pc = 0x244328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24432c: 0xa0982d
    ctx->pc = 0x24432cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244330: 0x46006606
    ctx->pc = 0x244330u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x244334: 0x46006dc6
    ctx->pc = 0x244334u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x244338: 0xc0a02d
    ctx->pc = 0x244338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24433c: 0xe0b82d
    ctx->pc = 0x24433cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244340: 0x100802d
    ctx->pc = 0x244340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244344: 0x2415ffff
    ctx->pc = 0x244344u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244348: 0x3c013f80
    ctx->pc = 0x244348u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24434c: 0x44810000
    ctx->pc = 0x24434cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244350: 0x46180581
    ctx->pc = 0x244350u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x244354: 0x0
    ctx->pc = 0x244354u;
    // NOP
    // 0x244358: 0x0
    ctx->pc = 0x244358u;
    // NOP
    // 0x24435c: 0x4617b583
    ctx->pc = 0x24435cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[23];
    // 0x244360: 0x4600bd46
    ctx->pc = 0x244360u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x244364: 0xc0a00b0
    ctx->pc = 0x244364u;
    SET_GPR_U32(ctx, 31, 0x24436Cu);
    ctx->pc = 0x244368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24436Cu; }
    }
    if (ctx->pc != 0x24436Cu) { return; }
    ctx->pc = 0x24436Cu;
    // 0x24436c: 0x3c020033
    ctx->pc = 0x24436cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x244370: 0x245edfd0
    ctx->pc = 0x244370u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x244374: 0x3c020008
    ctx->pc = 0x244374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x244378: 0x10000043
    ctx->pc = 0x244378u;
    {
        const bool branch_taken_0x244378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24437Cu;
        SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x244378) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244380u;
label_244380:
    // 0x244380: 0x2221818
    ctx->pc = 0x244380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x244384: 0x7e8021
    ctx->pc = 0x244384u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x244388: 0x8e0300c8
    ctx->pc = 0x244388u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x24438c: 0x24020001
    ctx->pc = 0x24438cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x244390: 0x10620003
    ctx->pc = 0x244390u;
    {
        const bool branch_taken_0x244390 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x244394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x244390) {
            ctx->pc = 0x2443A0u;
            goto label_2443a0;
        }
    }
    ctx->pc = 0x244398u;
    // 0x244398: 0x1462003b
    ctx->pc = 0x244398u;
    {
        const bool branch_taken_0x244398 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x244398) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x2443A0u;
label_2443a0:
    // 0x2443a0: 0x8e030000
    ctx->pc = 0x2443a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2443a4: 0x2402001f
    ctx->pc = 0x2443a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2443a8: 0x10620037
    ctx->pc = 0x2443A8u;
    {
        const bool branch_taken_0x2443a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2443ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x2443a8) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x2443B0u;
    // 0x2443b0: 0x54620004
    ctx->pc = 0x2443B0u;
    {
        const bool branch_taken_0x2443b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2443b0) {
            ctx->pc = 0x2443B4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2443C4u;
            goto label_2443c4;
        }
    }
    ctx->pc = 0x2443B8u;
    // 0x2443b8: 0x12c00033
    ctx->pc = 0x2443B8u;
    {
        const bool branch_taken_0x2443b8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x2443b8) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x2443C0u;
    // 0x2443c0: 0xc6000060
    ctx->pc = 0x2443c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2443c4:
    // 0x2443c4: 0xc6410000
    ctx->pc = 0x2443c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2443c8: 0x46010001
    ctx->pc = 0x2443c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2443cc: 0xe7a00000
    ctx->pc = 0x2443ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2443d0: 0xc6020064
    ctx->pc = 0x2443d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2443d4: 0xc6400004
    ctx->pc = 0x2443d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2443d8: 0x46001081
    ctx->pc = 0x2443d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2443dc: 0xe7a20004
    ctx->pc = 0x2443dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2443e0: 0xc6000068
    ctx->pc = 0x2443e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2443e4: 0xc6410008
    ctx->pc = 0x2443e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2443e8: 0x46010001
    ctx->pc = 0x2443e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2443ec: 0xe7a00008
    ctx->pc = 0x2443ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2443f0: 0x46001085
    ctx->pc = 0x2443f0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2443f4: 0x3c014120
    ctx->pc = 0x2443f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2443f8: 0x44810000
    ctx->pc = 0x2443f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2443fc: 0x46020034
    ctx->pc = 0x2443fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244400: 0x45010021
    ctx->pc = 0x244400u;
    {
        const bool branch_taken_0x244400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244400) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244408u;
    // 0x244408: 0xc0b58a4
    ctx->pc = 0x244408u;
    SET_GPR_U32(ctx, 31, 0x244410u);
    ctx->pc = 0x24440Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244410u; }
    }
    if (ctx->pc != 0x244410u) { return; }
    ctx->pc = 0x244410u;
    // 0x244410: 0xc601024c
    ctx->pc = 0x244410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244414: 0x46010501
    ctx->pc = 0x244414u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244418: 0x4614b834
    ctx->pc = 0x244418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24441c: 0x0
    ctx->pc = 0x24441cu;
    // NOP
    // 0x244420: 0x45010019
    ctx->pc = 0x244420u;
    {
        const bool branch_taken_0x244420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244424u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x244420) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244428u;
    // 0x244428: 0xc0b5c34
    ctx->pc = 0x244428u;
    SET_GPR_U32(ctx, 31, 0x244430u);
    ctx->pc = 0x24442Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244430u; }
    }
    if (ctx->pc != 0x244430u) { return; }
    ctx->pc = 0x244430u;
    // 0x244430: 0xc7a30000
    ctx->pc = 0x244430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244434: 0xc6610000
    ctx->pc = 0x244434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244438: 0x46011842
    ctx->pc = 0x244438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24443c: 0xc7a40008
    ctx->pc = 0x24443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x244440: 0xc6620008
    ctx->pc = 0x244440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244444: 0x46022082
    ctx->pc = 0x244444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x244448: 0x46020840
    ctx->pc = 0x244448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24444c: 0x4616a082
    ctx->pc = 0x24444cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x244450: 0x4602c080
    ctx->pc = 0x244450u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x244454: 0x46001082
    ctx->pc = 0x244454u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x244458: 0x46020834
    ctx->pc = 0x244458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24445c: 0x4501000a
    ctx->pc = 0x24445Cu;
    {
        const bool branch_taken_0x24445c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24445c) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244464u;
    // 0x244464: 0x4615a034
    ctx->pc = 0x244464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244468: 0x45000007
    ctx->pc = 0x244468u;
    {
        const bool branch_taken_0x244468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244468) {
            ctx->pc = 0x244488u;
            goto label_244488;
        }
    }
    ctx->pc = 0x244470u;
    // 0x244470: 0x220a82d
    ctx->pc = 0x244470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244474: 0x4600a546
    ctx->pc = 0x244474u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x244478: 0xe7a30010
    ctx->pc = 0x244478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24447c: 0xc7a00004
    ctx->pc = 0x24447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244480: 0xe7a00014
    ctx->pc = 0x244480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x244484: 0xe7a40018
    ctx->pc = 0x244484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_244488:
    // 0x244488: 0xc0a00ea
    ctx->pc = 0x244488u;
    SET_GPR_U32(ctx, 31, 0x244490u);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244490u; }
    }
    if (ctx->pc != 0x244490u) { return; }
    ctx->pc = 0x244490u;
    // 0x244490: 0x40882d
    ctx->pc = 0x244490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244494: 0x623ffba
    ctx->pc = 0x244494u;
    {
        const bool branch_taken_0x244494 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x244494) {
            ctx->pc = 0x244498u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
            ctx->pc = 0x244380u;
            goto label_244380;
        }
    }
    ctx->pc = 0x24449Cu;
    // 0x24449c: 0x6a00006
    ctx->pc = 0x24449Cu;
    {
        const bool branch_taken_0x24449c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2444A0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24449c) {
            ctx->pc = 0x2444B8u;
            goto label_2444b8;
        }
    }
    ctx->pc = 0x2444A4u;
    // 0x2444a4: 0xe6800000
    ctx->pc = 0x2444a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2444a8: 0xc7a00014
    ctx->pc = 0x2444a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2444ac: 0xe6800004
    ctx->pc = 0x2444acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2444b0: 0xc7a00018
    ctx->pc = 0x2444b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2444b4: 0xe6800008
    ctx->pc = 0x2444b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_2444b8:
    // 0x2444b8: 0x56e00001
    ctx->pc = 0x2444B8u;
    {
        const bool branch_taken_0x2444b8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x2444b8) {
            ctx->pc = 0x2444BCu;
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x2444C0u;
            goto label_2444c0;
        }
    }
    ctx->pc = 0x2444C0u;
label_2444c0:
    // 0x2444c0: 0x4600a806
    ctx->pc = 0x2444c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x2444c4: 0xdfbf00b0
    ctx->pc = 0x2444c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2444c8: 0xdfbe00a0
    ctx->pc = 0x2444c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2444cc: 0xdfb70090
    ctx->pc = 0x2444ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2444d0: 0xdfb60080
    ctx->pc = 0x2444d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2444d4: 0xdfb50070
    ctx->pc = 0x2444d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2444d8: 0xdfb40060
    ctx->pc = 0x2444d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2444dc: 0xdfb30050
    ctx->pc = 0x2444dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2444e0: 0xdfb20040
    ctx->pc = 0x2444e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2444e4: 0xdfb10030
    ctx->pc = 0x2444e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2444e8: 0xdfb00020
    ctx->pc = 0x2444e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2444ec: 0xc7b800e0
    ctx->pc = 0x2444ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2444f0: 0xc7b700d8
    ctx->pc = 0x2444f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2444f4: 0xc7b600d0
    ctx->pc = 0x2444f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2444f8: 0xc7b500c8
    ctx->pc = 0x2444f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2444fc: 0xc7b400c0
    ctx->pc = 0x2444fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244500: 0x3e00008
    ctx->pc = 0x244500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244380u: goto label_244380;
            case 0x2443A0u: goto label_2443a0;
            case 0x2443C4u: goto label_2443c4;
            case 0x244488u: goto label_244488;
            case 0x2444B8u: goto label_2444b8;
            case 0x2444C0u: goto label_2444c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244508u;
}
