#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGifPkInit(pk, buf) - pk[0]=buf, pk[4]=buf, pk[8]=0
void sceGifPkInit_0x12d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGifPkInit_0x12d288");
#endif
    (void)runtime;
    uint32_t pk = getRegU32(ctx, 4);
    uint32_t buf = getRegU32(ctx, 5);
    if (pk != 0u) {
        FAST_WRITE32(pk + 0, buf);
        FAST_WRITE32(pk + 4, buf);
        FAST_WRITE32(pk + 8, 0u);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
