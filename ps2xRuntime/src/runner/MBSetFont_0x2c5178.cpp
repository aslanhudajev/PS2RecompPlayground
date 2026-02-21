#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFont
// Address: 0x2c5178 - 0x2c5188
void MBSetFont_0x2c5178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5178u;

    // 0x2c5178: 0x3c03003d
    ctx->pc = 0x2c5178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c517c: 0x8c62b8a0
    ctx->pc = 0x2c517cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949024)));
    // 0x2c5180: 0x3e00008
    ctx->pc = 0x2C5180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5184u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949024), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5188u;
}
