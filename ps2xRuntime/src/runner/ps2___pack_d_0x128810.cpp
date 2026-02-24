#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// GCC libgcc dp-bit.c __pack_d - pack fp_number_type to IEEE 754 double
// Arg: a0 = src (fp_number_type*)
// Return: v0,v1 = packed double bits (low, high)
void ps2___pack_d_0x128810(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2___pack_d_0x128810");
#endif

    const uint32_t __entryPc = ctx->pc;
    const uint32_t srcAddr = getRegU32(ctx, 4);

    uint32_t cls = READ32(ADD32(srcAddr, 0));
    uint32_t sign = READ32(ADD32(srcAddr, 4));
    int32_t normal_exp = (int32_t)READ32(ADD32(srcAddr, 8));
    uint64_t frac = READ64(ADD32(srcAddr, 12));

    uint64_t exp = 0;
    uint64_t mantissa = frac;

    if (cls < 2)
    {
        exp = 0x7ff;
        mantissa |= 0x8000000000000ull;
    }
    else if (cls == 4)
    {
        exp = 0x7ff;
        mantissa = 0;
    }
    else if (cls == 2 || frac == 0)
    {
        mantissa = 0;
    }
    else
    {
        if (normal_exp < -0x3fe)
        {
            int shift = -0x3fe - normal_exp;
            if (shift < 56)
                mantissa >>= shift;
            else
                mantissa = 0;
        }
        else
        {
            exp = static_cast<uint64_t>(normal_exp + 0x3ff);
            if (normal_exp > 0x3ff)
            {
                exp = 0x7ff;
                mantissa = 0;
            }
            else
            {
                if ((mantissa & 0xffu) == 0x80u)
                {
                    if ((mantissa & 0x100u) != 0)
                        mantissa += 0x80;
                }
                else
                    mantissa += 0x7f;
                if (mantissa < 0x2000000000000000ull)
                    mantissa >>= 8;
                else
                {
                    mantissa >>= 1;
                    exp = static_cast<uint64_t>(normal_exp + 0x400);
                }
            }
        }
        mantissa >>= 8;
    }

    uint64_t result = (mantissa & 0xfffffffffffffull) | (exp << 52) | (static_cast<uint64_t>(sign & 1) << 63);
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(result >> 32));

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
