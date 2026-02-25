#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceHiGsCtxChkSize(ctx) - returns size (display + zbuffer pages)
void sceHiGsCtxChkSize_0x1134d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxChkSize_0x1134d0");
#endif
    (void)rdram;
    (void)runtime;
    uint32_t ctxAddr = getRegU32(ctx, 4);
    if (ctxAddr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t total = 0u;
    uint32_t rectBase = FAST_READ32(ctxAddr + 0x70u);
    for (uint32_t i = 0; i < 4u && rectBase != 0u; i++) {
        uint32_t w = FAST_READ32(rectBase + i * 16u) & 0xFFFFu;
        uint32_t h = FAST_READ32(rectBase + i * 16u + 4u) & 0xFFFFu;
        uint32_t psm = FAST_READ32(rectBase + i * 16u + 8u) & 0x3Fu;
        if (w != 0u && h != 0u && psm < 0x3Bu)
            total += w * h * ((psm == 2u || psm == 10u) ? 2u : 4u);
    }
    uint32_t zbuf = FAST_READ32(ctxAddr + 0x80u);
    if (zbuf != 0u) {
        uint32_t w = FAST_READ32(zbuf + 4u) & 0xFFFFu;
        uint32_t h = FAST_READ32(zbuf + 8u) & 0xFFFFu;
        if (w != 0u && h != 0u)
            total += w * h * 2u;
    }
    if (total == 0u)
        total = 640u * 448u * 6u;
    setReturnU32(ctx, total);
    ctx->pc = getRegU32(ctx, 31);
}
