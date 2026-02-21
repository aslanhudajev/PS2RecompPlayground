#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamLimitPlayerDpos
// Address: 0x2a22f0 - 0x2a2584
void CamLimitPlayerDpos_0x2a22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a22f0u;

    // 0x2a22f0: 0x27bdff60
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a22f4: 0xffbf0080
    ctx->pc = 0x2a22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a22f8: 0xffb40070
    ctx->pc = 0x2a22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a22fc: 0xffb30060
    ctx->pc = 0x2a22fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2a2300: 0xffb20050
    ctx->pc = 0x2a2300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a2304: 0xffb10040
    ctx->pc = 0x2a2304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2a2308: 0xffb00030
    ctx->pc = 0x2a2308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a230c: 0xe7b50098
    ctx->pc = 0x2a230cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a2310: 0xe7b40090
    ctx->pc = 0x2a2310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a2314: 0x80882d
    ctx->pc = 0x2a2314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2318: 0xa0902d
    ctx->pc = 0x2a2318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a231c: 0xc0982d
    ctx->pc = 0x2a231cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2320: 0x3c020031
    ctx->pc = 0x2a2320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a2324: 0x8c42f1a0
    ctx->pc = 0x2a2324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x2a2328: 0x1040000d
    ctx->pc = 0x2A2328u;
    {
        const bool branch_taken_0x2a2328 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A232Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2328) {
            ctx->pc = 0x2A2360u;
            goto label_2a2360;
        }
    }
    ctx->pc = 0x2A2330u;
    // 0x2a2330: 0x262400e0
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 224));
    // 0x2a2334: 0x262500a4
    ctx->pc = 0x2a2334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 164));
    // 0x2a2338: 0xc62c00ec
    ctx->pc = 0x2a2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a233c: 0xc08544a
    ctx->pc = 0x2A233Cu;
    SET_GPR_U32(ctx, 31, 0x2A2344u);
    ctx->pc = 0x2A2340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x215128u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFrustrumNormals_0x215128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2344u; }
    }
    if (ctx->pc != 0x2A2344u) { return; }
    ctx->pc = 0x2A2344u;
    // 0x2a2344: 0x220202d
    ctx->pc = 0x2a2344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2348: 0x240282d
    ctx->pc = 0x2a2348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a234c: 0x260302d
    ctx->pc = 0x2a234cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2350: 0xc0858e4
    ctx->pc = 0x2A2350u;
    SET_GPR_U32(ctx, 31, 0x2A2358u);
    ctx->pc = 0x2A2354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216390u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewCamLimitPlayerDpos_0x216390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2358u; }
    }
    if (ctx->pc != 0x2A2358u) { return; }
    ctx->pc = 0x2A2358u;
    // 0x2a2358: 0x10000081
    ctx->pc = 0x2A2358u;
    {
        const bool branch_taken_0x2a2358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A235Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2a2358) {
            ctx->pc = 0x2A2560u;
            goto label_2a2560;
        }
    }
    ctx->pc = 0x2A2360u;
label_2a2360:
    // 0x2a2360: 0xc62100f4
    ctx->pc = 0x2a2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2364: 0xc62000dc
    ctx->pc = 0x2a2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2368: 0x46010034
    ctx->pc = 0x2a2368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a236c: 0x0
    ctx->pc = 0x2a236cu;
    // NOP
    // 0x2a2370: 0x45030001
    ctx->pc = 0x2A2370u;
    {
        const bool branch_taken_0x2a2370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2370) {
            ctx->pc = 0x2A2374u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2A2378u;
            goto label_2a2378;
        }
    }
    ctx->pc = 0x2A2378u;
