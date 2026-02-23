#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___ct__22KomonoTumiageColliTaskFP11ENEMY_TABLEPP22KomonoTumiageColliTask_0x9e53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___ct__22KomonoTumiageColliTaskFP11ENEMY_TABLEPP22KomonoTumiageColliTask");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__ct__22KomonoTumiageColliTaskFP11ENEMY_TABLEPP22KomonoTumiageColliTask", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
