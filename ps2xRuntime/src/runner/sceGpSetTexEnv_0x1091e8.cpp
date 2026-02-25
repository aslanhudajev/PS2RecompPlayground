#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: void - writes tex env regs to packet
void sceGpSetTexEnv_0x1091e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpSetTexEnv_0x1091e8");
#endif
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
