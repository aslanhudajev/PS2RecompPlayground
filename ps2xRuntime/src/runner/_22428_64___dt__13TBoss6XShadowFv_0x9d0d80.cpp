#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _22428_64___dt__13TBoss6XShadowFv_0x9d0d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_22428_64___dt__13TBoss6XShadowFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@22428@64@__dt__13TBoss6XShadowFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
