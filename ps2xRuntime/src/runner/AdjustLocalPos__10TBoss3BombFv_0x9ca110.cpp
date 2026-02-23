#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void AdjustLocalPos__10TBoss3BombFv_0x9ca110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AdjustLocalPos__10TBoss3BombFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("AdjustLocalPos__10TBoss3BombFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
