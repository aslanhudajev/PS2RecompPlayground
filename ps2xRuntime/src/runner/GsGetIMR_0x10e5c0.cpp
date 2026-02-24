#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void GsGetIMR_0x10e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_syscalls::GsGetIMR(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
