#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ctrl__14CBoss6WindHaneFv_0x930400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__14CBoss6WindHaneFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("ctrl__14CBoss6WindHaneFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
