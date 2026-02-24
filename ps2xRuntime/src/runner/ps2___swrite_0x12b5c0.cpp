#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___swrite_0x12b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__swrite", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
