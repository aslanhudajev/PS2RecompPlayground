#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void MotSupSet2__9Boss6TaskFiii_0x9c7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MotSupSet2__9Boss6TaskFiii");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("MotSupSet2__9Boss6TaskFiii", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
