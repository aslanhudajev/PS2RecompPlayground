#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calcZoom
// Address: 0x2acd00 - 0x2acd90
void calcZoom_0x2acd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2acd00u;

    // 0x2acd00: 0x3c020037
    ctx->pc = 0x2acd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2acd04: 0x8c458400
    ctx->pc = 0x2acd04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acd08: 0x8ca30000
    ctx->pc = 0x2acd08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2acd0c: 0x24020002
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2acd10: 0x1462001d
    ctx->pc = 0x2ACD10u;
    {
        const bool branch_taken_0x2acd10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2acd10) {
            ctx->pc = 0x2ACD88u;
            goto label_2acd88;
        }
    }
    ctx->pc = 0x2ACD18u;
    // 0x2acd18: 0xc483003c
    ctx->pc = 0x2acd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2acd1c: 0xc4840040
    ctx->pc = 0x2acd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2acd20: 0xc4a00020
    ctx->pc = 0x2acd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd24: 0x46001802
    ctx->pc = 0x2acd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2acd28: 0xe480003c
    ctx->pc = 0x2acd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2acd2c: 0xc4a00024
    ctx->pc = 0x2acd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd30: 0x46002002
    ctx->pc = 0x2acd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2acd34: 0xe4800040
    ctx->pc = 0x2acd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2acd38: 0xc4a10020
    ctx->pc = 0x2acd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acd3c: 0x3c013f80
    ctx->pc = 0x2acd3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2acd40: 0x44810000
    ctx->pc = 0x2acd40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2acd44: 0x46000841
    ctx->pc = 0x2acd44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2acd48: 0xc4a20024
    ctx->pc = 0x2acd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2acd4c: 0x46001081
    ctx->pc = 0x2acd4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2acd50: 0xc4a00028
    ctx->pc = 0x2acd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd54: 0x46000000
    ctx->pc = 0x2acd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2acd58: 0x46000841
    ctx->pc = 0x2acd58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2acd5c: 0xc4a0002c
    ctx->pc = 0x2acd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd60: 0x46000000
    ctx->pc = 0x2acd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2acd64: 0x46001081
    ctx->pc = 0x2acd64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2acd68: 0x460118c2
    ctx->pc = 0x2acd68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2acd6c: 0xc4800048
    ctx->pc = 0x2acd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd70: 0x460018c0
    ctx->pc = 0x2acd70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2acd74: 0xe4830048
    ctx->pc = 0x2acd74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2acd78: 0x46022102
    ctx->pc = 0x2acd78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2acd7c: 0xc480004c
    ctx->pc = 0x2acd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acd80: 0x46002100
    ctx->pc = 0x2acd80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2acd84: 0xe484004c
    ctx->pc = 0x2acd84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_2acd88:
    // 0x2acd88: 0x3e00008
    ctx->pc = 0x2ACD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ACD88u: goto label_2acd88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ACD90u;
}
