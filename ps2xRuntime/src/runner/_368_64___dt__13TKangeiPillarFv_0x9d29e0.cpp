#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _368_64___dt__13TKangeiPillarFv_0x9d29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_368_64___dt__13TKangeiPillarFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@368@64@__dt__13TKangeiPillarFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
