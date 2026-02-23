#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void McSyncReadGameData__FiP14tagUSER_BACKUP_0x1f76b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("McSyncReadGameData__FiP14tagUSER_BACKUP");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("McSyncReadGameData__FiP14tagUSER_BACKUP", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
