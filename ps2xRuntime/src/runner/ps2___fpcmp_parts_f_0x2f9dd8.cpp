#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

// __fpcmp_parts_f(a_struct, b_struct): compare two unpacked float structs.
// $a0 = pointer to struct A, $a1 = pointer to struct B.
// Returns comparison in $v0: <0 if A<B, 0 if A==B, >0 if A>B; 1 for NaN.
//
// Struct layout: [0]=type, [1]=sign, [2]=exp, [3]=frac
// Types: 0=qnan, 1=snan, 2=zero, 3=normal, 4=inf
void ps2___fpcmp_parts_f_0x2f9dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
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
        uint32_t fracA = a[3];

        uint32_t typeB = b[0], signB = b[1];
        int32_t  expB  = static_cast<int32_t>(b[2]);
        uint32_t fracB = b[3];

        if (typeA <= 1 || typeB <= 1) {
            result = 1; // NaN → unordered
        } else if (typeA == 2 && typeB == 2) {
            result = 0; // +0 == -0
        } else {
            // Reconstruct native float for comparison
            auto pack = [](uint32_t type, uint32_t sign, int32_t exp, uint32_t frac) -> float {
                uint32_t bits = 0;
                if (type == 2) bits = sign << 31;
                else if (type == 4) bits = (sign << 31) | 0x7F800000u;
                else {
                    uint32_t mant = (frac >> 7) & 0x7FFFFFu;
                    int32_t biased = exp + 0x7F;
                    if (biased >= 0xFF) bits = (sign << 31) | 0x7F800000u;
                    else if (biased <= 0) bits = sign << 31;
                    else bits = (sign << 31) | (static_cast<uint32_t>(biased) << 23) | mant;
                }
                float f;
                std::memcpy(&f, &bits, 4);
                return f;
            };

            float fa = pack(typeA, signA, expA, fracA);
            float fb = pack(typeB, signB, expB, fracB);
            if (fa < fb) result = -1;
            else if (fa == fb) result = 0;
            else result = 1;
        }
    }

    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}
