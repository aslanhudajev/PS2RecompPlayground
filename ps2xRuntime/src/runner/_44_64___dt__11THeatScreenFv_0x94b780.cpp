#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _44_64___dt__11THeatScreenFv_0x94b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_44_64___dt__11THeatScreenFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@44@64@__dt__11THeatScreenFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
