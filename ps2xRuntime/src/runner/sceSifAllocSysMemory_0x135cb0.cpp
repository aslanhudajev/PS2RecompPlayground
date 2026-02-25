#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceSifAllocSysMemory(type, size, ptr_out) - allocate via sceHiMemAlign
void sceSifAllocSysMemory_0x135cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifAllocSysMemory_0x135cb0");
#endif
    uint32_t size = getRegU32(ctx, 5);
    uint32_t ptrOut = getRegU32(ctx, 6);
    uint32_t result = 0u;
    if (runtime && runtime->hasFunction(0x10d6f0u) && size != 0u) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, 64u);
        SET_GPR_U32(&tmp, 5, size);
        tmp.pc = 0x10d6f0u;
        auto fn = runtime->lookupFunction(0x10d6f0u);
        fn(rdram, &tmp, runtime);
        result = getRegU32(&tmp, 2);
        if (result != 0u && ptrOut != 0u)
            FAST_WRITE32(ptrOut, result);
    }
    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}
