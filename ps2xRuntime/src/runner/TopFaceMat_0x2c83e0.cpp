#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TopFaceMat
// Address: 0x2c83e0 - 0x2c8534
void TopFaceMat_0x2c83e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c83e0u;

    // 0x2c83e0: 0x27bdffc0
    ctx->pc = 0x2c83e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c83e4: 0xffbf0030
    ctx->pc = 0x2c83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c83e8: 0xffb00020
    ctx->pc = 0x2c83e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c83ec: 0x80802d
    ctx->pc = 0x2c83ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c83f0: 0x3c02003a
    ctx->pc = 0x2c83f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c83f4: 0x8c421bd0
    ctx->pc = 0x2c83f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c83f8: 0xc44300a0
    ctx->pc = 0x2c83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c83fc: 0xc6000030
    ctx->pc = 0x2c83fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8400: 0x460018c1
    ctx->pc = 0x2c8400u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c8404: 0xe7a30000
    ctx->pc = 0x2c8404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c8408: 0xc44400a4
    ctx->pc = 0x2c8408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c840c: 0xc6000034
    ctx->pc = 0x2c840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8410: 0x46002101
    ctx->pc = 0x2c8410u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c8414: 0xe7a40004
    ctx->pc = 0x2c8414u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c8418: 0xc44000a8
    ctx->pc = 0x2c8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c841c: 0xc6010038
    ctx->pc = 0x2c841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8420: 0x46010001
    ctx->pc = 0x2c8420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8424: 0xe7a00008
    ctx->pc = 0x2c8424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c8428: 0xc6050028
    ctx->pc = 0x2c8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c842c: 0x46052042
    ctx->pc = 0x2c842cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2c8430: 0xc6060024
    ctx->pc = 0x2c8430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c8434: 0x46060082
    ctx->pc = 0x2c8434u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c8438: 0x46020841
    ctx->pc = 0x2c8438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c843c: 0xe7a10010
    ctx->pc = 0x2c843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c8440: 0xc6010020
    ctx->pc = 0x2c8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8444: 0x46010002
    ctx->pc = 0x2c8444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8448: 0x46051942
    ctx->pc = 0x2c8448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2c844c: 0x46050001
    ctx->pc = 0x2c844cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c8450: 0xe7a00014
    ctx->pc = 0x2c8450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c8454: 0x460618c2
    ctx->pc = 0x2c8454u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c8458: 0x46012102
    ctx->pc = 0x2c8458u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2c845c: 0x460418c1
    ctx->pc = 0x2c845cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c8460: 0xe7a30018
    ctx->pc = 0x2c8460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c8464: 0xc0b58a4
    ctx->pc = 0x2C8464u;
    SET_GPR_U32(ctx, 31, 0x2C846Cu);
    ctx->pc = 0x2C8468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C846Cu; }
    }
    if (ctx->pc != 0x2C846Cu) { return; }
    ctx->pc = 0x2C846Cu;
    // 0x2c846c: 0x3c013c23
    ctx->pc = 0x2c846cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2c8470: 0x3421d70a
    ctx->pc = 0x2c8470u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2c8474: 0x44810800
    ctx->pc = 0x2c8474u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c8478: 0x46010034
    ctx->pc = 0x2c8478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c847c: 0x0
    ctx->pc = 0x2c847cu;
    // NOP
    // 0x2c8480: 0x45000014
    ctx->pc = 0x2C8480u;
    {
        const bool branch_taken_0x2c8480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8484u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        if (branch_taken_0x2c8480) {
            ctx->pc = 0x2C84D4u;
            goto label_2c84d4;
        }
    }
    ctx->pc = 0x2C8488u;
    // 0x2c8488: 0xae000010
    ctx->pc = 0x2c8488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c848c: 0x3c013f80
    ctx->pc = 0x2c848cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c8490: 0x44810000
    ctx->pc = 0x2c8490u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c8494: 0xe6000014
    ctx->pc = 0x2c8494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c8498: 0xae000018
    ctx->pc = 0x2c8498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c849c: 0xc6030028
    ctx->pc = 0x2c849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c84a0: 0xc6020010
    ctx->pc = 0x2c84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c84a4: 0xc6010024
    ctx->pc = 0x2c84a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c84a8: 0x46020842
    ctx->pc = 0x2c84a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c84ac: 0x46011801
    ctx->pc = 0x2c84acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2c84b0: 0xe6000000
    ctx->pc = 0x2c84b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c84b4: 0xc6040020
    ctx->pc = 0x2c84b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c84b8: 0x46022002
    ctx->pc = 0x2c84b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2c84bc: 0x460218c2
    ctx->pc = 0x2c84bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c84c0: 0x46030001
    ctx->pc = 0x2c84c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c84c4: 0xe6000004
    ctx->pc = 0x2c84c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c84c8: 0x46040841
    ctx->pc = 0x2c84c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c84cc: 0x10000015
    ctx->pc = 0x2C84CCu;
    {
        const bool branch_taken_0x2c84cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C84D0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x2c84cc) {
            ctx->pc = 0x2C8524u;
            goto label_2c8524;
        }
    }
    ctx->pc = 0x2C84D4u;
label_2c84d4:
    // 0x2c84d4: 0xe6060000
    ctx->pc = 0x2c84d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c84d8: 0xc7a50014
    ctx->pc = 0x2c84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c84dc: 0xe6050004
    ctx->pc = 0x2c84dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c84e0: 0xc7a30018
    ctx->pc = 0x2c84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c84e4: 0xe6030008
    ctx->pc = 0x2c84e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c84e8: 0xc6040024
    ctx->pc = 0x2c84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c84ec: 0x46032002
    ctx->pc = 0x2c84ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2c84f0: 0xc6020028
    ctx->pc = 0x2c84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c84f4: 0x46051042
    ctx->pc = 0x2c84f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2c84f8: 0x46010001
    ctx->pc = 0x2c84f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c84fc: 0xe6000010
    ctx->pc = 0x2c84fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c8500: 0x46061082
    ctx->pc = 0x2c8500u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2c8504: 0xc6000020
    ctx->pc = 0x2c8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8508: 0x460300c2
    ctx->pc = 0x2c8508u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c850c: 0x46031081
    ctx->pc = 0x2c850cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2c8510: 0xe6020014
    ctx->pc = 0x2c8510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c8514: 0x46050002
    ctx->pc = 0x2c8514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c8518: 0x46062102
    ctx->pc = 0x2c8518u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c851c: 0x46040001
    ctx->pc = 0x2c851cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c8520: 0xe6000018
    ctx->pc = 0x2c8520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2c8524:
    // 0x2c8524: 0xdfbf0030
    ctx->pc = 0x2c8524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8528: 0xdfb00020
    ctx->pc = 0x2c8528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c852c: 0x3e00008
    ctx->pc = 0x2C852Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C84D4u: goto label_2c84d4;
            case 0x2C8524u: goto label_2c8524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8534u;
}
