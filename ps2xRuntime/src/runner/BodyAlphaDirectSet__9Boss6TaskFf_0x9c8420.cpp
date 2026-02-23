#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void BodyAlphaDirectSet__9Boss6TaskFf_0x9c8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BodyAlphaDirectSet__9Boss6TaskFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("BodyAlphaDirectSet__9Boss6TaskFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
