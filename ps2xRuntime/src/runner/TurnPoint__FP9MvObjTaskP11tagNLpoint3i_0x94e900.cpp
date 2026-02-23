#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void TurnPoint__FP9MvObjTaskP11tagNLpoint3i_0x94e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TurnPoint__FP9MvObjTaskP11tagNLpoint3i");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("TurnPoint__FP9MvObjTaskP11tagNLpoint3i", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
