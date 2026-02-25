#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kCurrentCtx = 0x0020fbccu;
static constexpr uint32_t kSceHiGsStdCtx = 0x0020fbc0u;

// Ghidra decomp: _current_ctx = param ? param : sceHiGsStdCtx
void sceHiGsCtxSetDefault_0x1119d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetDefault_0x1119d8");
#endif
    uint32_t param = getRegU32(ctx, 4);
    uint32_t val = (param != 0u) ? param : FAST_READ32(kSceHiGsStdCtx);
    FAST_WRITE32(kCurrentCtx, val);
    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
