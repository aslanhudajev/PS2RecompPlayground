#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void OPMPInitModel__10COPMPModelFPi_0x948f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OPMPInitModel__10COPMPModelFPi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("OPMPInitModel__10COPMPModelFPi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
