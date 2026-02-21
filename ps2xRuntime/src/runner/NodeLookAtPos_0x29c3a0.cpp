#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NodeLookAtPos
// Address: 0x29c3a0 - 0x29c760
void NodeLookAtPos_0x29c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c3a0u;

    // 0x29c3a0: 0x27bdff20
    ctx->pc = 0x29c3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29c3a4: 0xffbf00b0
    ctx->pc = 0x29c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x29c3a8: 0xffb300a0
    ctx->pc = 0x29c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x29c3ac: 0xffb20090
    ctx->pc = 0x29c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x29c3b0: 0xffb10080
    ctx->pc = 0x29c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x29c3b4: 0xffb00070
    ctx->pc = 0x29c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x29c3b8: 0xe7b700d8
    ctx->pc = 0x29c3b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29c3bc: 0xe7b600d0
    ctx->pc = 0x29c3bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29c3c0: 0xe7b500c8
    ctx->pc = 0x29c3c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x29c3c4: 0xe7b400c0
    ctx->pc = 0x29c3c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29c3c8: 0x80982d
    ctx->pc = 0x29c3c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3cc: 0xa0802d
    ctx->pc = 0x29c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3d0: 0xc0882d
    ctx->pc = 0x29c3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3d4: 0x46006506
    ctx->pc = 0x29c3d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29c3d8: 0x46006d46
    ctx->pc = 0x29c3d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29c3dc: 0xe0902d
    ctx->pc = 0x29c3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3e0: 0x46007586
    ctx->pc = 0x29c3e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x29c3e4: 0x12000025
    ctx->pc = 0x29C3E4u;
    {
        const bool branch_taken_0x29c3e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C3E8u;
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x29c3e4) {
            ctx->pc = 0x29C47Cu;
            goto label_29c47c;
        }
    }
    ctx->pc = 0x29C3ECu;
    // 0x29c3ec: 0x27a50020
    ctx->pc = 0x29c3ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c3f0: 0xc0b4302
    ctx->pc = 0x29C3F0u;
    SET_GPR_U32(ctx, 31, 0x29C3F8u);
    ctx->pc = 0x29C3F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3F8u; }
    }
    if (ctx->pc != 0x29C3F8u) { return; }
    ctx->pc = 0x29C3F8u;
    // 0x29c3f8: 0x27a40040
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x29c3fc: 0x27a50060
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x29c400: 0xc0b59e6
    ctx->pc = 0x29C400u;
    SET_GPR_U32(ctx, 31, 0x29C408u);
    ctx->pc = 0x29C404u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 100));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C408u; }
    }
    if (ctx->pc != 0x29C408u) { return; }
    ctx->pc = 0x29C408u;
    // 0x29c408: 0xc6000000
    ctx->pc = 0x29c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c40c: 0xc7a10050
    ctx->pc = 0x29c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c410: 0x46010001
    ctx->pc = 0x29c410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c414: 0xe7a00010
    ctx->pc = 0x29c414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29c418: 0xc6000004
    ctx->pc = 0x29c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c41c: 0xc7a10054
    ctx->pc = 0x29c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c420: 0x46010001
    ctx->pc = 0x29c420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c424: 0xe7a00014
    ctx->pc = 0x29c424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29c428: 0xc6000008
    ctx->pc = 0x29c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c42c: 0xc7a10058
    ctx->pc = 0x29c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c430: 0x46010001
    ctx->pc = 0x29c430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c434: 0xe7a00018
    ctx->pc = 0x29c434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29c438: 0x27a40010
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c43c: 0x27a50068
    ctx->pc = 0x29c43cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 104));
    // 0x29c440: 0xc0b59e6
    ctx->pc = 0x29C440u;
    SET_GPR_U32(ctx, 31, 0x29C448u);
    ctx->pc = 0x29C444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 108));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C448u; }
    }
    if (ctx->pc != 0x29C448u) { return; }
    ctx->pc = 0x29C448u;
    // 0x29c448: 0xc7a00068
    ctx->pc = 0x29c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c44c: 0xc7a10060
    ctx->pc = 0x29c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c450: 0x46010001
    ctx->pc = 0x29c450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c454: 0xe7a00068
    ctx->pc = 0x29c454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29c458: 0x4600a800
    ctx->pc = 0x29c458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x29c45c: 0xe7a00068
    ctx->pc = 0x29c45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29c460: 0xc7a0006c
    ctx->pc = 0x29c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c464: 0xc7a10064
    ctx->pc = 0x29c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c468: 0x46010001
    ctx->pc = 0x29c468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c46c: 0xe7a0006c
    ctx->pc = 0x29c46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29c470: 0x4600b800
    ctx->pc = 0x29c470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x29c474: 0x10000003
    ctx->pc = 0x29C474u;
    {
        const bool branch_taken_0x29c474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C478u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        if (branch_taken_0x29c474) {
            ctx->pc = 0x29C484u;
            goto label_29c484;
        }
    }
    ctx->pc = 0x29C47Cu;
