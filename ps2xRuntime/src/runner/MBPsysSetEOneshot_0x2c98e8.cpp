#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEOneshot
// Address: 0x2c98e8 - 0x2c9914
void MBPsysSetEOneshot_0x2c98e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c98e8u;

    // 0x2c98e8: 0x8c840070
    ctx->pc = 0x2c98e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c98ec: 0x90820037
    ctx->pc = 0x2c98ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c98f0: 0x2c420002
    ctx->pc = 0x2c98f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c98f4: 0x54400003
    ctx->pc = 0x2C98F4u;
    {
        const bool branch_taken_0x2c98f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c98f4) {
            ctx->pc = 0x2C98F8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->pc = 0x2C9904u;
            goto label_2c9904;
        }
    }
    ctx->pc = 0x2C98FCu;
    // 0x2c98fc: 0x80b2558
    ctx->pc = 0x2C98FCu;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9904u;
label_2c9904:
    // 0x2c9904: 0x34420001
    ctx->pc = 0x2c9904u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2c9908: 0xa482002c
    ctx->pc = 0x2c9908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c990c: 0x3e00008
    ctx->pc = 0x2C990Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9910u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9904u: goto label_2c9904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9914u;
}
