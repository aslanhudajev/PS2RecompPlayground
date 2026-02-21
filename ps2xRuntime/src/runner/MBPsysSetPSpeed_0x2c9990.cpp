#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPSpeed
// Address: 0x2c9990 - 0x2c99c4
void MBPsysSetPSpeed_0x2c9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9990u;

    // 0x2c9990: 0x8c840070
    ctx->pc = 0x2c9990u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9994: 0x90820037
    ctx->pc = 0x2c9994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9998: 0x2c420002
    ctx->pc = 0x2c9998u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c999c: 0x14400003
    ctx->pc = 0x2C999Cu;
    {
        const bool branch_taken_0x2c999c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c999c) {
            ctx->pc = 0x2C99ACu;
            goto label_2c99ac;
        }
    }
    ctx->pc = 0x2C99A4u;
    // 0x2c99a4: 0x80b2558
    ctx->pc = 0x2C99A4u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C99ACu;
label_2c99ac:
    // 0x2c99ac: 0x3c013d08
    ctx->pc = 0x2c99acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2c99b0: 0x34218889
    ctx->pc = 0x2c99b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2c99b4: 0x44810000
    ctx->pc = 0x2c99b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c99b8: 0x46006002
    ctx->pc = 0x2c99b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c99bc: 0x3e00008
    ctx->pc = 0x2C99BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C99C0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C99ACu: goto label_2c99ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C99C4u;
}
