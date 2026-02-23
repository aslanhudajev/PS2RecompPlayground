#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _48_oskDispFunc__7NpcTaskFii_0x9760c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_oskDispFunc__7NpcTaskFii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@48@oskDispFunc__7NpcTaskFii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
