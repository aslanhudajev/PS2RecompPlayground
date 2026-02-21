#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterMoveNodeCol
// Address: 0x29a770 - 0x29a96c
void CritterMoveNodeCol_0x29a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a770u;

    // 0x29a770: 0x27bdff30
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29a774: 0xffbf00a0
    ctx->pc = 0x29a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29a778: 0xffb60090
    ctx->pc = 0x29a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x29a77c: 0xffb50080
    ctx->pc = 0x29a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x29a780: 0xffb40070
    ctx->pc = 0x29a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x29a784: 0xffb30060
    ctx->pc = 0x29a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29a788: 0xffb20050
    ctx->pc = 0x29a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29a78c: 0xffb10040
    ctx->pc = 0x29a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x29a790: 0xffb00030
    ctx->pc = 0x29a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29a794: 0xe7b600c0
    ctx->pc = 0x29a794u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29a798: 0xe7b500b8
    ctx->pc = 0x29a798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29a79c: 0xe7b400b0
    ctx->pc = 0x29a79cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29a7a0: 0x80a02d
    ctx->pc = 0x29a7a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7a4: 0xa0982d
    ctx->pc = 0x29a7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7a8: 0xc0902d
    ctx->pc = 0x29a7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7ac: 0xe0882d
    ctx->pc = 0x29a7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7b0: 0x46006586
    ctx->pc = 0x29a7b0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x29a7b4: 0x46006d46
    ctx->pc = 0x29a7b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29a7b8: 0x100b02d
    ctx->pc = 0x29a7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7bc: 0x3c01bf80
    ctx->pc = 0x29a7bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29a7c0: 0x4481a000
    ctx->pc = 0x29a7c0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29a7c4: 0x2415ffff
    ctx->pc = 0x29a7c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a7c8: 0x8e820004
    ctx->pc = 0x29a7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a7cc: 0x84420118
    ctx->pc = 0x29a7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a7d0: 0x1840004c
    ctx->pc = 0x29A7D0u;
    {
        const bool branch_taken_0x29a7d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A7D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a7d0) {
            ctx->pc = 0x29A904u;
            goto label_29a904;
        }
    }
    ctx->pc = 0x29A7D8u;
    // 0x29a7d8: 0x24020060
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29a7dc: 0x0
    ctx->pc = 0x29a7dcu;
    // NOP
