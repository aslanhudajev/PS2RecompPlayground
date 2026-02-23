#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void free__11TexMgrClassFi_0x21a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("free__11TexMgrClassFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("free__11TexMgrClassFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
