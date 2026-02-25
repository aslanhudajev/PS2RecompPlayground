#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: SIF RPC init for DBC; returns 1 on success (stub: always success)
void sceDbcInit_0x1055d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceDbcInit_0x1055d8");
#endif
    (void)rdram;
    (void)runtime;
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
