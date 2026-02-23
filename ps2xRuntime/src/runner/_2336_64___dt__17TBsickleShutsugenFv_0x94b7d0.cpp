#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _2336_64___dt__17TBsickleShutsugenFv_0x94b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_2336_64___dt__17TBsickleShutsugenFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@2336@64@__dt__17TBsickleShutsugenFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
