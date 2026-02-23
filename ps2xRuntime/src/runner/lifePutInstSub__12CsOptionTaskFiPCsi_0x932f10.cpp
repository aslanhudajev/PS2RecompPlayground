#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void lifePutInstSub__12CsOptionTaskFiPCsi_0x932f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lifePutInstSub__12CsOptionTaskFiPCsi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("lifePutInstSub__12CsOptionTaskFiPCsi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
