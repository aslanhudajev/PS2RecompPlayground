#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void GetPathParam__9Boss6TaskFifP4ANPO_0x9c8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetPathParam__9Boss6TaskFifP4ANPO");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("GetPathParam__9Boss6TaskFifP4ANPO", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
