#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: endDisplay
// Address: 0x2dc830 - 0x2dc844
void endDisplay_0x2dc830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc830u;

    // 0x2dc830: 0x3c02003a
    ctx->pc = 0x2dc830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc834: 0xac40298c
    ctx->pc = 0x2dc834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10636), GPR_U32(ctx, 0));
    // 0x2dc838: 0x3c02003a
    ctx->pc = 0x2dc838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc83c: 0x3e00008
    ctx->pc = 0x2DC83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC840u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 11092), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC844u;
}
