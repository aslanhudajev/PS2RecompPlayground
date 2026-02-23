#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _28_64___dt__18TSonicWaveEffHahenFv_0x9d29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_28_64___dt__18TSonicWaveEffHahenFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@28@64@__dt__18TSonicWaveEffHahenFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
