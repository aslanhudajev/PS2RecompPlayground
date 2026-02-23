#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void EN_TmpShadowPut__FP9EnemyTaskf_0x94eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EN_TmpShadowPut__FP9EnemyTaskf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("EN_TmpShadowPut__FP9EnemyTaskf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
