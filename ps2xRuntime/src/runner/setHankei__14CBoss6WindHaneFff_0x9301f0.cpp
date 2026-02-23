#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void setHankei__14CBoss6WindHaneFff_0x9301f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setHankei__14CBoss6WindHaneFff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("setHankei__14CBoss6WindHaneFff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
