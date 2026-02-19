#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreatePYRMatrix
// Address: 0x2d6938 - 0x2d6a6c
void CreatePYRMatrix_0x2d6938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6938u;

    // 0x2d6938: 0x27bdffa0
    ctx->pc = 0x2d6938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d693c: 0xffbf0020
    ctx->pc = 0x2d693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6940: 0xffb10010
    ctx->pc = 0x2d6940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6944: 0xffb00000
    ctx->pc = 0x2d6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6948: 0xe7b80050
    ctx->pc = 0x2d6948u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d694c: 0xe7b70048
    ctx->pc = 0x2d694cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d6950: 0xe7b60040
    ctx->pc = 0x2d6950u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6954: 0xe7b50038
    ctx->pc = 0x2d6954u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d6958: 0xe7b40030
    ctx->pc = 0x2d6958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d695c: 0x80882d
    ctx->pc = 0x2d695cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6960: 0xa0802d
    ctx->pc = 0x2d6960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6964: 0xc0b5cf8
    ctx->pc = 0x2D6964u;
    SET_GPR_U32(ctx, 31, 0x2D696Cu);
    ctx->pc = 0x2D6968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D696Cu; }
    }
    if (ctx->pc != 0x2D696Cu) { return; }
    ctx->pc = 0x2D696Cu;
    // 0x2d696c: 0x46000586
    ctx->pc = 0x2d696cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6970: 0xc0b5c96
    ctx->pc = 0x2D6970u;
    SET_GPR_U32(ctx, 31, 0x2D6978u);
    ctx->pc = 0x2D6974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6978u; }
    }
    if (ctx->pc != 0x2D6978u) { return; }
    ctx->pc = 0x2D6978u;
    // 0x2d6978: 0x46000547
    ctx->pc = 0x2d6978u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x2d697c: 0xc0b5cf8
    ctx->pc = 0x2D697Cu;
    SET_GPR_U32(ctx, 31, 0x2D6984u);
    ctx->pc = 0x2D6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6984u; }
    }
    if (ctx->pc != 0x2D6984u) { return; }
    ctx->pc = 0x2D6984u;
    // 0x2d6984: 0x46000606
    ctx->pc = 0x2d6984u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6988: 0xc0b5c96
    ctx->pc = 0x2D6988u;
    SET_GPR_U32(ctx, 31, 0x2D6990u);
    ctx->pc = 0x2D698Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6990u; }
    }
    if (ctx->pc != 0x2D6990u) { return; }
    ctx->pc = 0x2D6990u;
    // 0x2d6990: 0x460005c7
    ctx->pc = 0x2d6990u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6994: 0xc0b5cf8
    ctx->pc = 0x2D6994u;
    SET_GPR_U32(ctx, 31, 0x2D699Cu);
    ctx->pc = 0x2D6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D73E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffcos_0x2d73e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D699Cu; }
    }
    if (ctx->pc != 0x2D699Cu) { return; }
    ctx->pc = 0x2D699Cu;
    // 0x2d699c: 0x46000506
    ctx->pc = 0x2d699cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d69a0: 0xc0b5c96
    ctx->pc = 0x2D69A0u;
    SET_GPR_U32(ctx, 31, 0x2D69A8u);
    ctx->pc = 0x2D69A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D7258u;
    {
        const uint32_t __entryPc = ctx->pc;
        ffsin_0x2d7258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D69A8u; }
    }
    if (ctx->pc != 0x2D69A8u) { return; }
    ctx->pc = 0x2D69A8u;
    // 0x2d69a8: 0x46000007
    ctx->pc = 0x2d69a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d69ac: 0x4614c042
    ctx->pc = 0x2d69acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x2d69b0: 0xe6210000
    ctx->pc = 0x2d69b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d69b4: 0x4600c047
    ctx->pc = 0x2d69b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[24]);
    // 0x2d69b8: 0x46000842
    ctx->pc = 0x2d69b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d69bc: 0xe6210010
    ctx->pc = 0x2d69bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d69c0: 0x4600b847
    ctx->pc = 0x2d69c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
    // 0x2d69c4: 0xe6210020
    ctx->pc = 0x2d69c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d69c8: 0x4617a8c2
    ctx->pc = 0x2d69c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2d69cc: 0x46001847
    ctx->pc = 0x2d69ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2d69d0: 0x46140842
    ctx->pc = 0x2d69d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2d69d4: 0x4600b082
    ctx->pc = 0x2d69d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2d69d8: 0x46020840
    ctx->pc = 0x2d69d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d69dc: 0xe6210004
    ctx->pc = 0x2d69dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d69e0: 0x46001842
    ctx->pc = 0x2d69e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d69e4: 0x4614b082
    ctx->pc = 0x2d69e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2d69e8: 0x46020840
    ctx->pc = 0x2d69e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d69ec: 0xe6210014
    ctx->pc = 0x2d69ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d69f0: 0x4600a847
    ctx->pc = 0x2d69f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2d69f4: 0x46180842
    ctx->pc = 0x2d69f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2d69f8: 0xe6210024
    ctx->pc = 0x2d69f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2d69fc: 0x4617b0c2
    ctx->pc = 0x2d69fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x2d6a00: 0x46141842
    ctx->pc = 0x2d6a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2d6a04: 0x4600a882
    ctx->pc = 0x2d6a04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d6a08: 0x46020840
    ctx->pc = 0x2d6a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d6a0c: 0xe6210008
    ctx->pc = 0x2d6a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6a10: 0x46000007
    ctx->pc = 0x2d6a10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6a14: 0x46001802
    ctx->pc = 0x2d6a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d6a18: 0x4614ad42
    ctx->pc = 0x2d6a18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2d6a1c: 0x46150000
    ctx->pc = 0x2d6a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2d6a20: 0xe6200018
    ctx->pc = 0x2d6a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d6a24: 0x4618b582
    ctx->pc = 0x2d6a24u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x2d6a28: 0xe6360028
    ctx->pc = 0x2d6a28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2d6a2c: 0xae20000c
    ctx->pc = 0x2d6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d6a30: 0xae20001c
    ctx->pc = 0x2d6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2d6a34: 0xae20002c
    ctx->pc = 0x2d6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2d6a38: 0x3c013f80
    ctx->pc = 0x2d6a38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6a3c: 0x44810000
    ctx->pc = 0x2d6a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6a40: 0xe620003c
    ctx->pc = 0x2d6a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2d6a44: 0xdfbf0020
    ctx->pc = 0x2d6a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6a48: 0xdfb10010
    ctx->pc = 0x2d6a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6a4c: 0xdfb00000
    ctx->pc = 0x2d6a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6a50: 0xc7b80050
    ctx->pc = 0x2d6a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d6a54: 0xc7b70048
    ctx->pc = 0x2d6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d6a58: 0xc7b60040
    ctx->pc = 0x2d6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6a5c: 0xc7b50038
    ctx->pc = 0x2d6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6a60: 0xc7b40030
    ctx->pc = 0x2d6a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6a64: 0x3e00008
    ctx->pc = 0x2D6A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6A6Cu;
}
