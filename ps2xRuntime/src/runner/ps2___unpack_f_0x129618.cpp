#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

void ps2___unpack_f_0x129618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;

    const uint32_t srcAddr = getRegU32(ctx, 4);
    const uint32_t dstAddr = getRegU32(ctx, 5);
    const uint8_t* srcPtr = getMemPtr(rdram, srcAddr);
    uint8_t* dstPtr = getMemPtr(rdram, dstAddr);

    if (!srcPtr || !dstPtr) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint32_t u;
    std::memcpy(&u, srcPtr, sizeof(uint32_t));

    const uint32_t sign = u >> 31;
    const uint32_t exp = (u >> 23) & 0xff;
    const uint32_t mant = u & 0x7fffffu;

    uint32_t* dst = reinterpret_cast<uint32_t*>(dstPtr);
    dst[1] = sign;

    if (exp == 0) {
        dst[0] = 2; /* zero / denorm treated as zero type */
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (exp == 0xff) {
        if (mant == 0) {
            dst[0] = 4; /* inf */
        } else {
            dst[0] = (mant & 0x100000u) ? 1u : 0u; /* snan : qnan */
            dst[3] = mant;
        }
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    dst[0] = 3; /* normal */
    dst[2] = exp - 0x7f;
    dst[3] = (mant << 7) | 0x40000000u;

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
