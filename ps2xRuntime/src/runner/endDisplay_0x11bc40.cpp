#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: endDisplay
// Address: 0x11bc40 - 0x11bc4c
void endDisplay_0x11bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bc40u;

    // 0x11bc40: 0xaf80843c
    ctx->pc = 0x11bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 0));
    // 0x11bc44: 0x3e00008
    ctx->pc = 0x11BC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC48u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BC4Cu;
}
