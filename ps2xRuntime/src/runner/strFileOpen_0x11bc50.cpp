#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// strFileOpen(param_1, param_2): open stream file; param_1 is int* result struct.
// Stub: return 0 (failure) so callers don't assume a valid handle.
void strFileOpen_0x11bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
