#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossAvgPos
// Address: 0x29fc98 - 0x29fe78
void GetBossAvgPos_0x29fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29fc98u;

    // 0x29fc98: 0x27bdffe0
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29fc9c: 0x80482d
    ctx->pc = 0x29fc9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fca0: 0x3c020036
    ctx->pc = 0x29fca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29fca4: 0x8c42d930
    ctx->pc = 0x29fca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29fca8: 0x44800000
    ctx->pc = 0x29fca8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29fcac: 0x46006036
    ctx->pc = 0x29fcacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fcb0: 0x0
    ctx->pc = 0x29fcb0u;
    // NOP
    // 0x29fcb4: 0x45000008
    ctx->pc = 0x29FCB4u;
    {
        const bool branch_taken_0x29fcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FCB8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 80));
        if (branch_taken_0x29fcb4) {
            ctx->pc = 0x29FCD8u;
            goto label_29fcd8;
        }
    }
    ctx->pc = 0x29FCBCu;
    // 0x29fcbc: 0xc4400050
    ctx->pc = 0x29fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fcc0: 0xe5200000
    ctx->pc = 0x29fcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x29fcc4: 0xc5000004
    ctx->pc = 0x29fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fcc8: 0xe5200004
    ctx->pc = 0x29fcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x29fccc: 0xc5000008
    ctx->pc = 0x29fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fcd0: 0x10000067
    ctx->pc = 0x29FCD0u;
    {
        const bool branch_taken_0x29fcd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FCD4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
        if (branch_taken_0x29fcd0) {
            ctx->pc = 0x29FE70u;
            goto label_29fe70;
        }
    }
    ctx->pc = 0x29FCD8u;
label_29fcd8:
    // 0x29fcd8: 0x14e0001f
    ctx->pc = 0x29FCD8u;
    {
        const bool branch_taken_0x29fcd8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x29fcd8) {
            ctx->pc = 0x29FD58u;
            goto label_29fd58;
        }
    }
    ctx->pc = 0x29FCE0u;
    // 0x29fce0: 0x3c013f80
    ctx->pc = 0x29fce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29fce4: 0x44810800
    ctx->pc = 0x29fce4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29fce8: 0x46016300
    ctx->pc = 0x29fce8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x29fcec: 0x0
    ctx->pc = 0x29fcecu;
    // NOP
    // 0x29fcf0: 0x0
    ctx->pc = 0x29fcf0u;
    // NOP
    // 0x29fcf4: 0x460c0883
    ctx->pc = 0x29fcf4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[12];
    // 0x29fcf8: 0x46016041
    ctx->pc = 0x29fcf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x29fcfc: 0x46020842
    ctx->pc = 0x29fcfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29fd00: 0xc5230000
    ctx->pc = 0x29fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29fd04: 0x460308c2
    ctx->pc = 0x29fd04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x29fd08: 0xe5230000
    ctx->pc = 0x29fd08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x29fd0c: 0xc5240004
    ctx->pc = 0x29fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29fd10: 0x46040902
    ctx->pc = 0x29fd10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29fd14: 0xe5240004
    ctx->pc = 0x29fd14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x29fd18: 0xc5200008
    ctx->pc = 0x29fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd1c: 0x46000842
    ctx->pc = 0x29fd1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29fd20: 0xe5210008
    ctx->pc = 0x29fd20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x29fd24: 0xc5000000
    ctx->pc = 0x29fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd28: 0x46001002
    ctx->pc = 0x29fd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29fd2c: 0x46030000
    ctx->pc = 0x29fd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29fd30: 0xe5200000
    ctx->pc = 0x29fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x29fd34: 0xc5000004
    ctx->pc = 0x29fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd38: 0x46001002
    ctx->pc = 0x29fd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29fd3c: 0x46040000
    ctx->pc = 0x29fd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x29fd40: 0xe5200004
    ctx->pc = 0x29fd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x29fd44: 0xc5000008
    ctx->pc = 0x29fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd48: 0x46001082
    ctx->pc = 0x29fd48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29fd4c: 0x46011080
    ctx->pc = 0x29fd4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29fd50: 0x10000047
    ctx->pc = 0x29FD50u;
    {
        const bool branch_taken_0x29fd50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FD54u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
        if (branch_taken_0x29fd50) {
            ctx->pc = 0x29FE70u;
            goto label_29fe70;
        }
    }
    ctx->pc = 0x29FD58u;
label_29fd58:
    // 0x29fd58: 0x10c00007
    ctx->pc = 0x29FD58u;
    {
        const bool branch_taken_0x29fd58 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x29fd58) {
            ctx->pc = 0x29FD78u;
            goto label_29fd78;
        }
    }
    ctx->pc = 0x29FD60u;
    // 0x29fd60: 0xc4c00000
    ctx->pc = 0x29fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd64: 0xe7a00010
    ctx->pc = 0x29fd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29fd68: 0xc4c00004
    ctx->pc = 0x29fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd6c: 0xe7a00014
    ctx->pc = 0x29fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29fd70: 0x10000006
    ctx->pc = 0x29FD70u;
    {
        const bool branch_taken_0x29fd70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FD74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29fd70) {
            ctx->pc = 0x29FD8Cu;
            goto label_29fd8c;
        }
    }
    ctx->pc = 0x29FD78u;
