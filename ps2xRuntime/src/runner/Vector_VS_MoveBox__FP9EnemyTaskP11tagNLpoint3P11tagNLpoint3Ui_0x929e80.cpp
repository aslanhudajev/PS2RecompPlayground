#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Vector_VS_MoveBox__FP9EnemyTaskP11tagNLpoint3P11tagNLpoint3Ui_0x929e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Vector_VS_MoveBox__FP9EnemyTaskP11tagNLpoint3P11tagNLpoint3Ui");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Vector_VS_MoveBox__FP9EnemyTaskP11tagNLpoint3P11tagNLpoint3Ui", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
