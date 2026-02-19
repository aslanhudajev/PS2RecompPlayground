#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: adjust_radius
// Address: 0x26a370 - 0x26a52c
void adjust_radius_0x26a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26a370u;

    // 0x26a370: 0x27bdffd0
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a374: 0xffbf0010
    ctx->pc = 0x26a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26a378: 0xffb00000
    ctx->pc = 0x26a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26a37c: 0xe7b50028
    ctx->pc = 0x26a37cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26a380: 0xe7b40020
    ctx->pc = 0x26a380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26a384: 0x240301a0
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26a388: 0x831818
    ctx->pc = 0x26a388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26a38c: 0x3c020034
    ctx->pc = 0x26a38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a390: 0x2442eb60
    ctx->pc = 0x26a390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26a394: 0x3c013e4c
    ctx->pc = 0x26a394u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x26a398: 0x3421cccd
    ctx->pc = 0x26a398u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a39c: 0x4481a000
    ctx->pc = 0x26a39cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26a3a0: 0x3c014000
    ctx->pc = 0x26a3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26a3a4: 0x4481a800
    ctx->pc = 0x26a3a4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x26a3a8: 0xc09a78c
    ctx->pc = 0x26A3A8u;
    SET_GPR_U32(ctx, 31, 0x26A3B0u);
    ctx->pc = 0x26A3ACu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x269E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_dist_0x269e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3B0u; }
    }
    if (ctx->pc != 0x26A3B0u) { return; }
    ctx->pc = 0x26A3B0u;
    // 0x26a3b0: 0x460000c6
    ctx->pc = 0x26a3b0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x26a3b4: 0x3c020034
    ctx->pc = 0x26a3b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a3b8: 0x8c42e7c8
    ctx->pc = 0x26a3b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26a3bc: 0x44800000
    ctx->pc = 0x26a3bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26a3c0: 0x46001832
    ctx->pc = 0x26a3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a3c4: 0x0
    ctx->pc = 0x26a3c4u;
    // NOP
    // 0x26a3c8: 0x45000003
    ctx->pc = 0x26A3C8u;
    {
        const bool branch_taken_0x26a3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A3CCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
        if (branch_taken_0x26a3c8) {
            ctx->pc = 0x26A3D8u;
            goto label_26a3d8;
        }
    }
    ctx->pc = 0x26A3D0u;
    // 0x26a3d0: 0x10000050
    ctx->pc = 0x26A3D0u;
    {
        const bool branch_taken_0x26a3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A3D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26a3d0) {
            ctx->pc = 0x26A514u;
            goto label_26a514;
        }
    }
    ctx->pc = 0x26A3D8u;
