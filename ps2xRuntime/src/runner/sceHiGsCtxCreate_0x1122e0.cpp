#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: sceHiMemAlign(0x40,0x100), init struct, sceGsSetDefClear, _create_packed, _register_gsctx
void sceHiGsCtxCreate_0x1122e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxCreate_0x1122e0");
#endif
    uint32_t param = getRegU32(ctx, 4) & 0xFFu;

    R5900Context tmp = *ctx;
    SET_GPR_U32(&tmp, 4, 0x40u);
    SET_GPR_U32(&tmp, 5, 0x100u);
    tmp.pc = 0x10d6f0u;
    if (!runtime->hasFunction(0x10d6f0u)) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    auto alignFn = runtime->lookupFunction(0x10d6f0u);
    alignFn(rdram, &tmp, runtime);
    uint32_t ptr = getRegU32(&tmp, 2);

    if (ptr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint8_t* p = getMemPtr(rdram, ptr);
    if (!p) {
        SET_GPR_U32(&tmp, 4, ptr);
        tmp.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmp, runtime);
        }
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    std::memset(p, 0, 0x100);
    p[0xec] = static_cast<uint8_t>(param);
    p[0xea] = static_cast<uint8_t>(param);
    p[0xeb] = 1;
    p[0xe9] = 0;
    p[0xe7] = 0;
    p[0xe6] = 4;
    uint16_t zero = 0;
    std::memcpy(p + 0xe4, &zero, 2);

    uint64_t val = 0x1000000000008006ULL;
    std::memcpy(p, &val, 8);

    uint32_t uVar3 = (param == 0) ? 0u : 3u;
    if (runtime->hasFunction(0x10b508u)) {
        R5900Context tmpClear = *ctx;
        SET_GPR_U32(&tmpClear, 4, ptr + 16);
        SET_GPR_U32(&tmpClear, 5, uVar3);
        SET_GPR_U32(&tmpClear, 6, 0u);
        SET_GPR_U32(&tmpClear, 7, 0u);
        uint32_t sp = getRegU32(ctx, 29);
        FAST_WRITE32(sp + 16, 0u);
        FAST_WRITE32(sp + 20, 0u);
        FAST_WRITE32(sp + 24, 0u);
        FAST_WRITE32(sp + 28, 0u);
        tmpClear.pc = 0x10b508u;
        auto fn = runtime->lookupFunction(0x10b508u);
        fn(rdram, &tmpClear, runtime);
    }

    uint16_t e = 0xe;
    std::memcpy(p + 16, &e, 2);

    if (runtime->hasFunction(0x111db0u)) {
        R5900Context tmpPack = *ctx;
        SET_GPR_U32(&tmpPack, 4, ptr + 0xe);
        SET_GPR_U32(&tmpPack, 5, 0xdu);
        tmpPack.pc = 0x111db0u;
        auto fn = runtime->lookupFunction(0x111db0u);
        fn(rdram, &tmpPack, runtime);
        if (getRegU32(&tmpPack, 2) != 0u) {
            SET_GPR_U32(&tmp, 4, ptr);
            tmp.pc = 0x10d5d0u;
            if (runtime->hasFunction(0x10d5d0u)) {
                auto freeFn = runtime->lookupFunction(0x10d5d0u);
                freeFn(rdram, &tmp, runtime);
            }
            setReturnU32(ctx, 0u);
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
    }

    if (runtime->hasFunction(0x1125b0u)) {
        R5900Context tmpReg = *ctx;
        SET_GPR_U32(&tmpReg, 4, ptr);
        tmpReg.pc = 0x1125b0u;
        auto fn = runtime->lookupFunction(0x1125b0u);
        fn(rdram, &tmpReg, runtime);
        int32_t r = static_cast<int32_t>(getRegU32(&tmpReg, 2));
        if (r < 0) {
            if (runtime->hasFunction(0x111d98u)) {
                R5900Context tmpDel = *ctx;
                SET_GPR_U32(&tmpDel, 4, ptr + 0xe);
                tmpDel.pc = 0x111d98u;
                auto delFn = runtime->lookupFunction(0x111d98u);
                delFn(rdram, &tmpDel, runtime);
            }
            SET_GPR_U32(&tmp, 4, ptr);
            tmp.pc = 0x10d5d0u;
            if (runtime->hasFunction(0x10d5d0u)) {
                auto freeFn = runtime->lookupFunction(0x10d5d0u);
                freeFn(rdram, &tmp, runtime);
            }
            setReturnU32(ctx, 0u);
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
    }

    uint64_t v18 = (FAST_READ64(ptr + 0x18) & 0xFFFFFFFFFFFFFF00ULL) | 0x44u;
    std::memcpy(p + 0x18, &v18, 8);
    p[0xc4] = 0x80;
    uint64_t v12 = (FAST_READ64(ptr + 0x12) & 0xFFFFF000FFE7FC22ULL) | 0x60u;
    std::memcpy(p + 0x12, &v12, 8);
    uint64_t v17 = (FAST_READ64(ptr + 0x17) & 0xFFFFFFFFFFFF0001ULL) | 0x802u;
    std::memcpy(p + 0x17, &v17, 8);
    uint64_t v16 = (FAST_READ64(ptr + 0x16) & 0xFFFFF00000000000ULL) | 5u;
    std::memcpy(p + 0x16, &v16, 8);
    uint64_t v1b = (FAST_READ64(ptr + 0x1b) & 0xFFFFFFFFFFFFFFFEULL);
    std::memcpy(p + 0x1b, &v1b, 8);
    FAST_WRITE32(ptr + 0x7c, 0u);

    setReturnU32(ctx, ptr);
    ctx->pc = getRegU32(ctx, 31);
}
