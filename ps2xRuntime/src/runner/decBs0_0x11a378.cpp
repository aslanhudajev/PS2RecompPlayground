#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: decBs0
// Address: 0x11a378 - 0x11a6a8
void decBs0_0x11a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a378u;

    // 0x11a378: 0x27bdff20
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11a37c: 0x24020001
    ctx->pc = 0x11a37cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a380: 0xafa40010
    ctx->pc = 0x11a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11a384: 0xffbf00b0
    ctx->pc = 0x11a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11a388: 0xffbe00a0
    ctx->pc = 0x11a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x11a38c: 0xffb70090
    ctx->pc = 0x11a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x11a390: 0xffb60080
    ctx->pc = 0x11a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x11a394: 0xffb50070
    ctx->pc = 0x11a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x11a398: 0xffb40060
    ctx->pc = 0x11a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11a39c: 0xffb30050
    ctx->pc = 0x11a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x11a3a0: 0xffb20040
    ctx->pc = 0x11a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11a3a4: 0xffb10030
    ctx->pc = 0x11a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11a3a8: 0xffb00020
    ctx->pc = 0x11a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11a3ac: 0xe7b700d8
    ctx->pc = 0x11a3acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x11a3b0: 0xe7b600d0
    ctx->pc = 0x11a3b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x11a3b4: 0xe7b500c8
    ctx->pc = 0x11a3b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x11a3b8: 0xe7b400c0
    ctx->pc = 0x11a3b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11a3bc: 0x10000099
    ctx->pc = 0x11A3BCu;
    {
        const bool branch_taken_0x11a3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A3C0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x11a3bc) {
            ctx->pc = 0x11A624u;
            goto label_11a624;
        }
    }
    ctx->pc = 0x11A3C4u;
    // 0x11a3c4: 0x0
    ctx->pc = 0x11a3c4u;
    // NOP