label_29a7e0:
    // 0x29a7e0: 0x2021018
    ctx->pc = 0x29a7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29a7e4: 0x24420540
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x29a7e8: 0x2821821
    ctx->pc = 0x29a7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29a7ec: 0x8c620004
    ctx->pc = 0x29a7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29a7f0: 0x5040003f
    ctx->pc = 0x29A7F0u;
    {
        const bool branch_taken_0x29a7f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a7f0) {
            ctx->pc = 0x29A7F4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A8F0u;
            goto label_29a8f0;
        }
    }
    ctx->pc = 0x29A7F8u;
    // 0x29a7f8: 0xc461005c
    ctx->pc = 0x29a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a7fc: 0xc4600058
    ctx->pc = 0x29a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a800: 0x46010036
    ctx->pc = 0x29a800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a804: 0x0
    ctx->pc = 0x29a804u;
    // NOP
    // 0x29a808: 0x45030039
    ctx->pc = 0x29A808u;
    {
        const bool branch_taken_0x29a808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a808) {
            ctx->pc = 0x29A80Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A8F0u;
            goto label_29a8f0;
        }
    }
    ctx->pc = 0x29A810u;
    // 0x29a810: 0x8c640000
    ctx->pc = 0x29a810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a814: 0x94820010
    ctx->pc = 0x29a814u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29a818: 0x30420008
    ctx->pc = 0x29a818u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x29a81c: 0x10400033
    ctx->pc = 0x29A81Cu;
    {
        const bool branch_taken_0x29a81c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A820u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x29a81c) {
            ctx->pc = 0x29A8ECu;
            goto label_29a8ec;
        }
    }
    ctx->pc = 0x29A824u;
    // 0x29a824: 0xc48d002c
    ctx->pc = 0x29a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29a828: 0xc4600040
    ctx->pc = 0x29a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a82c: 0xc6610000
    ctx->pc = 0x29a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a830: 0x46010000
    ctx->pc = 0x29a830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a834: 0xe7a00000
    ctx->pc = 0x29a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29a838: 0xc4a00004
    ctx->pc = 0x29a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a83c: 0xc6610004
    ctx->pc = 0x29a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a840: 0x46010000
    ctx->pc = 0x29a840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a844: 0xe7a00004
    ctx->pc = 0x29a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29a848: 0xc4a00008
    ctx->pc = 0x29a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a84c: 0xc6610008
    ctx->pc = 0x29a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a850: 0x46010000
    ctx->pc = 0x29a850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a854: 0xe7a00008
    ctx->pc = 0x29a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29a858: 0x240202d
    ctx->pc = 0x29a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a85c: 0x3a0302d
    ctx->pc = 0x29a85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a860: 0x27a70020
    ctx->pc = 0x29a860u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a864: 0x460db300
    ctx->pc = 0x29a864u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[13]);
    // 0x29a868: 0x460dab40
    ctx->pc = 0x29a868u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x29a86c: 0xc0a4202
    ctx->pc = 0x29A86Cu;
    SET_GPR_U32(ctx, 31, 0x29A874u);
    ctx->pc = 0x29A870u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A874u; }
    }
    if (ctx->pc != 0x29A874u) { return; }
    ctx->pc = 0x29A874u;
    // 0x29a874: 0x5040001e
    ctx->pc = 0x29A874u;
    {
        const bool branch_taken_0x29a874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a874) {
            ctx->pc = 0x29A878u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A8F0u;
            goto label_29a8f0;
        }
    }
    ctx->pc = 0x29A87Cu;
    // 0x29a87c: 0x16c00025
    ctx->pc = 0x29A87Cu;
    {
        const bool branch_taken_0x29a87c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A880u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29a87c) {
            ctx->pc = 0x29A914u;
            goto label_29a914;
        }
    }
    ctx->pc = 0x29A884u;
    // 0x29a884: 0xc64c0000
    ctx->pc = 0x29a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a888: 0x46006301
    ctx->pc = 0x29a888u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x29a88c: 0xe7ac0010
    ctx->pc = 0x29a88cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29a890: 0xc6400004
    ctx->pc = 0x29a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a894: 0xc7a10004
    ctx->pc = 0x29a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a898: 0x46010001
    ctx->pc = 0x29a898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a89c: 0xe7a00014
    ctx->pc = 0x29a89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29a8a0: 0xc64d0008
    ctx->pc = 0x29a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29a8a4: 0xc7a00008
    ctx->pc = 0x29a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8a8: 0x46006b41
    ctx->pc = 0x29a8a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x29a8ac: 0xc0b5c34
    ctx->pc = 0x29A8ACu;
    SET_GPR_U32(ctx, 31, 0x29A8B4u);
    ctx->pc = 0x29A8B0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A8B4u; }
    }
    if (ctx->pc != 0x29A8B4u) { return; }
    ctx->pc = 0x29A8B4u;
    // 0x29a8b4: 0x6a20006
    ctx->pc = 0x29A8B4u;
    {
        const bool branch_taken_0x29a8b4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x29a8b4) {
            ctx->pc = 0x29A8B8u;
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29A8D0u;
            goto label_29a8d0;
        }
    }
    ctx->pc = 0x29A8BCu;
    // 0x29a8bc: 0x46140034
    ctx->pc = 0x29a8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a8c0: 0x0
    ctx->pc = 0x29a8c0u;
    // NOP
    // 0x29a8c4: 0x4502000a
    ctx->pc = 0x29A8C4u;
    {
        const bool branch_taken_0x29a8c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a8c4) {
            ctx->pc = 0x29A8C8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29A8F0u;
            goto label_29a8f0;
        }
    }
    ctx->pc = 0x29A8CCu;
    // 0x29a8cc: 0x200a82d
    ctx->pc = 0x29a8ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a8d0:
    // 0x29a8d0: 0x46000506
    ctx->pc = 0x29a8d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29a8d4: 0xc7a00020
    ctx->pc = 0x29a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8d8: 0xe6200000
    ctx->pc = 0x29a8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29a8dc: 0xc7a00024
    ctx->pc = 0x29a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8e0: 0xe6200004
    ctx->pc = 0x29a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29a8e4: 0xc7a00028
    ctx->pc = 0x29a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a8e8: 0xe6200008
    ctx->pc = 0x29a8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_29a8ec:
    // 0x29a8ec: 0x26100001
    ctx->pc = 0x29a8ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29a8f0:
    // 0x29a8f0: 0x8e820004
    ctx->pc = 0x29a8f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29a8f4: 0x84420118
    ctx->pc = 0x29a8f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29a8f8: 0x202102a
    ctx->pc = 0x29a8f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x29a8fc: 0x1440ffb8
    ctx->pc = 0x29A8FCu;
    {
        const bool branch_taken_0x29a8fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x29a8fc) {
            ctx->pc = 0x29A7E0u;
            goto label_29a7e0;
        }
    }
    ctx->pc = 0x29A904u;
