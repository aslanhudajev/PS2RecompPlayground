#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetAttackDir
// Address: 0x247d88 - 0x247ff4
void GetAttackDir_0x247d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247d88u;

    // 0x247d88: 0x27bdff70
    ctx->pc = 0x247d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x247d8c: 0xffbf0060
    ctx->pc = 0x247d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x247d90: 0xffb50050
    ctx->pc = 0x247d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x247d94: 0xffb40040
    ctx->pc = 0x247d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x247d98: 0xffb30030
    ctx->pc = 0x247d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x247d9c: 0xffb20020
    ctx->pc = 0x247d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x247da0: 0xffb10010
    ctx->pc = 0x247da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x247da4: 0xffb00000
    ctx->pc = 0x247da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247da8: 0xe7b60080
    ctx->pc = 0x247da8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x247dac: 0xe7b50078
    ctx->pc = 0x247dacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x247db0: 0xe7b40070
    ctx->pc = 0x247db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x247db4: 0x80902d
    ctx->pc = 0x247db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247db8: 0xa0882d
    ctx->pc = 0x247db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dbc: 0xc0802d
    ctx->pc = 0x247dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dc0: 0x46006d86
    ctx->pc = 0x247dc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x247dc4: 0xe0982d
    ctx->pc = 0x247dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dc8: 0x100a02d
    ctx->pc = 0x247dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dcc: 0x120a82d
    ctx->pc = 0x247dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247dd0: 0xc6200000
    ctx->pc = 0x247dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247dd4: 0xc60c0000
    ctx->pc = 0x247dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x247dd8: 0x460c0542
    ctx->pc = 0x247dd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x247ddc: 0xc6200008
    ctx->pc = 0x247ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247de0: 0xc60d0008
    ctx->pc = 0x247de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x247de4: 0x460d0002
    ctx->pc = 0x247de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x247de8: 0xc0b5c34
    ctx->pc = 0x247DE8u;
    SET_GPR_U32(ctx, 31, 0x247DF0u);
    ctx->pc = 0x247DECu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DF0u; }
    }
    if (ctx->pc != 0x247DF0u) { return; }
    ctx->pc = 0x247DF0u;
    // 0x247df0: 0x46000046
    ctx->pc = 0x247df0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x247df4: 0xc6540894
    ctx->pc = 0x247df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247df8: 0x3c013f34
    ctx->pc = 0x247df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x247dfc: 0x3421fdf4
    ctx->pc = 0x247dfcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x247e00: 0x44810000
    ctx->pc = 0x247e00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247e04: 0x46140034
    ctx->pc = 0x247e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247e08: 0x0
    ctx->pc = 0x247e08u;
    // NOP
    // 0x247e0c: 0x45030001
    ctx->pc = 0x247E0Cu;
    {
        const bool branch_taken_0x247e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247e0c) {
            ctx->pc = 0x247E10u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x247E14u;
            goto label_247e14;
        }
    }
    ctx->pc = 0x247E14u;
label_247e14:
    // 0x247e14: 0x8e420898
    ctx->pc = 0x247e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x247e18: 0x30420008
    ctx->pc = 0x247e18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x247e1c: 0x5040000d
    ctx->pc = 0x247E1Cu;
    {
        const bool branch_taken_0x247e1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x247e1c) {
            ctx->pc = 0x247E20u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x247E54u;
            goto label_247e54;
        }
    }
    ctx->pc = 0x247E24u;
    // 0x247e24: 0x44800000
    ctx->pc = 0x247e24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247e28: 0x46140034
    ctx->pc = 0x247e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247e2c: 0x0
    ctx->pc = 0x247e2cu;
    // NOP
    // 0x247e30: 0x45020008
    ctx->pc = 0x247E30u;
    {
        const bool branch_taken_0x247e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247e30) {
            ctx->pc = 0x247E34u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x247E54u;
            goto label_247e54;
        }
    }
    ctx->pc = 0x247E38u;
    // 0x247e38: 0x3c013f00
    ctx->pc = 0x247e38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x247e3c: 0x44810000
    ctx->pc = 0x247e3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247e40: 0x4600a034
    ctx->pc = 0x247e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247e44: 0x0
    ctx->pc = 0x247e44u;
    // NOP
    // 0x247e48: 0x45030001
    ctx->pc = 0x247E48u;
    {
        const bool branch_taken_0x247e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247e48) {
            ctx->pc = 0x247E4Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x247E50u;
            goto label_247e50;
        }
    }
    ctx->pc = 0x247E50u;