label_11a3c8:
    // 0x11a3c8: 0xc04638c
    ctx->pc = 0x11A3C8u;
    SET_GPR_U32(ctx, 31, 0x11A3D0u);
    ctx->pc = 0x118E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3D0u; }
    }
    if (ctx->pc != 0x11A3D0u) { return; }
    ctx->pc = 0x11A3D0u;
    // 0x11a3d0: 0x3c030075
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)117 << 16));
label_11a3d4:
    // 0x11a3d4: 0xc046a6e
    ctx->pc = 0x11A3D4u;
    SET_GPR_U32(ctx, 31, 0x11A3DCu);
    ctx->pc = 0x11A3D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294960408));
    ctx->pc = 0x11A9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufGetData_0x11a9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3DCu; }
    }
    if (ctx->pc != 0x11A3DCu) { return; }
    ctx->pc = 0x11A3DCu;
    // 0x11a3dc: 0x1040fffa
    ctx->pc = 0x11A3DCu;
    {
        const bool branch_taken_0x11a3dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A3E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x11a3dc) {
            ctx->pc = 0x11A3C8u;
            goto label_11a3c8;
        }
    }
    ctx->pc = 0x11A3E4u;
    // 0x11a3e4: 0x40282d
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3e8: 0xc047d5e
    ctx->pc = 0x11A3E8u;
    SET_GPR_U32(ctx, 31, 0x11A3F0u);
    ctx->pc = 0x11A3ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1440));
    ctx->pc = 0x11F578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegGetPicture_0x11f578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3F0u; }
    }
    if (ctx->pc != 0x11A3F0u) { return; }
    ctx->pc = 0x11A3F0u;
    // 0x11a3f0: 0x4430005
    ctx->pc = 0x11A3F0u;
    {
        const bool branch_taken_0x11a3f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a3f0) {
            ctx->pc = 0x11A3F4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x11A408u;
            goto label_11a408;
        }
    }
    ctx->pc = 0x11A3F8u;
    // 0x11a3f8: 0x3c040017
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11a3fc: 0xc04647a
    ctx->pc = 0x11A3FCu;
    SET_GPR_U32(ctx, 31, 0x11A404u);
    ctx->pc = 0x11A400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18056));
    ctx->pc = 0x1191E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x1191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A404u; }
    }
    if (ctx->pc != 0x11A404u) { return; }
    ctx->pc = 0x11A404u;
    // 0x11a404: 0x8fa40010
    ctx->pc = 0x11a404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11a408:
    // 0x11a408: 0x8c820008
    ctx->pc = 0x11a408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11a40c: 0x14400081
    ctx->pc = 0x11A40Cu;
    {
        const bool branch_taken_0x11a40c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A410u;
        SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
        if (branch_taken_0x11a40c) {
            ctx->pc = 0x11A614u;
            goto label_11a614;
        }
    }
    ctx->pc = 0x11A414u;
    // 0x11a414: 0x8c910000
    ctx->pc = 0x11a414u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a418: 0x8c9e0004
    ctx->pc = 0x11a418u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11a41c: 0x4491b800
    ctx->pc = 0x11a41cu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 17);
    // 0x11a420: 0x4680bde0
    ctx->pc = 0x11a420u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x11a424: 0x3c014420
    ctx->pc = 0x11a424u;
    SET_GPR_S32(ctx, 1, ((uint32_t)17440 << 16));
    // 0x11a428: 0x44810000
    ctx->pc = 0x11a428u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11a42c: 0x8f8284bc
    ctx->pc = 0x11a42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11a430: 0x449eb000
    ctx->pc = 0x11a430u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 30);
    // 0x11a434: 0x4680b5a0
    ctx->pc = 0x11a434u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x11a438: 0xafb10018
    ctx->pc = 0x11a438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
    // 0x11a43c: 0x0
    ctx->pc = 0x11a43cu;
    // NOP
    // 0x11a440: 0x0
    ctx->pc = 0x11a440u;
    // NOP
    // 0x11a444: 0x46170543
    ctx->pc = 0x11a444u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[23];
    // 0x11a448: 0x3c0143f0
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 1, ((uint32_t)17392 << 16));
    // 0x11a44c: 0x44810000
    ctx->pc = 0x11a44cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11a450: 0x10400003
    ctx->pc = 0x11A450u;
    {
        const bool branch_taken_0x11a450 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A454u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a450) {
            ctx->pc = 0x11A460u;
            goto label_11a460;
        }
    }
    ctx->pc = 0x11A458u;
    // 0x11a458: 0x3c014400
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 1, ((uint32_t)17408 << 16));
    // 0x11a45c: 0x44810000
    ctx->pc = 0x11a45cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_11a460:
    // 0x11a460: 0x0
    ctx->pc = 0x11a460u;
    // NOP
    // 0x11a464: 0x0
    ctx->pc = 0x11a464u;
    // NOP
    // 0x11a468: 0x46160503
    ctx->pc = 0x11a468u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[22];
    // 0x11a46c: 0xc04a82a
    ctx->pc = 0x11A46Cu;
    SET_GPR_U32(ctx, 31, 0x11A474u);
    ctx->pc = 0x11A470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x12A0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x12a0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A474u; }
    }
    if (ctx->pc != 0x11A474u) { return; }
    ctx->pc = 0x11A474u;
    // 0x11a474: 0x3405ffa0
    ctx->pc = 0x11a474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)65440);
    // 0x11a478: 0x52bbc
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11a47c: 0xc04a338
    ctx->pc = 0x11A47Cu;
    SET_GPR_U32(ctx, 31, 0x11A484u);
    ctx->pc = 0x11A480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A484u; }
    }
    if (ctx->pc != 0x11A484u) { return; }
    ctx->pc = 0x11A484u;
    // 0x11a484: 0xc04a52c
    ctx->pc = 0x11A484u;
    SET_GPR_U32(ctx, 31, 0x11A48Cu);
    ctx->pc = 0x11A488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1294B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1294b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A48Cu; }
    }
    if (ctx->pc != 0x11A48Cu) { return; }
    ctx->pc = 0x11A48Cu;
    // 0x11a48c: 0x4600a306
    ctx->pc = 0x11a48cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a490: 0xc04a82a
    ctx->pc = 0x11A490u;
    SET_GPR_U32(ctx, 31, 0x11A498u);
    ctx->pc = 0x11A494u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x12A0A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x12a0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A498u; }
    }
    if (ctx->pc != 0x11A498u) { return; }
    ctx->pc = 0x11A498u;
    // 0x11a498: 0x3405ffa0
    ctx->pc = 0x11a498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)65440);
    // 0x11a49c: 0x52bbc
    ctx->pc = 0x11a49cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11a4a0: 0xc04a338
    ctx->pc = 0x11A4A0u;
    SET_GPR_U32(ctx, 31, 0x11A4A8u);
    ctx->pc = 0x11A4A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4A8u; }
    }
    if (ctx->pc != 0x11A4A8u) { return; }
    ctx->pc = 0x11A4A8u;
    // 0x11a4a8: 0xc04a52c
    ctx->pc = 0x11A4A8u;
    SET_GPR_U32(ctx, 31, 0x11A4B0u);
    ctx->pc = 0x11A4ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1294B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1294b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A4B0u; }
    }
    if (ctx->pc != 0x11A4B0u) { return; }
    ctx->pc = 0x11A4B0u;
    // 0x11a4b0: 0x8f8384cc
    ctx->pc = 0x11a4b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935756)));
    // 0x11a4b4: 0x1460000a
    ctx->pc = 0x11A4B4u;
    {
        const bool branch_taken_0x11a4b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A4B8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x11a4b4) {
            ctx->pc = 0x11A4E0u;
            goto label_11a4e0;
        }
    }
    ctx->pc = 0x11A4BCu;
    // 0x11a4bc: 0x8f8284d0
    ctx->pc = 0x11a4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x11a4c0: 0x24050001
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a4c4: 0x14450007
    ctx->pc = 0x11A4C4u;
    {
        const bool branch_taken_0x11a4c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x11A4C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11a4c4) {
            ctx->pc = 0x11A4E4u;
            goto label_11a4e4;
        }
    }
    ctx->pc = 0x11A4CCu;
    // 0x11a4cc: 0x4615b802
    ctx->pc = 0x11a4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x11a4d0: 0x46000064
    ctx->pc = 0x11a4d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x11a4d4: 0x44110800
    ctx->pc = 0x11a4d4u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
    // 0x11a4d8: 0x1000000b
    ctx->pc = 0x11A4D8u;
    {
        const bool branch_taken_0x11a4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A4DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x11a4d8) {
            ctx->pc = 0x11A508u;
            goto label_11a508;
        }
    }
    ctx->pc = 0x11A4E0u;
