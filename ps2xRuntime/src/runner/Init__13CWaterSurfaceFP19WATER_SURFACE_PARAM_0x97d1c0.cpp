#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Init__13CWaterSurfaceFP19WATER_SURFACE_PARAM_0x97d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Init__13CWaterSurfaceFP19WATER_SURFACE_PARAM");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Init__13CWaterSurfaceFP19WATER_SURFACE_PARAM", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
