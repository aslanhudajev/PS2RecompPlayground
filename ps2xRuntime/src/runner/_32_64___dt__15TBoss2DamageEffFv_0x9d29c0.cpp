#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _32_64___dt__15TBoss2DamageEffFv_0x9d29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_32_64___dt__15TBoss2DamageEffFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@32@64@__dt__15TBoss2DamageEffFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
