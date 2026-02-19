#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEAngle
// Address: 0x2c9a70 - 0x2c9a94
void MBPsysSetEAngle_0x2c9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9a70u;

    // 0x2c9a70: 0x8c840070
    ctx->pc = 0x2c9a70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9a74: 0x90820037
    ctx->pc = 0x2c9a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9a78: 0x2c420002
    ctx->pc = 0x2c9a78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9a7c: 0x14400003
    ctx->pc = 0x2C9A7Cu;
    {
        const bool branch_taken_0x2c9a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9a7c) {
            ctx->pc = 0x2C9A8Cu;
            goto label_2c9a8c;
        }
    }
    ctx->pc = 0x2C9A84u;
    // 0x2c9a84: 0x80b2558
    ctx->pc = 0x2C9A84u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9A8Cu;
label_2c9a8c:
    // 0x2c9a8c: 0x80b267c
    ctx->pc = 0x2C9A8Cu;
    ctx->pc = 0x2C99F0u;
    setAngle_0x2c99f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9A94u;
}
