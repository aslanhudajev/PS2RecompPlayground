#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _228_64___dt__10EnEtcPartsFv_0x940d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_228_64___dt__10EnEtcPartsFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@228@64@__dt__10EnEtcPartsFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
