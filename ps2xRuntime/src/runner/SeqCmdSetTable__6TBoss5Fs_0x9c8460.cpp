#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void SeqCmdSetTable__6TBoss5Fs_0x9c8460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SeqCmdSetTable__6TBoss5Fs");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("SeqCmdSetTable__6TBoss5Fs", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
