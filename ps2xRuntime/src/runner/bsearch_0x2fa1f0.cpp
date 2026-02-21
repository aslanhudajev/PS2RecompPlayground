#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"

// bsearch(key, base, nmemb, size, compar). Standard C bsearch; compar is recompiled (e.g. texcmp).
// a0=key, a1=base, a2=nmemb, a3=size, t0 (reg8)=compar function address.
// Returns pointer to match in v0, or 0 if not found.
void bsearch_0x2fa1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;

    const uint32_t keyAddr = getRegU32(ctx, 4);
    const uint32_t baseAddr = getRegU32(ctx, 5);
    const uint32_t nmemb = getRegU32(ctx, 6);
    const uint32_t size = getRegU32(ctx, 7);
    const uint32_t comparAddr = getRegU32(ctx, 8);

    if (!runtime || !runtime->hasFunction(comparAddr) || size == 0) {
        setReturnU32(ctx, 0);
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    PS2Runtime::RecompiledFunction compar = runtime->lookupFunction(comparAddr);
    uint32_t lo = 0;
    uint32_t hi = nmemb;
    uint32_t result = 0;

    while (lo < hi) {
        uint32_t mid = lo + (hi - lo) / 2;
        uint32_t elemAddr = baseAddr + mid * size;

        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, keyAddr);
        SET_GPR_U32(&tmp, 5, elemAddr);
        tmp.pc = comparAddr;
        compar(rdram, &tmp, runtime);

        int32_t cmp = static_cast<int32_t>(getRegU32(&tmp, 2));

        if (cmp < 0)
            hi = mid;
        else if (cmp > 0)
            lo = mid + 1;
        else {
            result = elemAddr;
            break;
        }
    }

    setReturnU32(ctx, result);
    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
