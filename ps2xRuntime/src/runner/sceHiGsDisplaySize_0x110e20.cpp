#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kHiGsMode = 0x0020f8e0u;
static constexpr uint32_t kHiGsFbnum = 0x0020f8e4u;
static constexpr uint32_t kFb0 = 0x0020f8e8u;
static constexpr uint32_t kHiGsStdCtx = 0x0020f8fcu;
static constexpr uint32_t kDBuffBase = 0x0020f900u;

void sceHiGsDisplaySize_0x110e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsDisplaySize_0x110e20");
#endif
    uint32_t width = getRegU32(ctx, 4);
    uint32_t height = getRegU32(ctx, 5);
    uint32_t mode = FAST_READ32(kHiGsMode);
    bool fb0WasZero = (FAST_READ32(kFb0) == 0u);

    uint32_t uVar3 = mode & 0x60u;
    uint32_t psm;
    if (uVar3 == 0x40u)
        psm = 2u;
    else if (uVar3 == 0u)
        psm = 0u;
    else if (uVar3 == 0x20u)
        psm = 1u;
    else if (uVar3 == 0x60u)
        psm = 10u;
    else {
        if (runtime && runtime->hasFunction(0x110848u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x110848u;
            auto fn = runtime->lookupFunction(0x110848u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uVar3 = mode & 0x700u;
    uint32_t zpsm;
    if (uVar3 == 0x200u)
        zpsm = 0x31u;
    else if (uVar3 == 0u)
        zpsm = 0u;
    else if (uVar3 == 0x100u)
        zpsm = 0x30u;
    else if (uVar3 == 0x300u)
        zpsm = 0x32u;
    else if (uVar3 == 0x400u)
        zpsm = 0x3au;
    else {
        if (runtime && runtime->hasFunction(0x110848u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x110848u;
            auto fn = runtime->lookupFunction(0x110848u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    SET_GPR_U32(ctx, 4, width);
    SET_GPR_U32(ctx, 5, height);
    SET_GPR_U32(ctx, 6, psm);
    SET_GPR_U32(ctx, 7, zpsm);
    sceHiGsDisplaySet_0x110910(rdram, ctx, runtime);
    int32_t r = static_cast<int32_t>(getRegU32(ctx, 2));
    /* Workaround: ignore DisplaySet failure to avoid error_handling infinite loop */
    if (r != 0) {
        r = 0;
    }

    if (fb0WasZero) {
        if (runtime->hasFunction(0x111b10u)) {
            R5900Context tmp = *ctx;
            tmp.pc = 0x111b10u;
            auto fn = runtime->lookupFunction(0x111b10u);
            fn(rdram, &tmp, runtime);
            r = static_cast<int32_t>(getRegU32(&tmp, 2));
        } else {
            r = 0;
        }
    } else {
        if (runtime->hasFunction(0x112b48u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, FAST_READ32(kHiGsStdCtx));
            SET_GPR_U32(&tmp, 5, kDBuffBase);
            tmp.pc = 0x112b48u;
            auto fn = runtime->lookupFunction(0x112b48u);
            fn(rdram, &tmp, runtime);
            r = static_cast<int32_t>(getRegU32(&tmp, 2));
        } else {
            r = 0;
        }
    }

    /* Workaround: sceHiGsServiceInit can fail when gsctx_max/env/ctx init has issues.
       Treat as success so we avoid the error_handling infinite loop and let init proceed. */
    if (r != 0) {
        r = 0;
    }

    uint32_t stdCtx = FAST_READ32(kHiGsStdCtx);
    uint32_t fbnum = FAST_READ32(kHiGsFbnum);
    if (stdCtx != 0u) {
        uint8_t* p = getMemPtr(rdram, stdCtx + 0xeau);
        if (p) {
            if (fbnum == 1u)
                *p = 0;
            else if (fbnum == 2u)
                *p = 1;
        }
        if (runtime->hasFunction(0x113218u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, stdCtx);
            tmp.pc = 0x113218u;
            auto fn = runtime->lookupFunction(0x113218u);
            fn(rdram, &tmp, runtime);
        }
    }

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
