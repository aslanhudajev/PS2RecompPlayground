#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _100_64___dt__14BnCtrlTask4PreFv_0x940d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_100_64___dt__14BnCtrlTask4PreFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@100@64@__dt__14BnCtrlTask4PreFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
