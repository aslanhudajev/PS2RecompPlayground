#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: alloc header, count bits in param, alloc inner, _create_packed, init slots, sceHiGsEnvUpdate
void sceHiGsEnvCreate_0x112000(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvCreate_0x112000");
#endif
    uint32_t param = getRegU32(ctx, 4) & 0xFFFFFu;

    R5900Context tmp = *ctx;
    SET_GPR_U32(&tmp, 4, 0x40u);
    SET_GPR_U32(&tmp, 5, 0x10u);
    tmp.pc = 0x10d6f0u;
    if (!runtime->hasFunction(0x10d6f0u)) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    auto alignFn = runtime->lookupFunction(0x10d6f0u);
    alignFn(rdram, &tmp, runtime);
    uint32_t env = getRegU32(&tmp, 2);

    if (env == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint32_t bitCount = 0;
    for (uint32_t i = 0; i < 20u; i++)
        if ((param >> (i & 0x1Fu)) & 1u)
            bitCount++;

    FAST_WRITE32(env + 0xc, param);

    R5900Context tmp2 = *ctx;
    SET_GPR_U32(&tmp2, 4, 0x10u);
    SET_GPR_U32(&tmp2, 5, bitCount * 8u);
    tmp2.pc = 0x10d6f0u;
    alignFn(rdram, &tmp2, runtime);
    uint32_t inner = getRegU32(&tmp2, 2);

    if (inner == 0u) {
        SET_GPR_U32(&tmp, 4, env);
        tmp.pc = 0x10d5d0u;
        if (runtime->hasFunction(0x10d5d0u)) {
            auto freeFn = runtime->lookupFunction(0x10d5d0u);
            freeFn(rdram, &tmp, runtime);
        }
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(env + 8, inner);

    uint8_t* innerPtr = getMemPtr(rdram, inner);
    if (innerPtr)
        std::memset(innerPtr, 0, bitCount * 8u);

    if (runtime->hasFunction(0x111db0u)) {
        R5900Context tmpPack = *ctx;
        SET_GPR_U32(&tmpPack, 4, env);
        SET_GPR_U32(&tmpPack, 5, bitCount);
        tmpPack.pc = 0x111db0u;
        auto fn = runtime->lookupFunction(0x111db0u);
        fn(rdram, &tmpPack, runtime);
        if (getRegU32(&tmpPack, 2) != 0u) {
            SET_GPR_U32(&tmp, 4, inner);
            tmp.pc = 0x10d5d0u;
            if (runtime->hasFunction(0x10d5d0u)) {
                auto freeFn = runtime->lookupFunction(0x10d5d0u);
                freeFn(rdram, &tmp, runtime);
            }
            SET_GPR_U32(&tmp, 4, env);
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

    if (runtime->hasFunction(0x111f10u)) {
        R5900Context tmpUpd = *ctx;
        SET_GPR_U32(&tmpUpd, 4, env);
        tmpUpd.pc = 0x111f10u;
        auto fn = runtime->lookupFunction(0x111f10u);
        fn(rdram, &tmpUpd, runtime);
        if (getRegU32(&tmpUpd, 2) != 0u) {
            if (runtime->hasFunction(0x111d98u)) {
                R5900Context tmpDel = *ctx;
                SET_GPR_U32(&tmpDel, 4, env);
                tmpDel.pc = 0x111d98u;
                auto delFn = runtime->lookupFunction(0x111d98u);
                delFn(rdram, &tmpDel, runtime);
            }
            SET_GPR_U32(&tmp, 4, inner);
            tmp.pc = 0x10d5d0u;
            if (runtime->hasFunction(0x10d5d0u)) {
                auto freeFn = runtime->lookupFunction(0x10d5d0u);
                freeFn(rdram, &tmp, runtime);
            }
            SET_GPR_U32(&tmp, 4, env);
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

    setReturnU32(ctx, env);
    ctx->pc = getRegU32(ctx, 31);
}