label_247e50:
    // 0x247e50: 0x8e430008
    ctx->pc = 0x247e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_247e54:
    // 0x247e54: 0x24020004
    ctx->pc = 0x247e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x247e58: 0x14620005
    ctx->pc = 0x247E58u;
    {
        const bool branch_taken_0x247e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x247e58) {
            ctx->pc = 0x247E70u;
            goto label_247e70;
        }
    }
    ctx->pc = 0x247E60u;
    // 0x247e60: 0x3c013e4c
    ctx->pc = 0x247e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x247e64: 0x3421cccd
    ctx->pc = 0x247e64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x247e68: 0x44810000
    ctx->pc = 0x247e68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247e6c: 0x4600a500
    ctx->pc = 0x247e6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_247e70:
    // 0x247e70: 0x3c013f5d
    ctx->pc = 0x247e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16221 << 16));
    // 0x247e74: 0x3421b22d
    ctx->pc = 0x247e74u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x247e78: 0x44810000
    ctx->pc = 0x247e78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247e7c: 0x46000802
    ctx->pc = 0x247e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x247e80: 0x4600a834
    ctx->pc = 0x247e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247e84: 0x0
    ctx->pc = 0x247e84u;
    // NOP
    // 0x247e88: 0x45030006
    ctx->pc = 0x247E88u;
    {
        const bool branch_taken_0x247e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247e88) {
            ctx->pc = 0x247E8Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247EA4u;
            goto label_247ea4;
        }
    }
    ctx->pc = 0x247E90u;
    // 0x247e90: 0x3c020010
    ctx->pc = 0x247e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x247e94: 0x2621024
    ctx->pc = 0x247e94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x247e98: 0x10400005
    ctx->pc = 0x247E98u;
    {
        const bool branch_taken_0x247e98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x247e98) {
            ctx->pc = 0x247EB0u;
            goto label_247eb0;
        }
    }
    ctx->pc = 0x247EA0u;
    // 0x247ea0: 0xc6200000
    ctx->pc = 0x247ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247ea4:
    // 0x247ea4: 0xe6000000
    ctx->pc = 0x247ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x247ea8: 0x10000026
    ctx->pc = 0x247EA8u;
    {
        const bool branch_taken_0x247ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247EACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x247ea8) {
            ctx->pc = 0x247F44u;
            goto label_247f44;
        }
    }
    ctx->pc = 0x247EB0u;
label_247eb0:
    // 0x247eb0: 0x6830004
    ctx->pc = 0x247EB0u;
    {
        const bool branch_taken_0x247eb0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x247eb0) {
            ctx->pc = 0x247EB4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x247EC4u;
            goto label_247ec4;
        }
    }
    ctx->pc = 0x247EB8u;
    // 0x247eb8: 0x52a00019
    ctx->pc = 0x247EB8u;
    {
        const bool branch_taken_0x247eb8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x247eb8) {
            ctx->pc = 0x247EBCu;
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x247F20u;
            goto label_247f20;
        }
    }
    ctx->pc = 0x247EC0u;
    // 0x247ec0: 0xc6010004
    ctx->pc = 0x247ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247ec4:
    // 0x247ec4: 0x44800000
    ctx->pc = 0x247ec4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247ec8: 0x46010034
    ctx->pc = 0x247ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247ecc: 0x0
    ctx->pc = 0x247eccu;
    // NOP
    // 0x247ed0: 0x45020007
    ctx->pc = 0x247ED0u;
    {
        const bool branch_taken_0x247ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247ed0) {
            ctx->pc = 0x247ED4u;
            ctx->f[1] = FPU_ABS_S(ctx->f[20]);
            ctx->pc = 0x247EF0u;
            goto label_247ef0;
        }
    }
    ctx->pc = 0x247ED8u;
    // 0x247ed8: 0x3c013f99
    ctx->pc = 0x247ed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x247edc: 0x3421999a
    ctx->pc = 0x247edcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x247ee0: 0x44810000
    ctx->pc = 0x247ee0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247ee4: 0x46000802
    ctx->pc = 0x247ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x247ee8: 0xe6000004
    ctx->pc = 0x247ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x247eec: 0x4600a045
    ctx->pc = 0x247eecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
label_247ef0:
    // 0x247ef0: 0xc6020004
    ctx->pc = 0x247ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247ef4: 0x46001005
    ctx->pc = 0x247ef4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x247ef8: 0x46010034
    ctx->pc = 0x247ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247efc: 0x0
    ctx->pc = 0x247efcu;
    // NOP
    // 0x247f00: 0x45020013
    ctx->pc = 0x247F00u;
    {
        const bool branch_taken_0x247f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f00) {
            ctx->pc = 0x247F04u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x247F50u;
            goto label_247f50;
        }
    }
    ctx->pc = 0x247F08u;
    // 0x247f08: 0x4602a000
    ctx->pc = 0x247f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x247f0c: 0x3c013f00
    ctx->pc = 0x247f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x247f10: 0x44810800
    ctx->pc = 0x247f10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247f14: 0x46010002
    ctx->pc = 0x247f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247f18: 0x1000000c
    ctx->pc = 0x247F18u;
    {
        const bool branch_taken_0x247f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247F1Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x247f18) {
            ctx->pc = 0x247F4Cu;
            goto label_247f4c;
        }
    }
    ctx->pc = 0x247F20u;