label_2a2378:
    // 0x2a2378: 0xc64c082c
    ctx->pc = 0x2a2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a237c: 0x3c013fc0
    ctx->pc = 0x2a237cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2a2380: 0x4481a000
    ctx->pc = 0x2a2380u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2a2384: 0x26440060
    ctx->pc = 0x2a2384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 96));
    // 0x2a2388: 0x46146302
    ctx->pc = 0x2a2388u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2a238c: 0xc0a88aa
    ctx->pc = 0x2A238Cu;
    SET_GPR_U32(ctx, 31, 0x2A2394u);
    ctx->pc = 0x2A2390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A22A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointInView_0x2a22a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2394u; }
    }
    if (ctx->pc != 0x2A2394u) { return; }
    ctx->pc = 0x2A2394u;
    // 0x2a2394: 0x46000546
    ctx->pc = 0x2a2394u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a2398: 0xc6400060
    ctx->pc = 0x2a2398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a239c: 0xc6610000
    ctx->pc = 0x2a239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a23a0: 0x46010000
    ctx->pc = 0x2a23a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a23a4: 0xe7a00000
    ctx->pc = 0x2a23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a23a8: 0xc6400064
    ctx->pc = 0x2a23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a23ac: 0xc6610004
    ctx->pc = 0x2a23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a23b0: 0x46010000
    ctx->pc = 0x2a23b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a23b4: 0xe7a00004
    ctx->pc = 0x2a23b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a23b8: 0xc6400068
    ctx->pc = 0x2a23b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a23bc: 0xc6610008
    ctx->pc = 0x2a23bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a23c0: 0x46010000
    ctx->pc = 0x2a23c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a23c4: 0xe7a00008
    ctx->pc = 0x2a23c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a23c8: 0xc64c082c
    ctx->pc = 0x2a23c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a23cc: 0x3a0202d
    ctx->pc = 0x2a23ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23d0: 0x46146302
    ctx->pc = 0x2a23d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2a23d4: 0xc0a88aa
    ctx->pc = 0x2A23D4u;
    SET_GPR_U32(ctx, 31, 0x2A23DCu);
    ctx->pc = 0x2A23D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A22A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointInView_0x2a22a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A23DCu; }
    }
    if (ctx->pc != 0x2A23DCu) { return; }
    ctx->pc = 0x2A23DCu;
    // 0x2a23dc: 0x46000046
    ctx->pc = 0x2a23dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a23e0: 0x44800000
    ctx->pc = 0x2a23e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a23e4: 0x46000834
    ctx->pc = 0x2a23e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a23e8: 0x0
    ctx->pc = 0x2a23e8u;
    // NOP
    // 0x2a23ec: 0x4500005c
    ctx->pc = 0x2A23ECu;
    {
        const bool branch_taken_0x2a23ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A23F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2a23ec) {
            ctx->pc = 0x2A2560u;
            goto label_2a2560;
        }
    }
    ctx->pc = 0x2A23F4u;
    // 0x2a23f4: 0x46150834
    ctx->pc = 0x2a23f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a23f8: 0x0
    ctx->pc = 0x2a23f8u;
    // NOP
    // 0x2a23fc: 0x45000058
    ctx->pc = 0x2A23FCu;
    {
        const bool branch_taken_0x2a23fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2400u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a23fc) {
            ctx->pc = 0x2A2560u;
            goto label_2a2560;
        }
    }
    ctx->pc = 0x2A2404u;
    // 0x2a2404: 0x12800009
    ctx->pc = 0x2A2404u;
    {
        const bool branch_taken_0x2a2404 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2408u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958576)));
        if (branch_taken_0x2a2404) {
            ctx->pc = 0x2A242Cu;
            goto label_2a242c;
        }
    }
    ctx->pc = 0x2A240Cu;
    // 0x2a240c: 0x32020030
    ctx->pc = 0x2a240cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 48));
    // 0x2a2410: 0x10400003
    ctx->pc = 0x2A2410u;
    {
        const bool branch_taken_0x2a2410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2414u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 768));
        if (branch_taken_0x2a2410) {
            ctx->pc = 0x2A2420u;
            goto label_2a2420;
        }
    }
    ctx->pc = 0x2A2418u;
    // 0x2a2418: 0x54400005
    ctx->pc = 0x2A2418u;
    {
        const bool branch_taken_0x2a2418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a2418) {
            ctx->pc = 0x2A241Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2A2430u;
            goto label_2a2430;
        }
    }
    ctx->pc = 0x2A2420u;
label_2a2420:
    // 0x2a2420: 0x32020001
    ctx->pc = 0x2a2420u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
    // 0x2a2424: 0x10400005
    ctx->pc = 0x2A2424u;
    {
        const bool branch_taken_0x2a2424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a2424) {
            ctx->pc = 0x2A243Cu;
            goto label_2a243c;
        }
    }
    ctx->pc = 0x2A242Cu;
label_2a242c:
    // 0x2a242c: 0xae600000
    ctx->pc = 0x2a242cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2a2430:
    // 0x2a2430: 0xae600004
    ctx->pc = 0x2a2430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2a2434: 0x10000049
    ctx->pc = 0x2A2434u;
    {
        const bool branch_taken_0x2a2434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2438u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2a2434) {
            ctx->pc = 0x2A255Cu;
            goto label_2a255c;
        }
    }
    ctx->pc = 0x2A243Cu;
