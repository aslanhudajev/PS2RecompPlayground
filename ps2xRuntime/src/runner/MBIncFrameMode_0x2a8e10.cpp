#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBIncFrameMode
// Address: 0x2a8e10 - 0x2a8e84
void MBIncFrameMode_0x2a8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8e10u;

    // 0x2a8e10: 0x3c020036
    ctx->pc = 0x2a8e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8e14: 0x8c43dee0
    ctx->pc = 0x2a8e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8e18: 0x8c620010
    ctx->pc = 0x2a8e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8e1c: 0x8c420010
    ctx->pc = 0x2a8e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a8e20: 0x822021
    ctx->pc = 0x2a8e20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a8e24: 0x2c820007
    ctx->pc = 0x2a8e24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 7));
    // 0x2a8e28: 0x1440000c
    ctx->pc = 0x2A8E28u;
    {
        const bool branch_taken_0x2a8e28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A8E2Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x2a8e28) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8E30u;
label_2a8e30:
    // 0x2a8e30: 0x2484fffc
    ctx->pc = 0x2a8e30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2a8e34: 0x2c820007
    ctx->pc = 0x2a8e34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 7));
    // 0x2a8e38: 0x0
    ctx->pc = 0x2a8e38u;
    // NOP
    // 0x2a8e3c: 0x0
    ctx->pc = 0x2a8e3cu;
    // NOP
    // 0x2a8e40: 0x0
    ctx->pc = 0x2a8e40u;
    // NOP
    // 0x2a8e44: 0x1040fffa
    ctx->pc = 0x2A8E44u;
    {
        const bool branch_taken_0x2a8e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8e44) {
            ctx->pc = 0x2A8E30u;
            goto label_2a8e30;
        }
    }
    ctx->pc = 0x2A8E4Cu;
    // 0x2a8e4c: 0x10000008
    ctx->pc = 0x2A8E4Cu;
    {
        const bool branch_taken_0x2a8e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A8E50u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x2a8e4c) {
            ctx->pc = 0x2A8E70u;
            goto label_2a8e70;
        }
    }
    ctx->pc = 0x2A8E54u;
    // 0x2a8e54: 0x0
    ctx->pc = 0x2a8e54u;
    // NOP
label_2a8e58:
    // 0x2a8e58: 0x2c820003
    ctx->pc = 0x2a8e58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
label_2a8e5c:
    // 0x2a8e5c: 0x0
    ctx->pc = 0x2a8e5cu;
    // NOP
    // 0x2a8e60: 0x0
    ctx->pc = 0x2a8e60u;
    // NOP
    // 0x2a8e64: 0x0
    ctx->pc = 0x2a8e64u;
    // NOP
    // 0x2a8e68: 0x0
    ctx->pc = 0x2a8e68u;
    // NOP
    // 0x2a8e6c: 0x0
    ctx->pc = 0x2a8e6cu;
    // NOP
label_2a8e70:
    // 0x2a8e70: 0x5440fff9
    ctx->pc = 0x2A8E70u;
    {
        const bool branch_taken_0x2a8e70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8e70) {
            ctx->pc = 0x2A8E74u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8E78u;
    // 0x2a8e78: 0x8c620010
    ctx->pc = 0x2a8e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8e7c: 0x3e00008
    ctx->pc = 0x2A8E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E80u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8E30u: goto label_2a8e30;
            case 0x2A8E58u: goto label_2a8e58;
            case 0x2A8E5Cu: goto label_2a8e5c;
            case 0x2A8E70u: goto label_2a8e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8E84u;
}
