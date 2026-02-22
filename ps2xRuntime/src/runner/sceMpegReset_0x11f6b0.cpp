#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// _totalFrames at 0x171904 (lui v0,0x17; sw zero,0x1904(v0))
static constexpr uint32_t kTotalFramesAddr = 0x171904u;

void sceMpegReset_0x11f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t param_1 = getRegU32(ctx, 4);
    const uint32_t base = READ32(param_1 + 0x40u);

    WRITE32(base + 0u, 0u);
    WRITE32(base + 4u, 0u);
    WRITE32(base + 8u, 0u);
    WRITE32(param_1 + 8u, 0u);
    WRITE32(base + 0x80u, 0xffffffffu);
    WRITE32(base + 0xacu, 0u);

    _clearEach_0x11ff10(rdram, ctx, runtime);
    WRITE32(kTotalFramesAddr, 0u);
    _initSeqAgain_0x11fe28(rdram, ctx, runtime);

    ctx->pc = getRegU32(ctx, 31);
}
