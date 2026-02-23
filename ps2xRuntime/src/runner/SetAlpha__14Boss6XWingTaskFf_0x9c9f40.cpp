#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SetAlpha__14Boss6XWingTaskFf_0x9c9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetAlpha__14Boss6XWingTaskFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SetAlpha__14Boss6XWingTaskFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
