#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kCurrentEnv = 0x0020fbc8u;
static constexpr uint32_t kSceHiGsStdEnv = 0x0020fbc4u;

// Ghidra decomp: _current_env = param ? param : sceHiGsStdEnv
void sceHiGsEnvSetDefault_0x111a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvSetDefault_0x111a00");
#endif
    uint32_t param = getRegU32(ctx, 4);
    uint32_t val = (param != 0u) ? param : FAST_READ32(kSceHiGsStdEnv);
    FAST_WRITE32(kCurrentEnv, val);
    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
