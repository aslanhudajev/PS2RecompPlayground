#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkAddGsAD(pk, ad, data64) - *ptr=data64, *(ptr+8)=AD, ptr+=16
void sceGifPkAddGsAD_0x12d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkAddGsAD_0x12d560");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    uint32_t ad = getRegU32(ctx, 5);
    uint32_t dlo = getRegU32(ctx, 6);
    uint32_t dhi = getRegU32(ctx, 7);
    if (pk != 0u) {
        uint32_t ptr = FAST_READ32(pk);
        if (ptr != 0u) {
            uint64_t data = (static_cast<uint64_t>(dhi) << 32u) | dlo;
            FAST_WRITE64(ptr, data);
            FAST_WRITE32(ptr + 8, ad);
            FAST_WRITE32(pk, ptr + 16);
            FAST_WRITE32(pk + 8, FAST_READ32(pk + 8) + 1u);
        }
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
