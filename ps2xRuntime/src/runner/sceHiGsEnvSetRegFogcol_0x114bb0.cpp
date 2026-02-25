#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <bit>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: env+8=innerPtr, env+12=mask. Mask bit 4 -> slot = popcount(mask & 0xF).
// Writes R,G,B bytes at ptr+slot*8.
void sceHiGsEnvSetRegFogcol_0x114bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvSetRegFogcol_0x114bb0");
#endif
    uint32_t envAddr = getRegU32(ctx, 4);
    if (envAddr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t innerPtr = FAST_READ32(envAddr + 8u);
    uint32_t mask = FAST_READ32(envAddr + 12u);
    constexpr uint32_t kBitIndex = 4u;
    if (innerPtr != 0u && (mask & (1u << kBitIndex)) != 0u) {
        uint32_t slot = static_cast<uint32_t>(std::popcount(mask & ((1u << kBitIndex) - 1u)));
        uint32_t r = getRegU32(ctx, 5) & 0xFFu;
        uint32_t g = getRegU32(ctx, 6) & 0xFFu;
        uint32_t b = getRegU32(ctx, 7) & 0xFFu;
        uint32_t slotAddr = innerPtr + slot * 8u;
        FAST_WRITE8(slotAddr + 0, static_cast<uint8_t>(r));
        FAST_WRITE8(slotAddr + 1, static_cast<uint8_t>(g));
        FAST_WRITE8(slotAddr + 2, static_cast<uint8_t>(b));
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
