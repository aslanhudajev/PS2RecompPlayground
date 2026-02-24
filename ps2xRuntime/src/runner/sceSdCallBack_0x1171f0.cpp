#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void sceSdCallBack_0x1171f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::sceSdCallBack(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
