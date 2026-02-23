#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void setDefaultModeParam__12CsOptionTaskFiP5CMenuM12CsOptionTaskFPCvPv_vi_0x9313f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setDefaultModeParam__12CsOptionTaskFiP5CMenuM12CsOptionTaskFPCvPv_vi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("setDefaultModeParam__12CsOptionTaskFiP5CMenuM12CsOptionTaskFPCvPv_vi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
