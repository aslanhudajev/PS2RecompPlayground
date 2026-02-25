#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <bit>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: env+8=innerPtr, env+12=mask. Mask bit 7 -> slot. RMW bits 3..10.
void sceHiGsEnvSetRegPrmode_0x114d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvSetRegPrmode_0x114d10");
#endif
    uint32_t envAddr = getRegU32(ctx, 4);
    if (envAddr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t innerPtr = FAST_READ32(envAddr + 8u);
    uint32_t mask = FAST_READ32(envAddr + 12u);
    constexpr uint32_t kBitIndex = 7u;
    if (innerPtr != 0u && (mask & (1u << kBitIndex)) != 0u) {
        uint32_t slot = static_cast<uint32_t>(std::popcount(mask & ((1u << kBitIndex) - 1u)));
        uint32_t sp = getRegU32(ctx, 29);
        uint32_t p1 = getRegU32(ctx, 5) & 1u;
        uint32_t p2 = getRegU32(ctx, 6) & 1u;
        uint32_t p3 = getRegU32(ctx, 7) & 1u;
        uint32_t p4 = READ32(sp + 16u) & 1u;
        uint32_t p5 = READ32(sp + 20u) & 1u;
        uint32_t p6 = READ32(sp + 24u) & 1u;
        uint32_t p7 = READ32(sp + 28u) & 1u;
        uint32_t p8 = READ32(sp + 32u) & 1u;
        uint32_t slotAddr = innerPtr + slot * 8u;
        uint64_t old = FAST_READ64(slotAddr);
        uint64_t v = (old & 0xFFFFFFFFFFFFF807ULL)
            | (static_cast<uint64_t>(p1) << 3u)
            | (static_cast<uint64_t>(p2) << 4u)
            | (static_cast<uint64_t>(p3) << 5u)
            | (static_cast<uint64_t>(p4) << 6u)
            | (static_cast<uint64_t>(p5) << 7u)
            | (static_cast<uint64_t>(p6) << 8u)
            | (static_cast<uint64_t>(p7) << 9u)
            | (static_cast<uint64_t>(p8) << 10u);
        FAST_WRITE64(slotAddr, v);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
