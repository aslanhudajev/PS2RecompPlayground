#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: return *param_1 + param_2 * 0x10
void sceGpGetTailChain_0x1073d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpGetTailChain_0x1073d8");
#endif
    (void)runtime;
    uint32_t chain = getRegU32(ctx, 4);
    uint32_t idx = getRegU32(ctx, 5);
    uint32_t base = chain != 0u ? FAST_READ32(chain) : 0u;
    setReturnU32(ctx, base + idx * 16u);
    ctx->pc = getRegU32(ctx, 31);
}
