#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightType
// Address: 0x1a6b60 - 0x1a6b88
void nlLightType_0x1a6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightType");


    ctx->pc = 0x1a6b60u;

    // 0x1a6b60: 0x41840
    ctx->pc = 0x1a6b60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6b64: 0x641821
    ctx->pc = 0x1a6b64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6b68: 0x31880
    ctx->pc = 0x1a6b68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6b6c: 0x641821
    ctx->pc = 0x1a6b6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6b70: 0x32100
    ctx->pc = 0x1a6b70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6b74: 0x3c030030
    ctx->pc = 0x1a6b74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6b78: 0x24633d30
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6b7c: 0x641821
    ctx->pc = 0x1a6b7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6b80: 0x3e00008
    ctx->pc = 0x1A6B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6B84u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6B88u;
}
