#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void HitMarkEff2__9Boss2TaskFUiUi_0x9c6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("HitMarkEff2__9Boss2TaskFUiUi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("HitMarkEff2__9Boss2TaskFUiUi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
