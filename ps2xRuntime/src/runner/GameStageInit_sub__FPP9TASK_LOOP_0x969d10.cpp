#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void GameStageInit_sub__FPP9TASK_LOOP_0x969d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GameStageInit_sub__FPP9TASK_LOOP");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("GameStageInit_sub__FPP9TASK_LOOP", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
