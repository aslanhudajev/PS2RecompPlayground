#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkTerminate(pk) - align ptr, pk[8]=0, return aligned ptr
void sceGifPkTerminate_0x12d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkTerminate_0x12d2a8");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    uint32_t result = 0u;
    if (pk != 0u) {
        uint32_t ptr = FAST_READ32(pk);
        result = (ptr + 15u) & ~15u;
        FAST_WRITE32(pk, result);
        FAST_WRITE32(pk + 8, 0u);
    }
    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}
