#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: calls FUN_00108420(p1, p2|0x2000); void, no return
void sceGpInitPrimR_0x1083e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpInitPrimR_0x1083e0");
#endif
    (void)rdram;
    (void)runtime;
    ctx->pc = getRegU32(ctx, 31);
}
