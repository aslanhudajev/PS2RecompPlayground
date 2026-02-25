#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <bit>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: env+8=innerPtr, env+12=mask. Mask bit 6 -> slot. TEXA: [0]=TA0, bit15=AEM, [4]=TA1 (64-bit).
void sceHiGsEnvSetRegTexa_0x114c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvSetRegTexa_0x114c90");
#endif
    uint32_t envAddr = getRegU32(ctx, 4);
    if (envAddr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t innerPtr = FAST_READ32(envAddr + 8u);
    uint32_t mask = FAST_READ32(envAddr + 12u);
    constexpr uint32_t kBitIndex = 6u;
    if (innerPtr != 0u && (mask & (1u << kBitIndex)) != 0u) {
        uint32_t slot = static_cast<uint32_t>(std::popcount(mask & ((1u << kBitIndex) - 1u)));
        uint32_t ta0 = getRegU32(ctx, 5) & 0xFFu;
        uint32_t aem = getRegU32(ctx, 6) & 1u;
        uint32_t ta1 = getRegU32(ctx, 7) & 0xFFu;
        uint32_t slotAddr = innerPtr + slot * 8u;
        uint64_t old = FAST_READ64(slotAddr);
        uint64_t v = (old & 0xFFFFFF00FFFF7F00ULL)
            | static_cast<uint64_t>(ta0)
            | (static_cast<uint64_t>(aem) << 15u)
            | (static_cast<uint64_t>(ta1) << 32u);
        FAST_WRITE64(slotAddr, v);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
