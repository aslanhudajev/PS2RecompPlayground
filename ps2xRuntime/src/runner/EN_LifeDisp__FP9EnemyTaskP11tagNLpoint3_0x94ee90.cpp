#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void EN_LifeDisp__FP9EnemyTaskP11tagNLpoint3_0x94ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EN_LifeDisp__FP9EnemyTaskP11tagNLpoint3");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("EN_LifeDisp__FP9EnemyTaskP11tagNLpoint3", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
