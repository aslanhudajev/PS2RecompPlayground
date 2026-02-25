#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: cache sync for GS context, returns 0
void sceHiGsCtxFcache_0x113008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxFcache_0x113008");
#endif
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
