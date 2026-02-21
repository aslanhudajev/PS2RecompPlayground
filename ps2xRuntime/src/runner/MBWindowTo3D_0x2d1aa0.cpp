#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowTo3D
// Address: 0x2d1aa0 - 0x2d1b78
void MBWindowTo3D_0x2d1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1aa0u;

    // 0x2d1aa0: 0x27bdffb0
    ctx->pc = 0x2d1aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d1aa4: 0xffbf0040
    ctx->pc = 0x2d1aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d1aa8: 0xffb10030
    ctx->pc = 0x2d1aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2d1aac: 0xffb00020
    ctx->pc = 0x2d1aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d1ab0: 0xc0882d
    ctx->pc = 0x2d1ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ab4: 0x3c02003a
    ctx->pc = 0x2d1ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1ab8: 0x8c431bd0
    ctx->pc = 0x2d1ab8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d1abc: 0x24620070
    ctx->pc = 0x2d1abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 112));
    // 0x2d1ac0: 0x40802d
    ctx->pc = 0x2d1ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ac4: 0xa5800b
    ctx->pc = 0x2d1ac4u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
    // 0x2d1ac8: 0x84820000
    ctx->pc = 0x2d1ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1acc: 0x44820000
    ctx->pc = 0x2d1accu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2d1ad0: 0x46800020
    ctx->pc = 0x2d1ad0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1ad4: 0xc4610008
    ctx->pc = 0x2d1ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1ad8: 0x46010001
    ctx->pc = 0x2d1ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d1adc: 0x460c0002
    ctx->pc = 0x2d1adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d1ae0: 0xc4610000
    ctx->pc = 0x2d1ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1ae4: 0x0
    ctx->pc = 0x2d1ae4u;
    // NOP
    // 0x2d1ae8: 0x0
    ctx->pc = 0x2d1ae8u;
    // NOP
    // 0x2d1aec: 0x46010003
    ctx->pc = 0x2d1aecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2d1af0: 0xe7a00010
    ctx->pc = 0x2d1af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d1af4: 0x84820002
    ctx->pc = 0x2d1af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d1af8: 0x44820000
    ctx->pc = 0x2d1af8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2d1afc: 0x46800020
    ctx->pc = 0x2d1afcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1b00: 0xc461000c
    ctx->pc = 0x2d1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b04: 0x46010001
    ctx->pc = 0x2d1b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d1b08: 0x460c0002
    ctx->pc = 0x2d1b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d1b0c: 0xc4610004
    ctx->pc = 0x2d1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b10: 0x0
    ctx->pc = 0x2d1b10u;
    // NOP
    // 0x2d1b14: 0x0
    ctx->pc = 0x2d1b14u;
    // NOP
    // 0x2d1b18: 0x46010003
    ctx->pc = 0x2d1b18u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2d1b1c: 0xe7a00014
    ctx->pc = 0x2d1b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d1b20: 0xe7ac0018
    ctx->pc = 0x2d1b20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d1b24: 0x27a40010
    ctx->pc = 0x2d1b24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1b28: 0x3a0282d
    ctx->pc = 0x2d1b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b2c: 0xc0b57a2
    ctx->pc = 0x2D1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B34u);
    ctx->pc = 0x2D1B30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B34u; }
    }
    if (ctx->pc != 0x2D1B34u) { return; }
    ctx->pc = 0x2D1B34u;
    // 0x2d1b34: 0xc7a00000
    ctx->pc = 0x2d1b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1b38: 0xc6010030
    ctx->pc = 0x2d1b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b3c: 0x46010000
    ctx->pc = 0x2d1b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1b40: 0xe6200000
    ctx->pc = 0x2d1b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d1b44: 0xc7a00004
    ctx->pc = 0x2d1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1b48: 0xc6010034
    ctx->pc = 0x2d1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b4c: 0x46010000
    ctx->pc = 0x2d1b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1b50: 0xe6200004
    ctx->pc = 0x2d1b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d1b54: 0xc7a00008
    ctx->pc = 0x2d1b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1b58: 0xc6010038
    ctx->pc = 0x2d1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b5c: 0x46010000
    ctx->pc = 0x2d1b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1b60: 0xe6200008
    ctx->pc = 0x2d1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d1b64: 0xdfbf0040
    ctx->pc = 0x2d1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1b68: 0xdfb10030
    ctx->pc = 0x2d1b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1b6c: 0xdfb00020
    ctx->pc = 0x2d1b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1b70: 0x3e00008
    ctx->pc = 0x2D1B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1B74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1B78u;
}
