#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _64_64___dt__14TBS3XWingLightFv_0x9ce720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_64_64___dt__14TBS3XWingLightFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@64@64@__dt__14TBS3XWingLightFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
