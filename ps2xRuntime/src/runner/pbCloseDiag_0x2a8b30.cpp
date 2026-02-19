#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseDiag
// Address: 0x2a8b30 - 0x2a8b40
void pbCloseDiag_0x2a8b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8b30u;

    // 0x2a8b30: 0x3c020036
    ctx->pc = 0x2a8b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8b34: 0x8c42dee0
    ctx->pc = 0x2a8b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8b38: 0x3e00008
    ctx->pc = 0x2A8B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B40u;
}
