#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowSetHang
// Address: 0x2d1408 - 0x2d1518
void MBWindowSetHang_0x2d1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1408u;

    // 0x2d1408: 0x27bdffd0
    ctx->pc = 0x2d1408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d140c: 0xffbf0010
    ctx->pc = 0x2d140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1410: 0xffb00000
    ctx->pc = 0x2d1410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1414: 0xe7b50028
    ctx->pc = 0x2d1414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1418: 0xe7b40020
    ctx->pc = 0x2d1418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d141c: 0x46006546
    ctx->pc = 0x2d141cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1420: 0x3c020036
    ctx->pc = 0x2d1420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d1424: 0x8c50dee0
    ctx->pc = 0x2d1424u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d1428: 0x3c02003a
    ctx->pc = 0x2d1428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d142c: 0x8c431bd0
    ctx->pc = 0x2d142cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d1430: 0x8e020010
    ctx->pc = 0x2d1430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d1434: 0xc4410024
    ctx->pc = 0x2d1434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1438: 0x46800860
    ctx->pc = 0x2d1438u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2d143c: 0xc4600018
    ctx->pc = 0x2d143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1440: 0x0
    ctx->pc = 0x2d1440u;
    // NOP
    // 0x2d1444: 0x0
    ctx->pc = 0x2d1444u;
    // NOP
    // 0x2d1448: 0x46010503
    ctx->pc = 0x2d1448u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x2d144c: 0x3c013f40
    ctx->pc = 0x2d144cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x2d1450: 0x44810000
    ctx->pc = 0x2d1450u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d1454: 0x4600a502
    ctx->pc = 0x2d1454u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d1458: 0x44800000
    ctx->pc = 0x2d1458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d145c: 0x46150034
    ctx->pc = 0x2d145cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1460: 0x0
    ctx->pc = 0x2d1460u;
    // NOP
    // 0x2d1464: 0x4502000c
    ctx->pc = 0x2D1464u;
    {
        const bool branch_taken_0x2d1464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1464) {
            ctx->pc = 0x2D1468u;
            ctx->f[20] = FPU_NEG_S(ctx->f[21]);
            ctx->pc = 0x2D1498u;
            goto label_2d1498;
        }
    }
    ctx->pc = 0x2D146Cu;
    // 0x2d146c: 0x3c013f00
    ctx->pc = 0x2d146cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d1470: 0x44816000
    ctx->pc = 0x2d1470u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d1474: 0xc0b9e86
    ctx->pc = 0x2D1474u;
    SET_GPR_U32(ctx, 31, 0x2D147Cu);
    ctx->pc = 0x2D1478u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->pc = 0x2E7A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x2e7a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D147Cu; }
    }
    if (ctx->pc != 0x2D147Cu) { return; }
    ctx->pc = 0x2D147Cu;
    // 0x2d147c: 0xc0b9d24
    ctx->pc = 0x2D147Cu;
    SET_GPR_U32(ctx, 31, 0x2D1484u);
    ctx->pc = 0x2D1480u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x2E7490u;
    {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x2e7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1484u; }
    }
    if (ctx->pc != 0x2D1484u) { return; }
    ctx->pc = 0x2D1484u;
    // 0x2d1484: 0x4600ab06
    ctx->pc = 0x2d1484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d1488: 0xc0b4492
    ctx->pc = 0x2D1488u;
    SET_GPR_U32(ctx, 31, 0x2D1490u);
    ctx->pc = 0x2D148Cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x2D1248u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetAng_0x2d1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1490u; }
    }
    if (ctx->pc != 0x2D1490u) { return; }
    ctx->pc = 0x2D1490u;
    // 0x2d1490: 0x10000012
    ctx->pc = 0x2D1490u;
    {
        const bool branch_taken_0x2d1490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d1490) {
            ctx->pc = 0x2D14DCu;
            goto label_2d14dc;
        }
    }
    ctx->pc = 0x2D1498u;
label_2d1498:
    // 0x2d1498: 0x3c013f00
    ctx->pc = 0x2d1498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d149c: 0x44816000
    ctx->pc = 0x2d149cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d14a0: 0xc0b9e86
    ctx->pc = 0x2D14A0u;
    SET_GPR_U32(ctx, 31, 0x2D14A8u);
    ctx->pc = 0x2D14A4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2E7A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x2e7a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14A8u; }
    }
    if (ctx->pc != 0x2D14A8u) { return; }
    ctx->pc = 0x2D14A8u;
    // 0x2d14a8: 0x8e020010
    ctx->pc = 0x2d14a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d14ac: 0xc44c0024
    ctx->pc = 0x2d14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d14b0: 0x46806320
    ctx->pc = 0x2d14b0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2d14b4: 0xc4410020
    ctx->pc = 0x2d14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d14b8: 0x46800860
    ctx->pc = 0x2d14b8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2d14bc: 0x0
    ctx->pc = 0x2d14bcu;
    // NOP
    // 0x2d14c0: 0x0
    ctx->pc = 0x2d14c0u;
    // NOP
    // 0x2d14c4: 0x46016303
    ctx->pc = 0x2d14c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x2d14c8: 0xc0b9d24
    ctx->pc = 0x2D14C8u;
    SET_GPR_U32(ctx, 31, 0x2D14D0u);
    ctx->pc = 0x2D14CCu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2E7490u;
    {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x2e7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14D0u; }
    }
    if (ctx->pc != 0x2D14D0u) { return; }
    ctx->pc = 0x2D14D0u;
    // 0x2d14d0: 0x4600a306
    ctx->pc = 0x2d14d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d14d4: 0xc0b4492
    ctx->pc = 0x2D14D4u;
    SET_GPR_U32(ctx, 31, 0x2D14DCu);
    ctx->pc = 0x2D14D8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x2D1248u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetAng_0x2d1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14DCu; }
    }
    if (ctx->pc != 0x2D14DCu) { return; }
    ctx->pc = 0x2D14DCu;
label_2d14dc:
    // 0x2d14dc: 0x3c014334
    ctx->pc = 0x2d14dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2d14e0: 0x44816000
    ctx->pc = 0x2d14e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d14e4: 0x460cab02
    ctx->pc = 0x2d14e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2d14e8: 0x3c013ea2
    ctx->pc = 0x2d14e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2d14ec: 0x3421f983
    ctx->pc = 0x2d14ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2d14f0: 0x44810000
    ctx->pc = 0x2d14f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d14f4: 0x3c02003a
    ctx->pc = 0x2d14f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d14f8: 0x46006302
    ctx->pc = 0x2d14f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2d14fc: 0xc44d14c0
    ctx->pc = 0x2d14fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d1500: 0xdfbf0010
    ctx->pc = 0x2d1500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1504: 0xdfb00000
    ctx->pc = 0x2d1504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1508: 0xc7b50028
    ctx->pc = 0x2d1508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d150c: 0xc7b40020
    ctx->pc = 0x2d150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1510: 0x80aae0e
    ctx->pc = 0x2D1510u;
    ctx->pc = 0x2D1514u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2AB838u;
    MBWindowProjection_0x2ab838(rdram, ctx, runtime); return;
    ctx->pc = 0x2D1518u;
}