label_29c47c:
    // 0x29c47c: 0xafa00068
    ctx->pc = 0x29c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x29c480: 0xafa0006c
    ctx->pc = 0x29c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_29c484:
    // 0x29c484: 0xc7a00068
    ctx->pc = 0x29c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c488: 0xc6210000
    ctx->pc = 0x29c488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c48c: 0x46010081
    ctx->pc = 0x29c48cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c490: 0x3c014049
    ctx->pc = 0x29c490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29c494: 0x34210fdb
    ctx->pc = 0x29c494u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c498: 0x44810000
    ctx->pc = 0x29c498u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c49c: 0x46020034
    ctx->pc = 0x29c49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4a0: 0x45000006
    ctx->pc = 0x29C4A0u;
    {
        const bool branch_taken_0x29c4a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c4a0) {
            ctx->pc = 0x29C4BCu;
            goto label_29c4bc;
        }
    }
    ctx->pc = 0x29C4A8u;
    // 0x29c4a8: 0x3c0140c9
    ctx->pc = 0x29c4a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c4ac: 0x34210fdb
    ctx->pc = 0x29c4acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c4b0: 0x44810000
    ctx->pc = 0x29c4b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c4b4: 0x1000000c
    ctx->pc = 0x29C4B4u;
    {
        const bool branch_taken_0x29c4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C4B8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x29c4b4) {
            ctx->pc = 0x29C4E8u;
            goto label_29c4e8;
        }
    }
    ctx->pc = 0x29C4BCu;
label_29c4bc:
    // 0x29c4bc: 0x3c01c049
    ctx->pc = 0x29c4bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29c4c0: 0x34210fdb
    ctx->pc = 0x29c4c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c4c4: 0x44810000
    ctx->pc = 0x29c4c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c4c8: 0x46001036
    ctx->pc = 0x29c4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4cc: 0x0
    ctx->pc = 0x29c4ccu;
    // NOP
    // 0x29c4d0: 0x45020005
    ctx->pc = 0x29C4D0u;
    {
        const bool branch_taken_0x29c4d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c4d0) {
            ctx->pc = 0x29C4D4u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x29C4E8u;
            goto label_29c4e8;
        }
    }
    ctx->pc = 0x29C4D8u;
    // 0x29c4d8: 0x3c0140c9
    ctx->pc = 0x29c4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c4dc: 0x34210fdb
    ctx->pc = 0x29c4dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c4e0: 0x44810000
    ctx->pc = 0x29c4e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c4e4: 0x46001000
    ctx->pc = 0x29c4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29c4e8:
    // 0x29c4e8: 0x46000086
    ctx->pc = 0x29c4e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x29c4ec: 0x3c020031
    ctx->pc = 0x29c4ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29c4f0: 0xc441ffa8
    ctx->pc = 0x29c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c4f4: 0x3c013fc9
    ctx->pc = 0x29c4f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29c4f8: 0x34210fdb
    ctx->pc = 0x29c4f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c4fc: 0x44810000
    ctx->pc = 0x29c4fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c500: 0x46000842
    ctx->pc = 0x29c500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c504: 0x46020834
    ctx->pc = 0x29c504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c508: 0x0
    ctx->pc = 0x29c508u;
    // NOP
    // 0x29c50c: 0x45030001
    ctx->pc = 0x29C50Cu;
    {
        const bool branch_taken_0x29c50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c50c) {
            ctx->pc = 0x29C510u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x29C514u;
            goto label_29c514;
        }
    }
    ctx->pc = 0x29C514u;
