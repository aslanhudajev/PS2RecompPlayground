#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExtractScaleMat4
// Address: 0x2d5c00 - 0x2d5d18
void ExtractScaleMat4_0x2d5c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5c00u;

    // 0x2d5c00: 0x27bdffd0
    ctx->pc = 0x2d5c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5c04: 0xffbf0020
    ctx->pc = 0x2d5c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5c08: 0xffb10010
    ctx->pc = 0x2d5c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d5c0c: 0xffb00000
    ctx->pc = 0x2d5c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5c10: 0x80802d
    ctx->pc = 0x2d5c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c14: 0xc60c0000
    ctx->pc = 0x2d5c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5c18: 0x460c6002
    ctx->pc = 0x2d5c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5c1c: 0xc6010010
    ctx->pc = 0x2d5c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5c20: 0x46010882
    ctx->pc = 0x2d5c20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5c24: 0x46020000
    ctx->pc = 0x2d5c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d5c28: 0xc6010020
    ctx->pc = 0x2d5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5c2c: 0x46010842
    ctx->pc = 0x2d5c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5c30: 0x46010000
    ctx->pc = 0x2d5c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5c34: 0x0
    ctx->pc = 0x2d5c34u;
    // NOP
    // 0x2d5c38: 0x0
    ctx->pc = 0x2d5c38u;
    // NOP
    // 0x2d5c3c: 0x46000004
    ctx->pc = 0x2d5c3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d5c40: 0x46000032
    ctx->pc = 0x2d5c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5c44: 0x0
    ctx->pc = 0x2d5c44u;
    // NOP
    // 0x2d5c48: 0x45010005
    ctx->pc = 0x2D5C48u;
    {
        const bool branch_taken_0x2d5c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5C4Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c48) {
            ctx->pc = 0x2D5C60u;
            goto label_2d5c60;
        }
    }
    ctx->pc = 0x2D5C50u;
    // 0x2d5c50: 0x460c6302
    ctx->pc = 0x2d5c50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5c54: 0x46026300
    ctx->pc = 0x2d5c54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2d5c58: 0xc0ba284
    ctx->pc = 0x2D5C58u;
    SET_GPR_U32(ctx, 31, 0x2D5C60u);
    ctx->pc = 0x2D5C5Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C60u; }
    }
    if (ctx->pc != 0x2D5C60u) { return; }
    ctx->pc = 0x2D5C60u;
label_2d5c60:
    // 0x2d5c60: 0xe6200000
    ctx->pc = 0x2d5c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d5c64: 0xc60c0004
    ctx->pc = 0x2d5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5c68: 0x460c6002
    ctx->pc = 0x2d5c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5c6c: 0xc6010014
    ctx->pc = 0x2d5c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5c70: 0x46010882
    ctx->pc = 0x2d5c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5c74: 0x46020000
    ctx->pc = 0x2d5c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d5c78: 0xc6010024
    ctx->pc = 0x2d5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5c7c: 0x46010842
    ctx->pc = 0x2d5c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5c80: 0x46010000
    ctx->pc = 0x2d5c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5c84: 0x0
    ctx->pc = 0x2d5c84u;
    // NOP
    // 0x2d5c88: 0x0
    ctx->pc = 0x2d5c88u;
    // NOP
    // 0x2d5c8c: 0x46000004
    ctx->pc = 0x2d5c8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d5c90: 0x46000032
    ctx->pc = 0x2d5c90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5c94: 0x0
    ctx->pc = 0x2d5c94u;
    // NOP
    // 0x2d5c98: 0x45030006
    ctx->pc = 0x2D5C98u;
    {
        const bool branch_taken_0x2d5c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5c98) {
            ctx->pc = 0x2D5C9Cu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
            ctx->pc = 0x2D5CB4u;
            goto label_2d5cb4;
        }
    }
    ctx->pc = 0x2D5CA0u;
    // 0x2d5ca0: 0x460c6302
    ctx->pc = 0x2d5ca0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5ca4: 0x46026300
    ctx->pc = 0x2d5ca4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2d5ca8: 0xc0ba284
    ctx->pc = 0x2D5CA8u;
    SET_GPR_U32(ctx, 31, 0x2D5CB0u);
    ctx->pc = 0x2D5CACu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CB0u; }
    }
    if (ctx->pc != 0x2D5CB0u) { return; }
    ctx->pc = 0x2D5CB0u;
    // 0x2d5cb0: 0xe6200004
    ctx->pc = 0x2d5cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d5cb4:
    // 0x2d5cb4: 0xc60c0008
    ctx->pc = 0x2d5cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5cb8: 0x460c6002
    ctx->pc = 0x2d5cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5cbc: 0xc6010018
    ctx->pc = 0x2d5cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5cc0: 0x46010882
    ctx->pc = 0x2d5cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5cc4: 0x46020000
    ctx->pc = 0x2d5cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d5cc8: 0xc6010028
    ctx->pc = 0x2d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5ccc: 0x46010842
    ctx->pc = 0x2d5cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d5cd0: 0x46010000
    ctx->pc = 0x2d5cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5cd4: 0x0
    ctx->pc = 0x2d5cd4u;
    // NOP
    // 0x2d5cd8: 0x0
    ctx->pc = 0x2d5cd8u;
    // NOP
    // 0x2d5cdc: 0x46000004
    ctx->pc = 0x2d5cdcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d5ce0: 0x46000032
    ctx->pc = 0x2d5ce0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5ce4: 0x0
    ctx->pc = 0x2d5ce4u;
    // NOP
    // 0x2d5ce8: 0x45030006
    ctx->pc = 0x2D5CE8u;
    {
        const bool branch_taken_0x2d5ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5ce8) {
            ctx->pc = 0x2D5CECu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->pc = 0x2D5D04u;
            goto label_2d5d04;
        }
    }
    ctx->pc = 0x2D5CF0u;
    // 0x2d5cf0: 0x460c6302
    ctx->pc = 0x2d5cf0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d5cf4: 0x46026300
    ctx->pc = 0x2d5cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2d5cf8: 0xc0ba284
    ctx->pc = 0x2D5CF8u;
    SET_GPR_U32(ctx, 31, 0x2D5D00u);
    ctx->pc = 0x2D5CFCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D00u; }
    }
    if (ctx->pc != 0x2D5D00u) { return; }
    ctx->pc = 0x2D5D00u;
    // 0x2d5d00: 0xe6200008
    ctx->pc = 0x2d5d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d5d04:
    // 0x2d5d04: 0xdfbf0020
    ctx->pc = 0x2d5d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5d08: 0xdfb10010
    ctx->pc = 0x2d5d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d0c: 0xdfb00000
    ctx->pc = 0x2d5d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d10: 0x3e00008
    ctx->pc = 0x2D5D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5C60u: goto label_2d5c60;
            case 0x2D5CB4u: goto label_2d5cb4;
            case 0x2D5D04u: goto label_2d5d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5D18u;
}
