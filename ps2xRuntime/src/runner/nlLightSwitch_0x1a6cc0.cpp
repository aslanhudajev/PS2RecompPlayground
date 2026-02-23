#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightSwitch
// Address: 0x1a6cc0 - 0x1a6d18
void nlLightSwitch_0x1a6cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightSwitch");


    ctx->pc = 0x1a6cc0u;

    // 0x1a6cc0: 0x41840
    ctx->pc = 0x1a6cc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6cc4: 0x641821
    ctx->pc = 0x1a6cc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6cc8: 0x31880
    ctx->pc = 0x1a6cc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6ccc: 0x641821
    ctx->pc = 0x1a6cccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6cd0: 0x33100
    ctx->pc = 0x1a6cd0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6cd4: 0x3c030030
    ctx->pc = 0x1a6cd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6cd8: 0x24633d30
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6cdc: 0x661821
    ctx->pc = 0x1a6cdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a6ce0: 0xa4650000
    ctx->pc = 0x1a6ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a6ce4: 0x2403000f
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a6ce8: 0x642023
    ctx->pc = 0x1a6ce8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6cec: 0x24030001
    ctx->pc = 0x1a6cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6cf0: 0x832004
    ctx->pc = 0x1a6cf0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a6cf4: 0x8f838a20
    ctx->pc = 0x1a6cf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x1a6cf8: 0x641825
    ctx->pc = 0x1a6cf8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6cfc: 0x14a00004
    ctx->pc = 0x1A6CFCu;
    {
        const bool branch_taken_0x1a6cfc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6D00u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 3));
        if (branch_taken_0x1a6cfc) {
            ctx->pc = 0x1A6D10u;
            goto label_1a6d10;
        }
    }
    ctx->pc = 0x1A6D04u;
    // 0x1a6d04: 0x8f838a20
    ctx->pc = 0x1a6d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x1a6d08: 0x641826
    ctx->pc = 0x1a6d08u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6d0c: 0xaf838a20
    ctx->pc = 0x1a6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 3));
label_1a6d10:
    // 0x1a6d10: 0x3e00008
    ctx->pc = 0x1A6D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6D10u: goto label_1a6d10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6D18u;
}
