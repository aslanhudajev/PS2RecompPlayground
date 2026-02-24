#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// GCC libgcc fp-bit.c __pack_f - pack fp_number_type to IEEE 754 float
// Arg: a0 = src (fp_number_type*)
// Return: v0 = packed float bits
void ps2___pack_f_0x129508(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2___pack_f_0x129508");
#endif

    const uint32_t __entryPc = ctx->pc;
    const uint32_t srcAddr = getRegU32(ctx, 4);

    uint32_t cls = READ32(ADD32(srcAddr, 0));
    uint32_t sign = READ32(ADD32(srcAddr, 4));
    int32_t normal_exp = (int32_t)READ32(ADD32(srcAddr, 8));
    uint64_t frac = READ64(ADD32(srcAddr, 12));

    uint32_t exp = 0;
    uint32_t mantissa = static_cast<uint32_t>(frac & 0xFFFFFFFFu);

    if (cls < 2)
    { // CLASS_SNAN/CLASS_QNAN
        exp = 0xff;
        mantissa |= 0x100000u;
    }
    else if (cls == 4)
    { // CLASS_INFINITY
        exp = 0xff;
        mantissa = 0;
    }
    else if (cls == 2 || frac == 0)
    { // CLASS_ZERO
        mantissa = 0;
    }
    else
    {
        if (normal_exp < -0x7e)
        {
            uint32_t shift = static_cast<uint32_t>(-normal_exp - 0x7e);
            if (shift < 32)
                mantissa = static_cast<uint32_t>(frac >> shift);
            else
                mantissa = 0;
        }
        else
        {
            exp = static_cast<uint32_t>(normal_exp + 0x7f);
            if (normal_exp > 0x7f)
            {
                exp = 0xff;
                mantissa = 0;
            }
            else
            {
                if ((mantissa & 0x7fu) == 0x40u)
                {
                    if ((mantissa & 0x80u) != 0)
                        mantissa += 0x40;
                }
                else
                    mantissa += 0x3f;
                if (static_cast<int32_t>(mantissa) >= 0)
                    mantissa >>= 7;
                else
                {
                    mantissa >>= 1;
                    exp = static_cast<uint32_t>(normal_exp + 0x80);
                }
            }
        }
        mantissa >>= 7;
    }

    uint32_t result = (mantissa & 0x7fffffu) | (exp << 23) | ((sign & 1u) << 31);
    SET_GPR_U32(ctx, 2, result);

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
