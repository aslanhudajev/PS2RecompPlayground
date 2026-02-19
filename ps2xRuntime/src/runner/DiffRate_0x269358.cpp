#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DiffRate
// Address: 0x269358 - 0x269614
void DiffRate_0x269358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269358u;

    // 0x269358: 0x27bdff60
    ctx->pc = 0x269358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26935c: 0xffbf0070
    ctx->pc = 0x26935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x269360: 0xffb40060
    ctx->pc = 0x269360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x269364: 0xffb30050
    ctx->pc = 0x269364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x269368: 0xffb20040
    ctx->pc = 0x269368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26936c: 0xffb10030
    ctx->pc = 0x26936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x269370: 0xffb00020
    ctx->pc = 0x269370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x269374: 0xe7b70098
    ctx->pc = 0x269374u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x269378: 0xe7b60090
    ctx->pc = 0x269378u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26937c: 0xe7b50088
    ctx->pc = 0x26937cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x269380: 0xe7b40080
    ctx->pc = 0x269380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x269384: 0x80902d
    ctx->pc = 0x269384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269388: 0xa0802d
    ctx->pc = 0x269388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26938c: 0x3c01447a
    ctx->pc = 0x26938cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x269390: 0x4481a000
    ctx->pc = 0x269390u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x269394: 0x3c01c47a
    ctx->pc = 0x269394u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50298 << 16));
    // 0x269398: 0x4481b000
    ctx->pc = 0x269398u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x26939c: 0x4600b546
    ctx->pc = 0x26939cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x2693a0: 0xc0aa372
    ctx->pc = 0x2693A0u;
    SET_GPR_U32(ctx, 31, 0x2693A8u);
    ctx->pc = 0x2693A4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2A8DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenHeight_0x2a8dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693A8u; }
    }
    if (ctx->pc != 0x2693A8u) { return; }
    ctx->pc = 0x2693A8u;
    // 0x2693a8: 0xc0aa36c
    ctx->pc = 0x2693A8u;
    SET_GPR_U32(ctx, 31, 0x2693B0u);
    ctx->pc = 0x2693ACu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenWidth_0x2a8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693B0u; }
    }
    if (ctx->pc != 0x2693B0u) { return; }
    ctx->pc = 0x2693B0u;
    // 0x2693b0: 0x40982d
    ctx->pc = 0x2693b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693b4: 0x3c030034
    ctx->pc = 0x2693b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2693b8: 0x2463eb60
    ctx->pc = 0x2693b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x2693bc: 0x240201a0
    ctx->pc = 0x2693bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2693c0: 0x2421018
    ctx->pc = 0x2693c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2693c4: 0x431021
    ctx->pc = 0x2693c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2693c8: 0xc4400040
    ctx->pc = 0x2693c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693cc: 0xe7a00000
    ctx->pc = 0x2693ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2693d0: 0xc4400044
    ctx->pc = 0x2693d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693d4: 0xe7a00004
    ctx->pc = 0x2693d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2693d8: 0xc4400048
    ctx->pc = 0x2693d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693dc: 0xe7a00008
    ctx->pc = 0x2693dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2693e0: 0xc6000000
    ctx->pc = 0x2693e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693e4: 0xe4400040
    ctx->pc = 0x2693e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2693e8: 0xc6000004
    ctx->pc = 0x2693e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693ec: 0xe4400044
    ctx->pc = 0x2693ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2693f0: 0xc6000008
    ctx->pc = 0x2693f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693f4: 0xe4400048
    ctx->pc = 0x2693f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2693f8: 0x882d
    ctx->pc = 0x2693f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693fc: 0x3c020034
    ctx->pc = 0x2693fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269400: 0x2450f530
    ctx->pc = 0x269400u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x269404: 0x0
    ctx->pc = 0x269404u;
    // NOP
