#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkCloseGifTag(pk) - update tag with count, pk[12]=0, pk[0]=aligned ptr
void sceGifPkCloseGifTag_0x12d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkCloseGifTag_0x12d4b8");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    if (pk != 0u) {
        uint32_t savedPtr = FAST_READ32(pk + 12);
        uint32_t count = FAST_READ32(pk + 8);
        if (savedPtr != 0u) {
            uint32_t tagLo = FAST_READ32(savedPtr);
            tagLo = (tagLo & 0xFFFF0000u) | (count & 0xFFFFu);
            FAST_WRITE32(savedPtr, tagLo);
        }
        FAST_WRITE32(pk + 12, 0u);
        uint32_t ptr = FAST_READ32(pk);
        ptr = (ptr + 15u) & ~15u;
        FAST_WRITE32(pk, ptr);
        FAST_WRITE32(pk + 8, 0u);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
