#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void reCharge__11TDispSilverFi_0xa0ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reCharge__11TDispSilverFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("reCharge__11TDispSilverFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