label_11a4e0:
    // 0x11a4e0: 0x24020001
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11a4e4:
    // 0x11a4e4: 0x14620008
    ctx->pc = 0x11A4E4u;
    {
        const bool branch_taken_0x11a4e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x11A4E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x11a4e4) {
            ctx->pc = 0x11A508u;
            goto label_11a508;
        }
    }
    ctx->pc = 0x11A4ECu;
    // 0x11a4ec: 0x8f8284d0
    ctx->pc = 0x11a4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x11a4f0: 0x14400006
    ctx->pc = 0x11A4F0u;
    {
        const bool branch_taken_0x11a4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A4F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 720));
        if (branch_taken_0x11a4f0) {
            ctx->pc = 0x11A50Cu;
            goto label_11a50c;
        }
    }
    ctx->pc = 0x11A4F8u;
    // 0x11a4f8: 0x4614b002
    ctx->pc = 0x11a4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x11a4fc: 0x46000064
    ctx->pc = 0x11a4fcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x11a500: 0x44100800
    ctx->pc = 0x11a500u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
    // 0x11a504: 0x24030200
    ctx->pc = 0x11a504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 512));
label_11a508:
    // 0x11a508: 0x240202d0
    ctx->pc = 0x11a508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 720));
label_11a50c:
    // 0x11a50c: 0x701823
    ctx->pc = 0x11a50cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11a510: 0x511023
    ctx->pc = 0x11a510u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11a514: 0x3b083
    ctx->pc = 0x11a514u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 2));
    // 0x11a518: 0x2b843
    ctx->pc = 0x11a518u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 1));
    // 0x11a51c: 0x3c030075
    ctx->pc = 0x11a51cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)117 << 16));
    // 0x11a520: 0x10a043
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 16), 1));
    // 0x11a524: 0x2463e518
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960408));
    // 0x11a528: 0x8c620010
    ctx->pc = 0x11a528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11a52c: 0x18400038
    ctx->pc = 0x11A52Cu;
    {
        const bool branch_taken_0x11a52c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A530u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a52c) {
            ctx->pc = 0x11A610u;
            goto label_11a610;
        }
    }
    ctx->pc = 0x11A534u;
    // 0x11a534: 0x3c120002
    ctx->pc = 0x11a534u;
    SET_GPR_S32(ctx, 18, ((uint32_t)2 << 16));
    // 0x11a538: 0xa82d
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a53c: 0x36522340
    ctx->pc = 0x11a53cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)9024);
    // 0x11a540: 0x982d
    ctx->pc = 0x11a540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a544: 0x0
    ctx->pc = 0x11a544u;
    // NOP
