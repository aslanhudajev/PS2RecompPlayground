#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// strFileClose(param_1): close stream; returns 1.
void strFileClose_0x11bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
