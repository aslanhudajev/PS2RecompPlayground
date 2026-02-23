#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void opmp_strip_update__13TSt4KieruKabeFP19tagNL_PF_StripParam_0x949460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("opmp_strip_update__13TSt4KieruKabeFP19tagNL_PF_StripParam");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("opmp_strip_update__13TSt4KieruKabeFP19tagNL_PF_StripParam", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