label_29c514:
    // 0x29c514: 0x46000847
    ctx->pc = 0x29c514u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x29c518: 0x46011034
    ctx->pc = 0x29c518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c51c: 0x0
    ctx->pc = 0x29c51cu;
    // NOP
    // 0x29c520: 0x45030001
    ctx->pc = 0x29C520u;
    {
        const bool branch_taken_0x29c520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c520) {
            ctx->pc = 0x29C524u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x29C528u;
            goto label_29c528;
        }
    }
    ctx->pc = 0x29C528u;
label_29c528:
    // 0x29c528: 0xc6200000
    ctx->pc = 0x29c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c52c: 0x46001000
    ctx->pc = 0x29c52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c530: 0xe7a00068
    ctx->pc = 0x29c530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29c534: 0xe6200000
    ctx->pc = 0x29c534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29c538: 0xc7a1006c
    ctx->pc = 0x29c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c53c: 0xc6400000
    ctx->pc = 0x29c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c540: 0x46000881
    ctx->pc = 0x29c540u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c544: 0x3c014049
    ctx->pc = 0x29c544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29c548: 0x34210fdb
    ctx->pc = 0x29c548u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c54c: 0x44810000
    ctx->pc = 0x29c54cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c550: 0x46020034
    ctx->pc = 0x29c550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c554: 0x45000006
    ctx->pc = 0x29C554u;
    {
        const bool branch_taken_0x29c554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c554) {
            ctx->pc = 0x29C570u;
            goto label_29c570;
        }
    }
    ctx->pc = 0x29C55Cu;
    // 0x29c55c: 0x3c0140c9
    ctx->pc = 0x29c55cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c560: 0x34210fdb
    ctx->pc = 0x29c560u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c564: 0x44810000
    ctx->pc = 0x29c564u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c568: 0x1000000c
    ctx->pc = 0x29C568u;
    {
        const bool branch_taken_0x29c568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C56Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x29c568) {
            ctx->pc = 0x29C59Cu;
            goto label_29c59c;
        }
    }
    ctx->pc = 0x29C570u;
label_29c570:
    // 0x29c570: 0x3c01c049
    ctx->pc = 0x29c570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29c574: 0x34210fdb
    ctx->pc = 0x29c574u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c578: 0x44810000
    ctx->pc = 0x29c578u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c57c: 0x46001036
    ctx->pc = 0x29c57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c580: 0x0
    ctx->pc = 0x29c580u;
    // NOP
    // 0x29c584: 0x45020005
    ctx->pc = 0x29C584u;
    {
        const bool branch_taken_0x29c584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c584) {
            ctx->pc = 0x29C588u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x29C59Cu;
            goto label_29c59c;
        }
    }
    ctx->pc = 0x29C58Cu;
    // 0x29c58c: 0x3c0140c9
    ctx->pc = 0x29c58cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c590: 0x34210fdb
    ctx->pc = 0x29c590u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c594: 0x44810000
    ctx->pc = 0x29c594u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c598: 0x46001000
    ctx->pc = 0x29c598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29c59c:
    // 0x29c59c: 0x46000086
    ctx->pc = 0x29c59cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x29c5a0: 0x3c020031
    ctx->pc = 0x29c5a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29c5a4: 0xc441ffa8
    ctx->pc = 0x29c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5a8: 0x3c013fc9
    ctx->pc = 0x29c5a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29c5ac: 0x34210fdb
    ctx->pc = 0x29c5acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c5b0: 0x44810000
    ctx->pc = 0x29c5b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c5b4: 0x46000842
    ctx->pc = 0x29c5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c5b8: 0x46020834
    ctx->pc = 0x29c5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c5bc: 0x0
    ctx->pc = 0x29c5bcu;
    // NOP
    // 0x29c5c0: 0x45030001
    ctx->pc = 0x29C5C0u;
    {
        const bool branch_taken_0x29c5c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c5c0) {
            ctx->pc = 0x29C5C4u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x29C5C8u;
            goto label_29c5c8;
        }
    }
    ctx->pc = 0x29C5C8u;
