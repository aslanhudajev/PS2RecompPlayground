#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetERate4
// Address: 0x2c9918 - 0x2c9964
void MBPsysSetERate4_0x2c9918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9918u;

    // 0x2c9918: 0x8c840070
    ctx->pc = 0x2c9918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c991c: 0x90820037
    ctx->pc = 0x2c991cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9920: 0x2c420002
    ctx->pc = 0x2c9920u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9924: 0x14400003
    ctx->pc = 0x2C9924u;
    {
        const bool branch_taken_0x2c9924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9924) {
            ctx->pc = 0x2C9934u;
            goto label_2c9934;
        }
    }
    ctx->pc = 0x2C992Cu;
    // 0x2c992c: 0x80b2558
    ctx->pc = 0x2C992Cu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9934u;
label_2c9934:
    // 0x2c9934: 0x3c013d08
    ctx->pc = 0x2c9934u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2c9938: 0x34218889
    ctx->pc = 0x2c9938u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2c993c: 0x44810800
    ctx->pc = 0x2c993cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c9940: 0x46016002
    ctx->pc = 0x2c9940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c9944: 0xe48000d0
    ctx->pc = 0x2c9944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x2c9948: 0x46016802
    ctx->pc = 0x2c9948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2c994c: 0xe48000d4
    ctx->pc = 0x2c994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2c9950: 0x46017002
    ctx->pc = 0x2c9950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2c9954: 0xe48000d8
    ctx->pc = 0x2c9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x2c9958: 0x46017842
    ctx->pc = 0x2c9958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2c995c: 0x3e00008
    ctx->pc = 0x2C995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9960u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9934u: goto label_2c9934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9964u;
}
