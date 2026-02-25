#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Always return 0 (RPC ready) to unblock FlushIOPCommand / SOUND path. Our SifCallRpc
// is synchronous, so RPCs complete immediately; reporting "busy" causes infinite retry.
void sceSifCheckStatRpc_0x131fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSifCheckStatRpc_0x131fa8");
#endif
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
