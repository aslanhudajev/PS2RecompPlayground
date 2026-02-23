#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _68_64___dt__15TBoss5XIceShapeFv_0x9cc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_68_64___dt__15TBoss5XIceShapeFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@68@64@__dt__15TBoss5XIceShapeFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
