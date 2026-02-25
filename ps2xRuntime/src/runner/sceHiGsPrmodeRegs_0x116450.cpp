#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: get env from sceHiGsGeneralStatus, RMW 64-bit at env+0x38
// *(ptr+0x38) = (*(ptr+0x38) & 0xfffffffffffff807) | (p1&1)<<3 | (p2&1)<<4 | ... | (p8&1)<<10
static constexpr uint32_t kSceHiGsStdEnv = 0x0020fbc4u;

void sceHiGsPrmodeRegs_0x116450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsPrmodeRegs_0x116450");
#endif
    uint32_t ptr = FAST_READ32(kSceHiGsStdEnv + 8u);
    if (ptr == 0u) {
        ptr = FAST_READ32(kSceHiGsStdEnv);
    }
    uint32_t p1 = GPR_U32(ctx, 4), p2 = GPR_U32(ctx, 5), p3 = GPR_U32(ctx, 6), p4 = GPR_U32(ctx, 7);
    uint32_t p5 = 0u, p6 = 0u, p7 = 0u, p8 = 0u;
    if (ptr != 0u) {
        const uint32_t sp = GPR_U32(ctx, 29);
        p5 = READ32(sp + 16);
        p6 = READ32(sp + 20);
        p7 = READ32(sp + 24);
        p8 = READ32(sp + 28);
        uint64_t v = FAST_READ64(ptr + 0x38u);
        v = (v & 0xfffffffffffff807ULL)
            | (static_cast<uint64_t>(p1 & 1u) << 3u)
            | (static_cast<uint64_t>(p2 & 1u) << 4u)
            | (static_cast<uint64_t>(p3 & 1u) << 5u)
            | (static_cast<uint64_t>(p4 & 1u) << 6u)
            | (static_cast<uint64_t>(p5 & 1u) << 7u)
            | (static_cast<uint64_t>(p6 & 1u) << 8u)
            | (static_cast<uint64_t>(p7 & 1u) << 9u)
            | (static_cast<uint64_t>(p8 & 1u) << 10u);
        FAST_WRITE64(ptr + 0x38u, v);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
