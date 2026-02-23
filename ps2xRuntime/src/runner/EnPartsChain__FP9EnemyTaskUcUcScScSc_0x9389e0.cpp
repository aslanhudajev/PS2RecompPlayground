#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void EnPartsChain__FP9EnemyTaskUcUcScScSc_0x9389e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnPartsChain__FP9EnemyTaskUcUcScScSc");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("EnPartsChain__FP9EnemyTaskUcUcScScSc", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
