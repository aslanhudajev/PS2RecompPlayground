#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// strFileOpen(file, path) - open stream file, return 1 success / 0 failure
void strFileOpen_0x188f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("strFileOpen_0x188f20");
#endif
    uint32_t fileStruct = getRegU32(ctx, 4);
    uint32_t path = getRegU32(ctx, 5);
    (void)path;
    if (fileStruct != 0u) {
        FAST_WRITE32(fileStruct + 0, 0u);
        FAST_WRITE32(fileStruct + 4, 0u);
        FAST_WRITE8(fileStruct + 11, 0u);
        FAST_WRITE32(fileStruct + 12, 0xFFFFFFFFu);
    }
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}
