#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: IncAtt
// Address: 0x234d00 - 0x234d3c
void IncAtt_0x234d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234d00u;

    // 0x234d00: 0x3c013a83
    ctx->pc = 0x234d00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x234d04: 0x3421126f
    ctx->pc = 0x234d04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x234d08: 0x44810000
    ctx->pc = 0x234d08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x234d0c: 0x46006b42
    ctx->pc = 0x234d0cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x234d10: 0xc4810024
    ctx->pc = 0x234d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234d14: 0xc4800020
    ctx->pc = 0x234d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234d18: 0x46000801
    ctx->pc = 0x234d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x234d1c: 0x46006b42
    ctx->pc = 0x234d1cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x234d20: 0x460d6000
    ctx->pc = 0x234d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x234d24: 0x46000834
    ctx->pc = 0x234d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234d28: 0x0
    ctx->pc = 0x234d28u;
    // NOP
    // 0x234d2c: 0x45030001
    ctx->pc = 0x234D2Cu;
    {
        const bool branch_taken_0x234d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234d2c) {
            ctx->pc = 0x234D30u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x234D34u;
            goto label_234d34;
        }
    }
    ctx->pc = 0x234D34u;
label_234d34:
    // 0x234d34: 0x3e00008
    ctx->pc = 0x234D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234D34u: goto label_234d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234D3Cu;
}
