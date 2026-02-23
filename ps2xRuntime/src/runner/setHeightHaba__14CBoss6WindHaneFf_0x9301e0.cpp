#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void setHeightHaba__14CBoss6WindHaneFf_0x9301e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setHeightHaba__14CBoss6WindHaneFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("setHeightHaba__14CBoss6WindHaneFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
