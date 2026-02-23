#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void PutPageAll__8ShopBookFv_0x9cc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutPageAll__8ShopBookFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("PutPageAll__8ShopBookFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
