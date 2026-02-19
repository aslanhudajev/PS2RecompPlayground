#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEDelay
// Address: 0x2c9600 - 0x2c9650
void MBPsysSetEDelay_0x2c9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9600u;

    // 0x2c9600: 0x8c840070
    ctx->pc = 0x2c9600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9604: 0x90820037
    ctx->pc = 0x2c9604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9608: 0x2c420002
    ctx->pc = 0x2c9608u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c960c: 0x14400003
    ctx->pc = 0x2C960Cu;
    {
        const bool branch_taken_0x2c960c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c960c) {
            ctx->pc = 0x2C961Cu;
            goto label_2c961c;
        }
    }
    ctx->pc = 0x2C9614u;
    // 0x2c9614: 0x80b2558
    ctx->pc = 0x2C9614u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C961Cu;
label_2c961c:
    // 0x2c961c: 0x3c0141f0
    ctx->pc = 0x2c961cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2c9620: 0x44810000
    ctx->pc = 0x2c9620u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9624: 0x46006302
    ctx->pc = 0x2c9624u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c9628: 0x44800000
    ctx->pc = 0x2c9628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c962c: 0x460c0034
    ctx->pc = 0x2c962cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9630: 0x45000005
    ctx->pc = 0x2C9630u;
    {
        const bool branch_taken_0x2c9630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9630) {
            ctx->pc = 0x2C9648u;
            goto label_2c9648;
        }
    }
    ctx->pc = 0x2C9638u;
    // 0x2c9638: 0x46006024
    ctx->pc = 0x2c9638u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2c963c: 0x44020000
    ctx->pc = 0x2c963cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c9640: 0x3e00008
    ctx->pc = 0x2C9640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9644u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C961Cu: goto label_2c961c;
            case 0x2C9648u: goto label_2c9648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9648u;
label_2c9648:
    // 0x2c9648: 0x3e00008
    ctx->pc = 0x2C9648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C964Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C961Cu: goto label_2c961c;
            case 0x2C9648u: goto label_2c9648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9650u;
}
