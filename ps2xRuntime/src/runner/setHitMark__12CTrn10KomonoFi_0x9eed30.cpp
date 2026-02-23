#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void setHitMark__12CTrn10KomonoFi_0x9eed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setHitMark__12CTrn10KomonoFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("setHitMark__12CTrn10KomonoFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
