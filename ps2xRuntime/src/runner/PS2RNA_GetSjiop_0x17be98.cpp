#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetSjiop
// Address: 0x17be98 - 0x17beac
void PS2RNA_GetSjiop_0x17be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetSjiop");


    ctx->pc = 0x17be98u;

    // 0x17be98: 0x52880
    ctx->pc = 0x17be98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17be9c: 0x852021
    ctx->pc = 0x17be9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17bea0: 0x8c830008
    ctx->pc = 0x17bea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17bea4: 0x3e00008
    ctx->pc = 0x17BEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEACu;
}
