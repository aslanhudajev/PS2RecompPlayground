#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LineCylinderCollide
// Address: 0x290808 - 0x2909e0
void LineCylinderCollide_0x290808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x290808u;

    // 0x290808: 0x27bdff60
    ctx->pc = 0x290808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29080c: 0xffbf0080
    ctx->pc = 0x29080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x290810: 0xffb40070
    ctx->pc = 0x290810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x290814: 0xffb30060
    ctx->pc = 0x290814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x290818: 0xffb20050
    ctx->pc = 0x290818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29081c: 0xffb10040
    ctx->pc = 0x29081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x290820: 0xffb00030
    ctx->pc = 0x290820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x290824: 0xe7b50098
    ctx->pc = 0x290824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x290828: 0xe7b40090
    ctx->pc = 0x290828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29082c: 0x80802d
    ctx->pc = 0x29082cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290830: 0xa0902d
    ctx->pc = 0x290830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290834: 0xc0982d
    ctx->pc = 0x290834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290838: 0xe0882d
    ctx->pc = 0x290838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29083c: 0x46006506
    ctx->pc = 0x29083cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x290840: 0x46006d46
    ctx->pc = 0x290840u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x290844: 0x100a02d
    ctx->pc = 0x290844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290848: 0xc0874d8
    ctx->pc = 0x290848u;
    SET_GPR_U32(ctx, 31, 0x290850u);
    ctx->pc = 0x29084Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21D360u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineColl_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290850u; }
    }
    if (ctx->pc != 0x290850u) { return; }
    ctx->pc = 0x290850u;
    // 0x290850: 0x4615a040
    ctx->pc = 0x290850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290854: 0x46000834
    ctx->pc = 0x290854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290858: 0x0
    ctx->pc = 0x290858u;
    // NOP
    // 0x29085c: 0x45010056
    ctx->pc = 0x29085Cu;
    {
        const bool branch_taken_0x29085c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290860u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29085c) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290864u;
    // 0x290864: 0xc7ac0000
    ctx->pc = 0x290864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290868: 0xc6000000
    ctx->pc = 0x290868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29086c: 0x46006301
    ctx->pc = 0x29086cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x290870: 0xe7ac0010
    ctx->pc = 0x290870u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x290874: 0xc7a00004
    ctx->pc = 0x290874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290878: 0xc6010004
    ctx->pc = 0x290878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29087c: 0x46010001
    ctx->pc = 0x29087cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290880: 0xe7a00014
    ctx->pc = 0x290880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x290884: 0xc7ad0008
    ctx->pc = 0x290884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290888: 0xc6000008
    ctx->pc = 0x290888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29088c: 0x46006b41
    ctx->pc = 0x29088cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x290890: 0xc0b5c34
    ctx->pc = 0x290890u;
    SET_GPR_U32(ctx, 31, 0x290898u);
    ctx->pc = 0x290894u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290898u; }
    }
    if (ctx->pc != 0x290898u) { return; }
    ctx->pc = 0x290898u;
    // 0x290898: 0xc7a10014
    ctx->pc = 0x290898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29089c: 0x4600a034
    ctx->pc = 0x29089cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2908a0: 0x0
    ctx->pc = 0x2908a0u;
    // NOP
    // 0x2908a4: 0x4501003a
    ctx->pc = 0x2908A4u;
    {
        const bool branch_taken_0x2908a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2908A8u;
        ctx->f[1] = FPU_ABS_S(ctx->f[1]);
        if (branch_taken_0x2908a4) {
            ctx->pc = 0x290990u;
            goto label_290990;
        }
    }
    ctx->pc = 0x2908ACu;
    // 0x2908ac: 0x4601a834
    ctx->pc = 0x2908acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2908b0: 0x0
    ctx->pc = 0x2908b0u;
    // NOP
    // 0x2908b4: 0x45010040
    ctx->pc = 0x2908B4u;
    {
        const bool branch_taken_0x2908b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2908B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2908b4) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x2908BCu;
    // 0x2908bc: 0x12800036
    ctx->pc = 0x2908BCu;
    {
        const bool branch_taken_0x2908bc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2908bc) {
            ctx->pc = 0x290998u;
            goto label_290998;
        }
    }
    ctx->pc = 0x2908C4u;
    // 0x2908c4: 0xc6000000
    ctx->pc = 0x2908c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2908c8: 0xc6410000
    ctx->pc = 0x2908c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2908cc: 0x46010001
    ctx->pc = 0x2908ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2908d0: 0xe7a00010
    ctx->pc = 0x2908d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2908d4: 0xafa00014
    ctx->pc = 0x2908d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2908d8: 0xc6000008
    ctx->pc = 0x2908d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2908dc: 0xc6410008
    ctx->pc = 0x2908dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2908e0: 0x46010001
    ctx->pc = 0x2908e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2908e4: 0xe7a00018
    ctx->pc = 0x2908e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2908e8: 0xc0b58fc
    ctx->pc = 0x2908E8u;
    SET_GPR_U32(ctx, 31, 0x2908F0u);
    ctx->pc = 0x2908ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2908F0u; }
    }
    if (ctx->pc != 0x2908F0u) { return; }
    ctx->pc = 0x2908F0u;
    // 0x2908f0: 0x46000546
    ctx->pc = 0x2908f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2908f4: 0x4614a836
    ctx->pc = 0x2908f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2908f8: 0x45000027
    ctx->pc = 0x2908F8u;
    {
        const bool branch_taken_0x2908f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2908f8) {
            ctx->pc = 0x290998u;
            goto label_290998;
        }
    }
    ctx->pc = 0x290900u;
    // 0x290900: 0xc6600000
    ctx->pc = 0x290900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290904: 0xc6410000
    ctx->pc = 0x290904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290908: 0x46010001
    ctx->pc = 0x290908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29090c: 0xe7a00020
    ctx->pc = 0x29090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x290910: 0xafa00024
    ctx->pc = 0x290910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x290914: 0xc6600008
    ctx->pc = 0x290914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290918: 0xc6410008
    ctx->pc = 0x290918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29091c: 0x46010001
    ctx->pc = 0x29091cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290920: 0xe7a00028
    ctx->pc = 0x290920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x290924: 0xc0b58fc
    ctx->pc = 0x290924u;
    SET_GPR_U32(ctx, 31, 0x29092Cu);
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29092Cu; }
    }
    if (ctx->pc != 0x29092Cu) { return; }
    ctx->pc = 0x29092Cu;
    // 0x29092c: 0x3c013a83
    ctx->pc = 0x29092cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x290930: 0x3421126f
    ctx->pc = 0x290930u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x290934: 0x44810800
    ctx->pc = 0x290934u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x290938: 0x4601a834
    ctx->pc = 0x290938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29093c: 0x0
    ctx->pc = 0x29093cu;
    // NOP
    // 0x290940: 0x45000007
    ctx->pc = 0x290940u;
    {
        const bool branch_taken_0x290940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290944u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x290940) {
            ctx->pc = 0x290960u;
            goto label_290960;
        }
    }
    ctx->pc = 0x290948u;
    // 0x290948: 0x46010034
    ctx->pc = 0x290948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29094c: 0x0
    ctx->pc = 0x29094cu;
    // NOP
    // 0x290950: 0x45000019
    ctx->pc = 0x290950u;
    {
        const bool branch_taken_0x290950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290954u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290950) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290958u;
    // 0x290958: 0x1000000f
    ctx->pc = 0x290958u;
    {
        const bool branch_taken_0x290958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x290958) {
            ctx->pc = 0x290998u;
            goto label_290998;
        }
    }
    ctx->pc = 0x290960u;
