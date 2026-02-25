#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGpSetEndLevel(chain, level) - sets end level in chain
void sceGpSetEndLevel_0x107710(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpSetEndLevel_0x107710");
#endif
    (void)runtime;
    uint32_t chain = getRegU32(ctx, 4);
    uint32_t level = getRegU32(ctx, 5);
    if (chain != 0u) {
        uint32_t base = FAST_READ32(chain);
        if (base != 0u)
            FAST_WRITE32(base + 12, 0x20u);
    }
    (void)level;
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
