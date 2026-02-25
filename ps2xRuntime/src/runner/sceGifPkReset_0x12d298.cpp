#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkReset(pk) - pk[8]=0, pk[0]=pk[4]
void sceGifPkReset_0x12d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkReset_0x12d298");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    if (pk != 0u) {
        uint32_t base = FAST_READ32(pk + 4);
        FAST_WRITE32(pk + 8, 0u);
        FAST_WRITE32(pk + 0, base);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
