#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kSdResultBuf = 0x00242004u;

// sceSdRemote(cmd, arg...) - return ptr to result buffer or -1
void sceSdRemote_0x12d6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceSdRemote_0x12d6c8");
#endif
    (void)runtime;
    uint32_t cmd = getRegU32(ctx, 5);
    setReturnU32(ctx, kSdResultBuf);
    if (cmd == 0x8010u || cmd == 0x80e0u)
        setReturnS32(ctx, -1);
    ctx->pc = getRegU32(ctx, 31);
}
