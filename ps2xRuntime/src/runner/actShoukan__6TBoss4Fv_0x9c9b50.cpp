#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void actShoukan__6TBoss4Fv_0x9c9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("actShoukan__6TBoss4Fv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("actShoukan__6TBoss4Fv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
