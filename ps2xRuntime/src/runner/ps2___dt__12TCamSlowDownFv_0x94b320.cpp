#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___dt__12TCamSlowDownFv_0x94b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___dt__12TCamSlowDownFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__dt__12TCamSlowDownFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
