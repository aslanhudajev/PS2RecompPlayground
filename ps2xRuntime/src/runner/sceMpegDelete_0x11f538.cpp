#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceMpegDelete(): return 1
void sceMpegDelete_0x11f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
