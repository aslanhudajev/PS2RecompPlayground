#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceHiGsBlockSize(width, height, block_type) - returns block size in bytes
static uint32_t bytesPerPixelForPsm(uint32_t psm) {
    switch (psm & 0x3Fu) {
        case 0: case 1: case 27: case 36: case 44: return 4u;
        case 2: case 10: return 2u;
        case 19: return 1u;
        case 20: return 1u;
        default: return 4u;
    }
}

void sceHiGsBlockSize_0x111350(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsBlockSize_0x111350");
#endif
    (void)rdram;
    (void)runtime;
    uint32_t w = getRegU32(ctx, 4);
    uint32_t h = getRegU32(ctx, 5);
    uint32_t psm = getRegU32(ctx, 6);

    if (psm >= 0x3Bu) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    int32_t sw = static_cast<int32_t>(static_cast<int16_t>(w & 0xFFFFu));
    int32_t sh = static_cast<int32_t>(static_cast<int16_t>(h & 0xFFFFu));
    if (sw <= 0) sw = 64;
    if (sh <= 0) sh = 64;

    uint32_t bpp = bytesPerPixelForPsm(psm);
    uint32_t size = static_cast<uint32_t>(sw) * static_cast<uint32_t>(sh);
    if (bpp == 1u && (psm & 0x3Fu) == 20u)
        size = (size + 1u) / 2u;
    else
        size *= bpp;

    setReturnU32(ctx, size);
    ctx->pc = getRegU32(ctx, 31);
}
