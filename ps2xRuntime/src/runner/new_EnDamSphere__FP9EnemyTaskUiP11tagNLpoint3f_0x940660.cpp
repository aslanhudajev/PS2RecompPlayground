#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void new_EnDamSphere__FP9EnemyTaskUiP11tagNLpoint3f_0x940660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_EnDamSphere__FP9EnemyTaskUiP11tagNLpoint3f");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("new_EnDamSphere__FP9EnemyTaskUiP11tagNLpoint3f", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
