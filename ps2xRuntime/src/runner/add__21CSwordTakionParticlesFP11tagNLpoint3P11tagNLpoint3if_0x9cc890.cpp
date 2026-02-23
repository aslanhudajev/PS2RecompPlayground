#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void add__21CSwordTakionParticlesFP11tagNLpoint3P11tagNLpoint3if_0x9cc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("add__21CSwordTakionParticlesFP11tagNLpoint3P11tagNLpoint3if");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("add__21CSwordTakionParticlesFP11tagNLpoint3P11tagNLpoint3if", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