label_29c5c8:
    // 0x29c5c8: 0x46000847
    ctx->pc = 0x29c5c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x29c5cc: 0x46011034
    ctx->pc = 0x29c5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c5d0: 0x0
    ctx->pc = 0x29c5d0u;
    // NOP
    // 0x29c5d4: 0x45030001
    ctx->pc = 0x29C5D4u;
    {
        const bool branch_taken_0x29c5d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c5d4) {
            ctx->pc = 0x29C5D8u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x29C5DCu;
            goto label_29c5dc;
        }
    }
    ctx->pc = 0x29C5DCu;
label_29c5dc:
    // 0x29c5dc: 0xc6400000
    ctx->pc = 0x29c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5e0: 0x46001000
    ctx->pc = 0x29c5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c5e4: 0xe7a0006c
    ctx->pc = 0x29c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x29c5e8: 0xe6400000
    ctx->pc = 0x29c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x29c5ec: 0x260202d
    ctx->pc = 0x29c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5f0: 0xc0b5b34
    ctx->pc = 0x29C5F0u;
    SET_GPR_U32(ctx, 31, 0x29C5F8u);
    ctx->pc = 0x29C5F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExtractPYR_0x2d6cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C5F8u; }
    }
    if (ctx->pc != 0x29C5F8u) { return; }
    ctx->pc = 0x29C5F8u;
    // 0x29c5f8: 0xc7a10068
    ctx->pc = 0x29c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5fc: 0xc7a00004
    ctx->pc = 0x29c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c600: 0x46000881
    ctx->pc = 0x29c600u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c604: 0x3c014049
    ctx->pc = 0x29c604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29c608: 0x34210fdb
    ctx->pc = 0x29c608u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c60c: 0x44810000
    ctx->pc = 0x29c60cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c610: 0x46020034
    ctx->pc = 0x29c610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c614: 0x45000006
    ctx->pc = 0x29C614u;
    {
        const bool branch_taken_0x29c614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c614) {
            ctx->pc = 0x29C630u;
            goto label_29c630;
        }
    }
    ctx->pc = 0x29C61Cu;
    // 0x29c61c: 0x3c0140c9
    ctx->pc = 0x29c61cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c620: 0x34210fdb
    ctx->pc = 0x29c620u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c624: 0x44810000
    ctx->pc = 0x29c624u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c628: 0x1000000c
    ctx->pc = 0x29C628u;
    {
        const bool branch_taken_0x29c628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C62Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x29c628) {
            ctx->pc = 0x29C65Cu;
            goto label_29c65c;
        }
    }
    ctx->pc = 0x29C630u;
