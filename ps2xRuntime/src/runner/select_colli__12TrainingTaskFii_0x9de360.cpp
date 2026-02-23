#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void select_colli__12TrainingTaskFii_0x9de360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("select_colli__12TrainingTaskFii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("select_colli__12TrainingTaskFii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
