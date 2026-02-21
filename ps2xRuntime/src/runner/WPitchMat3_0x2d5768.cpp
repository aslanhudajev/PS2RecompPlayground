#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WPitchMat3
// Address: 0x2d5768 - 0x2d5814
void WPitchMat3_0x2d5768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5768u;

    // 0x2d5768: 0x27bdffd0
    ctx->pc = 0x2d5768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d576c: 0xffbf0010
    ctx->pc = 0x2d576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5770: 0xffb00000
    ctx->pc = 0x2d5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5774: 0xe7b50028
    ctx->pc = 0x2d5774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d5778: 0xe7b40020
    ctx->pc = 0x2d5778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d577c: 0x46006506
    ctx->pc = 0x2d577cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d5780: 0x4600a045
    ctx->pc = 0x2d5780u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d5784: 0x3c0138d1
    ctx->pc = 0x2d5784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d5788: 0x3421b717
    ctx->pc = 0x2d5788u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d578c: 0x44810000
    ctx->pc = 0x2d578cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5790: 0x46000834
    ctx->pc = 0x2d5790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5794: 0x0
    ctx->pc = 0x2d5794u;
    // NOP
    // 0x2d5798: 0x45010018
    ctx->pc = 0x2D5798u;
    {
        const bool branch_taken_0x2d5798 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D579Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5798) {
            ctx->pc = 0x2D57FCu;
            goto label_2d57fc;
        }
    }
    ctx->pc = 0x2D57A0u;
    // 0x2d57a0: 0xc0b9e4a
    ctx->pc = 0x2D57A0u;
    SET_GPR_U32(ctx, 31, 0x2D57A8u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D57A8u; }
    }
    if (ctx->pc != 0x2D57A8u) { return; }
    ctx->pc = 0x2D57A8u;
    // 0x2d57a8: 0x46000546
    ctx->pc = 0x2d57a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d57ac: 0xc0b9dce
    ctx->pc = 0x2D57ACu;
    SET_GPR_U32(ctx, 31, 0x2D57B4u);
    ctx->pc = 0x2D57B0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D57B4u; }
    }
    if (ctx->pc != 0x2D57B4u) { return; }
    ctx->pc = 0x2D57B4u;
    // 0x2d57b4: 0x46000106
    ctx->pc = 0x2d57b4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2d57b8: 0x182d
    ctx->pc = 0x2d57b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57bc: 0x31100
    ctx->pc = 0x2d57bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_2d57c0:
    // 0x2d57c0: 0x501021
    ctx->pc = 0x2d57c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d57c4: 0xc4420004
    ctx->pc = 0x2d57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d57c8: 0x460220c2
    ctx->pc = 0x2d57c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d57cc: 0xc4410008
    ctx->pc = 0x2d57ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d57d0: 0x4601a802
    ctx->pc = 0x2d57d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d57d4: 0x460018c1
    ctx->pc = 0x2d57d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d57d8: 0x46012042
    ctx->pc = 0x2d57d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d57dc: 0x4602a882
    ctx->pc = 0x2d57dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d57e0: 0x46020840
    ctx->pc = 0x2d57e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d57e4: 0xe4410008
    ctx->pc = 0x2d57e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d57e8: 0xe4430004
    ctx->pc = 0x2d57e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d57ec: 0x24630001
    ctx->pc = 0x2d57ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d57f0: 0x28620003
    ctx->pc = 0x2d57f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d57f4: 0x1440fff2
    ctx->pc = 0x2D57F4u;
    {
        const bool branch_taken_0x2d57f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D57F8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2d57f4) {
            ctx->pc = 0x2D57C0u;
            goto label_2d57c0;
        }
    }
    ctx->pc = 0x2D57FCu;
label_2d57fc:
    // 0x2d57fc: 0xdfbf0010
    ctx->pc = 0x2d57fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5800: 0xdfb00000
    ctx->pc = 0x2d5800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5804: 0xc7b50028
    ctx->pc = 0x2d5804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5808: 0xc7b40020
    ctx->pc = 0x2d5808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d580c: 0x3e00008
    ctx->pc = 0x2D580Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D57C0u: goto label_2d57c0;
            case 0x2D57FCu: goto label_2d57fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5814u;
}
