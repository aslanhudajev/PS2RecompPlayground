#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void oskDispFunc__14Boss3XWingTaskFii_0x9c8cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("oskDispFunc__14Boss3XWingTaskFii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("oskDispFunc__14Boss3XWingTaskFii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
