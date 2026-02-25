#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: sceHiGsCtxSetRect(ctx, x, y, w, h, fbw_or_sentinel)
// param_6: 0xfffffffffffffffe = compute fbw; 0xffffffffffffffff = use ctx+0x78
// MIPS: a0=ctx, a1=x, a2=y, a3=w, sp+16=h, sp+20=param6_lo or sp+24 for 64-bit
void sceHiGsCtxSetRect_0x113850(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRect_0x113850");
#endif
    uint32_t ctxAddr = getRegU32(ctx, 4);
    uint32_t x = getRegU32(ctx, 5) & 0x7FFu;
    uint32_t y = getRegU32(ctx, 6) & 0x7FFu;
    int32_t w = static_cast<int32_t>(getRegU32(ctx, 7));
    uint32_t sp = getRegU32(ctx, 29);
    int32_t h = static_cast<int32_t>(FAST_READ32(sp + 16));
    uint64_t param6 = FAST_READ64(sp + 24);

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint64_t ctx78 = 0, ctxd0 = 0;
    std::memcpy(&ctx78, p + 0x78, 8);
    std::memcpy(&ctxd0, p + 0xd0, 8);

    uint64_t fbw;
    if (param6 == 0xFFFFFFFFFFFFFFFEULL) {
        int32_t i2 = x + w + 0x3f;
        int32_t i1 = x + w + 0x7e;
        if (i2 >= 0) i1 = i2;
        fbw = static_cast<uint64_t>(i1 >> 6);
    } else if (param6 == 0xFFFFFFFFFFFFFFFFULL) {
        fbw = (ctx78 >> 16) & 0x3Fu;
    } else {
        fbw = param6 & 0x3Fu;
    }

    int16_t s40 = static_cast<int16_t>((0x800 - static_cast<int32_t>(x) - (w / 2)) * 0x10);
    int16_t scc = static_cast<int16_t>((0x800 - static_cast<int32_t>(y) - (h / 2)) * 0x10);
    uint64_t d0New = (ctxd0 & 0xF800F800F800F800ULL) |
        (x & 0x7FFu) |
        (static_cast<uint64_t>((x + w - 1) & 0x7FFu) << 16) |
        (static_cast<uint64_t>(y & 0x7FFu) << 32) |
        (static_cast<uint64_t>((y + h - 1) & 0x7FFu) << 48);
    uint64_t ctx78New = (ctx78 & 0xFFFFFFFFFFFFC0FFULL) | ((fbw & 0x3Fu) << 16);

    uint16_t e4;
    std::memcpy(&e4, p + 0xe4, 2);
    e4 |= 0xc01u;
    std::memcpy(p + 0xe4, &e4, 2);

    int16_t s40b = static_cast<int16_t>(static_cast<int32_t>(s40) + (x << 4));
    int16_t s42 = static_cast<int16_t>(static_cast<int32_t>(scc) + (y << 4));
    int16_t s50 = static_cast<int16_t>(static_cast<int32_t>(s40) + (x + w) * 0x10);
    int16_t s52 = static_cast<int16_t>(static_cast<int32_t>(scc) + (y + h) * 0x10);

    std::memcpy(p + 0xc8, &s40, 2);
    std::memcpy(p + 0xcc, &scc, 2);
    std::memcpy(p + 0xd0, &d0New, 8);
    std::memcpy(p + 0x78, &ctx78New, 8);
    std::memcpy(p + 0x40, &s40b, 2);
    std::memcpy(p + 0x42, &s42, 2);
    std::memcpy(p + 0x50, &s50, 2);
    std::memcpy(p + 0x52, &s52, 2);

    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
