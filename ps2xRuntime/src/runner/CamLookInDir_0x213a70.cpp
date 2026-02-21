#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamLookInDir
// Address: 0x213a70 - 0x213c4c
void CamLookInDir_0x213a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213a70u;

    // 0x213a70: 0x27bdffc0
    ctx->pc = 0x213a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x213a74: 0xffbf0030
    ctx->pc = 0x213a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x213a78: 0xffb20020
    ctx->pc = 0x213a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213a7c: 0xffb10010
    ctx->pc = 0x213a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x213a80: 0xffb00000
    ctx->pc = 0x213a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213a84: 0xa0902d
    ctx->pc = 0x213a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a88: 0x26510010
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 16));
    // 0x213a8c: 0x26500020
    ctx->pc = 0x213a8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 32));
    // 0x213a90: 0xc4800000
    ctx->pc = 0x213a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213a94: 0xe6400020
    ctx->pc = 0x213a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x213a98: 0xc4800004
    ctx->pc = 0x213a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213a9c: 0xe6000004
    ctx->pc = 0x213a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x213aa0: 0xc4800008
    ctx->pc = 0x213aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213aa4: 0xe6000008
    ctx->pc = 0x213aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x213aa8: 0xc0b58ca
    ctx->pc = 0x213AA8u;
    SET_GPR_U32(ctx, 31, 0x213AB0u);
    ctx->pc = 0x213AACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AB0u; }
    }
    if (ctx->pc != 0x213AB0u) { return; }
    ctx->pc = 0x213AB0u;
    // 0x213ab0: 0x3c013a83
    ctx->pc = 0x213ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x213ab4: 0x3421126f
    ctx->pc = 0x213ab4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x213ab8: 0x44810800
    ctx->pc = 0x213ab8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x213abc: 0x46010034
    ctx->pc = 0x213abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213ac0: 0x0
    ctx->pc = 0x213ac0u;
    // NOP
    // 0x213ac4: 0x4502000a
    ctx->pc = 0x213AC4u;
    {
        const bool branch_taken_0x213ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213ac4) {
            ctx->pc = 0x213AC8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x213AF0u;
            goto label_213af0;
        }
    }
    ctx->pc = 0x213ACCu;
    // 0x213acc: 0x3c04003a
    ctx->pc = 0x213accu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x213ad0: 0x24842550
    ctx->pc = 0x213ad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x213ad4: 0x240282d
    ctx->pc = 0x213ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ad8: 0xdfbf0030
    ctx->pc = 0x213ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213adc: 0xdfb20020
    ctx->pc = 0x213adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213ae0: 0xdfb10010
    ctx->pc = 0x213ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ae4: 0xdfb00000
    ctx->pc = 0x213ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213ae8: 0x80b549e
    ctx->pc = 0x213AE8u;
    ctx->pc = 0x213AECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D5278u;
    CopyMat3_0x2d5278(rdram, ctx, runtime); return;
    ctx->pc = 0x213AF0u;
label_213af0:
    // 0x213af0: 0x46000042
    ctx->pc = 0x213af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x213af4: 0xc6000008
    ctx->pc = 0x213af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213af8: 0x46000002
    ctx->pc = 0x213af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x213afc: 0x46000840
    ctx->pc = 0x213afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213b00: 0x3c0138d1
    ctx->pc = 0x213b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x213b04: 0x3421b717
    ctx->pc = 0x213b04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x213b08: 0x44810000
    ctx->pc = 0x213b08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213b0c: 0x46000834
    ctx->pc = 0x213b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b10: 0x0
    ctx->pc = 0x213b10u;
    // NOP
    // 0x213b14: 0x4500000e
    ctx->pc = 0x213B14u;
    {
        const bool branch_taken_0x213b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x213b14) {
            ctx->pc = 0x213B50u;
            goto label_213b50;
        }
    }
    ctx->pc = 0x213B1Cu;
    // 0x213b1c: 0xc6010004
    ctx->pc = 0x213b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213b20: 0x44800000
    ctx->pc = 0x213b20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x213b24: 0x46010034
    ctx->pc = 0x213b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b28: 0x0
    ctx->pc = 0x213b28u;
    // NOP
    // 0x213b2c: 0x45000004
    ctx->pc = 0x213B2Cu;
    {
        const bool branch_taken_0x213b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x213b2c) {
            ctx->pc = 0x213B40u;
            goto label_213b40;
        }
    }
    ctx->pc = 0x213B34u;
    // 0x213b34: 0x24432520
    ctx->pc = 0x213b34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9504));
    // 0x213b38: 0x10000007
    ctx->pc = 0x213B38u;
    {
        const bool branch_taken_0x213b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213B3Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x213b38) {
            ctx->pc = 0x213B58u;
            goto label_213b58;
        }
    }
    ctx->pc = 0x213B40u;
