#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: text_clear
// Address: 0x2d1b78 - 0x2d1b84
void text_clear_0x2d1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1b78u;

    // 0x2d1b78: 0x3c02003d
    ctx->pc = 0x2d1b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d1b7c: 0x3e00008
    ctx->pc = 0x2D1B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1B80u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 8788), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1B84u;
}
