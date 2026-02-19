#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cmath>

// __ieee754_atan2f(y, x): MIPS f12=y, f13=x; return in f0.
void ps2___ieee754_atan2f_0x2ea388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)rdram;
    (void)runtime;
    const uint32_t __entryPc = ctx->pc;
    const float y = ctx->f[12];
    const float x = ctx->f[13];
    ctx->f[0] = std::atan2f(y, x);
    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
