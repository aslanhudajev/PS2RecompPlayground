#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void GetPosRotY__6TBoss5FP11tagNLpoint3fff_0x9c40c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetPosRotY__6TBoss5FP11tagNLpoint3fff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("GetPosRotY__6TBoss5FP11tagNLpoint3fff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
