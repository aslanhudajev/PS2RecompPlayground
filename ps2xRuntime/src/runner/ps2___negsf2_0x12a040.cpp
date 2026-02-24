#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___negsf2_0x12a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__negsf2", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