label_269408:
    // 0x269408: 0x8e020000
    ctx->pc = 0x269408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26940c: 0x10400034
    ctx->pc = 0x26940Cu;
    {
        const bool branch_taken_0x26940c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x269410u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26940c) {
            ctx->pc = 0x2694E0u;
            goto label_2694e0;
        }
    }
    ctx->pc = 0x269414u;
    // 0x269414: 0x8e070004
    ctx->pc = 0x269414u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269418: 0x27a50010
    ctx->pc = 0x269418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x26941c: 0x27a60014
    ctx->pc = 0x26941cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    // 0x269420: 0xc09cf78
    ctx->pc = 0x269420u;
    SET_GPR_U32(ctx, 31, 0x269428u);
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269428u; }
    }
    if (ctx->pc != 0x269428u) { return; }
    ctx->pc = 0x269428u;
    // 0x269428: 0xc7a00010
    ctx->pc = 0x269428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26942c: 0x46140034
    ctx->pc = 0x26942cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269430: 0x0
    ctx->pc = 0x269430u;
    // NOP
    // 0x269434: 0x45030002
    ctx->pc = 0x269434u;
    {
        const bool branch_taken_0x269434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269434) {
            ctx->pc = 0x269438u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269440u;
            goto label_269440;
        }
    }
    ctx->pc = 0x26943Cu;
    // 0x26943c: 0xc7a00010
    ctx->pc = 0x26943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269440:
    // 0x269440: 0x4600a834
    ctx->pc = 0x269440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269444: 0x0
    ctx->pc = 0x269444u;
    // NOP
    // 0x269448: 0x45030001
    ctx->pc = 0x269448u;
    {
        const bool branch_taken_0x269448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269448) {
            ctx->pc = 0x26944Cu;
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269450u;
            goto label_269450;
        }
    }
    ctx->pc = 0x269450u;
label_269450:
    // 0x269450: 0xc7a00014
    ctx->pc = 0x269450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269454: 0x46170034
    ctx->pc = 0x269454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269458: 0x0
    ctx->pc = 0x269458u;
    // NOP
    // 0x26945c: 0x45030002
    ctx->pc = 0x26945Cu;
    {
        const bool branch_taken_0x26945c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26945c) {
            ctx->pc = 0x269460u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269468u;
            goto label_269468;
        }
    }
    ctx->pc = 0x269464u;
    // 0x269464: 0xc7a00014
    ctx->pc = 0x269464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269468:
    // 0x269468: 0x4600b034
    ctx->pc = 0x269468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26946c: 0x0
    ctx->pc = 0x26946cu;
    // NOP
    // 0x269470: 0x45030001
    ctx->pc = 0x269470u;
    {
        const bool branch_taken_0x269470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269470) {
            ctx->pc = 0x269474u;
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269478u;
            goto label_269478;
        }
    }
    ctx->pc = 0x269478u;
label_269478:
    // 0x269478: 0x8e070004
    ctx->pc = 0x269478u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26947c: 0x240202d
    ctx->pc = 0x26947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269480: 0x27a50010
    ctx->pc = 0x269480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x269484: 0x27a60014
    ctx->pc = 0x269484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    // 0x269488: 0xc09cf78
    ctx->pc = 0x269488u;
    SET_GPR_U32(ctx, 31, 0x269490u);
    ctx->pc = 0x26948Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 48));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269490u; }
    }
    if (ctx->pc != 0x269490u) { return; }
    ctx->pc = 0x269490u;
    // 0x269490: 0xc7a00010
    ctx->pc = 0x269490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269494: 0x46140034
    ctx->pc = 0x269494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269498: 0x0
    ctx->pc = 0x269498u;
    // NOP
    // 0x26949c: 0x45030002
    ctx->pc = 0x26949Cu;
    {
        const bool branch_taken_0x26949c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26949c) {
            ctx->pc = 0x2694A0u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2694A8u;
            goto label_2694a8;
        }
    }
    ctx->pc = 0x2694A4u;
    // 0x2694a4: 0xc7a00010
    ctx->pc = 0x2694a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2694a8:
    // 0x2694a8: 0x4600a834
    ctx->pc = 0x2694a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2694ac: 0x0
    ctx->pc = 0x2694acu;
    // NOP
    // 0x2694b0: 0x45030001
    ctx->pc = 0x2694B0u;
    {
        const bool branch_taken_0x2694b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2694b0) {
            ctx->pc = 0x2694B4u;
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2694B8u;
            goto label_2694b8;
        }
    }
    ctx->pc = 0x2694B8u;
