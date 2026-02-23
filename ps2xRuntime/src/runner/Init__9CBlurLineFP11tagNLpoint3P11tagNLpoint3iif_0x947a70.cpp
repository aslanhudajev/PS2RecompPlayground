#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Init__9CBlurLineFP11tagNLpoint3P11tagNLpoint3iif_0x947a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Init__9CBlurLineFP11tagNLpoint3P11tagNLpoint3iif");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Init__9CBlurLineFP11tagNLpoint3P11tagNLpoint3iif", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
