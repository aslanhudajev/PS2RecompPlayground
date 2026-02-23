#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EndScreen__Fv
// Address: 0x214ea0 - 0x214ea8
void EndScreen__Fv_0x214ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EndScreen__Fv");


    ctx->pc = 0x214ea0u;

    // 0x214ea0: 0x3e00008
    ctx->pc = 0x214EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214EA8u;
}
