#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WYawMat3
// Address: 0x2d56b8 - 0x2d5764
void WYawMat3_0x2d56b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d56b8u;

    // 0x2d56b8: 0x27bdffd0
    ctx->pc = 0x2d56b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d56bc: 0xffbf0010
    ctx->pc = 0x2d56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d56c0: 0xffb00000
    ctx->pc = 0x2d56c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d56c4: 0xe7b50028
    ctx->pc = 0x2d56c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d56c8: 0xe7b40020
    ctx->pc = 0x2d56c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d56cc: 0x46006506
    ctx->pc = 0x2d56ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d56d0: 0x4600a045
    ctx->pc = 0x2d56d0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d56d4: 0x3c0138d1
    ctx->pc = 0x2d56d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d56d8: 0x3421b717
    ctx->pc = 0x2d56d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d56dc: 0x44810000
    ctx->pc = 0x2d56dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d56e0: 0x46000834
    ctx->pc = 0x2d56e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d56e4: 0x0
    ctx->pc = 0x2d56e4u;
    // NOP
    // 0x2d56e8: 0x45010018
    ctx->pc = 0x2D56E8u;
    {
        const bool branch_taken_0x2d56e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D56ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d56e8) {
            ctx->pc = 0x2D574Cu;
            goto label_2d574c;
        }
    }
    ctx->pc = 0x2D56F0u;
    // 0x2d56f0: 0xc0b9e4a
    ctx->pc = 0x2D56F0u;
    SET_GPR_U32(ctx, 31, 0x2D56F8u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D56F8u; }
    }
    if (ctx->pc != 0x2D56F8u) { return; }
    ctx->pc = 0x2D56F8u;
    // 0x2d56f8: 0x46000546
    ctx->pc = 0x2d56f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d56fc: 0xc0b9dce
    ctx->pc = 0x2D56FCu;
    SET_GPR_U32(ctx, 31, 0x2D5704u);
    ctx->pc = 0x2D5700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5704u; }
    }
    if (ctx->pc != 0x2D5704u) { return; }
    ctx->pc = 0x2D5704u;
    // 0x2d5704: 0x46000106
    ctx->pc = 0x2d5704u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5708: 0x182d
    ctx->pc = 0x2d5708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d570c: 0x31100
    ctx->pc = 0x2d570cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_2d5710:
    // 0x2d5710: 0x501021
    ctx->pc = 0x2d5710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5714: 0xc4420000
    ctx->pc = 0x2d5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5718: 0x460220c2
    ctx->pc = 0x2d5718u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d571c: 0xc4410008
    ctx->pc = 0x2d571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5720: 0x4601a802
    ctx->pc = 0x2d5720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d5724: 0x460018c1
    ctx->pc = 0x2d5724u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d5728: 0x46012042
    ctx->pc = 0x2d5728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d572c: 0x4602a882
    ctx->pc = 0x2d572cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d5730: 0x46020840
    ctx->pc = 0x2d5730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5734: 0xe4410008
    ctx->pc = 0x2d5734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d5738: 0xe4430000
    ctx->pc = 0x2d5738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d573c: 0x24630001
    ctx->pc = 0x2d573cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5740: 0x28620003
    ctx->pc = 0x2d5740u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d5744: 0x1440fff2
    ctx->pc = 0x2D5744u;
    {
        const bool branch_taken_0x2d5744 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5748u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2d5744) {
            ctx->pc = 0x2D5710u;
            goto label_2d5710;
        }
    }
    ctx->pc = 0x2D574Cu;
label_2d574c:
    // 0x2d574c: 0xdfbf0010
    ctx->pc = 0x2d574cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5750: 0xdfb00000
    ctx->pc = 0x2d5750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5754: 0xc7b50028
    ctx->pc = 0x2d5754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5758: 0xc7b40020
    ctx->pc = 0x2d5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d575c: 0x3e00008
    ctx->pc = 0x2D575Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5710u: goto label_2d5710;
            case 0x2D574Cu: goto label_2d574c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5764u;
}
