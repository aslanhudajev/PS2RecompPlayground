#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void EN_TmpShadowPutNoMot__FP9EnemyTaskff_0x94ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EN_TmpShadowPutNoMot__FP9EnemyTaskff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("EN_TmpShadowPutNoMot__FP9EnemyTaskff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