label_2a243c:
    // 0x2a243c: 0x12000047
    ctx->pc = 0x2A243Cu;
    {
        const bool branch_taken_0x2a243c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2440u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 96));
        if (branch_taken_0x2a243c) {
            ctx->pc = 0x2A255Cu;
            goto label_2a255c;
        }
    }
    ctx->pc = 0x2A2444u;
    // 0x2a2444: 0x27a50020
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2448: 0xc0b587e
    ctx->pc = 0x2A2448u;
    SET_GPR_U32(ctx, 31, 0x2A2450u);
    ctx->pc = 0x2A244Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2450u; }
    }
    if (ctx->pc != 0x2A2450u) { return; }
    ctx->pc = 0x2A2450u;
    // 0x2a2450: 0x3c020036
    ctx->pc = 0x2a2450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2454: 0x2443ddf8
    ctx->pc = 0x2a2454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294958584));
    // 0x2a2458: 0xc440ddf8
    ctx->pc = 0x2a2458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a245c: 0xc7a10020
    ctx->pc = 0x2a245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2460: 0x46010001
    ctx->pc = 0x2a2460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2464: 0xe7a00010
    ctx->pc = 0x2a2464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a2468: 0xc4600004
    ctx->pc = 0x2a2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a246c: 0xc7a10024
    ctx->pc = 0x2a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2470: 0x46010001
    ctx->pc = 0x2a2470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2474: 0xe7a00014
    ctx->pc = 0x2a2474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a2478: 0xc4600008
    ctx->pc = 0x2a2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a247c: 0xc7a10028
    ctx->pc = 0x2a247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2480: 0x46010001
    ctx->pc = 0x2a2480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2484: 0x32020030
    ctx->pc = 0x2a2484u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 48));
    // 0x2a2488: 0x10400003
    ctx->pc = 0x2A2488u;
    {
        const bool branch_taken_0x2a2488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A248Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x2a2488) {
            ctx->pc = 0x2A2498u;
            goto label_2a2498;
        }
    }
    ctx->pc = 0x2A2490u;
    // 0x2a2490: 0x10000004
    ctx->pc = 0x2A2490u;
    {
        const bool branch_taken_0x2a2490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2494u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2a2490) {
            ctx->pc = 0x2A24A4u;
            goto label_2a24a4;
        }
    }
    ctx->pc = 0x2A2498u;
label_2a2498:
    // 0x2a2498: 0x32020300
    ctx->pc = 0x2a2498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 768));
    // 0x2a249c: 0x54400001
    ctx->pc = 0x2A249Cu;
    {
        const bool branch_taken_0x2a249c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a249c) {
            ctx->pc = 0x2A24A0u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x2A24A4u;
            goto label_2a24a4;
        }
    }
    ctx->pc = 0x2A24A4u;
