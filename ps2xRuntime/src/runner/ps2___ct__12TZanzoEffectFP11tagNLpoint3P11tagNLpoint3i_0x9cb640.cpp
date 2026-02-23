#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___ct__12TZanzoEffectFP11tagNLpoint3P11tagNLpoint3i_0x9cb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___ct__12TZanzoEffectFP11tagNLpoint3P11tagNLpoint3i");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__ct__12TZanzoEffectFP11tagNLpoint3P11tagNLpoint3i", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
