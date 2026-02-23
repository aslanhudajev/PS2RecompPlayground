#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: defaultDestructer
// Address: 0x1a2620 - 0x1a2628
void defaultDestructer_0x1a2620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("defaultDestructer");


    ctx->pc = 0x1a2620u;

    // 0x1a2620: 0x3e00008
    ctx->pc = 0x1A2620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2628u;
}
