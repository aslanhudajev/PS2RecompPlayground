#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGpInitChain(chain, base, level) - chain[0]=base, chain[12]=level, return level+1
void sceGpInitChain_0x106cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpInitChain_0x106cd8");
#endif
    (void)runtime;
    uint32_t chain = getRegU32(ctx, 4);
    uint32_t base = getRegU32(ctx, 5);
    uint32_t level = getRegU32(ctx, 6);
    if (chain != 0u) {
        FAST_WRITE32(chain + 0, base);
        FAST_WRITE32(chain + 12, level);
    }
    setReturnU32(ctx, level + 1u);
    ctx->pc = getRegU32(ctx, 31);
}
