#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetEForever
// Address: 0x2c98c0 - 0x2c98e8
void MBPsysSetEForever_0x2c98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c98c0u;

    // 0x2c98c0: 0x8c840070
    ctx->pc = 0x2c98c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c98c4: 0x90820037
    ctx->pc = 0x2c98c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c98c8: 0x2c420002
    ctx->pc = 0x2c98c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c98cc: 0x54400003
    ctx->pc = 0x2C98CCu;
    {
        const bool branch_taken_0x2c98cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c98cc) {
            ctx->pc = 0x2C98D0u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->pc = 0x2C98DCu;
            goto label_2c98dc;
        }
    }
    ctx->pc = 0x2C98D4u;
    // 0x2c98d4: 0x80b2558
    ctx->pc = 0x2C98D4u;
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C98DCu;
label_2c98dc:
    // 0x2c98dc: 0x34420002
    ctx->pc = 0x2c98dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2c98e0: 0x3e00008
    ctx->pc = 0x2C98E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C98E4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C98DCu: goto label_2c98dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C98E8u;
}
