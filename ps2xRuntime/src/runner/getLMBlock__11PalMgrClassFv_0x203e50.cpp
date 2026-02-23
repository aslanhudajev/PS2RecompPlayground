#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getLMBlock__11PalMgrClassFv
// Address: 0x203e50 - 0x203e8c
void getLMBlock__11PalMgrClassFv_0x203e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getLMBlock__11PalMgrClassFv");


    ctx->pc = 0x203e50u;

    // 0x203e50: 0x8c830008
    ctx->pc = 0x203e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203e54: 0x24020200
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x203e58: 0x14620003
    ctx->pc = 0x203E58u;
    {
        const bool branch_taken_0x203e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x203e58) {
            ctx->pc = 0x203E68u;
            goto label_203e68;
        }
    }
    ctx->pc = 0x203E60u;
label_203e60:
    // 0x203e60: 0x1000ffff
    ctx->pc = 0x203E60u;
    {
        const bool branch_taken_0x203e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x203e60) {
            ctx->pc = 0x203E60u;
            goto label_203e60;
        }
    }
    ctx->pc = 0x203E68u;
label_203e68:
    // 0x203e68: 0x8c850008
    ctx->pc = 0x203e68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203e6c: 0x3c020052
    ctx->pc = 0x203e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x203e70: 0x2442b8b0
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949040));
    // 0x203e74: 0x24a30001
    ctx->pc = 0x203e74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x203e78: 0xac830008
    ctx->pc = 0x203e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x203e7c: 0x51880
    ctx->pc = 0x203e7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x203e80: 0x431021
    ctx->pc = 0x203e80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203e84: 0x3e00008
    ctx->pc = 0x203E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E88u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203E60u: goto label_203e60;
            case 0x203E68u: goto label_203e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203E8Cu;
}
