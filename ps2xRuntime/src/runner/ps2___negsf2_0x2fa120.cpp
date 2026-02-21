#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstring>

// __negsf2(float a): negate a float.
// Input: float in $f12 (or $a0 as bits).
// Returns: -a in $v0 (as uint32 bits) and $f0.
void ps2___negsf2_0x2fa120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    uint32_t bits;
    std::memcpy(&bits, &ctx->f[12], 4);
    bits ^= 0x80000000u; // flip sign bit
    SET_GPR_U32(ctx, 2, bits);
    float f;
    std::memcpy(&f, &bits, 4);
    ctx->f[0] = f;
    ctx->pc = getRegU32(ctx, 31);
}
