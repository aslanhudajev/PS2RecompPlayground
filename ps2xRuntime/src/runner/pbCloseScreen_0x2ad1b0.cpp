#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseScreen
// Address: 0x2ad1b0 - 0x2ad1c0
void pbCloseScreen_0x2ad1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad1b0u;

    // 0x2ad1b0: 0x3c020036
    ctx->pc = 0x2ad1b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad1b4: 0x8c42dee0
    ctx->pc = 0x2ad1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad1b8: 0x3e00008
    ctx->pc = 0x2AD1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1BCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD1C0u;
}
