#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void KillAllChildren__18TFlyingPillarBlockFv_0x9d2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("KillAllChildren__18TFlyingPillarBlockFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("KillAllChildren__18TFlyingPillarBlockFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
