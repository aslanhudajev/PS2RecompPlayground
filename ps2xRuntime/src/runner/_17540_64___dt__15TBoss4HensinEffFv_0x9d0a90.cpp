#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _17540_64___dt__15TBoss4HensinEffFv_0x9d0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_17540_64___dt__15TBoss4HensinEffFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@17540@64@__dt__15TBoss4HensinEffFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
