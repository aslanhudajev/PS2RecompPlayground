#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ApproachANPO__9Boss6TaskFP4ANPO_0x9c3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ApproachANPO__9Boss6TaskFP4ANPO");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("ApproachANPO__9Boss6TaskFP4ANPO", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