label_11a548:
    // 0x11a548: 0x3c040075
    ctx->pc = 0x11a548u;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a54c: 0x3c020075
    ctx->pc = 0x11a54cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
    // 0x11a550: 0x2484e518
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960408));
    // 0x11a554: 0x8c46e518
    ctx->pc = 0x11a554u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294960408)));
    // 0x11a558: 0x8c850004
    ctx->pc = 0x11a558u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11a55c: 0x382d
    ctx->pc = 0x11a55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a560: 0x8fa30018
    ctx->pc = 0x11a560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a564: 0xd53021
    ctx->pc = 0x11a564u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11a568: 0xb32821
    ctx->pc = 0x11a568u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a56c: 0x3c040075
    ctx->pc = 0x11a56cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a570: 0x2484e530
    ctx->pc = 0x11a570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960432));
    // 0x11a574: 0xafa30000
    ctx->pc = 0x11a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x11a578: 0x24a50040
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x11a57c: 0xafbe0008
    ctx->pc = 0x11a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x11a580: 0x2e0402d
    ctx->pc = 0x11a580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a584: 0x2c0482d
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a588: 0x220502d
    ctx->pc = 0x11a588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a58c: 0x280582d
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a590: 0xc046b44
    ctx->pc = 0x11A590u;
    SET_GPR_U32(ctx, 31, 0x11A598u);
    ctx->pc = 0x11A594u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x11AD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSetTags_0x11ad10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A598u; }
    }
    if (ctx->pc != 0x11A598u) { return; }
    ctx->pc = 0x11A598u;
    // 0x11a598: 0x3c040075
    ctx->pc = 0x11a598u;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a59c: 0x3c020075
    ctx->pc = 0x11a59cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
    // 0x11a5a0: 0x2484e518
    ctx->pc = 0x11a5a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960408));
    // 0x11a5a4: 0x8c46e518
    ctx->pc = 0x11a5a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294960408)));
    // 0x11a5a8: 0x8c850004
    ctx->pc = 0x11a5a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11a5ac: 0x24070001
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a5b0: 0x8fa30018
    ctx->pc = 0x11a5b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a5b4: 0xd53021
    ctx->pc = 0x11a5b4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11a5b8: 0xb32821
    ctx->pc = 0x11a5b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a5bc: 0x3c040075
    ctx->pc = 0x11a5bcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a5c0: 0x2484e530
    ctx->pc = 0x11a5c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960432));
    // 0x11a5c4: 0xafa30000
    ctx->pc = 0x11a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x11a5c8: 0xb22821
    ctx->pc = 0x11a5c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x11a5cc: 0xafbe0008
    ctx->pc = 0x11a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x11a5d0: 0x2e0402d
    ctx->pc = 0x11a5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5d4: 0x2c0482d
    ctx->pc = 0x11a5d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5d8: 0x220502d
    ctx->pc = 0x11a5d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5dc: 0xc046b44
    ctx->pc = 0x11A5DCu;
    SET_GPR_U32(ctx, 31, 0x11A5E4u);
    ctx->pc = 0x11A5E0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11AD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSetTags_0x11ad10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5E4u; }
    }
    if (ctx->pc != 0x11A5E4u) { return; }
    ctx->pc = 0x11A5E4u;
    // 0x11a5e4: 0x3c050075
    ctx->pc = 0x11a5e4u;
    SET_GPR_S32(ctx, 5, ((uint32_t)117 << 16));
    // 0x11a5e8: 0x3c020016
    ctx->pc = 0x11a5e8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)22 << 16));
    // 0x11a5ec: 0x24a5e518
    ctx->pc = 0x11a5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960408));
    // 0x11a5f0: 0x3c03000a
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)10 << 16));
    // 0x11a5f4: 0x8ca40010
    ctx->pc = 0x11a5f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11a5f8: 0x34428000
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)32768);
    // 0x11a5fc: 0x3463af40
    ctx->pc = 0x11a5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)44864);
    // 0x11a600: 0x2a2a821
    ctx->pc = 0x11a600u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11a604: 0x204202a
    ctx->pc = 0x11a604u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 4)));
    // 0x11a608: 0x1480ffcf
    ctx->pc = 0x11A608u;
    {
        const bool branch_taken_0x11a608 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A60Cu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x11a608) {
            ctx->pc = 0x11A548u;
            goto label_11a548;
        }
    }
    ctx->pc = 0x11A610u;
label_11a610:
    // 0x11a610: 0x3c020075
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
label_11a614:
    // 0x11a614: 0xc046a52
    ctx->pc = 0x11A614u;
    SET_GPR_U32(ctx, 31, 0x11A61Cu);
    ctx->pc = 0x11A618u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960408));
    ctx->pc = 0x11A948u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIncCount_0x11a948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A61Cu; }
    }
    if (ctx->pc != 0x11A61Cu) { return; }
    ctx->pc = 0x11A61Cu;
    // 0x11a61c: 0xc04638c
    ctx->pc = 0x11A61Cu;
    SET_GPR_U32(ctx, 31, 0x11A624u);
    ctx->pc = 0x118E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A624u; }
    }
    if (ctx->pc != 0x11A624u) { return; }
    ctx->pc = 0x11A624u;
