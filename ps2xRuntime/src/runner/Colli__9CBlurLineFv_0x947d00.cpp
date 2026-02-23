#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Colli__9CBlurLineFv_0x947d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Colli__9CBlurLineFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Colli__9CBlurLineFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