label_2a24a4:
    // 0x2a24a4: 0xc7a00018
    ctx->pc = 0x2a24a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a24a8: 0x44800800
    ctx->pc = 0x2a24a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2a24ac: 0x46010034
    ctx->pc = 0x2a24acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a24b0: 0x0
    ctx->pc = 0x2a24b0u;
    // NOP
    // 0x2a24b4: 0x45000005
    ctx->pc = 0x2A24B4u;
    {
        const bool branch_taken_0x2a24b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A24B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 560));
        if (branch_taken_0x2a24b4) {
            ctx->pc = 0x2A24CCu;
            goto label_2a24cc;
        }
    }
    ctx->pc = 0x2A24BCu;
    // 0x2a24bc: 0x5440000a
    ctx->pc = 0x2A24BCu;
    {
        const bool branch_taken_0x2a24bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a24bc) {
            ctx->pc = 0x2A24C0u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->pc = 0x2A24E8u;
            goto label_2a24e8;
        }
    }
    ctx->pc = 0x2A24C4u;
    // 0x2a24c4: 0xc7a00018
    ctx->pc = 0x2a24c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a24c8: 0x44800800
    ctx->pc = 0x2a24c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_2a24cc:
    // 0x2a24cc: 0x46000834
    ctx->pc = 0x2a24ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a24d0: 0x0
    ctx->pc = 0x2a24d0u;
    // NOP
    // 0x2a24d4: 0x45000004
    ctx->pc = 0x2A24D4u;
    {
        const bool branch_taken_0x2a24d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A24D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 304));
        if (branch_taken_0x2a24d4) {
            ctx->pc = 0x2A24E8u;
            goto label_2a24e8;
        }
    }
    ctx->pc = 0x2A24DCu;
    // 0x2a24dc: 0x10400003
    ctx->pc = 0x2A24DCu;
    {
        const bool branch_taken_0x2a24dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A24E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a24dc) {
            ctx->pc = 0x2A24ECu;
            goto label_2a24ec;
        }
    }
    ctx->pc = 0x2A24E4u;
    // 0x2a24e4: 0xe7a10018
    ctx->pc = 0x2a24e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a24e8:
    // 0x2a24e8: 0x3c020036
    ctx->pc = 0x2a24e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a24ec:
    // 0x2a24ec: 0x2444ddf8
    ctx->pc = 0x2a24ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958584));
    // 0x2a24f0: 0xc7a00020
    ctx->pc = 0x2a24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a24f4: 0xc7a10010
    ctx->pc = 0x2a24f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a24f8: 0x46010000
    ctx->pc = 0x2a24f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a24fc: 0xe440ddf8
    ctx->pc = 0x2a24fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294958584), bits); }
    // 0x2a2500: 0xc7a00024
    ctx->pc = 0x2a2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2504: 0xc7a10014
    ctx->pc = 0x2a2504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2508: 0x46010000
    ctx->pc = 0x2a2508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a250c: 0xe4800004
    ctx->pc = 0x2a250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a2510: 0xc7a00028
    ctx->pc = 0x2a2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2514: 0xc7a10018
    ctx->pc = 0x2a2514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2518: 0x46010000
    ctx->pc = 0x2a2518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a251c: 0xe4800008
    ctx->pc = 0x2a251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a2520: 0x3a0282d
    ctx->pc = 0x2a2520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2524: 0xc0b5836
    ctx->pc = 0x2A2524u;
    SET_GPR_U32(ctx, 31, 0x2A252Cu);
    ctx->pc = 0x2A2528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A252Cu; }
    }
    if (ctx->pc != 0x2A252Cu) { return; }
    ctx->pc = 0x2A252Cu;
    // 0x2a252c: 0xc7a00000
    ctx->pc = 0x2a252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2530: 0xc6410060
    ctx->pc = 0x2a2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2534: 0x46010001
    ctx->pc = 0x2a2534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2538: 0xe6600000
    ctx->pc = 0x2a2538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2a253c: 0xc7a00004
    ctx->pc = 0x2a253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2540: 0xc6410064
    ctx->pc = 0x2a2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2544: 0x46010001
    ctx->pc = 0x2a2544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2548: 0xe6600004
    ctx->pc = 0x2a2548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2a254c: 0xc7a00008
    ctx->pc = 0x2a254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2550: 0xc6410068
    ctx->pc = 0x2a2550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2554: 0x46010001
    ctx->pc = 0x2a2554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a2558: 0xe6600008
    ctx->pc = 0x2a2558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2a255c:
    // 0x2a255c: 0xdfbf0080
    ctx->pc = 0x2a255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a2560:
    // 0x2a2560: 0xdfb40070
    ctx->pc = 0x2a2560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2564: 0xdfb30060
    ctx->pc = 0x2a2564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2568: 0xdfb20050
    ctx->pc = 0x2a2568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a256c: 0xdfb10040
    ctx->pc = 0x2a256cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2570: 0xdfb00030
    ctx->pc = 0x2a2570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2574: 0xc7b50098
    ctx->pc = 0x2a2574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a2578: 0xc7b40090
    ctx->pc = 0x2a2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a257c: 0x3e00008
    ctx->pc = 0x2A257Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2360u: goto label_2a2360;
            case 0x2A2378u: goto label_2a2378;
            case 0x2A2420u: goto label_2a2420;
            case 0x2A242Cu: goto label_2a242c;
            case 0x2A2430u: goto label_2a2430;
            case 0x2A243Cu: goto label_2a243c;
            case 0x2A2498u: goto label_2a2498;
            case 0x2A24A4u: goto label_2a24a4;
            case 0x2A24CCu: goto label_2a24cc;
            case 0x2A24E8u: goto label_2a24e8;
            case 0x2A24ECu: goto label_2a24ec;
            case 0x2A255Cu: goto label_2a255c;
            case 0x2A2560u: goto label_2a2560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2584u;
}