label_26a3d8:
    // 0x26a3d8: 0xc60000d0
    ctx->pc = 0x26a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a3dc: 0x46001834
    ctx->pc = 0x26a3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a3e0: 0x0
    ctx->pc = 0x26a3e0u;
    // NOP
    // 0x26a3e4: 0x45000007
    ctx->pc = 0x26A3E4u;
    {
        const bool branch_taken_0x26a3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A3E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26a3e4) {
            ctx->pc = 0x26A404u;
            goto label_26a404;
        }
    }
    ctx->pc = 0x26A3ECu;
    // 0x26a3ec: 0x8c6238e0
    ctx->pc = 0x26a3ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14560)));
    // 0x26a3f0: 0x18400004
    ctx->pc = 0x26A3F0u;
    {
        const bool branch_taken_0x26a3f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26a3f0) {
            ctx->pc = 0x26A404u;
            goto label_26a404;
        }
    }
    ctx->pc = 0x26A3F8u;
    // 0x26a3f8: 0xac6038e0
    ctx->pc = 0x26a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14560), GPR_U32(ctx, 0));
    // 0x26a3fc: 0x460000c6
    ctx->pc = 0x26a3fcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x26a400: 0xc60000d0
    ctx->pc = 0x26a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a404:
    // 0x26a404: 0x46030034
    ctx->pc = 0x26a404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a408: 0x0
    ctx->pc = 0x26a408u;
    // NOP
    // 0x26a40c: 0x45000006
    ctx->pc = 0x26A40Cu;
    {
        const bool branch_taken_0x26a40c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A410u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26a40c) {
            ctx->pc = 0x26A428u;
            goto label_26a428;
        }
    }
    ctx->pc = 0x26A414u;
    // 0x26a414: 0x8c6238e0
    ctx->pc = 0x26a414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14560)));
    // 0x26a418: 0x4410004
    ctx->pc = 0x26A418u;
    {
        const bool branch_taken_0x26a418 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A41Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a418) {
            ctx->pc = 0x26A42Cu;
            goto label_26a42c;
        }
    }
    ctx->pc = 0x26A420u;
    // 0x26a420: 0xac6038e0
    ctx->pc = 0x26a420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14560), GPR_U32(ctx, 0));
    // 0x26a424: 0x460000c6
    ctx->pc = 0x26a424u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_26a428:
    // 0x26a428: 0x3c020034
    ctx->pc = 0x26a428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26a42c:
    // 0x26a42c: 0x8c42cdb8
    ctx->pc = 0x26a42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x26a430: 0x443000c
    ctx->pc = 0x26A430u;
    {
        const bool branch_taken_0x26a430 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26a430) {
            ctx->pc = 0x26A434u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26A464u;
            goto label_26a464;
        }
    }
    ctx->pc = 0x26A438u;
    // 0x26a438: 0xc60100d0
    ctx->pc = 0x26a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a43c: 0x46030834
    ctx->pc = 0x26a43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a440: 0x0
    ctx->pc = 0x26a440u;
    // NOP
    // 0x26a444: 0x45000006
    ctx->pc = 0x26A444u;
    {
        const bool branch_taken_0x26a444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A448u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a444) {
            ctx->pc = 0x26A460u;
            goto label_26a460;
        }
    }
    ctx->pc = 0x26A44Cu;
    // 0x26a44c: 0xc440f904
    ctx->pc = 0x26a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a450: 0x46010034
    ctx->pc = 0x26a450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a454: 0x0
    ctx->pc = 0x26a454u;
    // NOP
    // 0x26a458: 0x45030001
    ctx->pc = 0x26A458u;
    {
        const bool branch_taken_0x26a458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a458) {
            ctx->pc = 0x26A45Cu;
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x26A460u;
            goto label_26a460;
        }
    }
    ctx->pc = 0x26A460u;
label_26a460:
    // 0x26a460: 0xc60000d0
    ctx->pc = 0x26a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a464:
    // 0x26a464: 0x46001801
    ctx->pc = 0x26a464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26a468: 0x46000005
    ctx->pc = 0x26a468u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26a46c: 0x46140034
    ctx->pc = 0x26a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a470: 0x0
    ctx->pc = 0x26a470u;
    // NOP
    // 0x26a474: 0x45000003
    ctx->pc = 0x26A474u;
    {
        const bool branch_taken_0x26a474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A478u;
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x26a474) {
            ctx->pc = 0x26A484u;
            goto label_26a484;
        }
    }
    ctx->pc = 0x26A47Cu;
    // 0x26a47c: 0x10000021
    ctx->pc = 0x26A47Cu;
    {
        const bool branch_taken_0x26a47c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A480u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        if (branch_taken_0x26a47c) {
            ctx->pc = 0x26A504u;
            goto label_26a504;
        }
    }
    ctx->pc = 0x26A484u;
label_26a484:
    // 0x26a484: 0x46020001
    ctx->pc = 0x26a484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26a488: 0x3c013e4c
    ctx->pc = 0x26a488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x26a48c: 0x3421cccd
    ctx->pc = 0x26a48cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26a490: 0x44810800
    ctx->pc = 0x26a490u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26a494: 0x46010002
    ctx->pc = 0x26a494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a498: 0x46001080
    ctx->pc = 0x26a498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26a49c: 0x4602a834
    ctx->pc = 0x26a49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a4a0: 0x0
    ctx->pc = 0x26a4a0u;
    // NOP
    // 0x26a4a4: 0x45000004
    ctx->pc = 0x26A4A4u;
    {
        const bool branch_taken_0x26a4a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A4A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26a4a4) {
            ctx->pc = 0x26A4B8u;
            goto label_26a4b8;
        }
    }
    ctx->pc = 0x26A4ACu;
    // 0x26a4ac: 0x8c42fa00
    ctx->pc = 0x26a4acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x26a4b0: 0x50400001
    ctx->pc = 0x26A4B0u;
    {
        const bool branch_taken_0x26a4b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26a4b0) {
            ctx->pc = 0x26A4B4u;
            ctx->f[2] = FPU_MOV_S(ctx->f[21]);
            ctx->pc = 0x26A4B8u;
            goto label_26a4b8;
        }
    }
    ctx->pc = 0x26A4B8u;
