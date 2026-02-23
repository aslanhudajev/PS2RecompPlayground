#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void PostPut__13TBoss4ShoukanFv_0x9ced80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PostPut__13TBoss4ShoukanFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("PostPut__13TBoss4ShoukanFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
