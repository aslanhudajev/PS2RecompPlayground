#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void calcItemNo__FP9_ITEM_TBL_0x9f2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcItemNo__FP9_ITEM_TBL");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("calcItemNo__FP9_ITEM_TBL", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
