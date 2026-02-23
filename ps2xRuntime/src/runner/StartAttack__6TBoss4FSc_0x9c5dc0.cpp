#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void StartAttack__6TBoss4FSc_0x9c5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("StartAttack__6TBoss4FSc");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("StartAttack__6TBoss4FSc", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
