#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SetB6B4BDead__13TBoss6XBulletFv_0x9cd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetB6B4BDead__13TBoss6XBulletFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SetB6B4BDead__13TBoss6XBulletFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
