#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Init__18CWaterSurfaceModelFP19WATER_SURFACE_PARAMP24WATER_SURFACE_MODEL_LISTP25WATER_SURFACE_MODEL_PARAM_0x97d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Init__18CWaterSurfaceModelFP19WATER_SURFACE_PARAMP24WATER_SURFACE_MODEL_LISTP25WATER_SURFACE_MODEL_PARAM");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Init__18CWaterSurfaceModelFP19WATER_SURFACE_PARAMP24WATER_SURFACE_MODEL_LISTP25WATER_SURFACE_MODEL_PARAM", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
