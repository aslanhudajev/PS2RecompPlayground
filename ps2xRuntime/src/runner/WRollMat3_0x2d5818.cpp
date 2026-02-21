#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WRollMat3
// Address: 0x2d5818 - 0x2d58c4
void WRollMat3_0x2d5818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5818u;

    // 0x2d5818: 0x27bdffd0
    ctx->pc = 0x2d5818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d581c: 0xffbf0010
    ctx->pc = 0x2d581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5820: 0xffb00000
    ctx->pc = 0x2d5820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5824: 0xe7b50028
    ctx->pc = 0x2d5824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d5828: 0xe7b40020
    ctx->pc = 0x2d5828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d582c: 0x46006506
    ctx->pc = 0x2d582cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d5830: 0x4600a045
    ctx->pc = 0x2d5830u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d5834: 0x3c0138d1
    ctx->pc = 0x2d5834u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d5838: 0x3421b717
    ctx->pc = 0x2d5838u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d583c: 0x44810000
    ctx->pc = 0x2d583cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d5840: 0x46000834
    ctx->pc = 0x2d5840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5844: 0x0
    ctx->pc = 0x2d5844u;
    // NOP
    // 0x2d5848: 0x45010018
    ctx->pc = 0x2D5848u;
    {
        const bool branch_taken_0x2d5848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D584Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5848) {
            ctx->pc = 0x2D58ACu;
            goto label_2d58ac;
        }
    }
    ctx->pc = 0x2D5850u;
    // 0x2d5850: 0xc0b9e4a
    ctx->pc = 0x2D5850u;
    SET_GPR_U32(ctx, 31, 0x2D5858u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5858u; }
    }
    if (ctx->pc != 0x2D5858u) { return; }
    ctx->pc = 0x2D5858u;
    // 0x2d5858: 0x46000546
    ctx->pc = 0x2d5858u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d585c: 0xc0b9dce
    ctx->pc = 0x2D585Cu;
    SET_GPR_U32(ctx, 31, 0x2D5864u);
    ctx->pc = 0x2D5860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5864u; }
    }
    if (ctx->pc != 0x2D5864u) { return; }
    ctx->pc = 0x2D5864u;
    // 0x2d5864: 0x46000106
    ctx->pc = 0x2d5864u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5868: 0x182d
    ctx->pc = 0x2d5868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d586c: 0x31100
    ctx->pc = 0x2d586cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_2d5870:
    // 0x2d5870: 0x501021
    ctx->pc = 0x2d5870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5874: 0xc4420000
    ctx->pc = 0x2d5874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5878: 0x460220c2
    ctx->pc = 0x2d5878u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d587c: 0xc4410004
    ctx->pc = 0x2d587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5880: 0x4601a802
    ctx->pc = 0x2d5880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2d5884: 0x460018c1
    ctx->pc = 0x2d5884u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d5888: 0x46012042
    ctx->pc = 0x2d5888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d588c: 0x4602a882
    ctx->pc = 0x2d588cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2d5890: 0x46020840
    ctx->pc = 0x2d5890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5894: 0xe4410004
    ctx->pc = 0x2d5894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d5898: 0xe4430000
    ctx->pc = 0x2d5898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d589c: 0x24630001
    ctx->pc = 0x2d589cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d58a0: 0x28620003
    ctx->pc = 0x2d58a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d58a4: 0x1440fff2
    ctx->pc = 0x2D58A4u;
    {
        const bool branch_taken_0x2d58a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D58A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2d58a4) {
            ctx->pc = 0x2D5870u;
            goto label_2d5870;
        }
    }
    ctx->pc = 0x2D58ACu;
label_2d58ac:
    // 0x2d58ac: 0xdfbf0010
    ctx->pc = 0x2d58acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d58b0: 0xdfb00000
    ctx->pc = 0x2d58b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d58b4: 0xc7b50028
    ctx->pc = 0x2d58b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d58b8: 0xc7b40020
    ctx->pc = 0x2d58b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d58bc: 0x3e00008
    ctx->pc = 0x2D58BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5870u: goto label_2d5870;
            case 0x2D58ACu: goto label_2d58ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D58C4u;
}
