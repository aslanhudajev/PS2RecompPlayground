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
static constexpr uint32_t kFb1 = 0x0020f8ecu;
static constexpr uint32_t kZb = 0x0020f8f0u;
static constexpr uint32_t kDsp = 0x0020f8f4u;
static constexpr uint32_t kDat20F910 = 0x0020f910u;
static constexpr uint32_t kDat20F938 = 0x0020f938u;
static constexpr uint32_t kDat20F960 = 0x0020f960u;
static constexpr uint32_t kDat20FA50 = 0x0020fa50u;
static constexpr uint32_t kDat20F970 = 0x0020f970u;
static constexpr uint32_t kDat20FA60 = 0x0020fa60u;
static constexpr uint32_t kDat20F950 = 0x0020f950u;
static constexpr uint32_t kDat20FA40 = 0x0020fa40u;
static constexpr uint32_t kDBuffBase = 0x0020f900u;

void sceHiGsDisplaySet_0x110910(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsDisplaySet_0x110910");
#endif
    uint32_t width = getRegU32(ctx, 4);
    uint32_t height = getRegU32(ctx, 5);
    uint32_t psm = getRegU32(ctx, 6);
    uint32_t zpsm = getRegU32(ctx, 7);

    uint32_t fb0Val = FAST_READ32(kFb0);
    FAST_WRITE32(kDsp, 0u);

    ps2_stubs::sceGsGetGParam(rdram, ctx, runtime);
    uint32_t gpAddr = getRegU32(ctx, 2);
    const uint8_t* gpPtr = getConstMemPtr(rdram, gpAddr);
    uint16_t gpShort = 0;
    if (gpPtr && gpPtr + 2)
        std::memcpy(&gpShort, gpPtr + 2, 2);

    if (static_cast<int16_t>(gpShort) < 4) {
        uint32_t drawParam = (zpsm != 0u) ? 3u : 0u;
        SET_GPR_U32(ctx, 4, kDBuffBase);
        SET_GPR_U32(ctx, 5, psm & 0xFFFFu);
        SET_GPR_U32(ctx, 6, width & 0xFFFFu);
        SET_GPR_U32(ctx, 7, height & 0xFFFFu);
        uint32_t sp = getRegU32(ctx, 29);
        uint8_t* stk = getMemPtr(rdram, sp);
        if (stk) {
            std::memcpy(stk + 16, &drawParam, 4);
            std::memcpy(stk + 20, &drawParam, 4);
            uint32_t one = 1u;
            std::memcpy(stk + 24, &one, 4);
        }
        sceGsSetDefDBuff_0x10b6f8(rdram, ctx, runtime);
    }

    if (fb0Val != 0u) {
        SET_GPR_U32(ctx, 4, fb0Val);
        sceHiGsMemFree_0x110670(rdram, ctx, runtime);
        if (getRegU32(ctx, 2) != 0u) {
            setReturnU32(ctx, getRegU32(ctx, 2));
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        FAST_WRITE32(kFb0, 0u);
    }
    uint32_t fb1Val = FAST_READ32(kFb1);
    if (fb1Val != 0u) {
        SET_GPR_U32(ctx, 4, fb1Val);
        sceHiGsMemFree_0x110670(rdram, ctx, runtime);
        if (getRegU32(ctx, 2) != 0u) {
            setReturnU32(ctx, getRegU32(ctx, 2));
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        FAST_WRITE32(kFb1, 0u);
    }
    uint32_t zbVal = FAST_READ32(kZb);
    if (zbVal != 0u) {
        SET_GPR_U32(ctx, 4, zbVal);
        sceHiGsMemFree_0x110670(rdram, ctx, runtime);
        if (getRegU32(ctx, 2) != 0u) {
            setReturnU32(ctx, getRegU32(ctx, 2));
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        FAST_WRITE32(kZb, 0u);
    }

    SET_GPR_U32(ctx, 4, width);
    SET_GPR_U32(ctx, 5, height);
    SET_GPR_U32(ctx, 6, psm);
    sceHiGsPageSize_0x111408(rdram, ctx, runtime);
    uint32_t pageSize = getRegU32(ctx, 2);

    SET_GPR_U32(ctx, 4, 0x800u);
    SET_GPR_U32(ctx, 5, pageSize);
    sceHiGsMemAlloc_0x1104a0(rdram, ctx, runtime);
    uint32_t fb0 = getRegU32(ctx, 2);
    if (fb0 == 0u) {
        if (runtime && runtime->hasFunction(0x110b94u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 0u);
            tmp.pc = 0x110b94u;
            auto fn = runtime->lookupFunction(0x110b94u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(kFb0, fb0);

    uint32_t fbnum = FAST_READ32(kHiGsFbnum);
    if (fbnum > 1u) {
        SET_GPR_U32(ctx, 4, 0x800u);
        SET_GPR_U32(ctx, 5, pageSize);
        sceHiGsMemAlloc_0x1104a0(rdram, ctx, runtime);
        uint32_t fb1 = getRegU32(ctx, 2);
        if (fb1 == 0u) {
            if (runtime && runtime->hasFunction(0x110b94u)) {
                R5900Context tmp = *ctx;
                SET_GPR_U32(&tmp, 4, 0u);
                tmp.pc = 0x110b94u;
                auto fn = runtime->lookupFunction(0x110b94u);
                fn(rdram, &tmp, runtime);
                setReturnU32(ctx, getRegU32(&tmp, 2));
            } else {
                setReturnU32(ctx, 0xFFFFFFFFu);
            }
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        FAST_WRITE32(kFb1, fb1);
    }

    uint32_t fb0Offset = 0u;
    uint8_t* pf0 = getMemPtr(rdram, fb0 + 4);
    if (pf0) std::memcpy(&fb0Offset, pf0, 4);
    uint32_t fbwBits = (fb0Offset >> 11) & 0x1FFu;

    FAST_WRITE32(kDat20F910, (FAST_READ32(kDat20F910) & 0xFFFFFE00u) | fbwBits);

    uint32_t dispFb = (fbnum < 2u) ? fb0Offset : 0u;
    if (fbnum >= 2u) {
        uint8_t* pf1 = getMemPtr(rdram, FAST_READ32(kFb1) + 4);
        if (pf1) std::memcpy(&dispFb, pf1, 4);
    }
    FAST_WRITE32(kDat20F938, (FAST_READ32(kDat20F938) & 0xFFFFFE00u) | ((dispFb >> 11) & 0x1FFu));

    uint32_t rectFb = (fbnum < 2u) ? fb0Offset : dispFb;
    if (fbnum >= 2u) {
        uint8_t* pf1 = getMemPtr(rdram, FAST_READ32(kFb1) + 4);
        if (pf1) std::memcpy(&rectFb, pf1, 4);
    }
    uint64_t dat960 = FAST_READ64(kDat20F960);
    dat960 = (dat960 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(rectFb >> 11) & 0x1FFu);
    FAST_WRITE64(kDat20F960, dat960);

    uint64_t datA50 = FAST_READ64(kDat20FA50);
    datA50 = (datA50 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(fb0Offset >> 11) & 0x1FFu);
    FAST_WRITE64(kDat20FA50, datA50);

    if (zpsm != 0u) {
        SET_GPR_U32(ctx, 4, width);
        SET_GPR_U32(ctx, 5, height);
        SET_GPR_U32(ctx, 6, zpsm);
        sceHiGsPageSize_0x111408(rdram, ctx, runtime);
        uint32_t zPageSize = getRegU32(ctx, 2);
        SET_GPR_U32(ctx, 4, 0x800u);
        SET_GPR_U32(ctx, 5, zPageSize);
        sceHiGsMemAlloc_0x1104a0(rdram, ctx, runtime);
        uint32_t zb = getRegU32(ctx, 2);
        if (zb == 0u) {
            if (runtime && runtime->hasFunction(0x110b94u)) {
                R5900Context tmp = *ctx;
                SET_GPR_U32(&tmp, 4, 0u);
                tmp.pc = 0x110b94u;
                auto fn = runtime->lookupFunction(0x110b94u);
                fn(rdram, &tmp, runtime);
                setReturnU32(ctx, getRegU32(&tmp, 2));
            } else {
                setReturnU32(ctx, 0xFFFFFFFFu);
            }
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        FAST_WRITE32(kZb, zb);
        uint32_t zbOffset = 0u;
        uint8_t* pzb = getMemPtr(rdram, zb + 4);
        if (pzb) std::memcpy(&zbOffset, pzb, 4);
        uint64_t dat970 = FAST_READ64(kDat20F970);
        dat970 = (dat970 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbOffset >> 11) & 0x1FFu);
        FAST_WRITE64(kDat20F970, dat970);
        uint64_t datA60 = FAST_READ64(kDat20FA60);
        datA60 = (datA60 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbOffset >> 11) & 0x1FFu);
        FAST_WRITE64(kDat20FA60, datA60);
    }

    if (fb0Val == 0u) {
        SET_GPR_U32(ctx, 4, kDat20F950);
        SET_GPR_U32(ctx, 5, (FAST_READ32(kDat20F950) & 0x7FFFu) + 1u);
        SET_GPR_U32(ctx, 6, 0u);
        _register_0x110888(rdram, ctx, runtime);
        SET_GPR_U32(ctx, 4, kDat20FA40);
        SET_GPR_U32(ctx, 5, (FAST_READ32(kDat20FA40) & 0x7FFFu) + 1u);
        SET_GPR_U32(ctx, 6, 1u);
        _register_0x110888(rdram, ctx, runtime);
    }

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
