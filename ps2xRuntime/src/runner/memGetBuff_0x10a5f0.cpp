#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// (&memBuff)[memCurrBuff] + memCurrBuffUsage * 0x10
static constexpr uint32_t kMemBuffAddr      = 0x17daf0u - 0x7c80u;  // 0x175e70
static constexpr uint32_t kMemBuff2Addr     = 0x17daf0u - 0x7c7cu;  // 0x175e74
static constexpr uint32_t kMemCurrBuffAddr   = 0x17daf0u - 0x7c94u;  // 0x175e5c
static constexpr uint32_t kMemCurrBuffUsage  = 0x17daf0u - 0x7c90u;  // 0x175e60

void memGetBuff_0x10a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;  // READ32 uses from macro
    const uint32_t curr = READ32(kMemCurrBuffAddr);
    const uint32_t usage = READ32(kMemCurrBuffUsage);
    const uint32_t base = (curr == 0u) ? READ32(kMemBuffAddr) : READ32(kMemBuff2Addr);
    setReturnU32(ctx, base + (usage << 4));
    ctx->pc = getRegU32(ctx, 31);
}
