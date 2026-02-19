#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_satellite
// Address: 0x26c3f8 - 0x26c5c8
void MoveCam_satellite_0x26c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26c3f8u;

    // 0x26c3f8: 0x27bdff80
    ctx->pc = 0x26c3f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26c3fc: 0xffbf0070
    ctx->pc = 0x26c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26c400: 0xffb00060
    ctx->pc = 0x26c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x26c404: 0x240301a0
    ctx->pc = 0x26c404u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26c408: 0x831818
    ctx->pc = 0x26c408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26c40c: 0x3c020034
    ctx->pc = 0x26c40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c410: 0x2442eb60
    ctx->pc = 0x26c410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c414: 0x628021
    ctx->pc = 0x26c414u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c418: 0x3c020032
    ctx->pc = 0x26c418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c41c: 0x8c42080c
    ctx->pc = 0x26c41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x26c420: 0x14400066
    ctx->pc = 0x26C420u;
    {
        const bool branch_taken_0x26c420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26C424u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x26c420) {
            ctx->pc = 0x26C5BCu;
            goto label_26c5bc;
        }
    }
    ctx->pc = 0x26C428u;
    // 0x26c428: 0x3c020032
    ctx->pc = 0x26c428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c42c: 0x8c420810
    ctx->pc = 0x26c42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x26c430: 0x54400063
    ctx->pc = 0x26C430u;
    {
        const bool branch_taken_0x26c430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26c430) {
            ctx->pc = 0x26C434u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->pc = 0x26C5C0u;
            goto label_26c5c0;
        }
    }
    ctx->pc = 0x26C438u;
    // 0x26c438: 0x3c020034
    ctx->pc = 0x26c438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c43c: 0x8c42f914
    ctx->pc = 0x26c43cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26c440: 0x1040005e
    ctx->pc = 0x26C440u;
    {
        const bool branch_taken_0x26c440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C444u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x26c440) {
            ctx->pc = 0x26C5BCu;
            goto label_26c5bc;
        }
    }
    ctx->pc = 0x26C448u;
    // 0x26c448: 0x5482005d
    ctx->pc = 0x26C448u;
    {
        const bool branch_taken_0x26c448 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x26c448) {
            ctx->pc = 0x26C44Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->pc = 0x26C5C0u;
            goto label_26c5c0;
        }
    }
    ctx->pc = 0x26C450u;
    // 0x26c450: 0xc60000b4
    ctx->pc = 0x26c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c454: 0x3c013ae4
    ctx->pc = 0x26c454u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15076 << 16));
    // 0x26c458: 0x3421c389
    ctx->pc = 0x26c458u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26c45c: 0x44810800
    ctx->pc = 0x26c45cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c460: 0x46010040
    ctx->pc = 0x26c460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c464: 0x3c014049
    ctx->pc = 0x26c464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26c468: 0x34210fdb
    ctx->pc = 0x26c468u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26c46c: 0x44810000
    ctx->pc = 0x26c46cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c470: 0x46010034
    ctx->pc = 0x26c470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c474: 0x0
    ctx->pc = 0x26c474u;
    // NOP
    // 0x26c478: 0x45000006
    ctx->pc = 0x26C478u;
    {
        const bool branch_taken_0x26c478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C47Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26c478) {
            ctx->pc = 0x26C494u;
            goto label_26c494;
        }
    }
    ctx->pc = 0x26C480u;
    // 0x26c480: 0x3c0140c9
    ctx->pc = 0x26c480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26c484: 0x34210fdb
    ctx->pc = 0x26c484u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26c488: 0x44810000
    ctx->pc = 0x26c488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c48c: 0x1000000d
    ctx->pc = 0x26C48Cu;
    {
        const bool branch_taken_0x26c48c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C490u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26c48c) {
            ctx->pc = 0x26C4C4u;
            goto label_26c4c4;
        }
    }
    ctx->pc = 0x26C494u;
