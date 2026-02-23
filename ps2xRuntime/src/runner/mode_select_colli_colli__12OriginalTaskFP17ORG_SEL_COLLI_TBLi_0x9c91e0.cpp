#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void mode_select_colli_colli__12OriginalTaskFP17ORG_SEL_COLLI_TBLi_0x9c91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mode_select_colli_colli__12OriginalTaskFP17ORG_SEL_COLLI_TBLi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("mode_select_colli_colli__12OriginalTaskFP17ORG_SEL_COLLI_TBLi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
