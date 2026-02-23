#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___sinit_enzombie_cc_0x9b64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___sinit_enzombie_cc");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__sinit_enzombie.cc", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
