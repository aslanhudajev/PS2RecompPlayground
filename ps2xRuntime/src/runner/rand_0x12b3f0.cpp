#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// newlib rand: seed at impure_data + 0x58 (0x172258 + 0x58 = 0x1722b0), next = (seed*0x41c64e6d + 0x3039) & 0x7fffffff
static constexpr uint32_t kRandNextAddr = 0x1722b0u;
static constexpr uint32_t kMul = 0x41c64e6du;
static constexpr uint32_t kAdd = 0x3039u;

void rand_0x12b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t seed = READ32(kRandNextAddr);
    const uint32_t raw  = seed * kMul + kAdd;
    WRITE32(kRandNextAddr, raw);
    setReturnU32(ctx, raw & 0x7fffffffu);
    ctx->pc = getRegU32(ctx, 31);
}