label_29fd78:
    // 0x29fd78: 0x3c01e0ad
    ctx->pc = 0x29fd78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57517 << 16));
    // 0x29fd7c: 0x342178ec
    ctx->pc = 0x29fd7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x29fd80: 0x44810000
    ctx->pc = 0x29fd80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fd84: 0xe7a00010
    ctx->pc = 0x29fd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29fd88: 0xe7a00014
    ctx->pc = 0x29fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_29fd8c:
    // 0x29fd8c: 0x10a00007
    ctx->pc = 0x29FD8Cu;
    {
        const bool branch_taken_0x29fd8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FD90u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x29fd8c) {
            ctx->pc = 0x29FDACu;
            goto label_29fdac;
        }
    }
    ctx->pc = 0x29FD94u;
    // 0x29fd94: 0xc4a00000
    ctx->pc = 0x29fd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fd98: 0xe7a00000
    ctx->pc = 0x29fd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29fd9c: 0xc4a00004
    ctx->pc = 0x29fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fda0: 0xe7a00004
    ctx->pc = 0x29fda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29fda4: 0x10000006
    ctx->pc = 0x29FDA4u;
    {
        const bool branch_taken_0x29fda4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FDA8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29fda4) {
            ctx->pc = 0x29FDC0u;
            goto label_29fdc0;
        }
    }
    ctx->pc = 0x29FDACu;
label_29fdac:
    // 0x29fdac: 0x3c0160ad
    ctx->pc = 0x29fdacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)24749 << 16));
    // 0x29fdb0: 0x342178ec
    ctx->pc = 0x29fdb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x29fdb4: 0x44810000
    ctx->pc = 0x29fdb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fdb8: 0xe7a00000
    ctx->pc = 0x29fdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29fdbc: 0xe7a00004
    ctx->pc = 0x29fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29fdc0:
    // 0x29fdc0: 0xe7a00008
    ctx->pc = 0x29fdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29fdc4: 0x282d
    ctx->pc = 0x29fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdc8: 0x27a60010
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29fdcc: 0x3c013f00
    ctx->pc = 0x29fdccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29fdd0: 0x44811000
    ctx->pc = 0x29fdd0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x29fdd4: 0x0
    ctx->pc = 0x29fdd4u;
    // NOP
label_29fdd8:
    // 0x29fdd8: 0x51080
    ctx->pc = 0x29fdd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fddc: 0x3a21821
    ctx->pc = 0x29fddcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x29fde0: 0x481021
    ctx->pc = 0x29fde0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29fde4: 0xc4610000
    ctx->pc = 0x29fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fde8: 0xc4400000
    ctx->pc = 0x29fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fdec: 0x46000834
    ctx->pc = 0x29fdecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fdf0: 0x0
    ctx->pc = 0x29fdf0u;
    // NOP
    // 0x29fdf4: 0x45010004
    ctx->pc = 0x29FDF4u;
    {
        const bool branch_taken_0x29fdf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FDF8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x29fdf4) {
            ctx->pc = 0x29FE08u;
            goto label_29fe08;
        }
    }
    ctx->pc = 0x29FDFCu;
    // 0x29fdfc: 0x51080
    ctx->pc = 0x29fdfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fe00: 0x481021
    ctx->pc = 0x29fe00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29fe04: 0xc4400000
    ctx->pc = 0x29fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fe08:
    // 0x29fe08: 0xe4600000
    ctx->pc = 0x29fe08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29fe0c: 0x51080
    ctx->pc = 0x29fe0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fe10: 0xc21821
    ctx->pc = 0x29fe10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29fe14: 0x481021
    ctx->pc = 0x29fe14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29fe18: 0xc4610000
    ctx->pc = 0x29fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fe1c: 0xc4400000
    ctx->pc = 0x29fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe20: 0x46010034
    ctx->pc = 0x29fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fe24: 0x0
    ctx->pc = 0x29fe24u;
    // NOP
    // 0x29fe28: 0x45010004
    ctx->pc = 0x29FE28u;
    {
        const bool branch_taken_0x29fe28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FE2Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x29fe28) {
            ctx->pc = 0x29FE3Cu;
            goto label_29fe3c;
        }
    }
    ctx->pc = 0x29FE30u;
    // 0x29fe30: 0x51080
    ctx->pc = 0x29fe30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fe34: 0x481021
    ctx->pc = 0x29fe34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29fe38: 0xc4400000
    ctx->pc = 0x29fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29fe3c:
    // 0x29fe3c: 0xe4600000
    ctx->pc = 0x29fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29fe40: 0x51080
    ctx->pc = 0x29fe40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29fe44: 0x492021
    ctx->pc = 0x29fe44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29fe48: 0x3a21821
    ctx->pc = 0x29fe48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x29fe4c: 0xc21021
    ctx->pc = 0x29fe4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29fe50: 0xc4600000
    ctx->pc = 0x29fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe54: 0xc4410000
    ctx->pc = 0x29fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fe58: 0x46010000
    ctx->pc = 0x29fe58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29fe5c: 0x46020002
    ctx->pc = 0x29fe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29fe60: 0x24a50001
    ctx->pc = 0x29fe60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x29fe64: 0x28a20003
    ctx->pc = 0x29fe64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x29fe68: 0x1440ffdb
    ctx->pc = 0x29FE68u;
    {
        const bool branch_taken_0x29fe68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29FE6Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x29fe68) {
            ctx->pc = 0x29FDD8u;
            goto label_29fdd8;
        }
    }
    ctx->pc = 0x29FE70u;
label_29fe70:
    // 0x29fe70: 0x3e00008
    ctx->pc = 0x29FE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FE74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29FCD8u: goto label_29fcd8;
            case 0x29FD58u: goto label_29fd58;
            case 0x29FD78u: goto label_29fd78;
            case 0x29FD8Cu: goto label_29fd8c;
            case 0x29FDACu: goto label_29fdac;
            case 0x29FDC0u: goto label_29fdc0;
            case 0x29FDD8u: goto label_29fdd8;
            case 0x29FE08u: goto label_29fe08;
            case 0x29FE3Cu: goto label_29fe3c;
            case 0x29FE70u: goto label_29fe70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29FE78u;
}
