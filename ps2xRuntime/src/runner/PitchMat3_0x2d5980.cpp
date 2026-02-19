#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PitchMat3
// Address: 0x2d5980 - 0x2d5a2c
void PitchMat3_0x2d5980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5980u;

    // 0x2d5980: 0x27bdffd0
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5984: 0xffbf0010
    ctx->pc = 0x2d5984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5988: 0xffb00000
    ctx->pc = 0x2d5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d598c: 0xe7b50028
    ctx->pc = 0x2d598cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d5990: 0xe7b40020
    ctx->pc = 0x2d5990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d5994: 0x46006506
    ctx->pc = 0x2d5994u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d5998: 0x4600a045
    ctx->pc = 0x2d5998u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d599c: 0x3c0138d1
    ctx->pc = 0x2d599cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d59a0: 0x3421b717
    ctx->pc = 0x2d59a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d59a4: 0x44810000
    ctx->pc = 0x2d59a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d59a8: 0x46000834
    ctx->pc = 0x2d59a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d59ac: 0x0
    ctx->pc = 0x2d59acu;
    // NOP
    // 0x2d59b0: 0x45010018
    ctx->pc = 0x2D59B0u;
    {
        const bool branch_taken_0x2d59b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D59B4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d59b0) {
            ctx->pc = 0x2D5A14u;
            goto label_2d5a14;
        }
    }
    ctx->pc = 0x2D59B8u;
    // 0x2d59b8: 0xc0b9e4a
    ctx->pc = 0x2D59B8u;
    SET_GPR_U32(ctx, 31, 0x2D59C0u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D59C0u; }
    }
    if (ctx->pc != 0x2D59C0u) { return; }
    ctx->pc = 0x2D59C0u;
    // 0x2d59c0: 0x46000546
    ctx->pc = 0x2d59c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d59c4: 0xc0b9dce
    ctx->pc = 0x2D59C4u;
    SET_GPR_U32(ctx, 31, 0x2D59CCu);
    ctx->pc = 0x2D59C8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D59CCu; }
    }
    if (ctx->pc != 0x2D59CCu) { return; }
    ctx->pc = 0x2D59CCu;
    // 0x2d59cc: 0x46000106
    ctx->pc = 0x2d59ccu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2d59d0: 0x182d
    ctx->pc = 0x2d59d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59d4: 0x31080
    ctx->pc = 0x2d59d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2d59d8:
    // 0x2d59d8: 0x501021
    ctx->pc = 0x2d59d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d59dc: 0xc4420010
    ctx->pc = 0x2d59dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d59e0: 0x460220c2
    ctx->pc = 0x2d59e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d59e4: 0xc4410020
    ctx->pc = 0x2d59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d59e8: 0x4601a802
    ctx->pc = 0x2d59e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d59ec: 0x460018c1
    ctx->pc = 0x2d59ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d59f0: 0x46012042
    ctx->pc = 0x2d59f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d59f4: 0x4602a882
    ctx->pc = 0x2d59f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d59f8: 0x46020840
    ctx->pc = 0x2d59f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d59fc: 0xe4410020
    ctx->pc = 0x2d59fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2d5a00: 0xe4430010
    ctx->pc = 0x2d5a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2d5a04: 0x24630001
    ctx->pc = 0x2d5a04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5a08: 0x28620003
    ctx->pc = 0x2d5a08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d5a0c: 0x1440fff2
    ctx->pc = 0x2D5A0Cu;
    {
        const bool branch_taken_0x2d5a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5A10u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2d5a0c) {
            ctx->pc = 0x2D59D8u;
            goto label_2d59d8;
        }
    }
    ctx->pc = 0x2D5A14u;
label_2d5a14:
    // 0x2d5a14: 0xdfbf0010
    ctx->pc = 0x2d5a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5a18: 0xdfb00000
    ctx->pc = 0x2d5a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5a1c: 0xc7b50028
    ctx->pc = 0x2d5a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5a20: 0xc7b40020
    ctx->pc = 0x2d5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5a24: 0x3e00008
    ctx->pc = 0x2D5A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D59D8u: goto label_2d59d8;
            case 0x2D5A14u: goto label_2d5a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5A2Cu;
}
