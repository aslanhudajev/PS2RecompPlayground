#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _5340_64___dt__12TZanzoEffectFv_0x9d2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_5340_64___dt__12TZanzoEffectFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@5340@64@__dt__12TZanzoEffectFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
