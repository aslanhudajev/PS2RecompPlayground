#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: return *(sceHiGsStdEnv + 8) — current env pointer
static constexpr uint32_t kSceHiGsStdEnv = 0x0020fbc4u;

void sceHiGsGeneralStatus_0x111540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsGeneralStatus_0x111540");
#endif
    uint32_t currentEnv = FAST_READ32(kSceHiGsStdEnv + 8u);
    if (currentEnv == 0u) {
        currentEnv = FAST_READ32(kSceHiGsStdEnv);
    }
    setReturnU32(ctx, currentEnv);
    ctx->pc = getRegU32(ctx, 31);
}
