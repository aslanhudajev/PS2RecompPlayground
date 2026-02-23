#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include "ps2_runtime_macros.h"

void ps2___pack_d_0x14ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___pack_d");

    const uint32_t __entryPc = ctx->pc;

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

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
