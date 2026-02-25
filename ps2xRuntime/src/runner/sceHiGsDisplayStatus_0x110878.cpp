#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kDsp = 0x0020f8f0u;

// Ghidra decomp: return &_dsp
void sceHiGsDisplayStatus_0x110878(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsDisplayStatus_0x110878");
#endif
    setReturnU32(ctx, kDsp);
    ctx->pc = getRegU32(ctx, 31);
}
