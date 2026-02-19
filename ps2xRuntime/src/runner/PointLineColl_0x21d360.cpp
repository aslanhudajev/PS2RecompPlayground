#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointLineColl
// Address: 0x21d360 - 0x21d570
void PointLineColl_0x21d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21d360u;

    // 0x21d360: 0x27bdff80
    ctx->pc = 0x21d360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21d364: 0xffbf0070
    ctx->pc = 0x21d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21d368: 0xffb30060
    ctx->pc = 0x21d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x21d36c: 0xffb20050
    ctx->pc = 0x21d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x21d370: 0xffb10040
    ctx->pc = 0x21d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x21d374: 0xffb00030
    ctx->pc = 0x21d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21d378: 0x80982d
    ctx->pc = 0x21d378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d37c: 0xa0882d
    ctx->pc = 0x21d37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d380: 0xc0902d
    ctx->pc = 0x21d380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d384: 0xe0802d
    ctx->pc = 0x21d384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d388: 0xc6400000
    ctx->pc = 0x21d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d38c: 0xc6210000
    ctx->pc = 0x21d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d390: 0x46010001
    ctx->pc = 0x21d390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d394: 0xe7a00000
    ctx->pc = 0x21d394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21d398: 0xc6400004
    ctx->pc = 0x21d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d39c: 0xc6210004
    ctx->pc = 0x21d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d3a0: 0x46010001
    ctx->pc = 0x21d3a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d3a4: 0xe7a00004
    ctx->pc = 0x21d3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21d3a8: 0xc6400008
    ctx->pc = 0x21d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d3ac: 0xc6210008
    ctx->pc = 0x21d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d3b0: 0x46010001
    ctx->pc = 0x21d3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d3b4: 0xe7a00008
    ctx->pc = 0x21d3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21d3b8: 0xc0b58a4
    ctx->pc = 0x21D3B8u;
    SET_GPR_U32(ctx, 31, 0x21D3C0u);
    ctx->pc = 0x21D3BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D3C0u; }
    }
    if (ctx->pc != 0x21D3C0u) { return; }
    ctx->pc = 0x21D3C0u;
    // 0x21d3c0: 0x46000106
    ctx->pc = 0x21d3c0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x21d3c4: 0xc6610000
    ctx->pc = 0x21d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d3c8: 0xc6200000
    ctx->pc = 0x21d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d3cc: 0x46000b01
    ctx->pc = 0x21d3ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21d3d0: 0xe7ac0010
    ctx->pc = 0x21d3d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21d3d4: 0xc6610004
    ctx->pc = 0x21d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d3d8: 0xc6200004
    ctx->pc = 0x21d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d3dc: 0x46000841
    ctx->pc = 0x21d3dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21d3e0: 0xe7a10014
    ctx->pc = 0x21d3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21d3e4: 0xc6620008
    ctx->pc = 0x21d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21d3e8: 0xc6200008
    ctx->pc = 0x21d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d3ec: 0x46001341
    ctx->pc = 0x21d3ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21d3f0: 0xe7ad0018
    ctx->pc = 0x21d3f0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21d3f4: 0xc7a00000
    ctx->pc = 0x21d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d3f8: 0x460060c2
    ctx->pc = 0x21d3f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21d3fc: 0xc7a00004
    ctx->pc = 0x21d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d400: 0x46000842
    ctx->pc = 0x21d400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d404: 0x460118c0
    ctx->pc = 0x21d404u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x21d408: 0xc7a00008
    ctx->pc = 0x21d408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d40c: 0x46006802
    ctx->pc = 0x21d40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x21d410: 0x460018c0
    ctx->pc = 0x21d410u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21d414: 0x44800000
    ctx->pc = 0x21d414u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21d418: 0x46001836
    ctx->pc = 0x21d418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d41c: 0x4500000f
    ctx->pc = 0x21D41Cu;
    {
        const bool branch_taken_0x21d41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d41c) {
            ctx->pc = 0x21D45Cu;
            goto label_21d45c;
        }
    }
    ctx->pc = 0x21D424u;
    // 0x21d424: 0xc0b5c34
    ctx->pc = 0x21D424u;
    SET_GPR_U32(ctx, 31, 0x21D42Cu);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D42Cu; }
    }
    if (ctx->pc != 0x21D42Cu) { return; }
    ctx->pc = 0x21D42Cu;
    // 0x21d42c: 0x46000306
    ctx->pc = 0x21d42cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21d430: 0xc0b5c34
    ctx->pc = 0x21D430u;
    SET_GPR_U32(ctx, 31, 0x21D438u);
    ctx->pc = 0x21D434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D438u; }
    }
    if (ctx->pc != 0x21D438u) { return; }
    ctx->pc = 0x21D438u;
    // 0x21d438: 0x12000045
    ctx->pc = 0x21D438u;
    {
        const bool branch_taken_0x21d438 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D43Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21d438) {
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D440u;
    // 0x21d440: 0xc6200000
    ctx->pc = 0x21d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d444: 0xe6000000
    ctx->pc = 0x21d444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21d448: 0xc6200004
    ctx->pc = 0x21d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d44c: 0xe6000004
    ctx->pc = 0x21d44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21d450: 0xc6200008
    ctx->pc = 0x21d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d454: 0x1000003e
    ctx->pc = 0x21D454u;
    {
        const bool branch_taken_0x21d454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D458u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21d454) {
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D45Cu;
label_21d45c:
    // 0x21d45c: 0x46032036
    ctx->pc = 0x21d45cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d460: 0x0
    ctx->pc = 0x21d460u;
    // NOP
    // 0x21d464: 0x4500001a
    ctx->pc = 0x21D464u;
    {
        const bool branch_taken_0x21d464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21d464) {
            ctx->pc = 0x21D4D0u;
            goto label_21d4d0;
        }
    }
    ctx->pc = 0x21D46Cu;
    // 0x21d46c: 0xc66c0000
    ctx->pc = 0x21d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d470: 0xc6400000
    ctx->pc = 0x21d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d474: 0x46006301
    ctx->pc = 0x21d474u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x21d478: 0xe7ac0010
    ctx->pc = 0x21d478u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21d47c: 0xc6600004
    ctx->pc = 0x21d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d480: 0xc6410004
    ctx->pc = 0x21d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d484: 0x46010001
    ctx->pc = 0x21d484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d488: 0xe7a00014
    ctx->pc = 0x21d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21d48c: 0xc66d0008
    ctx->pc = 0x21d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21d490: 0xc6400008
    ctx->pc = 0x21d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d494: 0x46006b41
    ctx->pc = 0x21d494u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x21d498: 0xc0b5c34
    ctx->pc = 0x21D498u;
    SET_GPR_U32(ctx, 31, 0x21D4A0u);
    ctx->pc = 0x21D49Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4A0u; }
    }
    if (ctx->pc != 0x21D4A0u) { return; }
    ctx->pc = 0x21D4A0u;
    // 0x21d4a0: 0x46000306
    ctx->pc = 0x21d4a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21d4a4: 0xc0b5c34
    ctx->pc = 0x21D4A4u;
    SET_GPR_U32(ctx, 31, 0x21D4ACu);
    ctx->pc = 0x21D4A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4ACu; }
    }
    if (ctx->pc != 0x21D4ACu) { return; }
    ctx->pc = 0x21D4ACu;
    // 0x21d4ac: 0x12000028
    ctx->pc = 0x21D4ACu;
    {
        const bool branch_taken_0x21d4ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D4B0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21d4ac) {
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D4B4u;
    // 0x21d4b4: 0xc6400000
    ctx->pc = 0x21d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d4b8: 0xe6000000
    ctx->pc = 0x21d4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21d4bc: 0xc6400004
    ctx->pc = 0x21d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d4c0: 0xe6000004
    ctx->pc = 0x21d4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21d4c4: 0xc6400008
    ctx->pc = 0x21d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d4c8: 0x10000021
    ctx->pc = 0x21D4C8u;
    {
        const bool branch_taken_0x21d4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D4CCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21d4c8) {
            ctx->pc = 0x21D550u;
            goto label_21d550;
        }
    }
    ctx->pc = 0x21D4D0u;
