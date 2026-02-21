#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_defext
// Address: 0x2d0e40 - 0x2d0e48
void set_defext_0x2d0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0e40u;

    // 0x2d0e40: 0x3e00008
    ctx->pc = 0x2D0E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0E44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0E48u;
}
