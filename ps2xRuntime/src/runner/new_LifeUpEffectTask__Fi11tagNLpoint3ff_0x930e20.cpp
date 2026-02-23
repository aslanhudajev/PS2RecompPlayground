#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void new_LifeUpEffectTask__Fi11tagNLpoint3ff_0x930e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_LifeUpEffectTask__Fi11tagNLpoint3ff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("new_LifeUpEffectTask__Fi11tagNLpoint3ff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
