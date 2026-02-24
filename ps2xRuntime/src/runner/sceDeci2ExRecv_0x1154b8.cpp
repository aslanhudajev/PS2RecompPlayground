#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sceDeci2ExRecv_0x1154b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::sceDeci2ExRecv(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
