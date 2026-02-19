#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPosCount
// Address: 0x2c95b0 - 0x2c95d4
void MBPsysSetPosCount_0x2c95b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c95b0u;

    // 0x2c95b0: 0x8c840070
    ctx->pc = 0x2c95b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c95b4: 0x90820037
    ctx->pc = 0x2c95b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c95b8: 0x2c420002
    ctx->pc = 0x2c95b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c95bc: 0x14400003
    ctx->pc = 0x2C95BCu;
    {
        const bool branch_taken_0x2c95bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c95bc) {
            ctx->pc = 0x2C95CCu;
            goto label_2c95cc;
        }
    }
    ctx->pc = 0x2C95C4u;
    // 0x2c95c4: 0x80b2558
    ctx->pc = 0x2C95C4u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C95CCu;
label_2c95cc:
    // 0x2c95cc: 0x3e00008
    ctx->pc = 0x2C95CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C95D0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C95CCu: goto label_2c95cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C95D4u;
}