label_247f20:
    // 0x247f20: 0x3c013f80
    ctx->pc = 0x247f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x247f24: 0x44816000
    ctx->pc = 0x247f24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x247f28: 0xc0b5c44
    ctx->pc = 0x247F28u;
    SET_GPR_U32(ctx, 31, 0x247F30u);
    ctx->pc = 0x247F2Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2D7110u;
    {
        const uint32_t __entryPc = ctx->pc;
        smallsqrt_0x2d7110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F30u; }
    }
    if (ctx->pc != 0x247F30u) { return; }
    ctx->pc = 0x247F30u;
    // 0x247f30: 0xc6010000
    ctx->pc = 0x247f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f34: 0x46010042
    ctx->pc = 0x247f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247f38: 0xe6010000
    ctx->pc = 0x247f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x247f3c: 0xc6010008
    ctx->pc = 0x247f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f40: 0x46010002
    ctx->pc = 0x247f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_247f44:
    // 0x247f44: 0xe6000008
    ctx->pc = 0x247f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x247f48: 0xe6140004
    ctx->pc = 0x247f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_247f4c:
    // 0x247f4c: 0xc6010004
    ctx->pc = 0x247f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247f50:
    // 0x247f50: 0x44800000
    ctx->pc = 0x247f50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247f54: 0x46000834
    ctx->pc = 0x247f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f58: 0x45000005
    ctx->pc = 0x247F58u;
    {
        const bool branch_taken_0x247f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f58) {
            ctx->pc = 0x247F70u;
            goto label_247f70;
        }
    }
    ctx->pc = 0x247F60u;
    // 0x247f60: 0x3c013f00
    ctx->pc = 0x247f60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x247f64: 0x44810000
    ctx->pc = 0x247f64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247f68: 0x46000802
    ctx->pc = 0x247f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x247f6c: 0xe6000004
    ctx->pc = 0x247f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_247f70:
    // 0x247f70: 0xc0b58a4
    ctx->pc = 0x247F70u;
    SET_GPR_U32(ctx, 31, 0x247F78u);
    ctx->pc = 0x247F74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F78u; }
    }
    if (ctx->pc != 0x247F78u) { return; }
    ctx->pc = 0x247F78u;
    // 0x247f78: 0xc6010004
    ctx->pc = 0x247f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f7c: 0x3c013f5d
    ctx->pc = 0x247f7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16221 << 16));
    // 0x247f80: 0x3421b22d
    ctx->pc = 0x247f80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x247f84: 0x44810000
    ctx->pc = 0x247f84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247f88: 0x46010034
    ctx->pc = 0x247f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f8c: 0x45000007
    ctx->pc = 0x247F8Cu;
    {
        const bool branch_taken_0x247f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f8c) {
            ctx->pc = 0x247FACu;
            goto label_247fac;
        }
    }
    ctx->pc = 0x247F94u;
    // 0x247f94: 0xc6200000
    ctx->pc = 0x247f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247f98: 0xe6000000
    ctx->pc = 0x247f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x247f9c: 0xc6200004
    ctx->pc = 0x247f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247fa0: 0xe6000004
    ctx->pc = 0x247fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x247fa4: 0xc6200008
    ctx->pc = 0x247fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247fa8: 0xe6000008
    ctx->pc = 0x247fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_247fac:
    // 0x247fac: 0x3c014348
    ctx->pc = 0x247facu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
    // 0x247fb0: 0x44810000
    ctx->pc = 0x247fb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x247fb4: 0x4600b002
    ctx->pc = 0x247fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x247fb8: 0x3c014170
    ctx->pc = 0x247fb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x247fbc: 0x44810800
    ctx->pc = 0x247fbcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247fc0: 0x46010000
    ctx->pc = 0x247fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247fc4: 0xdfbf0060
    ctx->pc = 0x247fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247fc8: 0xdfb50050
    ctx->pc = 0x247fc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247fcc: 0xdfb40040
    ctx->pc = 0x247fccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247fd0: 0xdfb30030
    ctx->pc = 0x247fd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247fd4: 0xdfb20020
    ctx->pc = 0x247fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247fd8: 0xdfb10010
    ctx->pc = 0x247fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247fdc: 0xdfb00000
    ctx->pc = 0x247fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247fe0: 0xc7b60080
    ctx->pc = 0x247fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x247fe4: 0xc7b50078
    ctx->pc = 0x247fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x247fe8: 0xc7b40070
    ctx->pc = 0x247fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247fec: 0x3e00008
    ctx->pc = 0x247FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247FF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247E14u: goto label_247e14;
            case 0x247E50u: goto label_247e50;
            case 0x247E54u: goto label_247e54;
            case 0x247E70u: goto label_247e70;
            case 0x247EA4u: goto label_247ea4;
            case 0x247EB0u: goto label_247eb0;
            case 0x247EC4u: goto label_247ec4;
            case 0x247EF0u: goto label_247ef0;
            case 0x247F20u: goto label_247f20;
            case 0x247F44u: goto label_247f44;
            case 0x247F4Cu: goto label_247f4c;
            case 0x247F50u: goto label_247f50;
            case 0x247F70u: goto label_247f70;
            case 0x247FACu: goto label_247fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247FF4u;
}