label_29c630:
    // 0x29c630: 0x3c01c049
    ctx->pc = 0x29c630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29c634: 0x34210fdb
    ctx->pc = 0x29c634u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c638: 0x44810000
    ctx->pc = 0x29c638u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c63c: 0x46001036
    ctx->pc = 0x29c63cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c640: 0x0
    ctx->pc = 0x29c640u;
    // NOP
    // 0x29c644: 0x45020005
    ctx->pc = 0x29C644u;
    {
        const bool branch_taken_0x29c644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c644) {
            ctx->pc = 0x29C648u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x29C65Cu;
            goto label_29c65c;
        }
    }
    ctx->pc = 0x29C64Cu;
    // 0x29c64c: 0x3c0140c9
    ctx->pc = 0x29c64cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c650: 0x34210fdb
    ctx->pc = 0x29c650u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c654: 0x44810000
    ctx->pc = 0x29c654u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c658: 0x46001000
    ctx->pc = 0x29c658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29c65c:
    // 0x29c65c: 0x46000086
    ctx->pc = 0x29c65cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x29c660: 0x4602a034
    ctx->pc = 0x29c660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c664: 0x0
    ctx->pc = 0x29c664u;
    // NOP
    // 0x29c668: 0x45030001
    ctx->pc = 0x29C668u;
    {
        const bool branch_taken_0x29c668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c668) {
            ctx->pc = 0x29C66Cu;
            ctx->f[2] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x29C670u;
            goto label_29c670;
        }
    }
    ctx->pc = 0x29C670u;
label_29c670:
    // 0x29c670: 0x4600a307
    ctx->pc = 0x29c670u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x29c674: 0x460c1034
    ctx->pc = 0x29c674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c678: 0x0
    ctx->pc = 0x29c678u;
    // NOP
    // 0x29c67c: 0x45030001
    ctx->pc = 0x29C67Cu;
    {
        const bool branch_taken_0x29c67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c67c) {
            ctx->pc = 0x29C680u;
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->pc = 0x29C684u;
            goto label_29c684;
        }
    }
    ctx->pc = 0x29C684u;
label_29c684:
    // 0x29c684: 0xc7a00004
    ctx->pc = 0x29c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c688: 0x46001000
    ctx->pc = 0x29c688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c68c: 0xe7a00004
    ctx->pc = 0x29c68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c690: 0xc7a1006c
    ctx->pc = 0x29c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c694: 0xc7a00000
    ctx->pc = 0x29c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c698: 0x46000881
    ctx->pc = 0x29c698u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c69c: 0x3c014049
    ctx->pc = 0x29c69cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29c6a0: 0x34210fdb
    ctx->pc = 0x29c6a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c6a4: 0x44810000
    ctx->pc = 0x29c6a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c6a8: 0x46020034
    ctx->pc = 0x29c6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c6ac: 0x45000006
    ctx->pc = 0x29C6ACu;
    {
        const bool branch_taken_0x29c6ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c6ac) {
            ctx->pc = 0x29C6C8u;
            goto label_29c6c8;
        }
    }
    ctx->pc = 0x29C6B4u;
    // 0x29c6b4: 0x3c0140c9
    ctx->pc = 0x29c6b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c6b8: 0x34210fdb
    ctx->pc = 0x29c6b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c6bc: 0x44810000
    ctx->pc = 0x29c6bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c6c0: 0x1000000c
    ctx->pc = 0x29C6C0u;
    {
        const bool branch_taken_0x29c6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C6C4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x29c6c0) {
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6C8u;
label_29c6c8:
    // 0x29c6c8: 0x3c01c049
    ctx->pc = 0x29c6c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29c6cc: 0x34210fdb
    ctx->pc = 0x29c6ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c6d0: 0x44810000
    ctx->pc = 0x29c6d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c6d4: 0x46001036
    ctx->pc = 0x29c6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c6d8: 0x0
    ctx->pc = 0x29c6d8u;
    // NOP
    // 0x29c6dc: 0x45020005
    ctx->pc = 0x29C6DCu;
    {
        const bool branch_taken_0x29c6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c6dc) {
            ctx->pc = 0x29C6E0u;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6E4u;
    // 0x29c6e4: 0x3c0140c9
    ctx->pc = 0x29c6e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29c6e8: 0x34210fdb
    ctx->pc = 0x29c6e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29c6ec: 0x44810000
    ctx->pc = 0x29c6ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c6f0: 0x46001000
    ctx->pc = 0x29c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29c6f4:
    // 0x29c6f4: 0x46000086
    ctx->pc = 0x29c6f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x29c6f8: 0x4602b034
    ctx->pc = 0x29c6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c6fc: 0x0
    ctx->pc = 0x29c6fcu;
    // NOP
    // 0x29c700: 0x45030001
    ctx->pc = 0x29C700u;
    {
        const bool branch_taken_0x29c700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c700) {
            ctx->pc = 0x29C704u;
            ctx->f[2] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x29C708u;
            goto label_29c708;
        }
    }
    ctx->pc = 0x29C708u;
label_29c708:
    // 0x29c708: 0x4600b387
    ctx->pc = 0x29c708u;
    ctx->f[14] = FPU_NEG_S(ctx->f[22]);
    // 0x29c70c: 0x460e1034
    ctx->pc = 0x29c70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c710: 0x0
    ctx->pc = 0x29c710u;
    // NOP
    // 0x29c714: 0x45030001
    ctx->pc = 0x29C714u;
    {
        const bool branch_taken_0x29c714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c714) {
            ctx->pc = 0x29C718u;
            ctx->f[2] = FPU_MOV_S(ctx->f[14]);
            ctx->pc = 0x29C71Cu;
            goto label_29c71c;
        }
    }
    ctx->pc = 0x29C71Cu;
