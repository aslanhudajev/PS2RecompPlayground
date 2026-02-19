#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateRYPMatrix
// Address: 0x2d6a70 - 0x2d6b9c
void CreateRYPMatrix_0x2d6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6a70u;

    // 0x2d6a70: 0x27bdff60
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d6a74: 0xffbf0060
    ctx->pc = 0x2d6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d6a78: 0xffb10050
    ctx->pc = 0x2d6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2d6a7c: 0xffb00040
    ctx->pc = 0x2d6a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d6a80: 0xe7b80090
    ctx->pc = 0x2d6a80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d6a84: 0xe7b70088
    ctx->pc = 0x2d6a84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d6a88: 0xe7b60080
    ctx->pc = 0x2d6a88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d6a8c: 0xe7b50078
    ctx->pc = 0x2d6a8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d6a90: 0xe7b40070
    ctx->pc = 0x2d6a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d6a94: 0x80882d
    ctx->pc = 0x2d6a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a98: 0xa0802d
    ctx->pc = 0x2d6a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a9c: 0xc0b5cf8
    ctx->pc = 0x2D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D6AA4u);
    ctx->pc = 0x2D6AA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AA4u; }
    }
    if (ctx->pc != 0x2D6AA4u) { return; }
    ctx->pc = 0x2D6AA4u;
    // 0x2d6aa4: 0x460005c6
    ctx->pc = 0x2d6aa4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6aa8: 0xc0b5c96
    ctx->pc = 0x2D6AA8u;
    SET_GPR_U32(ctx, 31, 0x2D6AB0u);
    ctx->pc = 0x2D6AACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AB0u; }
    }
    if (ctx->pc != 0x2D6AB0u) { return; }
    ctx->pc = 0x2D6AB0u;
    // 0x2d6ab0: 0x46000547
    ctx->pc = 0x2d6ab0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6ab4: 0xc0b5cf8
    ctx->pc = 0x2D6AB4u;
    SET_GPR_U32(ctx, 31, 0x2D6ABCu);
    ctx->pc = 0x2D6AB8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6ABCu; }
    }
    if (ctx->pc != 0x2D6ABCu) { return; }
    ctx->pc = 0x2D6ABCu;
    // 0x2d6abc: 0x46000586
    ctx->pc = 0x2d6abcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6ac0: 0xc0b5c96
    ctx->pc = 0x2D6AC0u;
    SET_GPR_U32(ctx, 31, 0x2D6AC8u);
    ctx->pc = 0x2D6AC4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AC8u; }
    }
    if (ctx->pc != 0x2D6AC8u) { return; }
    ctx->pc = 0x2D6AC8u;
    // 0x2d6ac8: 0x46000607
    ctx->pc = 0x2d6ac8u;
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6acc: 0xc0b5cf8
    ctx->pc = 0x2D6ACCu;
    SET_GPR_U32(ctx, 31, 0x2D6AD4u);
    ctx->pc = 0x2D6AD0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AD4u; }
    }
    if (ctx->pc != 0x2D6AD4u) { return; }
    ctx->pc = 0x2D6AD4u;
    // 0x2d6ad4: 0x46000506
    ctx->pc = 0x2d6ad4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6ad8: 0xc0b5c96
    ctx->pc = 0x2D6AD8u;
    SET_GPR_U32(ctx, 31, 0x2D6AE0u);
    ctx->pc = 0x2D6ADCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6AE0u; }
    }
    if (ctx->pc != 0x2D6AE0u) { return; }
    ctx->pc = 0x2D6AE0u;
    // 0x2d6ae0: 0x46000007
    ctx->pc = 0x2d6ae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6ae4: 0x4600a107
    ctx->pc = 0x2d6ae4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x2d6ae8: 0x46182102
    ctx->pc = 0x2d6ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x2d6aec: 0x4616a042
    ctx->pc = 0x2d6aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2d6af0: 0xe6210000
    ctx->pc = 0x2d6af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d6af4: 0x460000c7
    ctx->pc = 0x2d6af4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6af8: 0x46171842
    ctx->pc = 0x2d6af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x2d6afc: 0x46152082
    ctx->pc = 0x2d6afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2d6b00: 0x46020840
    ctx->pc = 0x2d6b00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d6b04: 0xe6210010
    ctx->pc = 0x2d6b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d6b08: 0x46150042
    ctx->pc = 0x2d6b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2d6b0c: 0x46172082
    ctx->pc = 0x2d6b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x2d6b10: 0x46020840
    ctx->pc = 0x2d6b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d6b14: 0xe6210020
    ctx->pc = 0x2d6b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d6b18: 0x46181902
    ctx->pc = 0x2d6b18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x2d6b1c: 0x46160002
    ctx->pc = 0x2d6b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2d6b20: 0xe6200004
    ctx->pc = 0x2d6b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d6b24: 0x4617a002
    ctx->pc = 0x2d6b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2d6b28: 0x46152042
    ctx->pc = 0x2d6b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x2d6b2c: 0x46010000
    ctx->pc = 0x2d6b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6b30: 0xe6200014
    ctx->pc = 0x2d6b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d6b34: 0x4600a507
    ctx->pc = 0x2d6b34u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2d6b38: 0x4615a502
    ctx->pc = 0x2d6b38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2d6b3c: 0x46172002
    ctx->pc = 0x2d6b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x2d6b40: 0x4600a500
    ctx->pc = 0x2d6b40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d6b44: 0xe6340024
    ctx->pc = 0x2d6b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2d6b48: 0xe6380008
    ctx->pc = 0x2d6b48u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6b4c: 0x4615b542
    ctx->pc = 0x2d6b4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2d6b50: 0xe6350018
    ctx->pc = 0x2d6b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d6b54: 0x4617b582
    ctx->pc = 0x2d6b54u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2d6b58: 0xe6360028
    ctx->pc = 0x2d6b58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2d6b5c: 0xae20000c
    ctx->pc = 0x2d6b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d6b60: 0xae20001c
    ctx->pc = 0x2d6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2d6b64: 0xae20002c
    ctx->pc = 0x2d6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2d6b68: 0x3c013f80
    ctx->pc = 0x2d6b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6b6c: 0x44810000
    ctx->pc = 0x2d6b6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6b70: 0xe620003c
    ctx->pc = 0x2d6b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2d6b74: 0xdfbf0060
    ctx->pc = 0x2d6b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6b78: 0xdfb10050
    ctx->pc = 0x2d6b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6b7c: 0xdfb00040
    ctx->pc = 0x2d6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6b80: 0xc7b80090
    ctx->pc = 0x2d6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d6b84: 0xc7b70088
    ctx->pc = 0x2d6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d6b88: 0xc7b60080
    ctx->pc = 0x2d6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6b8c: 0xc7b50078
    ctx->pc = 0x2d6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6b90: 0xc7b40070
    ctx->pc = 0x2d6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6b94: 0x3e00008
    ctx->pc = 0x2D6B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6B9Cu;
}
