#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstring>

// __make_dp(class, sign, exp, frac_lo, frac_hi): construct IEEE754 double.
// $a0 = type (0=qnan, 1=snan, 2=zero, 3=normal, 4=inf)
// $a1 = sign (0 or 1)
// $a2 = exponent (unbiased, int32)
// $a3 = fraction_lo (low 32 bits; implied bit at bit 62 of combined 64-bit)
// stack[16] = fraction_hi (high 32 bits)
// Returns packed double: low 32 in $v0, high 32 in $v1.
void ps2___make_dp_0x2f9560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    uint32_t type = getRegU32(ctx, 4);
    uint32_t sign = getRegU32(ctx, 5);
    int32_t  exp  = static_cast<int32_t>(getRegU32(ctx, 6));
    uint32_t frac_lo = getRegU32(ctx, 7);

    // 5th arg is on the stack at sp+16 (MIPS O32 convention)
    uint32_t sp = getRegU32(ctx, 29);
    uint32_t frac_hi = 0;
    const uint8_t* stackPtr = getMemPtr(rdram, sp + 16);
    if (stackPtr)
        std::memcpy(&frac_hi, stackPtr, 4);

    uint64_t frac = static_cast<uint64_t>(frac_lo) | (static_cast<uint64_t>(frac_hi) << 32);

    uint64_t result = 0;
    switch (type) {
    case 2: // zero
        result = static_cast<uint64_t>(sign) << 63;
        break;
    case 4: // inf
        result = (static_cast<uint64_t>(sign) << 63) | (0x7FFull << 52);
        break;
    case 0: // qnan
    case 1: // snan
    {
        uint64_t mant = frac & 0x000FFFFFFFFFFFFFull;
        if (mant == 0) mant = 1;
        result = (static_cast<uint64_t>(sign) << 63) | (0x7FFull << 52) | mant;
        break;
    }
    case 3: // normal
    default:
    {
        frac += (1ull << 9);
        if (frac >= (1ull << 63)) {
            frac >>= 1;
            exp++;
        }
        uint64_t mant = (frac >> 10) & 0x000FFFFFFFFFFFFFull;
        int32_t biased = exp + 1023;
        if (biased >= 0x7FF) {
            result = (static_cast<uint64_t>(sign) << 63) | (0x7FFull << 52);
        } else if (biased <= 0) {
            result = static_cast<uint64_t>(sign) << 63;
        } else {
            result = (static_cast<uint64_t>(sign) << 63) |
                     (static_cast<uint64_t>(biased) << 52) | mant;
        }
        break;
    }
    }

    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(result >> 32));

    ctx->pc = getRegU32(ctx, 31);
}
