#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sceHiMemCalloc_0x10d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiMemCalloc_0x10d848");
#endif
    uint32_t nmemb = getRegU32(ctx, 4);
    uint32_t size = getRegU32(ctx, 5);
    uint32_t total = nmemb * size;

    if (total == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    SET_GPR_U32(ctx, 4, total);
    sceHiMemAlloc_0x10d4c0(rdram, ctx, runtime);
    uint32_t ptr = getRegU32(ctx, 2);
    if (ptr != 0u) {
        uint8_t* host = getMemPtr(rdram, ptr);
        if (host)
            std::memset(host, 0, total);
    }
    setReturnU32(ctx, ptr);
    ctx->pc = getRegU32(ctx, 31);
}