label_29a904:
    // 0x29a904: 0x6a0000b
    ctx->pc = 0x29A904u;
    {
        const bool branch_taken_0x29a904 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x29A908u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x29a904) {
            ctx->pc = 0x29A934u;
            goto label_29a934;
        }
    }
    ctx->pc = 0x29A90Cu;
    // 0x29a90c: 0x1000000b
    ctx->pc = 0x29A90Cu;
    {
        const bool branch_taken_0x29a90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A910u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x29a90c) {
            ctx->pc = 0x29A93Cu;
            goto label_29a93c;
        }
    }
    ctx->pc = 0x29A914u;
label_29a914:
    // 0x29a914: 0xc7a00020
    ctx->pc = 0x29a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a918: 0xe6200000
    ctx->pc = 0x29a918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29a91c: 0xc7a00024
    ctx->pc = 0x29a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a920: 0xe6200004
    ctx->pc = 0x29a920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29a924: 0xc7a00028
    ctx->pc = 0x29a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a928: 0xe6200008
    ctx->pc = 0x29a928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29a92c: 0x10000002
    ctx->pc = 0x29A92Cu;
    {
        const bool branch_taken_0x29a92c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A930u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x29a92c) {
            ctx->pc = 0x29A938u;
            goto label_29a938;
        }
    }
    ctx->pc = 0x29A934u;
label_29a934:
    // 0x29a934: 0x102d
    ctx->pc = 0x29a934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a938:
    // 0x29a938: 0xdfbf00a0
    ctx->pc = 0x29a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29a93c:
    // 0x29a93c: 0xdfb60090
    ctx->pc = 0x29a93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29a940: 0xdfb50080
    ctx->pc = 0x29a940u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a944: 0xdfb40070
    ctx->pc = 0x29a944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a948: 0xdfb30060
    ctx->pc = 0x29a948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a94c: 0xdfb20050
    ctx->pc = 0x29a94cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a950: 0xdfb10040
    ctx->pc = 0x29a950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a954: 0xdfb00030
    ctx->pc = 0x29a954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a958: 0xc7b600c0
    ctx->pc = 0x29a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29a95c: 0xc7b500b8
    ctx->pc = 0x29a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a960: 0xc7b400b0
    ctx->pc = 0x29a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a964: 0x3e00008
    ctx->pc = 0x29A964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A7E0u: goto label_29a7e0;
            case 0x29A8D0u: goto label_29a8d0;
            case 0x29A8ECu: goto label_29a8ec;
            case 0x29A8F0u: goto label_29a8f0;
            case 0x29A904u: goto label_29a904;
            case 0x29A914u: goto label_29a914;
            case 0x29A934u: goto label_29a934;
            case 0x29A938u: goto label_29a938;
            case 0x29A93Cu: goto label_29a93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A96Cu;
}
