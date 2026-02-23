#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetSjtmp
// Address: 0x17be80 - 0x17be94
void PS2RNA_GetSjtmp_0x17be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetSjtmp");


    ctx->pc = 0x17be80u;

    // 0x17be80: 0x52880
    ctx->pc = 0x17be80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17be84: 0x852021
    ctx->pc = 0x17be84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17be88: 0x8c830008
    ctx->pc = 0x17be88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17be8c: 0x3e00008
    ctx->pc = 0x17BE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BE94u;
}
