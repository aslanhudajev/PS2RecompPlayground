#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___kernel_tanf_0x2ec4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    
    (void)rdram;
    (void)runtime;

    float x = ctx->f[12];
    float y = ctx->f[13];
    const int iy = static_cast<int32_t>(getRegU32(ctx, 4));

    uint32_t ux;
    std::memcpy(&ux, &x, sizeof(ux));
    ux &= 0x7fffffffu;

    constexpr uint32_t kHigh = 0x317fffffu;
    constexpr uint32_t kSmall = 0x3f2ca140u;  // ~0.647f threshold

    float result;

    if (ux > kHigh || static_cast<int32_t>(x) != 0) {
        // Main path: compute tan(x+y) or -1/tan(x+y) via host
        float z = x + y;
        float t = std::tan(z);
        if (iy == 1) {
            result = t;
        } else {
            result = -1.0f / t;
        }
    } else {
        // ux <= kHigh and (int)x == 0: x is zero or very small
        if (ux == 0 && iy == -1) {
            result = 1.0f / std::fabs(x);
        } else if (iy != 1) {
            result = -1.0f / x;
        } else {
            result = x;
        }
    }

    ctx->f[0] = result;

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
