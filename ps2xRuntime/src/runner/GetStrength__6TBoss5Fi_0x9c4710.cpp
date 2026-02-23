#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void GetStrength__6TBoss5Fi_0x9c4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetStrength__6TBoss5Fi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("GetStrength__6TBoss5Fi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
