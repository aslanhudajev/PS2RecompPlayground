#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void InitBranchParam__6TBoss5Fv_0x9c85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitBranchParam__6TBoss5Fv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("InitBranchParam__6TBoss5Fv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
