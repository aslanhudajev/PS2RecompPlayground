#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _16_64___dt__11TAdverTitleFv_0x94b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_16_64___dt__11TAdverTitleFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@16@64@__dt__11TAdverTitleFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
