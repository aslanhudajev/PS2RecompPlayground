#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void new_Boss6AfterImage__FP9Boss6Task_0x9cf890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_Boss6AfterImage__FP9Boss6Task");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("new_Boss6AfterImage__FP9Boss6Task", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
