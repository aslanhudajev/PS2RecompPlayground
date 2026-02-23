#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _8_64___dt__12TBS3ElevatorFv_0x9ce790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_8_64___dt__12TBS3ElevatorFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@8@64@__dt__12TBS3ElevatorFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
