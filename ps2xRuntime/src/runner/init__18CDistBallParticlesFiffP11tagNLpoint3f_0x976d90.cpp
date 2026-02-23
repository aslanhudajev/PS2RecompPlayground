#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void init__18CDistBallParticlesFiffP11tagNLpoint3f_0x976d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__18CDistBallParticlesFiffP11tagNLpoint3f");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("init__18CDistBallParticlesFiffP11tagNLpoint3f", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
