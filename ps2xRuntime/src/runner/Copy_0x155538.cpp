#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Copy
// Address: 0x155538 - 0x155548
void Copy_0x155538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Copy");


    ctx->pc = 0x155538u;

    // 0x155538: 0x2403005a
    ctx->pc = 0x155538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x15553c: 0xc
    ctx->pc = 0x15553cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x155540: 0x3e00008
    ctx->pc = 0x155540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155548u;
}
