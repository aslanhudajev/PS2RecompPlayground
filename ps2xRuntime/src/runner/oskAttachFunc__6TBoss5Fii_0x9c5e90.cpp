#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void oskAttachFunc__6TBoss5Fii_0x9c5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskAttachFunc__6TBoss5Fii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("oskAttachFunc__6TBoss5Fii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