label_290960:
    // 0x290960: 0xc7a00010
    ctx->pc = 0x290960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290964: 0x46001082
    ctx->pc = 0x290964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x290968: 0xc7a00028
    ctx->pc = 0x290968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29096c: 0xc7a10018
    ctx->pc = 0x29096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290970: 0x46010002
    ctx->pc = 0x290970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290974: 0x46001080
    ctx->pc = 0x290974u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x290978: 0x3c01bc23
    ctx->pc = 0x290978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48163 << 16));
    // 0x29097c: 0x3421d70a
    ctx->pc = 0x29097cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x290980: 0x44810000
    ctx->pc = 0x290980u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x290984: 0x46001034
    ctx->pc = 0x290984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290988: 0x45000003
    ctx->pc = 0x290988u;
    {
        const bool branch_taken_0x290988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290988) {
            ctx->pc = 0x290998u;
            goto label_290998;
        }
    }
    ctx->pc = 0x290990u;
label_290990:
    // 0x290990: 0x10000009
    ctx->pc = 0x290990u;
    {
        const bool branch_taken_0x290990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x290994u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x290990) {
            ctx->pc = 0x2909B8u;
            goto label_2909b8;
        }
    }
    ctx->pc = 0x290998u;
label_290998:
    // 0x290998: 0x12200006
    ctx->pc = 0x290998u;
    {
        const bool branch_taken_0x290998 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29099Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x290998) {
            ctx->pc = 0x2909B4u;
            goto label_2909b4;
        }
    }
    ctx->pc = 0x2909A0u;
    // 0x2909a0: 0xe6200000
    ctx->pc = 0x2909a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2909a4: 0xc7a00004
    ctx->pc = 0x2909a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2909a8: 0xe6200004
    ctx->pc = 0x2909a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2909ac: 0xc7a00008
    ctx->pc = 0x2909acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2909b0: 0xe6200008
    ctx->pc = 0x2909b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2909b4:
    // 0x2909b4: 0x24020001
    ctx->pc = 0x2909b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2909b8:
    // 0x2909b8: 0xdfbf0080
    ctx->pc = 0x2909b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2909bc: 0xdfb40070
    ctx->pc = 0x2909bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2909c0: 0xdfb30060
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2909c4: 0xdfb20050
    ctx->pc = 0x2909c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2909c8: 0xdfb10040
    ctx->pc = 0x2909c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2909cc: 0xdfb00030
    ctx->pc = 0x2909ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2909d0: 0xc7b50098
    ctx->pc = 0x2909d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2909d4: 0xc7b40090
    ctx->pc = 0x2909d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2909d8: 0x3e00008
    ctx->pc = 0x2909D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290960u: goto label_290960;
            case 0x290990u: goto label_290990;
            case 0x290998u: goto label_290998;
            case 0x2909B4u: goto label_2909b4;
            case 0x2909B8u: goto label_2909b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2909E0u;
}
