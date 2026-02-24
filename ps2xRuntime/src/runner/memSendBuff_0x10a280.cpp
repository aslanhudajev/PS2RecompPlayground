#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

static constexpr uint32_t kMemBuffBase      = 0x175e70u;  // &memBuff[0]
static constexpr uint32_t kMemCurrBuffAddr  = 0x175e5cu;  // memCurrBuff (index 0 or 1)
static constexpr uint32_t kMemCurrBuffUsage = 0x175e60u;  // memCurrBuffUsage (QW count)
static constexpr uint32_t kDmaGIFAddr       = 0x175e64u;  // dmaGIF channel pointer

void memSendBuff_0x10a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t usage = READ32(kMemCurrBuffUsage);

    if (usage < 2) {
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    const uint32_t curr    = READ32(kMemCurrBuffAddr);
    const uint32_t buffPtr = READ32(kMemBuffBase + curr * 4u);

    SET_GPR_U32(ctx, 4, READ32(kDmaGIFAddr));
    SET_GPR_U64(ctx, 5, (uint64_t)(buffPtr & 0x0FFFFFFFu));
    SET_GPR_U64(ctx, 6, (uint64_t)usage);

    ps2_stubs::sceDmaSendN(rdram, ctx, runtime);

    ctx->pc = getRegU32(ctx, 31);
}
