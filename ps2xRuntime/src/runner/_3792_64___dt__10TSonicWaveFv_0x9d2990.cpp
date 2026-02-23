#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _3792_64___dt__10TSonicWaveFv_0x9d2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_3792_64___dt__10TSonicWaveFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@3792@64@__dt__10TSonicWaveFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
