#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LookInDirection
// Address: 0x273c00 - 0x273ddc
void LookInDirection_0x273c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273c00u;

    // 0x273c00: 0x27bdffc0
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x273c04: 0xffbf0030
    ctx->pc = 0x273c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x273c08: 0xffb20020
    ctx->pc = 0x273c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x273c0c: 0xffb10010
    ctx->pc = 0x273c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x273c10: 0xffb00000
    ctx->pc = 0x273c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273c14: 0xa0902d
    ctx->pc = 0x273c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c18: 0x26510010
    ctx->pc = 0x273c18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 16));
    // 0x273c1c: 0x26500020
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 32));
    // 0x273c20: 0xc4800000
    ctx->pc = 0x273c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c24: 0xe6400020
    ctx->pc = 0x273c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x273c28: 0xc4800004
    ctx->pc = 0x273c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c2c: 0xe6000004
    ctx->pc = 0x273c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x273c30: 0xc4800008
    ctx->pc = 0x273c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c34: 0xe6000008
    ctx->pc = 0x273c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x273c38: 0xc0b58ca
    ctx->pc = 0x273C38u;
    SET_GPR_U32(ctx, 31, 0x273C40u);
    ctx->pc = 0x273C3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C40u; }
    }
    if (ctx->pc != 0x273C40u) { return; }
    ctx->pc = 0x273C40u;
    // 0x273c40: 0x3c013a83
    ctx->pc = 0x273c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x273c44: 0x3421126f
    ctx->pc = 0x273c44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x273c48: 0x44810800
    ctx->pc = 0x273c48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x273c4c: 0x46010034
    ctx->pc = 0x273c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273c50: 0x0
    ctx->pc = 0x273c50u;
    // NOP
    // 0x273c54: 0x4502000a
    ctx->pc = 0x273C54u;
    {
        const bool branch_taken_0x273c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273c54) {
            ctx->pc = 0x273C58u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x273C80u;
            goto label_273c80;
        }
    }
    ctx->pc = 0x273C5Cu;
    // 0x273c5c: 0x3c04003a
    ctx->pc = 0x273c5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x273c60: 0x24842550
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x273c64: 0x240282d
    ctx->pc = 0x273c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c68: 0xdfbf0030
    ctx->pc = 0x273c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273c6c: 0xdfb20020
    ctx->pc = 0x273c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273c70: 0xdfb10010
    ctx->pc = 0x273c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273c74: 0xdfb00000
    ctx->pc = 0x273c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273c78: 0x80b549e
    ctx->pc = 0x273C78u;
    ctx->pc = 0x273C7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D5278u;
    CopyMat3_0x2d5278(rdram, ctx, runtime); return;
    ctx->pc = 0x273C80u;
label_273c80:
    // 0x273c80: 0x46000042
    ctx->pc = 0x273c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x273c84: 0xc6000008
    ctx->pc = 0x273c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c88: 0x46000002
    ctx->pc = 0x273c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x273c8c: 0x46000840
    ctx->pc = 0x273c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x273c90: 0x3c0138d1
    ctx->pc = 0x273c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x273c94: 0x3421b717
    ctx->pc = 0x273c94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x273c98: 0x44810000
    ctx->pc = 0x273c98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x273c9c: 0x46000834
    ctx->pc = 0x273c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ca0: 0x0
    ctx->pc = 0x273ca0u;
    // NOP
    // 0x273ca4: 0x4500000e
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273CA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273CE0u;
            goto label_273ce0;
        }
    }
    ctx->pc = 0x273CACu;
    // 0x273cac: 0xc6010004
    ctx->pc = 0x273cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273cb0: 0x44800000
    ctx->pc = 0x273cb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x273cb4: 0x46010034
    ctx->pc = 0x273cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273cb8: 0x0
    ctx->pc = 0x273cb8u;
    // NOP
    // 0x273cbc: 0x45000004
    ctx->pc = 0x273CBCu;
    {
        const bool branch_taken_0x273cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273CC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x273cbc) {
            ctx->pc = 0x273CD0u;
            goto label_273cd0;
        }
    }
    ctx->pc = 0x273CC4u;
    // 0x273cc4: 0x24432520
    ctx->pc = 0x273cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9504));
    // 0x273cc8: 0x10000007
    ctx->pc = 0x273CC8u;
    {
        const bool branch_taken_0x273cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273CCCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x273cc8) {
            ctx->pc = 0x273CE8u;
            goto label_273ce8;
        }
    }
    ctx->pc = 0x273CD0u;