label_21d4d0:
    // 0x21d4d0: 0x50800a
    ctx->pc = 0x21d4d0u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x21d4d4: 0xc7a20000
    ctx->pc = 0x21d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21d4d8: 0x46021882
    ctx->pc = 0x21d4d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x21d4dc: 0xc6200000
    ctx->pc = 0x21d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d4e0: 0x46001080
    ctx->pc = 0x21d4e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21d4e4: 0xe6020000
    ctx->pc = 0x21d4e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21d4e8: 0xc7a00004
    ctx->pc = 0x21d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d4ec: 0x46001802
    ctx->pc = 0x21d4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21d4f0: 0xc6210004
    ctx->pc = 0x21d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d4f4: 0x46010000
    ctx->pc = 0x21d4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d4f8: 0xe6000004
    ctx->pc = 0x21d4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21d4fc: 0xc7a00008
    ctx->pc = 0x21d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d500: 0x46001802
    ctx->pc = 0x21d500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21d504: 0xc6210008
    ctx->pc = 0x21d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d508: 0x46010000
    ctx->pc = 0x21d508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d50c: 0xe6000008
    ctx->pc = 0x21d50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x21d510: 0xc66c0000
    ctx->pc = 0x21d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d514: 0x46026301
    ctx->pc = 0x21d514u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x21d518: 0xe7ac0010
    ctx->pc = 0x21d518u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21d51c: 0xc6600004
    ctx->pc = 0x21d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d520: 0xc6010004
    ctx->pc = 0x21d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d524: 0x46010001
    ctx->pc = 0x21d524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d528: 0xe7a00014
    ctx->pc = 0x21d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21d52c: 0xc66d0008
    ctx->pc = 0x21d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21d530: 0xc6000008
    ctx->pc = 0x21d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d534: 0x46006b41
    ctx->pc = 0x21d534u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x21d538: 0xc0b5c34
    ctx->pc = 0x21D538u;
    SET_GPR_U32(ctx, 31, 0x21D540u);
    ctx->pc = 0x21D53Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D540u; }
    }
    if (ctx->pc != 0x21D540u) { return; }
    ctx->pc = 0x21D540u;
    // 0x21d540: 0x46000306
    ctx->pc = 0x21d540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21d544: 0xc0b5c34
    ctx->pc = 0x21D544u;
    SET_GPR_U32(ctx, 31, 0x21D54Cu);
    ctx->pc = 0x21D548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D54Cu; }
    }
    if (ctx->pc != 0x21D54Cu) { return; }
    ctx->pc = 0x21D54Cu;
    // 0x21d54c: 0x46000046
    ctx->pc = 0x21d54cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_21d550:
    // 0x21d550: 0x46000806
    ctx->pc = 0x21d550u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x21d554: 0xdfbf0070
    ctx->pc = 0x21d554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d558: 0xdfb30060
    ctx->pc = 0x21d558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d55c: 0xdfb20050
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d560: 0xdfb10040
    ctx->pc = 0x21d560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d564: 0xdfb00030
    ctx->pc = 0x21d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d568: 0x3e00008
    ctx->pc = 0x21D568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D56Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D45Cu: goto label_21d45c;
            case 0x21D4D0u: goto label_21d4d0;
            case 0x21D550u: goto label_21d550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D570u;
}
