#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RemoveDmacHandler
// Address: 0x154610 - 0x154620
void RemoveDmacHandler_0x154610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RemoveDmacHandler");


    ctx->pc = 0x154610u;

    // 0x154610: 0x24030013
    ctx->pc = 0x154610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x154614: 0xc
    ctx->pc = 0x154614u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154618: 0x3e00008
    ctx->pc = 0x154618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154620u;
}