label_2694b8:
    // 0x2694b8: 0xc7a00014
    ctx->pc = 0x2694b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2694bc: 0x46170034
    ctx->pc = 0x2694bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2694c0: 0x0
    ctx->pc = 0x2694c0u;
    // NOP
    // 0x2694c4: 0x45030002
    ctx->pc = 0x2694C4u;
    {
        const bool branch_taken_0x2694c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2694c4) {
            ctx->pc = 0x2694C8u;
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2694D0u;
            goto label_2694d0;
        }
    }
    ctx->pc = 0x2694CCu;
    // 0x2694cc: 0xc7a00014
    ctx->pc = 0x2694ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2694d0:
    // 0x2694d0: 0x4600b034
    ctx->pc = 0x2694d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2694d4: 0x0
    ctx->pc = 0x2694d4u;
    // NOP
    // 0x2694d8: 0x45030001
    ctx->pc = 0x2694D8u;
    {
        const bool branch_taken_0x2694d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2694d8) {
            ctx->pc = 0x2694DCu;
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2694E0u;
            goto label_2694e0;
        }
    }
    ctx->pc = 0x2694E0u;
label_2694e0:
    // 0x2694e0: 0x26310001
    ctx->pc = 0x2694e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2694e4: 0x2a22000f
    ctx->pc = 0x2694e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
    // 0x2694e8: 0x1440ffc7
    ctx->pc = 0x2694E8u;
    {
        const bool branch_taken_0x2694e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2694ECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x2694e8) {
            ctx->pc = 0x269408u;
            goto label_269408;
        }
    }
    ctx->pc = 0x2694F0u;
    // 0x2694f0: 0x1317c2
    ctx->pc = 0x2694f0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), 31));
    // 0x2694f4: 0x2621021
    ctx->pc = 0x2694f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2694f8: 0x21043
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2694fc: 0x44820000
    ctx->pc = 0x2694fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269500: 0x46800020
    ctx->pc = 0x269500u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269504: 0x2682ffc0
    ctx->pc = 0x269504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x269508: 0x21fc2
    ctx->pc = 0x269508u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x26950c: 0x431021
    ctx->pc = 0x26950cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269510: 0x21043
    ctx->pc = 0x269510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x269514: 0x2821023
    ctx->pc = 0x269514u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x269518: 0x44821800
    ctx->pc = 0x269518u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x26951c: 0x468018e0
    ctx->pc = 0x26951cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x269520: 0x4600a041
    ctx->pc = 0x269520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x269524: 0x46000845
    ctx->pc = 0x269524u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x269528: 0x4600a801
    ctx->pc = 0x269528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x26952c: 0x46000005
    ctx->pc = 0x26952cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x269530: 0x46000834
    ctx->pc = 0x269530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269534: 0x0
    ctx->pc = 0x269534u;
    // NOP
    // 0x269538: 0x45030001
    ctx->pc = 0x269538u;
    {
        const bool branch_taken_0x269538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269538) {
            ctx->pc = 0x26953Cu;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269540u;
            goto label_269540;
        }
    }
    ctx->pc = 0x269540u;
