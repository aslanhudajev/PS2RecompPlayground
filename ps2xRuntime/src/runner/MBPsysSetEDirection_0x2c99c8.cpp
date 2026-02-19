#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEDirection
// Address: 0x2c99c8 - 0x2c99f0
void MBPsysSetEDirection_0x2c99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c99c8u;

    // 0x2c99c8: 0x8c840070
    ctx->pc = 0x2c99c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c99cc: 0x90820037
    ctx->pc = 0x2c99ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c99d0: 0x2c420002
    ctx->pc = 0x2c99d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c99d4: 0x54400003
    ctx->pc = 0x2C99D4u;
    {
        const bool branch_taken_0x2c99d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c99d4) {
            ctx->pc = 0x2C99D8u;
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
            ctx->pc = 0x2C99E4u;
            goto label_2c99e4;
        }
    }
    ctx->pc = 0x2C99DCu;
    // 0x2c99dc: 0x80b2558
    ctx->pc = 0x2C99DCu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C99E4u;
label_2c99e4:
    // 0x2c99e4: 0xe48d0048
    ctx->pc = 0x2c99e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2c99e8: 0x3e00008
    ctx->pc = 0x2C99E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C99ECu;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C99E4u: goto label_2c99e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C99F0u;
}
