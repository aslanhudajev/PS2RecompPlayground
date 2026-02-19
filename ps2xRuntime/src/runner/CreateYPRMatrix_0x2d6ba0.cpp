#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateYPRMatrix
// Address: 0x2d6ba0 - 0x2d6ccc
void CreateYPRMatrix_0x2d6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6ba0u;

    // 0x2d6ba0: 0x27bdffa0
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d6ba4: 0xffbf0020
    ctx->pc = 0x2d6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6ba8: 0xffb10010
    ctx->pc = 0x2d6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6bac: 0xffb00000
    ctx->pc = 0x2d6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6bb0: 0xe7b80050
    ctx->pc = 0x2d6bb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d6bb4: 0xe7b70048
    ctx->pc = 0x2d6bb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d6bb8: 0xe7b60040
    ctx->pc = 0x2d6bb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6bbc: 0xe7b50038
    ctx->pc = 0x2d6bbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d6bc0: 0xe7b40030
    ctx->pc = 0x2d6bc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d6bc4: 0x80882d
    ctx->pc = 0x2d6bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bc8: 0xa0802d
    ctx->pc = 0x2d6bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bcc: 0xc0b5cf8
    ctx->pc = 0x2D6BCCu;
    SET_GPR_U32(ctx, 31, 0x2D6BD4u);
    ctx->pc = 0x2D6BD0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6BD4u; }
    }
    if (ctx->pc != 0x2D6BD4u) { return; }
    ctx->pc = 0x2D6BD4u;
    // 0x2d6bd4: 0x46000606
    ctx->pc = 0x2d6bd4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6bd8: 0xc0b5c96
    ctx->pc = 0x2D6BD8u;
    SET_GPR_U32(ctx, 31, 0x2D6BE0u);
    ctx->pc = 0x2D6BDCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6BE0u; }
    }
    if (ctx->pc != 0x2D6BE0u) { return; }
    ctx->pc = 0x2D6BE0u;
    // 0x2d6be0: 0x460005c7
    ctx->pc = 0x2d6be0u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6be4: 0xc0b5cf8
    ctx->pc = 0x2D6BE4u;
    SET_GPR_U32(ctx, 31, 0x2D6BECu);
    ctx->pc = 0x2D6BE8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6BECu; }
    }
    if (ctx->pc != 0x2D6BECu) { return; }
    ctx->pc = 0x2D6BECu;
    // 0x2d6bec: 0x46000586
    ctx->pc = 0x2d6becu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6bf0: 0xc0b5c96
    ctx->pc = 0x2D6BF0u;
    SET_GPR_U32(ctx, 31, 0x2D6BF8u);
    ctx->pc = 0x2D6BF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6BF8u; }
    }
    if (ctx->pc != 0x2D6BF8u) { return; }
    ctx->pc = 0x2D6BF8u;
    // 0x2d6bf8: 0x46000507
    ctx->pc = 0x2d6bf8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6bfc: 0xc0b5cf8
    ctx->pc = 0x2D6BFCu;
    SET_GPR_U32(ctx, 31, 0x2D6C04u);
    ctx->pc = 0x2D6C00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C04u; }
    }
    if (ctx->pc != 0x2D6C04u) { return; }
    ctx->pc = 0x2D6C04u;
    // 0x2d6c04: 0x46000546
    ctx->pc = 0x2d6c04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6c08: 0xc0b5c96
    ctx->pc = 0x2D6C08u;
    SET_GPR_U32(ctx, 31, 0x2D6C10u);
    ctx->pc = 0x2D6C0Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6C10u; }
    }
    if (ctx->pc != 0x2D6C10u) { return; }
    ctx->pc = 0x2D6C10u;
    // 0x2d6c10: 0x46000007
    ctx->pc = 0x2d6c10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6c14: 0x4617a0c2
    ctx->pc = 0x2d6c14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2d6c18: 0x4615b042
    ctx->pc = 0x2d6c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2d6c1c: 0x46001882
    ctx->pc = 0x2d6c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d6c20: 0x46020841
    ctx->pc = 0x2d6c20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2d6c24: 0xe6210000
    ctx->pc = 0x2d6c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d6c28: 0x4600b047
    ctx->pc = 0x2d6c28u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x2d6c2c: 0x46000842
    ctx->pc = 0x2d6c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6c30: 0x46151882
    ctx->pc = 0x2d6c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2d6c34: 0x46020841
    ctx->pc = 0x2d6c34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2d6c38: 0xe6210010
    ctx->pc = 0x2d6c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d6c3c: 0x4600a087
    ctx->pc = 0x2d6c3cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x2d6c40: 0x46181042
    ctx->pc = 0x2d6c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x2d6c44: 0xe6210020
    ctx->pc = 0x2d6c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d6c48: 0x4600c042
    ctx->pc = 0x2d6c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2d6c4c: 0xe6210004
    ctx->pc = 0x2d6c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d6c50: 0x4615c042
    ctx->pc = 0x2d6c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x2d6c54: 0xe6210014
    ctx->pc = 0x2d6c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d6c58: 0x4600b847
    ctx->pc = 0x2d6c58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
    // 0x2d6c5c: 0xe6210024
    ctx->pc = 0x2d6c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2d6c60: 0x4617b0c2
    ctx->pc = 0x2d6c60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2d6c64: 0x4615a502
    ctx->pc = 0x2d6c64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2d6c68: 0x46001842
    ctx->pc = 0x2d6c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d6c6c: 0x4601a500
    ctx->pc = 0x2d6c6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2d6c70: 0xe6340008
    ctx->pc = 0x2d6c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6c74: 0x46001082
    ctx->pc = 0x2d6c74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d6c78: 0x46151d42
    ctx->pc = 0x2d6c78u;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2d6c7c: 0x46151080
    ctx->pc = 0x2d6c7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x2d6c80: 0xe6220018
    ctx->pc = 0x2d6c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d6c84: 0x4618b582
    ctx->pc = 0x2d6c84u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x2d6c88: 0xe6360028
    ctx->pc = 0x2d6c88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2d6c8c: 0xae20000c
    ctx->pc = 0x2d6c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d6c90: 0xae20001c
    ctx->pc = 0x2d6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2d6c94: 0xae20002c
    ctx->pc = 0x2d6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2d6c98: 0x3c013f80
    ctx->pc = 0x2d6c98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6c9c: 0x44810000
    ctx->pc = 0x2d6c9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6ca0: 0xe620003c
    ctx->pc = 0x2d6ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2d6ca4: 0xdfbf0020
    ctx->pc = 0x2d6ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6ca8: 0xdfb10010
    ctx->pc = 0x2d6ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6cac: 0xdfb00000
    ctx->pc = 0x2d6cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6cb0: 0xc7b80050
    ctx->pc = 0x2d6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d6cb4: 0xc7b70048
    ctx->pc = 0x2d6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d6cb8: 0xc7b60040
    ctx->pc = 0x2d6cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6cbc: 0xc7b50038
    ctx->pc = 0x2d6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6cc0: 0xc7b40030
    ctx->pc = 0x2d6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6cc4: 0x3e00008
    ctx->pc = 0x2D6CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6CCCu;
}
