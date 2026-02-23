#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void checkHit__11Komono3TaskFPi_0x9eb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkHit__11Komono3TaskFPi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("checkHit__11Komono3TaskFPi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