label_29c71c:
    // 0x29c71c: 0xc7a00000
    ctx->pc = 0x29c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c720: 0x46001000
    ctx->pc = 0x29c720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29c724: 0xe7a00000
    ctx->pc = 0x29c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c728: 0x260202d
    ctx->pc = 0x29c728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c72c: 0xc0b5a4e
    ctx->pc = 0x29C72Cu;
    SET_GPR_U32(ctx, 31, 0x29C734u);
    ctx->pc = 0x29C730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C734u; }
    }
    if (ctx->pc != 0x29C734u) { return; }
    ctx->pc = 0x29C734u;
    // 0x29c734: 0xdfbf00b0
    ctx->pc = 0x29c734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29c738: 0xdfb300a0
    ctx->pc = 0x29c738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29c73c: 0xdfb20090
    ctx->pc = 0x29c73cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c740: 0xdfb10080
    ctx->pc = 0x29c740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c744: 0xdfb00070
    ctx->pc = 0x29c744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c748: 0xc7b700d8
    ctx->pc = 0x29c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29c74c: 0xc7b600d0
    ctx->pc = 0x29c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29c750: 0xc7b500c8
    ctx->pc = 0x29c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29c754: 0xc7b400c0
    ctx->pc = 0x29c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c758: 0x3e00008
    ctx->pc = 0x29C758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C75Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C47Cu: goto label_29c47c;
            case 0x29C484u: goto label_29c484;
            case 0x29C4BCu: goto label_29c4bc;
            case 0x29C4E8u: goto label_29c4e8;
            case 0x29C514u: goto label_29c514;
            case 0x29C528u: goto label_29c528;
            case 0x29C570u: goto label_29c570;
            case 0x29C59Cu: goto label_29c59c;
            case 0x29C5C8u: goto label_29c5c8;
            case 0x29C5DCu: goto label_29c5dc;
            case 0x29C630u: goto label_29c630;
            case 0x29C65Cu: goto label_29c65c;
            case 0x29C670u: goto label_29c670;
            case 0x29C684u: goto label_29c684;
            case 0x29C6C8u: goto label_29c6c8;
            case 0x29C6F4u: goto label_29c6f4;
            case 0x29C708u: goto label_29c708;
            case 0x29C71Cu: goto label_29c71c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C760u;
}