label_11a624:
    // 0x11a624: 0xc047da4
    ctx->pc = 0x11A624u;
    SET_GPR_U32(ctx, 31, 0x11A62Cu);
    ctx->pc = 0x11A628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x11F690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x11f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A62Cu; }
    }
    if (ctx->pc != 0x11A62Cu) { return; }
    ctx->pc = 0x11A62Cu;
    // 0x11a62c: 0x1440000b
    ctx->pc = 0x11A62Cu;
    {
        const bool branch_taken_0x11a62c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a62c) {
            ctx->pc = 0x11A65Cu;
            goto label_11a65c;
        }
    }
    ctx->pc = 0x11A634u;
    // 0x11a634: 0xc046850
    ctx->pc = 0x11A634u;
    SET_GPR_U32(ctx, 31, 0x11A63Cu);
    ctx->pc = 0x11A638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x11A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x11a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A63Cu; }
    }
    if (ctx->pc != 0x11A63Cu) { return; }
    ctx->pc = 0x11A63Cu;
    // 0x11a63c: 0x24030001
    ctx->pc = 0x11a63cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a640: 0x1443ff64
    ctx->pc = 0x11A640u;
    {
        const bool branch_taken_0x11a640 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x11A644u;
        SET_GPR_S32(ctx, 3, ((uint32_t)117 << 16));
        if (branch_taken_0x11a640) {
            ctx->pc = 0x11A3D4u;
            goto label_11a3d4;
        }
    }
    ctx->pc = 0x11A648u;
    // 0x11a648: 0x3c040017
    ctx->pc = 0x11a648u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11a64c: 0x2405ffff
    ctx->pc = 0x11a64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a650: 0xafa50014
    ctx->pc = 0x11a650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x11a654: 0xc04ace4
    ctx->pc = 0x11A654u;
    SET_GPR_U32(ctx, 31, 0x11A65Cu);
    ctx->pc = 0x11A658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18032));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A65Cu; }
    }
    if (ctx->pc != 0x11A65Cu) { return; }
    ctx->pc = 0x11A65Cu;
label_11a65c:
    // 0x11a65c: 0xc047dac
    ctx->pc = 0x11A65Cu;
    SET_GPR_U32(ctx, 31, 0x11A664u);
    ctx->pc = 0x11A660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x11F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegReset_0x11f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A664u; }
    }
    if (ctx->pc != 0x11A664u) { return; }
    ctx->pc = 0x11A664u;
    // 0x11a664: 0x8fa20014
    ctx->pc = 0x11a664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11a668: 0xdfbf00b0
    ctx->pc = 0x11a668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a66c: 0xdfbe00a0
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a670: 0xdfb70090
    ctx->pc = 0x11a670u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a674: 0xdfb60080
    ctx->pc = 0x11a674u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a678: 0xdfb50070
    ctx->pc = 0x11a678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a67c: 0xdfb40060
    ctx->pc = 0x11a67cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a680: 0xdfb30050
    ctx->pc = 0x11a680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a684: 0xdfb20040
    ctx->pc = 0x11a684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a688: 0xdfb10030
    ctx->pc = 0x11a688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a68c: 0xdfb00020
    ctx->pc = 0x11a68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a690: 0xc7b700d8
    ctx->pc = 0x11a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11a694: 0xc7b600d0
    ctx->pc = 0x11a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11a698: 0xc7b500c8
    ctx->pc = 0x11a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11a69c: 0xc7b400c0
    ctx->pc = 0x11a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a6a0: 0x3e00008
    ctx->pc = 0x11A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A3C8u: goto label_11a3c8;
            case 0x11A3D4u: goto label_11a3d4;
            case 0x11A408u: goto label_11a408;
            case 0x11A460u: goto label_11a460;
            case 0x11A4E0u: goto label_11a4e0;
            case 0x11A4E4u: goto label_11a4e4;
            case 0x11A508u: goto label_11a508;
            case 0x11A50Cu: goto label_11a50c;
            case 0x11A548u: goto label_11a548;
            case 0x11A610u: goto label_11a610;
            case 0x11A614u: goto label_11a614;
            case 0x11A624u: goto label_11a624;
            case 0x11A65Cu: goto label_11a65c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A6A8u;
}
