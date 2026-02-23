#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void MulShadowMatrix_sub__13TBoss6XShadowFP11tagNLpoint3P5PLANE_0x9cf070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MulShadowMatrix_sub__13TBoss6XShadowFP11tagNLpoint3P5PLANE");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("MulShadowMatrix_sub__13TBoss6XShadowFP11tagNLpoint3P5PLANE", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
