#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SameVec
// Address: 0x232fe0 - 0x23303c
void SameVec_0x232fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232fe0u;

    // 0x232fe0: 0x302d
    ctx->pc = 0x232fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fe4: 0x3c013dcc
    ctx->pc = 0x232fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x232fe8: 0x3421cccd
    ctx->pc = 0x232fe8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x232fec: 0x44811000
    ctx->pc = 0x232fecu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x232ff0: 0x61080
    ctx->pc = 0x232ff0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x232ff4: 0x0
    ctx->pc = 0x232ff4u;
    // NOP
label_232ff8:
    // 0x232ff8: 0x441821
    ctx->pc = 0x232ff8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232ffc: 0x451021
    ctx->pc = 0x232ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233000: 0xc4600000
    ctx->pc = 0x233000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233004: 0xc4410000
    ctx->pc = 0x233004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233008: 0x46010001
    ctx->pc = 0x233008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23300c: 0x46000005
    ctx->pc = 0x23300cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x233010: 0x46001034
    ctx->pc = 0x233010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233014: 0x0
    ctx->pc = 0x233014u;
    // NOP
    // 0x233018: 0x45000003
    ctx->pc = 0x233018u;
    {
        const bool branch_taken_0x233018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23301Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x233018) {
            ctx->pc = 0x233028u;
            goto label_233028;
        }
    }
    ctx->pc = 0x233020u;
    // 0x233020: 0x3e00008
    ctx->pc = 0x233020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233024u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232FF8u: goto label_232ff8;
            case 0x233028u: goto label_233028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233028u;
label_233028:
    // 0x233028: 0x28c20003
    ctx->pc = 0x233028u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 3));
    // 0x23302c: 0x1440fff2
    ctx->pc = 0x23302Cu;
    {
        const bool branch_taken_0x23302c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233030u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x23302c) {
            ctx->pc = 0x232FF8u;
            goto label_232ff8;
        }
    }
    ctx->pc = 0x233034u;
    // 0x233034: 0x3e00008
    ctx->pc = 0x233034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232FF8u: goto label_232ff8;
            case 0x233028u: goto label_233028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23303Cu;
}
