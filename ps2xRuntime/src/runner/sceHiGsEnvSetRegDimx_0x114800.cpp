#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <bit>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: env+8=innerPtr, env+12=mask. Mask bit 1 -> slot. Reads 16 bytes from a1, packs each byte & 7 into nibbles.
void sceHiGsEnvSetRegDimx_0x114800(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvSetRegDimx_0x114800");
#endif
    uint32_t envAddr = getRegU32(ctx, 4);
    if (envAddr == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t innerPtr = FAST_READ32(envAddr + 8u);
    uint32_t mask = FAST_READ32(envAddr + 12u);
    constexpr uint32_t kBitIndex = 1u;
    if (innerPtr != 0u && (mask & (1u << kBitIndex)) != 0u) {
        uint32_t slot = static_cast<uint32_t>(std::popcount(mask & ((1u << kBitIndex) - 1u)));
        uint32_t srcAddr = getRegU32(ctx, 5);
        uint8_t* src = getMemPtr(rdram, srcAddr);
        if (src != nullptr) {
            uint64_t v = 0u;
            for (int i = 0; i < 16; i++) {
                uint32_t nib = (src[i] & 7u) & 0xF;
                v |= static_cast<uint64_t>(nib) << (i * 4u);
            }
            uint32_t slotAddr = innerPtr + slot * 8u;
            FAST_WRITE64(slotAddr, v);
        }
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
