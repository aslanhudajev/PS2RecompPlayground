#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FontSetShadowColor
// Address: 0x200f28 - 0x200f34
void FontSetShadowColor_0x200f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200f28u;

    // 0x200f28: 0x3c02003c
    ctx->pc = 0x200f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x200f2c: 0x3e00008
    ctx->pc = 0x200F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F30u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947384), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200F34u;
}
