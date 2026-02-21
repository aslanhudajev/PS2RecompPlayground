#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cmath>

// __fixunssfdi: convert float to unsigned 64-bit integer. Input in $f12 (ctx->f[12]).

void ps2___fixunssfdi_0x2f7bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;

    float f = ctx->f[12];
    if (f < 0.f || std::isnan(f)) {
        setReturnU64(ctx, 0);
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    double d = static_cast<double>(f);
    uint64_t u = static_cast<uint64_t>(d);
    setReturnU64(ctx, u);

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
