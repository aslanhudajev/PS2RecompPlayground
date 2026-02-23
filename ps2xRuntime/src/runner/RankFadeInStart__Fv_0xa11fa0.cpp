#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void RankFadeInStart__Fv_0xa11fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RankFadeInStart__Fv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("RankFadeInStart__Fv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
