#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___unpack_d_0x128940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    
    const uint32_t srcAddr = getRegU32(ctx, 4);
    const uint32_t dstAddr = getRegU32(ctx, 5);
    const uint8_t* srcPtr = getMemPtr(rdram, srcAddr);
    uint8_t* dstPtr = getMemPtr(rdram, dstAddr);

    if (!srcPtr || !dstPtr) {
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint64_t u;
    std::memcpy(&u, srcPtr, sizeof(uint64_t));

    const uint32_t sign = static_cast<uint32_t>(u >> 63);
    const uint32_t exp  = static_cast<uint32_t>((u >> 52) & 0x7FF);
    const uint64_t mant = u & 0x000FFFFFFFFFFFFFull;

    uint32_t* dst = reinterpret_cast<uint32_t*>(dstPtr);
    dst[1] = sign;

    if (exp == 0) {
        if (mant == 0) {
            dst[0] = 2; // zero
        } else {
            // denorm - treat as zero for simplicity (PS2 games rarely use denormals)
            dst[0] = 2;
        }
        dst[2] = 0;
        dst[3] = 0;
        dst[4] = 0;
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    if (exp == 0x7FF) {
        if (mant == 0) {
            dst[0] = 4; // inf
        } else {
            dst[0] = (mant & (1ull << 51)) ? 1u : 0u; // snan : qnan
            dst[3] = static_cast<uint32_t>(mant & 0xFFFFFFFFu);
            dst[4] = static_cast<uint32_t>(mant >> 32);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    // Normal
    dst[0] = 3;
    dst[2] = static_cast<uint32_t>(exp - 1023);
    uint64_t fraction = (mant << 10) | (1ull << 62);
    dst[3] = static_cast<uint32_t>(fraction & 0xFFFFFFFFu);
    dst[4] = static_cast<uint32_t>(fraction >> 32);

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
