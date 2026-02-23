#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _492_64___dt__11TrainingBatFv_0x9ebc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_492_64___dt__11TrainingBatFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@492@64@__dt__11TrainingBatFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
