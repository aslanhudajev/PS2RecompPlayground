#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void put_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLii_0x9c9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("put_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
