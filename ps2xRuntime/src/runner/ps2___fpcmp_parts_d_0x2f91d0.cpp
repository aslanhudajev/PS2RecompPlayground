#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>
#include <cmath>

// __fpcmp_parts_d(a_struct, b_struct): compare two unpacked double structs.
// $a0 = pointer to struct A, $a1 = pointer to struct B.
// Returns comparison in $v0: <0 if A<B, 0 if A==B, >0 if A>B; 1 for NaN.
//
// Struct layout: [0]=type, [1]=sign, [2]=exp, [3]=frac_lo, [4]=frac_hi
void ps2___fpcmp_parts_d_0x2f91d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t addrA = getRegU32(ctx, 4);
    const uint32_t addrB = getRegU32(ctx, 5);
    const uint8_t* ptrA = getMemPtr(rdram, addrA);
    const uint8_t* ptrB = getMemPtr(rdram, addrB);

    int32_t result = 1;
    if (ptrA && ptrB) {
        const uint32_t* a = reinterpret_cast<const uint32_t*>(ptrA);
        const uint32_t* b = reinterpret_cast<const uint32_t*>(ptrB);

        uint32_t typeA = a[0], signA = a[1];
        int32_t  expA  = static_cast<int32_t>(a[2]);
        uint64_t fracA = static_cast<uint64_t>(a[3]) | (static_cast<uint64_t>(a[4]) << 32);

        uint32_t typeB = b[0], signB = b[1];
        int32_t  expB  = static_cast<int32_t>(b[2]);
        uint64_t fracB = static_cast<uint64_t>(b[3]) | (static_cast<uint64_t>(b[4]) << 32);

        if (typeA <= 1 || typeB <= 1) {
            result = 1; // NaN → unordered
        } else if (typeA == 2 && typeB == 2) {
            result = 0; // +0 == -0
        } else {
            auto pack = [](uint32_t type, uint32_t sign, int32_t exp, uint64_t frac) -> double {
                uint64_t bits = 0;
                if (type == 2) {
                    bits = static_cast<uint64_t>(sign) << 63;
                } else if (type == 4) {
                    bits = (static_cast<uint64_t>(sign) << 63) | (0x7FFull << 52);
                } else {
                    uint64_t mant = (frac >> 10) & 0x000FFFFFFFFFFFFFull;
                    int32_t biased = exp + 1023;
                    if (biased >= 0x7FF) bits = (static_cast<uint64_t>(sign) << 63) | (0x7FFull << 52);
                    else if (biased <= 0) bits = static_cast<uint64_t>(sign) << 63;
                    else bits = (static_cast<uint64_t>(sign) << 63) | (static_cast<uint64_t>(biased) << 52) | mant;
                }
                double d;
                std::memcpy(&d, &bits, 8);
                return d;
            };

            double da = pack(typeA, signA, expA, fracA);
            double db = pack(typeB, signB, expB, fracB);
            if (da < db) result = -1;
            else if (da == db) result = 0;
            else result = 1;
        }
    }

    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}
