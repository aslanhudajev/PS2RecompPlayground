#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlQuickInvertMatrix
// Address: 0x1a4f20 - 0x1a5024
void nlQuickInvertMatrix_0x1a4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlQuickInvertMatrix");


    ctx->pc = 0x1a4f20u;

    // 0x1a4f20: 0x27bdffb0
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4f24: 0x7fbf0000
    ctx->pc = 0x1a4f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a4f28: 0xc06bf55
    ctx->pc = 0x1A4F28u;
    SET_GPR_U32(ctx, 31, 0x1A4F30u);
    ctx->pc = 0x1A4F2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F30u; }
        else if (ctx->pc != 0x1A4F30u) { ctx->pc = 0x1A4F30u; }
    }
    if (ctx->pc != 0x1A4F30u) { return; }
    ctx->pc = 0x1A4F30u;
    // 0x1a4f30: 0x27a30040
    ctx->pc = 0x1a4f30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4f34: 0x27a80020
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4f38: 0x27a50044
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 68));
    // 0x1a4f3c: 0xc4680000
    ctx->pc = 0x1a4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1a4f40: 0xc5000000
    ctx->pc = 0x1a4f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f44: 0xc4a70000
    ctx->pc = 0x1a4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1a4f48: 0xc7a20024
    ctx->pc = 0x1a4f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4f4c: 0x27a60048
    ctx->pc = 0x1a4f4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a4f50: 0x27ab0028
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 40));
    // 0x1a4f54: 0xc4c90000
    ctx->pc = 0x1a4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1a4f58: 0x46004182
    ctx->pc = 0x1a4f58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1a4f5c: 0x27aa0030
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4f60: 0xc5610000
    ctx->pc = 0x1a4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4f64: 0x27ac0034
    ctx->pc = 0x1a4f64u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 29), 52));
    // 0x1a4f68: 0xc5840000
    ctx->pc = 0x1a4f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a4f6c: 0x46023942
    ctx->pc = 0x1a4f6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1a4f70: 0xc5400000
    ctx->pc = 0x1a4f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f74: 0x27a70014
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 20));
    // 0x1a4f78: 0xc7a30038
    ctx->pc = 0x1a4f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4f7c: 0x27a90018
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 24));
    // 0x1a4f80: 0x46053018
    ctx->pc = 0x1a4f80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1a4f84: 0x4601485c
    ctx->pc = 0x1a4f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x1a4f88: 0x46000987
    ctx->pc = 0x1a4f88u;
    ctx->f[6] = FPU_NEG_S(ctx->f[1]);
    // 0x1a4f8c: 0xc7a20010
    ctx->pc = 0x1a4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4f90: 0xc4e10000
    ctx->pc = 0x1a4f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4f94: 0x46004142
    ctx->pc = 0x1a4f94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1a4f98: 0x3c023f80
    ctx->pc = 0x1a4f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a4f9c: 0x27a40010
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4fa0: 0x46043902
    ctx->pc = 0x1a4fa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x1a4fa4: 0xc5200000
    ctx->pc = 0x1a4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fa8: 0x46042818
    ctx->pc = 0x1a4fa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1a4fac: 0x46024082
    ctx->pc = 0x1a4facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x1a4fb0: 0x46013842
    ctx->pc = 0x1a4fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1a4fb4: 0x460348dc
    ctx->pc = 0x1a4fb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x1a4fb8: 0x46011018
    ctx->pc = 0x1a4fb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a4fbc: 0x4600481c
    ctx->pc = 0x1a4fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
    // 0x1a4fc0: 0x46000007
    ctx->pc = 0x1a4fc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a4fc4: 0xe4600000
    ctx->pc = 0x1a4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a4fc8: 0x46001847
    ctx->pc = 0x1a4fc8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1a4fcc: 0xe4a60000
    ctx->pc = 0x1a4fccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a4fd0: 0xe4c10000
    ctx->pc = 0x1a4fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a4fd4: 0xc4e10000
    ctx->pc = 0x1a4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4fd8: 0xc5000000
    ctx->pc = 0x1a4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fdc: 0xe4e00000
    ctx->pc = 0x1a4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a4fe0: 0xe5010000
    ctx->pc = 0x1a4fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1a4fe4: 0xc5210000
    ctx->pc = 0x1a4fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4fe8: 0xc5400000
    ctx->pc = 0x1a4fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fec: 0xe5200000
    ctx->pc = 0x1a4fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1a4ff0: 0xe5410000
    ctx->pc = 0x1a4ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1a4ff4: 0xc5610000
    ctx->pc = 0x1a4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4ff8: 0xc5800000
    ctx->pc = 0x1a4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4ffc: 0xe5600000
    ctx->pc = 0x1a4ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1a5000: 0xe5810000
    ctx->pc = 0x1a5000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1a5004: 0xafa0001c
    ctx->pc = 0x1a5004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1a5008: 0xafa0002c
    ctx->pc = 0x1a5008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1a500c: 0xafa0003c
    ctx->pc = 0x1a500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1a5010: 0xc06c038
    ctx->pc = 0x1A5010u;
    SET_GPR_U32(ctx, 31, 0x1A5018u);
    ctx->pc = 0x1A5014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5018u; }
        else if (ctx->pc != 0x1A5018u) { ctx->pc = 0x1A5018u; }
    }
    if (ctx->pc != 0x1A5018u) { return; }
    ctx->pc = 0x1A5018u;
    // 0x1a5018: 0x7bbf0000
    ctx->pc = 0x1a5018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a501c: 0x3e00008
    ctx->pc = 0x1A501Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5024u;
}
