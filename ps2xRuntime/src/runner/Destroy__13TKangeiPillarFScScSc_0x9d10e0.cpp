#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Destroy__13TKangeiPillarFScScSc_0x9d10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Destroy__13TKangeiPillarFScScSc");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Destroy__13TKangeiPillarFScScSc", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
