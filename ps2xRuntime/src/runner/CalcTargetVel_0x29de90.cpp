#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcTargetVel
// Address: 0x29de90 - 0x29def8
void CalcTargetVel_0x29de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29de90u;

    // 0x29de90: 0x80402d
    ctx->pc = 0x29de90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de94: 0x3c013f80
    ctx->pc = 0x29de94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29de98: 0x44810000
    ctx->pc = 0x29de98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29de9c: 0x0
    ctx->pc = 0x29de9cu;
    // NOP
    // 0x29dea0: 0x0
    ctx->pc = 0x29dea0u;
    // NOP
    // 0x29dea4: 0x460c0083
    ctx->pc = 0x29dea4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[12];
    // 0x29dea8: 0x382d
    ctx->pc = 0x29dea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29deac: 0x3c013f00
    ctx->pc = 0x29deacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29deb0: 0x44811800
    ctx->pc = 0x29deb0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x29deb4: 0x0
    ctx->pc = 0x29deb4u;
    // NOP
label_29deb8:
    // 0x29deb8: 0x71880
    ctx->pc = 0x29deb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x29debc: 0x682021
    ctx->pc = 0x29debcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29dec0: 0x651021
    ctx->pc = 0x29dec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29dec4: 0xc4410000
    ctx->pc = 0x29dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dec8: 0x46011042
    ctx->pc = 0x29dec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29decc: 0x661821
    ctx->pc = 0x29deccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29ded0: 0xc4600000
    ctx->pc = 0x29ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ded4: 0x46030002
    ctx->pc = 0x29ded4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x29ded8: 0x460c0002
    ctx->pc = 0x29ded8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x29dedc: 0x46000841
    ctx->pc = 0x29dedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29dee0: 0x24e70001
    ctx->pc = 0x29dee0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x29dee4: 0x28e20003
    ctx->pc = 0x29dee4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x29dee8: 0x1440fff3
    ctx->pc = 0x29DEE8u;
    {
        const bool branch_taken_0x29dee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DEECu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x29dee8) {
            ctx->pc = 0x29DEB8u;
            goto label_29deb8;
        }
    }
    ctx->pc = 0x29DEF0u;
    // 0x29def0: 0x3e00008
    ctx->pc = 0x29DEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DEB8u: goto label_29deb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DEF8u;
}
