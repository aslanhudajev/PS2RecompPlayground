#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void prtsDispFunc__15OriginalMotTaskFP7_BODYPT_0x9ca810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("prtsDispFunc__15OriginalMotTaskFP7_BODYPT");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("prtsDispFunc__15OriginalMotTaskFP7_BODYPT", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
