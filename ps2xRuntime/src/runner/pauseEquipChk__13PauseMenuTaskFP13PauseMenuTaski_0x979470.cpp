#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void pauseEquipChk__13PauseMenuTaskFP13PauseMenuTaski_0x979470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pauseEquipChk__13PauseMenuTaskFP13PauseMenuTaski");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("pauseEquipChk__13PauseMenuTaskFP13PauseMenuTaski", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
