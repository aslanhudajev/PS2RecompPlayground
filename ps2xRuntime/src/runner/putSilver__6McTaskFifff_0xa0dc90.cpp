#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void putSilver__6McTaskFifff_0xa0dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSilver__6McTaskFifff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("putSilver__6McTaskFifff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
