#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void free_obj__15OneSkinMgrClassFi_0x1fe280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("free_obj__15OneSkinMgrClassFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("free_obj__15OneSkinMgrClassFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
