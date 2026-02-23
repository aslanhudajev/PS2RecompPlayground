#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetOutPan
// Address: 0x17bd18 - 0x17bd28
void PS2RNA_GetOutPan_0x17bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetOutPan");


    ctx->pc = 0x17bd18u;

    // 0x17bd18: 0x52880
    ctx->pc = 0x17bd18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17bd1c: 0x852021
    ctx->pc = 0x17bd1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17bd20: 0x3e00008
    ctx->pc = 0x17BD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BD28u;
}
