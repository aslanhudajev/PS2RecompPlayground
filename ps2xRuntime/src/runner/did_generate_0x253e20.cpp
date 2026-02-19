#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: did_generate
// Address: 0x253e20 - 0x253e94
void did_generate_0x253e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253e20u;

    // 0x253e20: 0x248400f0
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    // 0x253e24: 0x9082000b
    ctx->pc = 0x253e24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x253e28: 0x44820800
    ctx->pc = 0x253e28u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x253e2c: 0x46800860
    ctx->pc = 0x253e2cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x253e30: 0x3c0140c0
    ctx->pc = 0x253e30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x253e34: 0x44810000
    ctx->pc = 0x253e34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253e38: 0x46000842
    ctx->pc = 0x253e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253e3c: 0xc483000c
    ctx->pc = 0x253e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253e40: 0x3c013f80
    ctx->pc = 0x253e40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x253e44: 0x44811000
    ctx->pc = 0x253e44u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x253e48: 0x46021800
    ctx->pc = 0x253e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x253e4c: 0x46000842
    ctx->pc = 0x253e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253e50: 0x46000824
    ctx->pc = 0x253e50u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x253e54: 0x44020000
    ctx->pc = 0x253e54u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x253e58: 0xa4820008
    ctx->pc = 0x253e58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x253e5c: 0x44850000
    ctx->pc = 0x253e5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x253e60: 0x46800020
    ctx->pc = 0x253e60u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x253e64: 0x46000000
    ctx->pc = 0x253e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x253e68: 0x0
    ctx->pc = 0x253e68u;
    // NOP
    // 0x253e6c: 0x0
    ctx->pc = 0x253e6cu;
    // NOP
    // 0x253e70: 0x46001003
    ctx->pc = 0x253e70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x253e74: 0x46030000
    ctx->pc = 0x253e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x253e78: 0x46001034
    ctx->pc = 0x253e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253e7c: 0x0
    ctx->pc = 0x253e7cu;
    // NOP
    // 0x253e80: 0x45000002
    ctx->pc = 0x253E80u;
    {
        const bool branch_taken_0x253e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253E84u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        if (branch_taken_0x253e80) {
            ctx->pc = 0x253E8Cu;
            goto label_253e8c;
        }
    }
    ctx->pc = 0x253E88u;
    // 0x253e88: 0xac80000c
    ctx->pc = 0x253e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_253e8c:
    // 0x253e8c: 0x3e00008
    ctx->pc = 0x253E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253E8Cu: goto label_253e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253E94u;
}
