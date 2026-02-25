#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: ctx+0xe4|=0x1f8b, sceHiGsCtxSetDepth(ctx,psm,0,0), sceHiGsCtxSetRect(ctx,0,0,0x280,0xf0,-2), sceHiGsCtxSetLumpBuffer(ctx,0)
// Caller passes: a0=ctx, a1=psm, a2=0, a3=0, t0=0x280, t1=0xf0
void sceHiGsCtxSetDefaultValues_0x115400(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetDefaultValues_0x115400");
#endif
    uint32_t ctxAddr = getRegU32(ctx, 4);
    uint32_t psm = getRegU32(ctx, 5) & 0x3Fu;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint16_t e4;
    std::memcpy(&e4, p + 0xe4, 2);
    e4 |= 0x1f8bu;
    std::memcpy(p + 0xe4, &e4, 2);

    if (runtime->hasFunction(0x113628u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, ctxAddr);
        SET_GPR_U32(&tmp, 5, psm);
        SET_GPR_U32(&tmp, 6, 0u);
        SET_GPR_U32(&tmp, 7, 0u);
        tmp.pc = 0x113628u;
        auto fn = runtime->lookupFunction(0x113628u);
        fn(rdram, &tmp, runtime);
    } else {
        uint64_t ctx78;
        std::memcpy(&ctx78, p + 0x78, 8);
        ctx78 = (ctx78 & 0xC0FFFFFFULL) | (static_cast<uint64_t>(psm & 0x3Fu) << 24);
        std::memcpy(p + 0x78, &ctx78, 8);
        uint64_t ctx80;
        std::memcpy(&ctx80, p + 0x80, 8);
        ctx80 = (ctx80 & 0xF0FFFFFFULL) | 0x100000000ULL;
        std::memcpy(p + 0x80, &ctx80, 8);
        uint64_t ctxb8;
        std::memcpy(&ctxb8, p + 0xb8, 8);
        ctxb8 = (ctxb8 & 0xFFF9FFFFULL) | 0x30000ULL;
        std::memcpy(p + 0xb8, &ctxb8, 8);
        p[0xed] = 0;
        e4 |= 0x103u;
        std::memcpy(p + 0xe4, &e4, 2);
    }

    R5900Context tmpRect = *ctx;
    SET_GPR_U32(&tmpRect, 4, ctxAddr);
    SET_GPR_U32(&tmpRect, 5, 0u);
    SET_GPR_U32(&tmpRect, 6, 0u);
    SET_GPR_U32(&tmpRect, 7, 0x280u);
    uint32_t sp = getRegU32(ctx, 29);
    FAST_WRITE32(sp + 16, 0xF0u);
    FAST_WRITE32(sp + 20, 0xFFFFFFFEu);
    FAST_WRITE32(sp + 24, 0xFFFFFFFFu);
    FAST_WRITE32(sp + 28, 0xFFFFFFFFu);
    sceHiGsCtxSetRect_0x113850(rdram, &tmpRect, runtime);

    if (runtime->hasFunction(0x1139f0u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, ctxAddr);
        SET_GPR_U32(&tmp, 5, 0u);
        tmp.pc = 0x1139f0u;
        auto fn = runtime->lookupFunction(0x1139f0u);
        fn(rdram, &tmp, runtime);
    } else {
        int16_t zero = 0;
        std::memcpy(p + 0xe0, &zero, 2);
        uint32_t psize = 0u;
        uint64_t ctx78v, ctxd0v;
        std::memcpy(&ctx78v, p + 0x78, 8);
        std::memcpy(&ctxd0v, p + 0xd0, 8);
        if (runtime->hasFunction(0x111408u)) {
            R5900Context tmp = *ctx;
            uint32_t fbw = (ctx78v >> 16) & 0x3Fu;
            uint32_t y2 = (ctxd0v >> 48) & 0x7FFu;
            uint32_t y1 = (ctxd0v >> 32) & 0x7FFu;
            SET_GPR_U32(&tmp, 4, fbw << 6);
            SET_GPR_U32(&tmp, 5, y2 - (y1 - 1));
            SET_GPR_U32(&tmp, 6, psm);
            tmp.pc = 0x111408u;
            auto fn = runtime->lookupFunction(0x111408u);
            fn(rdram, &tmp, runtime);
            psize = getRegU32(&tmp, 2);
        }
        uint64_t ctx80;
        std::memcpy(&ctx80, p + 0x80, 8);
        uint32_t u2 = (psize + 0x7FFu) >> 11;
        ctx80 = (ctx80 & 0xFFFFFFFFFFFFFE00ULL) | (u2 & 0x1FFu);
        std::memcpy(p + 0x80, &ctx80, 8);
        e4 |= 3u;
        std::memcpy(p + 0xe4, &e4, 2);
    }

    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