label_269540:
    // 0x269540: 0x1317c2
    ctx->pc = 0x269540u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), 31));
    // 0x269544: 0x2621021
    ctx->pc = 0x269544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x269548: 0x21043
    ctx->pc = 0x269548u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26954c: 0x44820000
    ctx->pc = 0x26954cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269550: 0x46800020
    ctx->pc = 0x269550u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269554: 0x0
    ctx->pc = 0x269554u;
    // NOP
    // 0x269558: 0x0
    ctx->pc = 0x269558u;
    // NOP
    // 0x26955c: 0x46000883
    ctx->pc = 0x26955cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x269560: 0x4603b841
    ctx->pc = 0x269560u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[3]);
    // 0x269564: 0x46000845
    ctx->pc = 0x269564u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x269568: 0x4603b001
    ctx->pc = 0x269568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x26956c: 0x46000005
    ctx->pc = 0x26956cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x269570: 0x46000834
    ctx->pc = 0x269570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269574: 0x0
    ctx->pc = 0x269574u;
    // NOP
    // 0x269578: 0x45030001
    ctx->pc = 0x269578u;
    {
        const bool branch_taken_0x269578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x269578) {
            ctx->pc = 0x26957Cu;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x269580u;
            goto label_269580;
        }
    }
    ctx->pc = 0x269580u;
label_269580:
    // 0x269580: 0x2682ffc0
    ctx->pc = 0x269580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x269584: 0x21fc2
    ctx->pc = 0x269584u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x269588: 0x431021
    ctx->pc = 0x269588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26958c: 0x21043
    ctx->pc = 0x26958cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x269590: 0x44820000
    ctx->pc = 0x269590u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x269594: 0x46800020
    ctx->pc = 0x269594u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x269598: 0x0
    ctx->pc = 0x269598u;
    // NOP
    // 0x26959c: 0x0
    ctx->pc = 0x26959cu;
    // NOP
    // 0x2695a0: 0x46000803
    ctx->pc = 0x2695a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2695a4: 0x46001034
    ctx->pc = 0x2695a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2695a8: 0x0
    ctx->pc = 0x2695a8u;
    // NOP
    // 0x2695ac: 0x45030001
    ctx->pc = 0x2695ACu;
    {
        const bool branch_taken_0x2695ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2695ac) {
            ctx->pc = 0x2695B0u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2695B4u;
            goto label_2695b4;
        }
    }
    ctx->pc = 0x2695B4u;
label_2695b4:
    // 0x2695b4: 0x3c030034
    ctx->pc = 0x2695b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2695b8: 0x2463eb60
    ctx->pc = 0x2695b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x2695bc: 0x240201a0
    ctx->pc = 0x2695bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2695c0: 0x2421018
    ctx->pc = 0x2695c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2695c4: 0x431021
    ctx->pc = 0x2695c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2695c8: 0xc7a00000
    ctx->pc = 0x2695c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2695cc: 0xe4400040
    ctx->pc = 0x2695ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2695d0: 0xc7a00004
    ctx->pc = 0x2695d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2695d4: 0xe4400044
    ctx->pc = 0x2695d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2695d8: 0xc7a00008
    ctx->pc = 0x2695d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2695dc: 0xe4400048
    ctx->pc = 0x2695dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2695e0: 0x46001006
    ctx->pc = 0x2695e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2695e4: 0xdfbf0070
    ctx->pc = 0x2695e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2695e8: 0xdfb40060
    ctx->pc = 0x2695e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2695ec: 0xdfb30050
    ctx->pc = 0x2695ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2695f0: 0xdfb20040
    ctx->pc = 0x2695f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2695f4: 0xdfb10030
    ctx->pc = 0x2695f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2695f8: 0xdfb00020
    ctx->pc = 0x2695f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2695fc: 0xc7b70098
    ctx->pc = 0x2695fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x269600: 0xc7b60090
    ctx->pc = 0x269600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x269604: 0xc7b50088
    ctx->pc = 0x269604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x269608: 0xc7b40080
    ctx->pc = 0x269608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26960c: 0x3e00008
    ctx->pc = 0x26960Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269408u: goto label_269408;
            case 0x269440u: goto label_269440;
            case 0x269450u: goto label_269450;
            case 0x269468u: goto label_269468;
            case 0x269478u: goto label_269478;
            case 0x2694A8u: goto label_2694a8;
            case 0x2694B8u: goto label_2694b8;
            case 0x2694D0u: goto label_2694d0;
            case 0x2694E0u: goto label_2694e0;
            case 0x269540u: goto label_269540;
            case 0x269580u: goto label_269580;
            case 0x2695B4u: goto label_2695b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269614u;
}
