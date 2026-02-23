#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void pressDecideFocusNo__12CsOptionTaskFPi_0x9322f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pressDecideFocusNo__12CsOptionTaskFPi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("pressDecideFocusNo__12CsOptionTaskFPi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