label_273cd0:
    // 0x273cd0: 0x3c02003a
    ctx->pc = 0x273cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x273cd4: 0x24432530
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9520));
    // 0x273cd8: 0x10000003
    ctx->pc = 0x273CD8u;
    {
        const bool branch_taken_0x273cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x273CDCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x273cd8) {
            ctx->pc = 0x273CE8u;
            goto label_273ce8;
        }
    }
    ctx->pc = 0x273CE0u;
label_273ce0:
    // 0x273ce0: 0x244324e0
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9440));
    // 0x273ce4: 0xc44024e0
    ctx->pc = 0x273ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273ce8:
    // 0x273ce8: 0xe6200000
    ctx->pc = 0x273ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x273cec: 0xc4600004
    ctx->pc = 0x273cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273cf0: 0xe6200004
    ctx->pc = 0x273cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x273cf4: 0xc4600008
    ctx->pc = 0x273cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273cf8: 0xe6200008
    ctx->pc = 0x273cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x273cfc: 0xc6220004
    ctx->pc = 0x273cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d00: 0xc6000008
    ctx->pc = 0x273d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d04: 0x46001082
    ctx->pc = 0x273d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273d08: 0xc6200008
    ctx->pc = 0x273d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d0c: 0xc6010004
    ctx->pc = 0x273d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d10: 0x46010002
    ctx->pc = 0x273d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d14: 0x46001081
    ctx->pc = 0x273d14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273d18: 0xe6420000
    ctx->pc = 0x273d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x273d1c: 0xc6220008
    ctx->pc = 0x273d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d20: 0xc6000000
    ctx->pc = 0x273d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d24: 0x46001082
    ctx->pc = 0x273d24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273d28: 0xc6200000
    ctx->pc = 0x273d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d2c: 0xc6010008
    ctx->pc = 0x273d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d30: 0x46010002
    ctx->pc = 0x273d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d34: 0x46001081
    ctx->pc = 0x273d34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273d38: 0xe6420004
    ctx->pc = 0x273d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x273d3c: 0xc6220000
    ctx->pc = 0x273d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d40: 0xc6000004
    ctx->pc = 0x273d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d44: 0x46001082
    ctx->pc = 0x273d44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273d48: 0xc6200004
    ctx->pc = 0x273d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d4c: 0xc6010000
    ctx->pc = 0x273d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d50: 0x46010002
    ctx->pc = 0x273d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d54: 0x46001081
    ctx->pc = 0x273d54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273d58: 0xe6420008
    ctx->pc = 0x273d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x273d5c: 0xc0b58ca
    ctx->pc = 0x273D5Cu;
    SET_GPR_U32(ctx, 31, 0x273D64u);
    ctx->pc = 0x273D60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D64u; }
    }
    if (ctx->pc != 0x273D64u) { return; }
    ctx->pc = 0x273D64u;
    // 0x273d64: 0xc6020004
    ctx->pc = 0x273d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d68: 0xc6400008
    ctx->pc = 0x273d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d6c: 0x46001082
    ctx->pc = 0x273d6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273d70: 0xc6000008
    ctx->pc = 0x273d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d74: 0xc6410004
    ctx->pc = 0x273d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d78: 0x46010002
    ctx->pc = 0x273d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d7c: 0x46001081
    ctx->pc = 0x273d7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273d80: 0xe6220000
    ctx->pc = 0x273d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x273d84: 0xc6020008
    ctx->pc = 0x273d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273d88: 0xc6400000
    ctx->pc = 0x273d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d8c: 0x46001082
    ctx->pc = 0x273d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273d90: 0xc6000000
    ctx->pc = 0x273d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d94: 0xc6410008
    ctx->pc = 0x273d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d98: 0x46010002
    ctx->pc = 0x273d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d9c: 0x46001081
    ctx->pc = 0x273d9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273da0: 0xe6220004
    ctx->pc = 0x273da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x273da4: 0xc6020000
    ctx->pc = 0x273da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273da8: 0xc6400004
    ctx->pc = 0x273da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273dac: 0x46001082
    ctx->pc = 0x273dacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x273db0: 0xc6000004
    ctx->pc = 0x273db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273db4: 0xc6410000
    ctx->pc = 0x273db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273db8: 0x46010002
    ctx->pc = 0x273db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273dbc: 0x46001081
    ctx->pc = 0x273dbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273dc0: 0xe6220008
    ctx->pc = 0x273dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x273dc4: 0xdfbf0030
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273dc8: 0xdfb20020
    ctx->pc = 0x273dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273dcc: 0xdfb10010
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273dd0: 0xdfb00000
    ctx->pc = 0x273dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273dd4: 0x3e00008
    ctx->pc = 0x273DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273DD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273C80u: goto label_273c80;
            case 0x273CD0u: goto label_273cd0;
            case 0x273CE0u: goto label_273ce0;
            case 0x273CE8u: goto label_273ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x273DDCu;
}
