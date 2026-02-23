#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ChgDead__11TrainingBatFv_0x9eb6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChgDead__11TrainingBatFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("ChgDead__11TrainingBatFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
