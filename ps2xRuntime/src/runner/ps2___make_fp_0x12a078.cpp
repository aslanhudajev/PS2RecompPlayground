#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// GCC libgcc fp-bit.c __make_fp - build float from class, sign, exp, frac; calls __pack_f
// Args: a0=class, a1=sign, a2=exp, a3=frac
// Return: v0 = packed float. Inlines pack_f logic to avoid guest stack frame.
void ps2___make_fp_0x12a078(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2___make_fp_0x12a078");
#endif

    const uint32_t __entryPc = ctx->pc;
    uint32_t cls = getRegU32(ctx, 4);
    uint32_t sign = getRegU32(ctx, 5);
    int32_t normal_exp = (int32_t)getRegU32(ctx, 6);
    uint64_t frac = getRegU32(ctx, 7);

    uint32_t exp = 0;
    uint32_t mantissa = static_cast<uint32_t>(frac);

    if (cls < 2)
    {
        exp = 0xff;
        mantissa |= 0x100000u;
    }
    else if (cls == 4)
    {
        exp = 0xff;
        mantissa = 0;
    }
    else if (cls == 2 || frac == 0)
    {
        mantissa = 0;
    }
    else
    {
        if (normal_exp < -0x7e)
        {
            uint32_t shift = static_cast<uint32_t>(-normal_exp - 0x7e);
            mantissa = (shift < 32) ? static_cast<uint32_t>(frac >> shift) : 0;
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
