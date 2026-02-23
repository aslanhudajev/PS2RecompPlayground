#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _300_64___dt__9EnEtcBoneFv_0x940d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_300_64___dt__9EnEtcBoneFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@300@64@__dt__9EnEtcBoneFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
