#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include "ps2_runtime_macros.h"

void ps2___make_fp_0x14c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___make_fp");

    const uint32_t __entryPc = ctx->pc;

    uint32_t type = getRegU32(ctx, 4);
    uint32_t sign = getRegU32(ctx, 5);
    int32_t  exp  = static_cast<int32_t>(getRegU32(ctx, 6));
    uint32_t frac = getRegU32(ctx, 7);

    uint32_t result = 0;
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
        frac += (1u << 6);
        if (frac >= 0x80000000u) {
            frac >>= 1;
            exp++;
        }
        uint32_t mant = (frac >> 7) & 0x7FFFFFu;
        int32_t biased = exp + 0x7F;
        if (biased >= 0xFF) {
            result = (sign << 31) | 0x7F800000u;
        } else if (biased <= 0) {
            result = sign << 31;
        } else {
            result = (sign << 31) | (static_cast<uint32_t>(biased) << 23) | mant;
        }
        break;
    }
    }

    SET_GPR_U32(ctx, 2, result);

    float f;
    std::memcpy(&f, &result, 4);
    ctx->f[0] = f;
    
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}