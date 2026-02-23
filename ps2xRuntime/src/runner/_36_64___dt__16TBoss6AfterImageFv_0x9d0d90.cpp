#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _36_64___dt__16TBoss6AfterImageFv_0x9d0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_36_64___dt__16TBoss6AfterImageFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@36@64@__dt__16TBoss6AfterImageFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
