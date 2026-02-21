#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbScreenSetAdjust
// Address: 0x2a9b40 - 0x2a9b78
void pbScreenSetAdjust_0x2a9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9b40u;

    // 0x2a9b40: 0x3c020036
    ctx->pc = 0x2a9b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a9b44: 0x8c42dee4
    ctx->pc = 0x2a9b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958820)));
    // 0x2a9b48: 0x10400009
    ctx->pc = 0x2A9B48u;
    {
        const bool branch_taken_0x2a9b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9B4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a9b48) {
            ctx->pc = 0x2A9B70u;
            goto label_2a9b70;
        }
    }
    ctx->pc = 0x2A9B50u;
    // 0x2a9b50: 0x8c43dee0
    ctx->pc = 0x2a9b50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a9b54: 0x3c020037
    ctx->pc = 0x2a9b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a9b58: 0xac448344
    ctx->pc = 0x2a9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935364), GPR_U32(ctx, 4));
    // 0x2a9b5c: 0x3c020037
    ctx->pc = 0x2a9b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a9b60: 0xac458348
    ctx->pc = 0x2a9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935368), GPR_U32(ctx, 5));
    // 0x2a9b64: 0x8c630010
    ctx->pc = 0x2a9b64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9b68: 0x24020001
    ctx->pc = 0x2a9b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9b6c: 0xac620048
    ctx->pc = 0x2a9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2a9b70:
    // 0x2a9b70: 0x3e00008
    ctx->pc = 0x2A9B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9B70u: goto label_2a9b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9B78u;
}
