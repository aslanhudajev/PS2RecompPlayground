#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

static constexpr uint32_t kMemCurrBuffAddr   = 0x17daf0u - 0x7c94u;  // 0x175e5c
static constexpr uint32_t kMemCurrBuffUsage  = 0x17daf0u - 0x7c90u;  // 0x175e60

void memUseBuff_0x10a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t add = getRegU32(ctx, 4);
    uint32_t usage = READ32(kMemCurrBuffUsage) + add;
    WRITE32(kMemCurrBuffUsage, usage);
    if (usage > 0x1000u) {
        memSendBuff_0x10a280(rdram, ctx, runtime);
        WRITE32(kMemCurrBuffUsage, 0u);
        const uint32_t curr = READ32(kMemCurrBuffAddr);
        WRITE32(kMemCurrBuffAddr, 1u - curr);
    }
    ctx->pc = getRegU32(ctx, 31);
}
