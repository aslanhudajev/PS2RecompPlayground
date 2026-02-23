#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: This__Fv
// Address: 0x1a40f0 - 0x1a40f8
void This__Fv_0x1a40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("This__Fv");


    ctx->pc = 0x1a40f0u;

    // 0x1a40f0: 0x3e00008
    ctx->pc = 0x1A40F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A40F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A40F8u;
}
