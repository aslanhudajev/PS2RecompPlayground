#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void hitMove__12CTrn10KomonoFv_0x9ef140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("hitMove__12CTrn10KomonoFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("hitMove__12CTrn10KomonoFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
