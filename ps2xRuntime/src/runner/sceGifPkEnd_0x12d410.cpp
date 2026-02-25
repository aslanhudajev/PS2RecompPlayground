#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkEnd(pk, a1, a2, a3) - write GIF END tag, terminate packet
void sceGifPkEnd_0x12d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkEnd_0x12d410");
#endif
    uint32_t pk = getRegU32(ctx, 4);
    if (pk != 0u && runtime && runtime->hasFunction(0x12d2a8u)) {
        uint32_t ptr = FAST_READ32(pk);
        if (ptr != 0u) {
            uint32_t a2 = getRegU32(ctx, 6);
            uint32_t a3 = getRegU32(ctx, 7);
            FAST_WRITE64(ptr, (static_cast<uint64_t>(a3) << 32u) | a2);
        }
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, pk);
        tmp.pc = 0x12d2a8u;
        runtime->lookupFunction(0x12d2a8u)(rdram, &tmp, runtime);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
