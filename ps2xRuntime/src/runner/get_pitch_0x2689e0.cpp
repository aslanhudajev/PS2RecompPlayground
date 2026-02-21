#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_pitch
// Address: 0x2689e0 - 0x268aa4
void get_pitch_0x2689e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2689e0u;

    // 0x2689e0: 0x27bdffe0
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2689e4: 0xffbf0010
    ctx->pc = 0x2689e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2689e8: 0xc4810000
    ctx->pc = 0x2689e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2689ec: 0xc4a00000
    ctx->pc = 0x2689ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2689f0: 0x46000b01
    ctx->pc = 0x2689f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2689f4: 0xe7ac0000
    ctx->pc = 0x2689f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2689f8: 0xc4800004
    ctx->pc = 0x2689f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2689fc: 0xc4a10004
    ctx->pc = 0x2689fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268a00: 0x46010001
    ctx->pc = 0x268a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268a04: 0xe7a00004
    ctx->pc = 0x268a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268a08: 0xc4810008
    ctx->pc = 0x268a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268a0c: 0xc4a00008
    ctx->pc = 0x268a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a10: 0x46000841
    ctx->pc = 0x268a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268a14: 0xe7a10008
    ctx->pc = 0x268a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268a18: 0x460c6002
    ctx->pc = 0x268a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x268a1c: 0x46010842
    ctx->pc = 0x268a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x268a20: 0x46010000
    ctx->pc = 0x268a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268a24: 0x0
    ctx->pc = 0x268a24u;
    // NOP
    // 0x268a28: 0x0
    ctx->pc = 0x268a28u;
    // NOP
    // 0x268a2c: 0x46000004
    ctx->pc = 0x268a2cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x268a30: 0x46000032
    ctx->pc = 0x268a30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268a34: 0x45010004
    ctx->pc = 0x268A34u;
    {
        const bool branch_taken_0x268a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268a34) {
            ctx->pc = 0x268A48u;
            goto label_268a48;
        }
    }
    ctx->pc = 0x268A3Cu;
    // 0x268a3c: 0x460c6302
    ctx->pc = 0x268a3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x268a40: 0xc0ba284
    ctx->pc = 0x268A40u;
    SET_GPR_U32(ctx, 31, 0x268A48u);
    ctx->pc = 0x268A44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A48u; }
    }
    if (ctx->pc != 0x268A48u) { return; }
    ctx->pc = 0x268A48u;
label_268a48:
    // 0x268a48: 0x3c013a83
    ctx->pc = 0x268a48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x268a4c: 0x3421126f
    ctx->pc = 0x268a4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x268a50: 0x44810800
    ctx->pc = 0x268a50u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x268a54: 0x46010036
    ctx->pc = 0x268a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268a58: 0x0
    ctx->pc = 0x268a58u;
    // NOP
    // 0x268a5c: 0x45030001
    ctx->pc = 0x268A5Cu;
    {
        const bool branch_taken_0x268a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268a5c) {
            ctx->pc = 0x268A60u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x268A64u;
            goto label_268a64;
        }
    }
    ctx->pc = 0x268A64u;
label_268a64:
    // 0x268a64: 0xc7ac0004
    ctx->pc = 0x268a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268a68: 0x46006305
    ctx->pc = 0x268a68u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x268a6c: 0xc0ba04a
    ctx->pc = 0x268A6Cu;
    SET_GPR_U32(ctx, 31, 0x268A74u);
    ctx->pc = 0x268A70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A74u; }
    }
    if (ctx->pc != 0x268A74u) { return; }
    ctx->pc = 0x268A74u;
    // 0x268a74: 0x46000306
    ctx->pc = 0x268a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x268a78: 0xc7a10004
    ctx->pc = 0x268a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268a7c: 0x44800000
    ctx->pc = 0x268a7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268a80: 0x46010036
    ctx->pc = 0x268a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268a84: 0x0
    ctx->pc = 0x268a84u;
    // NOP
    // 0x268a88: 0x45030001
    ctx->pc = 0x268A88u;
    {
        const bool branch_taken_0x268a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268a88) {
            ctx->pc = 0x268A8Cu;
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->pc = 0x268A90u;
            goto label_268a90;
        }
    }
    ctx->pc = 0x268A90u;
label_268a90:
    // 0x268a90: 0xc0b5a1a
    ctx->pc = 0x268A90u;
    SET_GPR_U32(ctx, 31, 0x268A98u);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A98u; }
    }
    if (ctx->pc != 0x268A98u) { return; }
    ctx->pc = 0x268A98u;
    // 0x268a98: 0xdfbf0010
    ctx->pc = 0x268a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268a9c: 0x3e00008
    ctx->pc = 0x268A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268A48u: goto label_268a48;
            case 0x268A64u: goto label_268a64;
            case 0x268A90u: goto label_268a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268AA4u;
}
