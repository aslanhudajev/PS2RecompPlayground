#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void OrgDispGoggleEffectCore__Fi11tagNLpoint3_0x9df290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OrgDispGoggleEffectCore__Fi11tagNLpoint3");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("OrgDispGoggleEffectCore__Fi11tagNLpoint3", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
