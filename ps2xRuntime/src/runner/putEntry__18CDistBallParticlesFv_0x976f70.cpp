#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void putEntry__18CDistBallParticlesFv_0x976f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putEntry__18CDistBallParticlesFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("putEntry__18CDistBallParticlesFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
