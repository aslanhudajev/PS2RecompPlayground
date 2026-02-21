#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPCount
// Address: 0x2c9588 - 0x2c95ac
void MBPsysSetPCount_0x2c9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9588u;

    // 0x2c9588: 0x8c840070
    ctx->pc = 0x2c9588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c958c: 0x90820037
    ctx->pc = 0x2c958cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c9590: 0x2c420002
    ctx->pc = 0x2c9590u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9594: 0x14400003
    ctx->pc = 0x2C9594u;
    {
        const bool branch_taken_0x2c9594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9594) {
            ctx->pc = 0x2C95A4u;
            goto label_2c95a4;
        }
    }
    ctx->pc = 0x2C959Cu;
    // 0x2c959c: 0x80b2558
    ctx->pc = 0x2C959Cu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C95A4u;
label_2c95a4:
    // 0x2c95a4: 0x3e00008
    ctx->pc = 0x2C95A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C95A8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C95A4u: goto label_2c95a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C95ACu;
}
