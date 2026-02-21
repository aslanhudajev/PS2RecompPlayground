#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

// __pack_f(src_struct): pack an internal fp_number struct back into IEEE754 single.
// $a0 = pointer to struct.  Returns packed float bits in $v0.
//
// Struct layout (from __unpack_f):
//   [0] type: 0=qnan, 1=snan, 2=zero, 3=normal, 4=inf
//   [1] sign: 0 or 1
//   [2] exponent: unbiased (int32)
//   [3] fraction: mantissa with implied bit at bit 30
//       normal: (original_mant << 7) | 0x40000000
void ps2___pack_f_0x2f95e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t srcAddr = getRegU32(ctx, 4);
    const uint8_t* srcPtr = getMemPtr(rdram, srcAddr);

    uint32_t result = 0;
    if (srcPtr) {
        const uint32_t* src = reinterpret_cast<const uint32_t*>(srcPtr);
        uint32_t type = src[0];
        uint32_t sign = src[1];
        int32_t  exp  = static_cast<int32_t>(src[2]);
        uint32_t frac = src[3];

        switch (type) {
        case 2: // zero
            result = sign << 31;
            break;
        case 4: // inf
            result = (sign << 31) | 0x7F800000u;
            break;
        case 0: // qnan
        case 1: // snan
        {
            uint32_t mant = frac & 0x7FFFFFu;
            if (mant == 0) mant = 1;
            result = (sign << 31) | 0x7F800000u | mant;
            break;
        }
        case 3: // normal
        default:
        {
            // Round: add half-LSB at bit 6, then check overflow
            frac += (1u << 6);
            if (frac >= 0x80000000u) {
                frac >>= 1;
                exp++;
            }
            uint32_t mant = (frac >> 7) & 0x7FFFFFu;
            int32_t biased = exp + 0x7F;
            if (biased >= 0xFF) {
                result = (sign << 31) | 0x7F800000u; // overflow → inf
            } else if (biased <= 0) {
                result = sign << 31; // underflow → zero
            } else {
                result = (sign << 31) | (static_cast<uint32_t>(biased) << 23) | mant;
            }
            break;
        }
        }
    }

    SET_GPR_U32(ctx, 2, result);

    float f;
    std::memcpy(&f, &result, 4);
    ctx->f[0] = f;

    ctx->pc = getRegU32(ctx, 31);
}
