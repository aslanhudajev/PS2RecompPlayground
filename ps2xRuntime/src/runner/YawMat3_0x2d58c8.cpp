#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: YawMat3
// Address: 0x2d58c8 - 0x2d5980
void YawMat3_0x2d58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d58c8u;

    // 0x2d58c8: 0x27bdffd0
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d58cc: 0xffbf0010
    ctx->pc = 0x2d58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d58d0: 0xffb00000
    ctx->pc = 0x2d58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d58d4: 0xe7b40020
    ctx->pc = 0x2d58d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d58d8: 0x46006506
    ctx->pc = 0x2d58d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d58dc: 0x4600a045
    ctx->pc = 0x2d58dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2d58e0: 0x3c0138d1
    ctx->pc = 0x2d58e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d58e4: 0x3421b717
    ctx->pc = 0x2d58e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d58e8: 0x44810000
    ctx->pc = 0x2d58e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d58ec: 0x46000834
    ctx->pc = 0x2d58ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d58f0: 0x0
    ctx->pc = 0x2d58f0u;
    // NOP
    // 0x2d58f4: 0x4501001d
    ctx->pc = 0x2D58F4u;
    {
        const bool branch_taken_0x2d58f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D58F8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d58f4) {
            ctx->pc = 0x2D596Cu;
            goto label_2d596c;
        }
    }
    ctx->pc = 0x2D58FCu;
    // 0x2d58fc: 0xc0b9e4a
    ctx->pc = 0x2D58FCu;
    SET_GPR_U32(ctx, 31, 0x2D5904u);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5904u; }
    }
    if (ctx->pc != 0x2D5904u) { return; }
    ctx->pc = 0x2D5904u;
    // 0x2d5904: 0x3c02003a
    ctx->pc = 0x2d5904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d5908: 0xe4402620
    ctx->pc = 0x2d5908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9760), bits); }
    // 0x2d590c: 0xc0b9dce
    ctx->pc = 0x2D590Cu;
    SET_GPR_U32(ctx, 31, 0x2D5914u);
    ctx->pc = 0x2D5910u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5914u; }
    }
    if (ctx->pc != 0x2D5914u) { return; }
    ctx->pc = 0x2D5914u;
    // 0x2d5914: 0x3c02003a
    ctx->pc = 0x2d5914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d5918: 0xe4402660
    ctx->pc = 0x2d5918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9824), bits); }
    // 0x2d591c: 0x182d
    ctx->pc = 0x2d591cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5920: 0x46000146
    ctx->pc = 0x2d5920u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5924: 0x3c02003a
    ctx->pc = 0x2d5924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d5928: 0xc4442620
    ctx->pc = 0x2d5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d592c: 0x31080
    ctx->pc = 0x2d592cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2d5930:
    // 0x2d5930: 0x501021
    ctx->pc = 0x2d5930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5934: 0xc4420000
    ctx->pc = 0x2d5934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5938: 0x460510c2
    ctx->pc = 0x2d5938u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2d593c: 0xc4410020
    ctx->pc = 0x2d593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5940: 0x46040802
    ctx->pc = 0x2d5940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2d5944: 0x460018c1
    ctx->pc = 0x2d5944u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d5948: 0x46050842
    ctx->pc = 0x2d5948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2d594c: 0x46041082
    ctx->pc = 0x2d594cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2d5950: 0x46020840
    ctx->pc = 0x2d5950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d5954: 0xe4410020
    ctx->pc = 0x2d5954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2d5958: 0xe4430000
    ctx->pc = 0x2d5958u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d595c: 0x24630001
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5960: 0x28620003
    ctx->pc = 0x2d5960u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2d5964: 0x1440fff2
    ctx->pc = 0x2D5964u;
    {
        const bool branch_taken_0x2d5964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5968u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2d5964) {
            ctx->pc = 0x2D5930u;
            goto label_2d5930;
        }
    }
    ctx->pc = 0x2D596Cu;
label_2d596c:
    // 0x2d596c: 0xdfbf0010
    ctx->pc = 0x2d596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5970: 0xdfb00000
    ctx->pc = 0x2d5970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5974: 0xc7b40020
    ctx->pc = 0x2d5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d5978: 0x3e00008
    ctx->pc = 0x2D5978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D597Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5930u: goto label_2d5930;
            case 0x2D596Cu: goto label_2d596c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5980u;
}
