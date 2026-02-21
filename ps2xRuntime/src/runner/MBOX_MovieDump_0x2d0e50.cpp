#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_MovieDump
// Address: 0x2d0e50 - 0x2d0e58
void MBOX_MovieDump_0x2d0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0e50u;

    // 0x2d0e50: 0x3e00008
    ctx->pc = 0x2D0E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0E58u;
}
