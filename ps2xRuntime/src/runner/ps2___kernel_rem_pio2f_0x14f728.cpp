#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___kernel_rem_pio2f_0x14f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___kernel_rem_pio2f");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__kernel_rem_pio2f", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
