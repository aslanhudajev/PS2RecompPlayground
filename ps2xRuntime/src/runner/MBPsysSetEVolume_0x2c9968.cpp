#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEVolume
// Address: 0x2c9968 - 0x2c9990
void MBPsysSetEVolume_0x2c9968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9968u;

    // 0x2c9968: 0x8c840070
    ctx->pc = 0x2c9968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c996c: 0x90820037
    ctx->pc = 0x2c996cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9970: 0x2c420002
    ctx->pc = 0x2c9970u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9974: 0x54400003
    ctx->pc = 0x2C9974u;
    {
        const bool branch_taken_0x2c9974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9974) {
            ctx->pc = 0x2C9978u;
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
            ctx->pc = 0x2C9984u;
            goto label_2c9984;
        }
    }
    ctx->pc = 0x2C997Cu;
    // 0x2c997c: 0x80b2558
    ctx->pc = 0x2C997Cu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9984u;
label_2c9984:
    // 0x2c9984: 0xe48d0054
    ctx->pc = 0x2c9984u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x2c9988: 0x3e00008
    ctx->pc = 0x2C9988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C998Cu;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9984u: goto label_2c9984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9990u;
}
