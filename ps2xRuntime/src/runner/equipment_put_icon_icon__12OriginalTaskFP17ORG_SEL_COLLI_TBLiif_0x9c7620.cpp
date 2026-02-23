#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void equipment_put_icon_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLiif_0x9c7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("equipment_put_icon_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLiif");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("equipment_put_icon_icon__12OriginalTaskFP17ORG_SEL_COLLI_TBLiif", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
