#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateMat3Norm
// Address: 0x21d570 - 0x21d634
void CreateMat3Norm_0x21d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21d570u;

    // 0x21d570: 0xc4a50004
    ctx->pc = 0x21d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21d574: 0x3c013f7f
    ctx->pc = 0x21d574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16255 << 16));
    // 0x21d578: 0x3421be77
    ctx->pc = 0x21d578u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48759));
    // 0x21d57c: 0x44810000
    ctx->pc = 0x21d57cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d580: 0x46050034
    ctx->pc = 0x21d580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d584: 0x0
    ctx->pc = 0x21d584u;
    // NOP
    // 0x21d588: 0x45000005
    ctx->pc = 0x21D588u;
    {
        const bool branch_taken_0x21d588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D58Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d588) {
            ctx->pc = 0x21D5A0u;
            goto label_21d5a0;
        }
    }
    ctx->pc = 0x21D590u;
    // 0x21d590: 0x3c04003a
    ctx->pc = 0x21d590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21d594: 0x24842550
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x21d598: 0x80b549e
    ctx->pc = 0x21D598u;
    ctx->pc = 0x21D59Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    CopyMat3_0x2d5278(rdram, ctx, runtime); return;
    ctx->pc = 0x21D5A0u;
label_21d5a0:
    // 0x21d5a0: 0x3c01bf7f
    ctx->pc = 0x21d5a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49023 << 16));
    // 0x21d5a4: 0x3421be77
    ctx->pc = 0x21d5a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48759));
    // 0x21d5a8: 0x44810000
    ctx->pc = 0x21d5a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d5ac: 0x46002834
    ctx->pc = 0x21d5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d5b0: 0x0
    ctx->pc = 0x21d5b0u;
    // NOP
    // 0x21d5b4: 0x45020005
    ctx->pc = 0x21D5B4u;
    {
        const bool branch_taken_0x21d5b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d5b4) {
            ctx->pc = 0x21D5B8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x21D5CCu;
            goto label_21d5cc;
        }
    }
    ctx->pc = 0x21D5BCu;
    // 0x21d5bc: 0x3c04003a
    ctx->pc = 0x21d5bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21d5c0: 0x248425d0
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9680));
    // 0x21d5c4: 0x80b549e
    ctx->pc = 0x21D5C4u;
    ctx->pc = 0x21D5C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    CopyMat3_0x2d5278(rdram, ctx, runtime); return;
    ctx->pc = 0x21D5CCu;
label_21d5cc:
    // 0x21d5cc: 0x460c1042
    ctx->pc = 0x21d5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x21d5d0: 0xc4a30008
    ctx->pc = 0x21d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21d5d4: 0x460c1902
    ctx->pc = 0x21d5d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x21d5d8: 0x46002007
    ctx->pc = 0x21d5d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x21d5dc: 0xe4400000
    ctx->pc = 0x21d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21d5e0: 0xac400004
    ctx->pc = 0x21d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21d5e4: 0xe4410008
    ctx->pc = 0x21d5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21d5e8: 0xac40000c
    ctx->pc = 0x21d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21d5ec: 0xe4420010
    ctx->pc = 0x21d5ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x21d5f0: 0xe4450014
    ctx->pc = 0x21d5f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x21d5f4: 0xe4430018
    ctx->pc = 0x21d5f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x21d5f8: 0xac40001c
    ctx->pc = 0x21d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x21d5fc: 0x46000847
    ctx->pc = 0x21d5fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21d600: 0x46050842
    ctx->pc = 0x21d600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x21d604: 0xe4410020
    ctx->pc = 0x21d604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x21d608: 0x46052842
    ctx->pc = 0x21d608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x21d60c: 0x3c013f80
    ctx->pc = 0x21d60cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21d610: 0x44810000
    ctx->pc = 0x21d610u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d614: 0x46010001
    ctx->pc = 0x21d614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d618: 0x460c0002
    ctx->pc = 0x21d618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x21d61c: 0xe4400024
    ctx->pc = 0x21d61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x21d620: 0x46002807
    ctx->pc = 0x21d620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x21d624: 0x46040002
    ctx->pc = 0x21d624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21d628: 0xe4400028
    ctx->pc = 0x21d628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x21d62c: 0x3e00008
    ctx->pc = 0x21D62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D630u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D5A0u: goto label_21d5a0;
            case 0x21D5CCu: goto label_21d5cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D634u;
}
