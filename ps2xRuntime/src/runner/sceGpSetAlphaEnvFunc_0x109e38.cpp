#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: void - writes alpha env to packet+0x20
void sceGpSetAlphaEnvFunc_0x109e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpSetAlphaEnvFunc_0x109e38");
#endif
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
