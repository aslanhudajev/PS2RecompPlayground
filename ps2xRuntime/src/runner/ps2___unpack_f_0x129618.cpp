#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// GCC libgcc fp-bit.c __unpack_f - unpack IEEE 754 float to fp_number_type
// Args: a0 = src (FLO_union_type* with value_raw), a1 = dst (fp_number_type*)
void ps2___unpack_f_0x129618(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2___unpack_f_0x129618");
#endif

    const uint32_t __entryPc = ctx->pc;
    const uint32_t srcAddr = getRegU32(ctx, 4);
    const uint32_t dstAddr = getRegU32(ctx, 5);

    uint32_t value_raw = READ32(ADD32(srcAddr, 0));
    uint32_t mantissa = value_raw & 0x7fffffu;
    uint32_t exp_bits = (value_raw >> 23) & 0xffu;

    WRITE32(ADD32(dstAddr, 4), (value_raw >> 31) & 1); // sign

    if (exp_bits == 0)
    {
        WRITE32(ADD32(dstAddr, 0), 2); // CLASS_ZERO
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (exp_bits == 0xff)
    {
        if (mantissa == 0)
            WRITE32(ADD32(dstAddr, 0), 4); // CLASS_INFINITY
        else if ((value_raw & 0x100000u) == 0)
            WRITE32(ADD32(dstAddr, 0), 0); // CLASS_SNAN
        else
            WRITE32(ADD32(dstAddr, 0), 1); // CLASS_QNAN
        WRITE64(ADD32(dstAddr, 12), mantissa);
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    WRITE64(ADD32(dstAddr, 12), (static_cast<uint64_t>(mantissa) << 7) | 0x40000000u);
    WRITE32(ADD32(dstAddr, 8), exp_bits - 0x7f); // normal_exp
    WRITE32(ADD32(dstAddr, 0), 3);               // CLASS_NUMBER

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
