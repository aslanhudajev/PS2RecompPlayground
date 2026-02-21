#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: safe_expf
// Address: 0x2d0cf8 - 0x2d0d34
void safe_expf_0x2d0cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0cf8u;

    // 0x2d0cf8: 0x27bdfff0
    ctx->pc = 0x2d0cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0cfc: 0x3c01c248
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49736 << 16));
    // 0x2d0d00: 0x44810000
    ctx->pc = 0x2d0d00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d0d04: 0x46006034
    ctx->pc = 0x2d0d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0d08: 0x0
    ctx->pc = 0x2d0d08u;
    // NOP
    // 0x2d0d0c: 0x45000004
    ctx->pc = 0x2D0D0Cu;
    {
        const bool branch_taken_0x2d0d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0D10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2d0d0c) {
            ctx->pc = 0x2D0D20u;
            goto label_2d0d20;
        }
    }
    ctx->pc = 0x2D0D14u;
    // 0x2d0d14: 0x44800000
    ctx->pc = 0x2d0d14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d0d18: 0x10000004
    ctx->pc = 0x2D0D18u;
    {
        const bool branch_taken_0x2d0d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0D1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2d0d18) {
            ctx->pc = 0x2D0D2Cu;
            goto label_2d0d2c;
        }
    }
    ctx->pc = 0x2D0D20u;
label_2d0d20:
    // 0x2d0d20: 0xc0ba094
    ctx->pc = 0x2D0D20u;
    SET_GPR_U32(ctx, 31, 0x2D0D28u);
    ctx->pc = 0x2E8250u;
    {
        const uint32_t __entryPc = ctx->pc;
        expf_0x2e8250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D28u; }
    }
    if (ctx->pc != 0x2D0D28u) { return; }
    ctx->pc = 0x2D0D28u;
    // 0x2d0d28: 0xdfbf0000
    ctx->pc = 0x2d0d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0d2c:
    // 0x2d0d2c: 0x3e00008
    ctx->pc = 0x2D0D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0D20u: goto label_2d0d20;
            case 0x2D0D2Cu: goto label_2d0d2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0D34u;
}
