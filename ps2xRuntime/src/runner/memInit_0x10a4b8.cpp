#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// font.c globals (gp = 0x17daf0): memBuff gp-0x7c80, DAT_00175e74 gp-0x7c7c, memCurrBuff gp-0x7c94,
// memCurrBuffUsage gp-0x7c90, dmaGIF gp-0x7c8c, dmaVIF1 gp-0x7c88
static constexpr uint32_t kMemBuffAddr       = 0x17daf0u - 0x7c80u;  // 0x175e70
static constexpr uint32_t kMemBuff2Addr      = 0x17daf0u - 0x7c7cu;  // 0x175e74
static constexpr uint32_t kMemCurrBuffAddr   = 0x17daf0u - 0x7c94u;  // 0x175e5c
static constexpr uint32_t kMemCurrBuffUsage  = 0x17daf0u - 0x7c90u;  // 0x175e60
static constexpr uint32_t kDmaGIFAddr        = 0x17daf0u - 0x7c8cu;  // 0x175e64
static constexpr uint32_t kDmaVIF1Addr       = 0x17daf0u - 0x7c88u;  // 0x175e68

void memInit_0x10a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t p1 = runtime->guestMalloc(0x10000, 0x80);
    const uint32_t p2 = runtime->guestMalloc(0x10000, 0x80);
    WRITE32(kMemBuffAddr, (p1 & 0x0fffffffu) | 0x20000000u);
    WRITE32(kMemBuff2Addr, (p2 & 0x0fffffffu) | 0x20000000u);
    WRITE32(kMemCurrBuffAddr, 0u);
    WRITE32(kMemCurrBuffUsage, 0u);

    ctx->r[4] = _mm_set_epi64x(0, 2);
    sceDmaGetChan_0x10d408(rdram, ctx, runtime);
    const uint32_t dmaGIF = getRegU32(ctx, 2);
    WRITE32(kDmaGIFAddr, dmaGIF);
    WRITE32(dmaGIF, READ32(dmaGIF) & 0xffffffbfu);

    ctx->r[4] = _mm_set_epi64x(0, 1);
    sceDmaGetChan_0x10d408(rdram, ctx, runtime);
    const uint32_t dmaVIF1 = getRegU32(ctx, 2);
    WRITE32(kDmaVIF1Addr, dmaVIF1);

    const uint32_t dmaGIFAgain = READ32(kDmaGIFAddr);
    WRITE32(dmaGIFAgain, READ32(dmaGIFAgain) & 0xffffffbfu);

    ctx->pc = getRegU32(ctx, 31);
}
