#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

// __pack_d(src_struct): pack an internal dp_number struct back into IEEE754 double.
// $a0 = pointer to struct.
// Returns packed double: low 32 in $v0, high 32 in $v1 (MIPS convention).
//
// Struct layout:
//   [0] type, [1] sign, [2] exp (unbiased),
//   [3] frac_lo, [4] frac_hi  (implied bit at bit 62)
void ps2___pack_d_0x2f88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t srcAddr = getRegU32(ctx, 4);
    const uint8_t* srcPtr = getMemPtr(rdram, srcAddr);

    uint64_t result = 0;
    if (srcPtr) {
        const uint32_t* src = reinterpret_cast<const uint32_t*>(srcPtr);
        uint32_t type = src[0];
        uint32_t sign = src[1];
        int32_t  exp  = static_cast<int32_t>(src[2]);
        uint64_t frac = static_cast<uint64_t>(src[3]) | (static_cast<uint64_t>(src[4]) << 32);

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
            // Round: add half-LSB at bit 9
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
    }

    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(result >> 32));

    ctx->pc = getRegU32(ctx, 31);
}