label_213b40:
    // 0x213b40: 0x3c02003a
    ctx->pc = 0x213b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x213b44: 0x24432530
    ctx->pc = 0x213b44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9520));
    // 0x213b48: 0x10000003
    ctx->pc = 0x213B48u;
    {
        const bool branch_taken_0x213b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213B4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x213b48) {
            ctx->pc = 0x213B58u;
            goto label_213b58;
        }
    }
    ctx->pc = 0x213B50u;
label_213b50:
    // 0x213b50: 0x244324e0
    ctx->pc = 0x213b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9440));
    // 0x213b54: 0xc44024e0
    ctx->pc = 0x213b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213b58:
    // 0x213b58: 0xe6200000
    ctx->pc = 0x213b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x213b5c: 0xc4600004
    ctx->pc = 0x213b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b60: 0xe6200004
    ctx->pc = 0x213b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x213b64: 0xc4600008
    ctx->pc = 0x213b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b68: 0xe6200008
    ctx->pc = 0x213b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x213b6c: 0xc6220004
    ctx->pc = 0x213b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213b70: 0xc6000008
    ctx->pc = 0x213b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b74: 0x46001082
    ctx->pc = 0x213b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213b78: 0xc6200008
    ctx->pc = 0x213b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b7c: 0xc6010004
    ctx->pc = 0x213b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213b80: 0x46010002
    ctx->pc = 0x213b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213b84: 0x46001081
    ctx->pc = 0x213b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213b88: 0xe6420000
    ctx->pc = 0x213b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x213b8c: 0xc6220008
    ctx->pc = 0x213b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213b90: 0xc6000000
    ctx->pc = 0x213b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b94: 0x46001082
    ctx->pc = 0x213b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213b98: 0xc6200000
    ctx->pc = 0x213b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b9c: 0xc6010008
    ctx->pc = 0x213b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213ba0: 0x46010002
    ctx->pc = 0x213ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213ba4: 0x46001081
    ctx->pc = 0x213ba4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213ba8: 0xe6420004
    ctx->pc = 0x213ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x213bac: 0xc6220000
    ctx->pc = 0x213bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213bb0: 0xc6000004
    ctx->pc = 0x213bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bb4: 0x46001082
    ctx->pc = 0x213bb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213bb8: 0xc6200004
    ctx->pc = 0x213bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bbc: 0xc6010000
    ctx->pc = 0x213bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213bc0: 0x46010002
    ctx->pc = 0x213bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213bc4: 0x46001081
    ctx->pc = 0x213bc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213bc8: 0xe6420008
    ctx->pc = 0x213bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x213bcc: 0xc0b58ca
    ctx->pc = 0x213BCCu;
    SET_GPR_U32(ctx, 31, 0x213BD4u);
    ctx->pc = 0x213BD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BD4u; }
    }
    if (ctx->pc != 0x213BD4u) { return; }
    ctx->pc = 0x213BD4u;
    // 0x213bd4: 0xc6020004
    ctx->pc = 0x213bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213bd8: 0xc6400008
    ctx->pc = 0x213bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bdc: 0x46001082
    ctx->pc = 0x213bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213be0: 0xc6000008
    ctx->pc = 0x213be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213be4: 0xc6410004
    ctx->pc = 0x213be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213be8: 0x46010002
    ctx->pc = 0x213be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213bec: 0x46001081
    ctx->pc = 0x213becu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213bf0: 0xe6220000
    ctx->pc = 0x213bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x213bf4: 0xc6020008
    ctx->pc = 0x213bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213bf8: 0xc6400000
    ctx->pc = 0x213bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213bfc: 0x46001082
    ctx->pc = 0x213bfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213c00: 0xc6000000
    ctx->pc = 0x213c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c04: 0xc6410008
    ctx->pc = 0x213c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c08: 0x46010002
    ctx->pc = 0x213c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213c0c: 0x46001081
    ctx->pc = 0x213c0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213c10: 0xe6220004
    ctx->pc = 0x213c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x213c14: 0xc6020000
    ctx->pc = 0x213c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213c18: 0xc6400004
    ctx->pc = 0x213c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c1c: 0x46001082
    ctx->pc = 0x213c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x213c20: 0xc6000004
    ctx->pc = 0x213c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c24: 0xc6410000
    ctx->pc = 0x213c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c28: 0x46010002
    ctx->pc = 0x213c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213c2c: 0x46001081
    ctx->pc = 0x213c2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x213c30: 0xe6220008
    ctx->pc = 0x213c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x213c34: 0xdfbf0030
    ctx->pc = 0x213c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213c38: 0xdfb20020
    ctx->pc = 0x213c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213c3c: 0xdfb10010
    ctx->pc = 0x213c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213c40: 0xdfb00000
    ctx->pc = 0x213c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c44: 0x3e00008
    ctx->pc = 0x213C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213AF0u: goto label_213af0;
            case 0x213B40u: goto label_213b40;
            case 0x213B50u: goto label_213b50;
            case 0x213B58u: goto label_213b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213C4Cu;
}
