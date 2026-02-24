#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___make_dp_0x129480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    
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
    
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
