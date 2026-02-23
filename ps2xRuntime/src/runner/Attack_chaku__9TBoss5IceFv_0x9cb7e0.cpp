#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Attack_chaku__9TBoss5IceFv_0x9cb7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Attack_chaku__9TBoss5IceFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Attack_chaku__9TBoss5IceFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
