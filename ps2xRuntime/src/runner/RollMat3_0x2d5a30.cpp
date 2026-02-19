#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RollMat3
// Address: 0x2d5a30 - 0x2d5adc
void RollMat3_0x2d5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5a30u;

    // 0x2d5a30: 0x27bdffd0
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5a34: 0xffbf0010
    ctx->pc = 0x2d5a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5a38: 0xffb00000
    ctx->pc = 0x2d5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5a3c: 0xe7b50028
    ctx->pc = 0x2d5a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d5a40: 0xe7b40020
    ctx->pc = 0x2d5a40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d5a44: 0x46006506
    ctx->pc = 0x2d5a44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d5a48: 0x4600a045
    ctx->pc = 0x2d5a48u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d5a4c: 0x3c0138d1
    ctx->pc = 0x2d5a4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d5a50: 0x3421b717
    ctx->pc = 0x2d5a50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d5a54: 0x44810000
    ctx->pc = 0x2d5a54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5a58: 0x46000834
    ctx->pc = 0x2d5a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5a5c: 0x0
    ctx->pc = 0x2d5a5cu;
    // NOP
    // 0x2d5a60: 0x45010018
    ctx->pc = 0x2D5A60u;
    {
        const bool branch_taken_0x2d5a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5A64u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a60) {
            ctx->pc = 0x2D5AC4u;
            goto label_2d5ac4;
        }
    }
    ctx->pc = 0x2D5A68u;
    // 0x2d5a68: 0xc0b9e4a
    ctx->pc = 0x2D5A68u;
    SET_GPR_U32(ctx, 31, 0x2D5A70u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A70u; }
    }
    if (ctx->pc != 0x2D5A70u) { return; }
    ctx->pc = 0x2D5A70u;
    // 0x2d5a70: 0x46000546
    ctx->pc = 0x2d5a70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5a74: 0xc0b9dce
    ctx->pc = 0x2D5A74u;
    SET_GPR_U32(ctx, 31, 0x2D5A7Cu);
    ctx->pc = 0x2D5A78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5A7Cu; }
    }
    if (ctx->pc != 0x2D5A7Cu) { return; }
    ctx->pc = 0x2D5A7Cu;
    // 0x2d5a7c: 0x46000106
    ctx->pc = 0x2d5a7cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5a80: 0x182d
    ctx->pc = 0x2d5a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a84: 0x31080
    ctx->pc = 0x2d5a84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2d5a88:
    // 0x2d5a88: 0x501021
    ctx->pc = 0x2d5a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5a8c: 0xc4420000
    ctx->pc = 0x2d5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5a90: 0x460220c2
    ctx->pc = 0x2d5a90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d5a94: 0xc4410010
    ctx->pc = 0x2d5a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5a98: 0x4601a802
    ctx->pc = 0x2d5a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d5a9c: 0x460018c1
    ctx->pc = 0x2d5a9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d5aa0: 0x46012042
    ctx->pc = 0x2d5aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d5aa4: 0x4602a882
    ctx->pc = 0x2d5aa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d5aa8: 0x46020840
    ctx->pc = 0x2d5aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5aac: 0xe4410010
    ctx->pc = 0x2d5aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2d5ab0: 0xe4430000
    ctx->pc = 0x2d5ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d5ab4: 0x24630001
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5ab8: 0x28620003
    ctx->pc = 0x2d5ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d5abc: 0x1440fff2
    ctx->pc = 0x2D5ABCu;
    {
        const bool branch_taken_0x2d5abc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5AC0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2d5abc) {
            ctx->pc = 0x2D5A88u;
            goto label_2d5a88;
        }
    }
    ctx->pc = 0x2D5AC4u;
label_2d5ac4:
    // 0x2d5ac4: 0xdfbf0010
    ctx->pc = 0x2d5ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5ac8: 0xdfb00000
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5acc: 0xc7b50028
    ctx->pc = 0x2d5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5ad0: 0xc7b40020
    ctx->pc = 0x2d5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5ad4: 0x3e00008
    ctx->pc = 0x2D5AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5AD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5A88u: goto label_2d5a88;
            case 0x2D5AC4u: goto label_2d5ac4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5ADCu;
}
