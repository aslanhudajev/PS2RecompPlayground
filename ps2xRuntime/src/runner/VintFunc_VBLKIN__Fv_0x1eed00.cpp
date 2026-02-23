#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VintFunc_VBLKIN__Fv
// Address: 0x1eed00 - 0x1eed08
void VintFunc_VBLKIN__Fv_0x1eed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VintFunc_VBLKIN__Fv");


    ctx->pc = 0x1eed00u;

    // 0x1eed00: 0x3e00008
    ctx->pc = 0x1EED00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EED08u;
}