label_26c494:
    // 0x26c494: 0xc60100b4
    ctx->pc = 0x26c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c498: 0x3c01c049
    ctx->pc = 0x26c498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26c49c: 0x34210fdb
    ctx->pc = 0x26c49cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26c4a0: 0x44810000
    ctx->pc = 0x26c4a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c4a4: 0x46000836
    ctx->pc = 0x26c4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c4a8: 0x0
    ctx->pc = 0x26c4a8u;
    // NOP
    // 0x26c4ac: 0x45020005
    ctx->pc = 0x26C4ACu;
    {
        const bool branch_taken_0x26c4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c4ac) {
            ctx->pc = 0x26C4B0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26C4C4u;
            goto label_26c4c4;
        }
    }
    ctx->pc = 0x26C4B4u;
    // 0x26c4b4: 0x3c0140c9
    ctx->pc = 0x26c4b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26c4b8: 0x34210fdb
    ctx->pc = 0x26c4b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26c4bc: 0x44810000
    ctx->pc = 0x26c4bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c4c0: 0x46000800
    ctx->pc = 0x26c4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26c4c4:
    // 0x26c4c4: 0xe60000b4
    ctx->pc = 0x26c4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26c4c8: 0xc60000d0
    ctx->pc = 0x26c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c4cc: 0x3c013f7a
    ctx->pc = 0x26c4ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16250 << 16));
    // 0x26c4d0: 0x3421e148
    ctx->pc = 0x26c4d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 57672));
    // 0x26c4d4: 0x44810800
    ctx->pc = 0x26c4d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c4d8: 0x0
    ctx->pc = 0x26c4d8u;
    // NOP
    // 0x26c4dc: 0x0
    ctx->pc = 0x26c4dcu;
    // NOP
    // 0x26c4e0: 0x46010003
    ctx->pc = 0x26c4e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x26c4e4: 0x3c014080
    ctx->pc = 0x26c4e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x26c4e8: 0x44810800
    ctx->pc = 0x26c4e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c4ec: 0x46010034
    ctx->pc = 0x26c4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c4f0: 0x0
    ctx->pc = 0x26c4f0u;
    // NOP
    // 0x26c4f4: 0x45010008
    ctx->pc = 0x26C4F4u;
    {
        const bool branch_taken_0x26c4f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C4F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        if (branch_taken_0x26c4f4) {
            ctx->pc = 0x26C518u;
            goto label_26c518;
        }
    }
    ctx->pc = 0x26C4FCu;
    // 0x26c4fc: 0xc60000d0
    ctx->pc = 0x26c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c500: 0x3c0142a0
    ctx->pc = 0x26c500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x26c504: 0x44810800
    ctx->pc = 0x26c504u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26c508: 0x46000834
    ctx->pc = 0x26c508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c50c: 0x0
    ctx->pc = 0x26c50cu;
    // NOP
    // 0x26c510: 0x45020003
    ctx->pc = 0x26C510u;
    {
        const bool branch_taken_0x26c510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c510) {
            ctx->pc = 0x26C514u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
            ctx->pc = 0x26C520u;
            goto label_26c520;
        }
    }
    ctx->pc = 0x26C518u;
label_26c518:
    // 0x26c518: 0xe60100d0
    ctx->pc = 0x26c518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x26c51c: 0xae000090
    ctx->pc = 0x26c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_26c520:
    // 0x26c520: 0xae000094
    ctx->pc = 0x26c520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x26c524: 0xae000098
    ctx->pc = 0x26c524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x26c528: 0xae0000a0
    ctx->pc = 0x26c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x26c52c: 0xae0000a4
    ctx->pc = 0x26c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x26c530: 0xae0000a8
    ctx->pc = 0x26c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x26c534: 0x3c020034
    ctx->pc = 0x26c534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c538: 0x2442eb60
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c53c: 0xc4400140
    ctx->pc = 0x26c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c540: 0xe6000140
    ctx->pc = 0x26c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26c544: 0xc4400144
    ctx->pc = 0x26c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c548: 0xe6000144
    ctx->pc = 0x26c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26c54c: 0xc4400148
    ctx->pc = 0x26c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c550: 0xe6000148
    ctx->pc = 0x26c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x26c554: 0x3a0202d
    ctx->pc = 0x26c554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c558: 0xc0b5ae8
    ctx->pc = 0x26C558u;
    SET_GPR_U32(ctx, 31, 0x26C560u);
    ctx->pc = 0x26C55Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C560u; }
    }
    if (ctx->pc != 0x26C560u) { return; }
    ctx->pc = 0x26C560u;
    // 0x26c560: 0xafa00040
    ctx->pc = 0x26c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26c564: 0xafa00044
    ctx->pc = 0x26c564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26c568: 0xc60000d0
    ctx->pc = 0x26c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c56c: 0xe7a00048
    ctx->pc = 0x26c56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26c570: 0x27a40040
    ctx->pc = 0x26c570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c574: 0x27a50050
    ctx->pc = 0x26c574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26c578: 0xc0b57a2
    ctx->pc = 0x26C578u;
    SET_GPR_U32(ctx, 31, 0x26C580u);
    ctx->pc = 0x26C57Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C580u; }
    }
    if (ctx->pc != 0x26C580u) { return; }
    ctx->pc = 0x26C580u;
    // 0x26c580: 0xc6000140
    ctx->pc = 0x26c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c584: 0xc7a10050
    ctx->pc = 0x26c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c588: 0x46010000
    ctx->pc = 0x26c588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c58c: 0xe6000070
    ctx->pc = 0x26c58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26c590: 0xc6000144
    ctx->pc = 0x26c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c594: 0xc7a10054
    ctx->pc = 0x26c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c598: 0x46010000
    ctx->pc = 0x26c598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c59c: 0xe6000074
    ctx->pc = 0x26c59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26c5a0: 0xc6000148
    ctx->pc = 0x26c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c5a4: 0xc7a10058
    ctx->pc = 0x26c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c5a8: 0x46010000
    ctx->pc = 0x26c5a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c5ac: 0xe6000078
    ctx->pc = 0x26c5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26c5b0: 0x3c020034
    ctx->pc = 0x26c5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c5b4: 0xac40f520
    ctx->pc = 0x26c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
    // 0x26c5b8: 0xdfbf0070
    ctx->pc = 0x26c5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26c5bc:
    // 0x26c5bc: 0xdfb00060
    ctx->pc = 0x26c5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26c5c0:
    // 0x26c5c0: 0x3e00008
    ctx->pc = 0x26C5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C5C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C494u: goto label_26c494;
            case 0x26C4C4u: goto label_26c4c4;
            case 0x26C518u: goto label_26c518;
            case 0x26C520u: goto label_26c520;
            case 0x26C5BCu: goto label_26c5bc;
            case 0x26C5C0u: goto label_26c5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C5C8u;
}
