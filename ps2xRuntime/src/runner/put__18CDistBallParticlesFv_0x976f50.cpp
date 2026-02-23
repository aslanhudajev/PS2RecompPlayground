#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void put__18CDistBallParticlesFv_0x976f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__18CDistBallParticlesFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("put__18CDistBallParticlesFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
