#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void damagePlayer__13EnVampireTaskFi_0x952c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("damagePlayer__13EnVampireTaskFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("damagePlayer__13EnVampireTaskFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
