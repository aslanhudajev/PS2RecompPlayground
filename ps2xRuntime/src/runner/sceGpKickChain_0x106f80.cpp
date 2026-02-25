#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: param_1=chain, param_2=channel; returns 0 on success, -1 if DMA busy
void sceGpKickChain_0x106f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpKickChain_0x106f80");
#endif
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
