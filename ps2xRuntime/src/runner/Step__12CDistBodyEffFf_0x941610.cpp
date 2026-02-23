#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Step__12CDistBodyEffFf_0x941610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Step__12CDistBodyEffFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Step__12CDistBodyEffFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
