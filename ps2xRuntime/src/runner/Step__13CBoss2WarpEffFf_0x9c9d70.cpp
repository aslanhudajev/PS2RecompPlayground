#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Step__13CBoss2WarpEffFf_0x9c9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Step__13CBoss2WarpEffFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Step__13CBoss2WarpEffFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
