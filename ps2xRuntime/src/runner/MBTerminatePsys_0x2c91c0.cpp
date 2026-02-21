#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTerminatePsys
// Address: 0x2c91c0 - 0x2c91e0
void MBTerminatePsys_0x2c91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c91c0u;

    // 0x2c91c0: 0x8c830070
    ctx->pc = 0x2c91c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c91c4: 0x90620037
    ctx->pc = 0x2c91c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
    // 0x2c91c8: 0x2c420007
    ctx->pc = 0x2c91c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 7));
    // 0x2c91cc: 0x10400002
    ctx->pc = 0x2C91CCu;
    {
        const bool branch_taken_0x2c91cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C91D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2c91cc) {
            ctx->pc = 0x2C91D8u;
            goto label_2c91d8;
        }
    }
    ctx->pc = 0x2C91D4u;
    // 0x2c91d4: 0xa0620037
    ctx->pc = 0x2c91d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 55), (uint8_t)GPR_U32(ctx, 2));
label_2c91d8:
    // 0x2c91d8: 0x3e00008
    ctx->pc = 0x2C91D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C91D8u: goto label_2c91d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C91E0u;
}
