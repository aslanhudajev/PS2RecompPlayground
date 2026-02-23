#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Enemy_Set_WaitPosBuff__FP9EnemyTaskP11WaitPosTask_0x933970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Enemy_Set_WaitPosBuff__FP9EnemyTaskP11WaitPosTask");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Enemy_Set_WaitPosBuff__FP9EnemyTaskP11WaitPosTask", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
