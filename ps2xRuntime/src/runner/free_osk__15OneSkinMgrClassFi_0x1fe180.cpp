#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void free_osk__15OneSkinMgrClassFi_0x1fe180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("free_osk__15OneSkinMgrClassFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("free_osk__15OneSkinMgrClassFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
