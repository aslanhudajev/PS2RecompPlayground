#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkOpenGifTag(pk, taglo, taghi) - write tag, pk[0]=ptr+16, pk[12]=ptr
void sceGifPkOpenGifTag_0x12d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkOpenGifTag_0x12d4a0");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    uint32_t tagLo = getRegU32(ctx, 5);
    uint32_t tagHi = getRegU32(ctx, 6);
    if (pk != 0u) {
        uint32_t ptr = FAST_READ32(pk);
        if (ptr != 0u) {
            FAST_WRITE32(ptr + 0, tagLo);
            FAST_WRITE32(ptr + 4, tagHi);
            FAST_WRITE32(ptr + 8, 0u);
            FAST_WRITE32(ptr + 12, 0u);
            FAST_WRITE32(pk + 12, ptr);
            FAST_WRITE32(pk + 0, ptr + 16);
        }
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
