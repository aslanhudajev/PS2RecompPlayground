#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void setLink__9CBoxPointFP9CBoxPoint_0x9e0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLink__9CBoxPointFP9CBoxPoint");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("setLink__9CBoxPointFP9CBoxPoint", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
