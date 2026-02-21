#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseRender
// Address: 0x2ab650 - 0x2ab660
void pbCloseRender_0x2ab650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab650u;

    // 0x2ab650: 0x3c020036
    ctx->pc = 0x2ab650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab654: 0x8c42dee0
    ctx->pc = 0x2ab654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab658: 0x3e00008
    ctx->pc = 0x2AB658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB65Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB660u;
}