label_26a4b8:
    // 0x26a4b8: 0xc60000d0
    ctx->pc = 0x26a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a4bc: 0x46030034
    ctx->pc = 0x26a4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a4c0: 0x45000003
    ctx->pc = 0x26A4C0u;
    {
        const bool branch_taken_0x26a4c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a4c0) {
            ctx->pc = 0x26A4D0u;
            goto label_26a4d0;
        }
    }
    ctx->pc = 0x26A4C8u;
    // 0x26a4c8: 0x1000000d
    ctx->pc = 0x26A4C8u;
    {
        const bool branch_taken_0x26a4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A4CCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26a4c8) {
            ctx->pc = 0x26A500u;
            goto label_26a500;
        }
    }
    ctx->pc = 0x26A4D0u;
label_26a4d0:
    // 0x26a4d0: 0x46001834
    ctx->pc = 0x26a4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a4d4: 0x0
    ctx->pc = 0x26a4d4u;
    // NOP
    // 0x26a4d8: 0x4500000d
    ctx->pc = 0x26A4D8u;
    {
        const bool branch_taken_0x26a4d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A4DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26a4d8) {
            ctx->pc = 0x26A510u;
            goto label_26a510;
        }
    }
    ctx->pc = 0x26A4E0u;
    // 0x26a4e0: 0x8c423920
    ctx->pc = 0x26a4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14624)));
    // 0x26a4e4: 0x50400005
    ctx->pc = 0x26A4E4u;
    {
        const bool branch_taken_0x26a4e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26a4e4) {
            ctx->pc = 0x26A4E8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26A4FCu;
            goto label_26a4fc;
        }
    }
    ctx->pc = 0x26A4ECu;
    // 0x26a4ec: 0x84820036
    ctx->pc = 0x26a4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x26a4f0: 0x10400008
    ctx->pc = 0x26A4F0u;
    {
        const bool branch_taken_0x26a4f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A4F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26a4f0) {
            ctx->pc = 0x26A514u;
            goto label_26a514;
        }
    }
    ctx->pc = 0x26A4F8u;
    // 0x26a4f8: 0xc60000d0
    ctx->pc = 0x26a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a4fc:
    // 0x26a4fc: 0x46020001
    ctx->pc = 0x26a4fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_26a500:
    // 0x26a500: 0xe60000d0
    ctx->pc = 0x26a500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_26a504:
    // 0x26a504: 0x3c03003c
    ctx->pc = 0x26a504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26a508: 0x24020001
    ctx->pc = 0x26a508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a50c: 0xac6238d4
    ctx->pc = 0x26a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_26a510:
    // 0x26a510: 0x2402ffff
    ctx->pc = 0x26a510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26a514:
    // 0x26a514: 0xdfbf0010
    ctx->pc = 0x26a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a518: 0xdfb00000
    ctx->pc = 0x26a518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a51c: 0xc7b50028
    ctx->pc = 0x26a51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a520: 0xc7b40020
    ctx->pc = 0x26a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a524: 0x3e00008
    ctx->pc = 0x26A524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A528u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A3D8u: goto label_26a3d8;
            case 0x26A404u: goto label_26a404;
            case 0x26A428u: goto label_26a428;
            case 0x26A42Cu: goto label_26a42c;
            case 0x26A460u: goto label_26a460;
            case 0x26A464u: goto label_26a464;
            case 0x26A484u: goto label_26a484;
            case 0x26A4B8u: goto label_26a4b8;
            case 0x26A4D0u: goto label_26a4d0;
            case 0x26A4FCu: goto label_26a4fc;
            case 0x26A500u: goto label_26a500;
            case 0x26A504u: goto label_26a504;
            case 0x26A510u: goto label_26a510;
            case 0x26A514u: goto label_26a514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A52Cu;
}
