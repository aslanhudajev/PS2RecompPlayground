#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"

void sceGsGetIMR_0x2e1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    GsGetIMR_0x303900(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
