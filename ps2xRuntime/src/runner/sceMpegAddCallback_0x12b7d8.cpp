#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceMpegAddCallback(mpeg, idx, handler, arg) - store callback, return prev
void sceMpegAddCallback_0x12b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegAddCallback_0x12b7d8");
#endif
    (void)runtime;
    uint32_t mpeg = getRegU32(ctx, 4);
    uint32_t idx = getRegU32(ctx, 5);
    uint32_t handler = getRegU32(ctx, 6);
    uint32_t arg = getRegU32(ctx, 7);
    uint32_t prev = 0u;
    if (mpeg != 0u && idx < 8u) {
        uint32_t off = 0x40u + idx * 8u;
        prev = FAST_READ32(mpeg + off);
        FAST_WRITE32(mpeg + off, handler);
        FAST_WRITE32(mpeg + off + 4, arg);
    }
    setReturnU32(ctx, prev);
    ctx->pc = getRegU32(ctx, 31);
}
