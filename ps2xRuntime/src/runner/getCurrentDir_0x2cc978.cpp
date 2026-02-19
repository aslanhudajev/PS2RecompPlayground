#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getCurrentDir
// Address: 0x2cc978 - 0x2cca98
void getCurrentDir_0x2cc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cc978u;

    // 0x2cc978: 0x27bdffb0
    ctx->pc = 0x2cc978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cc97c: 0xffbf0020
    ctx->pc = 0x2cc97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cc980: 0xffb10010
    ctx->pc = 0x2cc980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cc984: 0xffb00000
    ctx->pc = 0x2cc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc988: 0xe7b60040
    ctx->pc = 0x2cc988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cc98c: 0xe7b50038
    ctx->pc = 0x2cc98cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cc990: 0xe7b40030
    ctx->pc = 0x2cc990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cc994: 0x80802d
    ctx->pc = 0x2cc994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc998: 0xc6030044
    ctx->pc = 0x2cc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cc99c: 0xc6010048
    ctx->pc = 0x2cc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc9a0: 0xc602004c
    ctx->pc = 0x2cc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc9a4: 0xc4a00000
    ctx->pc = 0x2cc9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9a8: 0x46001d82
    ctx->pc = 0x2cc9a8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc9ac: 0xc4a00010
    ctx->pc = 0x2cc9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9b0: 0x46000802
    ctx->pc = 0x2cc9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc9b4: 0x4600b580
    ctx->pc = 0x2cc9b4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2cc9b8: 0xc4a00020
    ctx->pc = 0x2cc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9bc: 0x46001002
    ctx->pc = 0x2cc9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cc9c0: 0x4600b580
    ctx->pc = 0x2cc9c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2cc9c4: 0xc4a00004
    ctx->pc = 0x2cc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9c8: 0x46001d42
    ctx->pc = 0x2cc9c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc9cc: 0xc4a00014
    ctx->pc = 0x2cc9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9d0: 0x46000802
    ctx->pc = 0x2cc9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc9d4: 0x4600ad40
    ctx->pc = 0x2cc9d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2cc9d8: 0xc4a00024
    ctx->pc = 0x2cc9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9dc: 0x46001002
    ctx->pc = 0x2cc9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cc9e0: 0x4600ad40
    ctx->pc = 0x2cc9e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2cc9e4: 0xc4a00008
    ctx->pc = 0x2cc9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9e8: 0x46001d02
    ctx->pc = 0x2cc9e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc9ec: 0xc4a00018
    ctx->pc = 0x2cc9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9f0: 0x46000842
    ctx->pc = 0x2cc9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cc9f4: 0x4601a500
    ctx->pc = 0x2cc9f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2cc9f8: 0xc4a00028
    ctx->pc = 0x2cc9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9fc: 0x46001082
    ctx->pc = 0x2cc9fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cca00: 0x4602a500
    ctx->pc = 0x2cca00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2cca04: 0x4616b302
    ctx->pc = 0x2cca04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2cca08: 0x4615a802
    ctx->pc = 0x2cca08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2cca0c: 0x46006300
    ctx->pc = 0x2cca0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2cca10: 0x4614a002
    ctx->pc = 0x2cca10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2cca14: 0x46006300
    ctx->pc = 0x2cca14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2cca18: 0x3c013f33
    ctx->pc = 0x2cca18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16179 << 16));
    // 0x2cca1c: 0x34213333
    ctx->pc = 0x2cca1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x2cca20: 0x44810000
    ctx->pc = 0x2cca20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cca24: 0x46006034
    ctx->pc = 0x2cca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cca28: 0x0
    ctx->pc = 0x2cca28u;
    // NOP
    // 0x2cca2c: 0x45010008
    ctx->pc = 0x2CCA2Cu;
    {
        const bool branch_taken_0x2cca2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCA30u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cca2c) {
            ctx->pc = 0x2CCA50u;
            goto label_2cca50;
        }
    }
    ctx->pc = 0x2CCA34u;
    // 0x2cca34: 0x3c013fa6
    ctx->pc = 0x2cca34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16294 << 16));
    // 0x2cca38: 0x34216666
    ctx->pc = 0x2cca38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x2cca3c: 0x44810000
    ctx->pc = 0x2cca3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cca40: 0x460c0034
    ctx->pc = 0x2cca40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cca44: 0x0
    ctx->pc = 0x2cca44u;
    // NOP
    // 0x2cca48: 0x45020005
    ctx->pc = 0x2CCA48u;
    {
        const bool branch_taken_0x2cca48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cca48) {
            ctx->pc = 0x2CCA4Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2CCA60u;
            goto label_2cca60;
        }
    }
    ctx->pc = 0x2CCA50u;
label_2cca50:
    // 0x2cca50: 0xc0b18f0
    ctx->pc = 0x2CCA50u;
    SET_GPR_U32(ctx, 31, 0x2CCA58u);
    ctx->pc = 0x2C63C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inv_sqrtf_0x2c63c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA58u; }
    }
    if (ctx->pc != 0x2CCA58u) { return; }
    ctx->pc = 0x2CCA58u;
    // 0x2cca58: 0xc6010084
    ctx->pc = 0x2cca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cca5c: 0x46010302
    ctx->pc = 0x2cca5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cca60:
    // 0x2cca60: 0x460cb002
    ctx->pc = 0x2cca60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x2cca64: 0xe6200000
    ctx->pc = 0x2cca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2cca68: 0x460ca802
    ctx->pc = 0x2cca68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2cca6c: 0xe6200004
    ctx->pc = 0x2cca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2cca70: 0x460ca002
    ctx->pc = 0x2cca70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2cca74: 0xe6200008
    ctx->pc = 0x2cca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2cca78: 0xdfbf0020
    ctx->pc = 0x2cca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cca7c: 0xdfb10010
    ctx->pc = 0x2cca7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cca80: 0xdfb00000
    ctx->pc = 0x2cca80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cca84: 0xc7b60040
    ctx->pc = 0x2cca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cca88: 0xc7b50038
    ctx->pc = 0x2cca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cca8c: 0xc7b40030
    ctx->pc = 0x2cca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cca90: 0x3e00008
    ctx->pc = 0x2CCA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCA94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCA50u: goto label_2cca50;
            case 0x2CCA60u: goto label_2cca60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCA98u;
}
