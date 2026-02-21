#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PitchVec3
// Address: 0x2d6028 - 0x2d60d8
void PitchVec3_0x2d6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6028u;

    // 0x2d6028: 0x27bdffb0
    ctx->pc = 0x2d6028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d602c: 0xffbf0010
    ctx->pc = 0x2d602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6030: 0xffb00000
    ctx->pc = 0x2d6030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6034: 0xe7b80040
    ctx->pc = 0x2d6034u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6038: 0xe7b70038
    ctx->pc = 0x2d6038u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d603c: 0xe7b60030
    ctx->pc = 0x2d603cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d6040: 0xe7b50028
    ctx->pc = 0x2d6040u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d6044: 0xe7b40020
    ctx->pc = 0x2d6044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d6048: 0xa0802d
    ctx->pc = 0x2d6048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d604c: 0x460065c6
    ctx->pc = 0x2d604cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2d6050: 0xc4940000
    ctx->pc = 0x2d6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6054: 0xc4950004
    ctx->pc = 0x2d6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6058: 0xc0b9dce
    ctx->pc = 0x2D6058u;
    SET_GPR_U32(ctx, 31, 0x2D6060u);
    ctx->pc = 0x2D605Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6060u; }
    }
    if (ctx->pc != 0x2D6060u) { return; }
    ctx->pc = 0x2D6060u;
    // 0x2d6060: 0x46000606
    ctx->pc = 0x2d6060u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6064: 0xc0b9e4a
    ctx->pc = 0x2D6064u;
    SET_GPR_U32(ctx, 31, 0x2D606Cu);
    ctx->pc = 0x2D6068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D606Cu; }
    }
    if (ctx->pc != 0x2D606Cu) { return; }
    ctx->pc = 0x2D606Cu;
    // 0x2d606c: 0x4615a042
    ctx->pc = 0x2d606cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2d6070: 0x46000842
    ctx->pc = 0x2d6070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6074: 0x4618a082
    ctx->pc = 0x2d6074u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x2d6078: 0x46020840
    ctx->pc = 0x2d6078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d607c: 0xe6010000
    ctx->pc = 0x2d607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d6080: 0x4614a502
    ctx->pc = 0x2d6080u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2d6084: 0x4616b042
    ctx->pc = 0x2d6084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2d6088: 0x4601a500
    ctx->pc = 0x2d6088u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2d608c: 0x4600a507
    ctx->pc = 0x2d608cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2d6090: 0x4600a502
    ctx->pc = 0x2d6090u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d6094: 0x4618a842
    ctx->pc = 0x2d6094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x2d6098: 0x4601a500
    ctx->pc = 0x2d6098u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2d609c: 0xe6140004
    ctx->pc = 0x2d609cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d60a0: 0x4616ad42
    ctx->pc = 0x2d60a0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x2d60a4: 0x4600ad42
    ctx->pc = 0x2d60a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d60a8: 0x4618b582
    ctx->pc = 0x2d60a8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x2d60ac: 0x4616ad40
    ctx->pc = 0x2d60acu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x2d60b0: 0xe6150008
    ctx->pc = 0x2d60b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d60b4: 0xdfbf0010
    ctx->pc = 0x2d60b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d60b8: 0xdfb00000
    ctx->pc = 0x2d60b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d60bc: 0xc7b80040
    ctx->pc = 0x2d60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d60c0: 0xc7b70038
    ctx->pc = 0x2d60c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d60c4: 0xc7b60030
    ctx->pc = 0x2d60c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d60c8: 0xc7b50028
    ctx->pc = 0x2d60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d60cc: 0xc7b40020
    ctx->pc = 0x2d60ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d60d0: 0x3e00008
    ctx->pc = 0x2D60D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D60D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D60D8u;
}
