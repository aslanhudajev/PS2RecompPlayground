#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___ct__14TBoss2WarpEff2FP9EnemyTaskfPiii_0x9c9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___ct__14TBoss2WarpEff2FP9EnemyTaskfPiii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__ct__14TBoss2WarpEff2FP9EnemyTaskfPiii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
