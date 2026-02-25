#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kInitDone = 0x0020fb50u;
static constexpr uint32_t kGsctxMax = 0x0020fb48u;
static constexpr uint32_t kGsctxList = 0x0020fb4cu;
static constexpr uint32_t kSceHiGsStdEnv = 0x0020fbc4u;
static constexpr uint32_t kSceHiGsStdCtx = 0x0020fbc0u;
static constexpr uint32_t kHiGsStdCtxDisplay = 0x0020f8fcu;

// Ghidra decomp: init _gsctx_list, sceHiGsStdEnv, sceHiGsStdCtx via sub-calls
void sceHiGsServiceInit_0x111b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsServiceInit_0x111b10");
#endif
    if (FAST_READ32(kInitDone) != 0u) {
        if (runtime->hasFunction(0x111968u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 2u);
            tmp.pc = 0x111968u;
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnS32(ctx, -1);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint32_t gsctxMax = FAST_READ32(kGsctxMax);
    if (gsctxMax == 0u) {
        gsctxMax = 16u;
        FAST_WRITE32(kGsctxMax, gsctxMax);
    }
    uint32_t listSize = (gsctxMax << 2);

    R5900Context tmpAlign = *ctx;
    SET_GPR_U32(&tmpAlign, 4, 0x40u);
    SET_GPR_U32(&tmpAlign, 5, listSize);
    tmpAlign.pc = 0x10d6f0u;
    if (!runtime->hasFunction(0x10d6f0u)) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    auto alignFn = runtime->lookupFunction(0x10d6f0u);
    alignFn(rdram, &tmpAlign, runtime);
    uint32_t gsctxList = getRegU32(&tmpAlign, 2);

    if (gsctxList == 0u) {
        if (runtime->hasFunction(0x111968u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 4u);
            tmp.pc = 0x111968u;
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnS32(ctx, -1);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(kGsctxList, gsctxList);
    for (uint32_t i = 0; i < gsctxMax; i++) {
        FAST_WRITE32(gsctxList + i * 4, 0u);
    }

    R5900Context tmpEnv = *ctx;
    SET_GPR_U32(&tmpEnv, 4, 0x1ffu);
    tmpEnv.pc = 0x112000u;
    if (!runtime->hasFunction(0x112000u)) {
        SET_GPR_U32(&tmpAlign, 4, gsctxList);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    auto envCreateFn = runtime->lookupFunction(0x112000u);
    envCreateFn(rdram, &tmpEnv, runtime);
    uint32_t stdEnv = getRegU32(&tmpEnv, 2);

    if (stdEnv == 0u) {
        SET_GPR_U32(&tmpAlign, 4, gsctxList);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        if (runtime->hasFunction(0x111968u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 6u);
            tmp.pc = 0x111968u;
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnS32(ctx, -1);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(kSceHiGsStdEnv, stdEnv);

    if (runtime->hasFunction(0x111f10u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, stdEnv);
        tmp.pc = 0x111f10u;
        auto fn = runtime->lookupFunction(0x111f10u);
        fn(rdram, &tmp, runtime);
    }
    if (runtime->hasFunction(0x111a00u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, stdEnv);
        tmp.pc = 0x111a00u;
        auto fn = runtime->lookupFunction(0x111a00u);
        fn(rdram, &tmp, runtime);
    }

    uint32_t dspAddr = 0u;
    if (runtime->hasFunction(0x110878u)) {
        R5900Context tmp = *ctx;
        tmp.pc = 0x110878u;
        auto fn = runtime->lookupFunction(0x110878u);
        fn(rdram, &tmp, runtime);
        dspAddr = getRegU32(&tmp, 2);
    }

    R5900Context tmpCtx = *ctx;
    SET_GPR_U32(&tmpCtx, 4, 1u);
    tmpCtx.pc = 0x1122e0u;
    if (!runtime->hasFunction(0x1122e0u)) {
        SET_GPR_U32(&tmpAlign, 4, stdEnv);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        SET_GPR_U32(&tmpAlign, 4, gsctxList);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    auto ctxCreateFn = runtime->lookupFunction(0x1122e0u);
    ctxCreateFn(rdram, &tmpCtx, runtime);
    uint32_t stdCtx = getRegU32(&tmpCtx, 2);

    if (stdCtx == 0u) {
        SET_GPR_U32(&tmpAlign, 4, stdEnv);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        SET_GPR_U32(&tmpAlign, 4, gsctxList);
        tmpAlign.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmpAlign, runtime);
        }
        if (runtime->hasFunction(0x111968u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 6u);
            tmp.pc = 0x111968u;
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnS32(ctx, -1);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(kSceHiGsStdCtx, stdCtx);
    FAST_WRITE32(kHiGsStdCtxDisplay, stdCtx);

    if (runtime->hasFunction(0x112b48u) && dspAddr != 0u) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, stdCtx);
        SET_GPR_U32(&tmp, 5, dspAddr + 0x10u);
        tmp.pc = 0x112b48u;
        auto fn = runtime->lookupFunction(0x112b48u);
        fn(rdram, &tmp, runtime);
    }

    if (runtime->hasFunction(0x113218u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, stdCtx);
        tmp.pc = 0x113218u;
        auto fn = runtime->lookupFunction(0x113218u);
        fn(rdram, &tmp, runtime);
    }

    if (runtime->hasFunction(0x1119d8u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, stdCtx);
        tmp.pc = 0x1119d8u;
        auto fn = runtime->lookupFunction(0x1119d8u);
        fn(rdram, &tmp, runtime);
    }

    FAST_WRITE32(kInitDone, 1u);
    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
