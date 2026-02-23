#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Ctrl__10EnEtcPartsFv_0x9378d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ctrl__10EnEtcPartsFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Ctrl__10EnEtcPartsFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
