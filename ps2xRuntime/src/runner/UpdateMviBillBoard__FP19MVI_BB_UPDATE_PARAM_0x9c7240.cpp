#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void UpdateMviBillBoard__FP19MVI_BB_UPDATE_PARAM_0x9c7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UpdateMviBillBoard__FP19MVI_BB_UPDATE_PARAM");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("UpdateMviBillBoard__FP19MVI_BB_UPDATE_PARAM", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
