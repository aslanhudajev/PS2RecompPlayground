#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: void - resets chain packets
void sceGpResetChain_0x106d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpResetChain_0x106d18");
#endif
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
