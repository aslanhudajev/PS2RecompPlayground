#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void EnEtc4ShadowPut__FP11tagNLpoint3fP9EnemyTask_0x94d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnEtc4ShadowPut__FP11tagNLpoint3fP9EnemyTask");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("EnEtc4ShadowPut__FP11tagNLpoint3fP9EnemyTask", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
