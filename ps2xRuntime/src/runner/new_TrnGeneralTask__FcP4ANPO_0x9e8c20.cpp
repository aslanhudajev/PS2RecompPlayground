#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void new_TrnGeneralTask__FcP4ANPO_0x9e8c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_TrnGeneralTask__FcP4ANPO");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("new_TrnGeneralTask__FcP4ANPO", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
